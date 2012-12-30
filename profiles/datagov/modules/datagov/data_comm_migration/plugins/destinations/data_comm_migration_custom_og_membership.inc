<?php

/**
 * @file
 * Import Organic group memberships.
 */

/**
 * Destination class implementing migration into an OG Audience field.
 */
class CustomMigrateDestinationOGMembership extends MigrateDestination {

  public function __toString() {
    return t('og-membership');
  }

  static public function getKeySchema() {
    return array(
        'uid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D7 Unique User ID',
          'alias' => 'our',
        ),
        'rid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D7 Unique Role ID',
          'alias' => 'our',
        ),
        'gid' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => TRUE,
          'description' => 'D7 Unique Group ID',
          'alias' => 'our',
        ),
    );
  }

  /**
   * Delete a membership.
   *
   * @param $id
   *  IDs to be deleted.
   */
  public function rollback(array $id) {
    $og_states = array(OG_STATE_ACTIVE, OG_STATE_PENDING, OG_STATE_BLOCKED);

    $gid = $id['destid3'];
    $account = user_load($id['destid1']);
    $rid = $id['destid2'];

    og_role_revoke($gid, $account->uid, $rid);

    // Check if user is a member. 
    if(og_is_member($gid, 'user', $account, $og_states)) {
      og_ungroup($gid, 'user', $account);
    }
  }

  /**
   * Delete a batch of memberships at once.
   *
   * @param $ids
   *   Array of membership ids to be deleted.

  public function bulkRollback(array $ids) {
    //og_membership_delete_multiple($ids);
    watchdog('commrole_2', "In commrole_2" . var_export($ids, true));
  }
   */
  /**
   * Import a single membership.
   *
   * @param $entity
   *  Object object to build. Prefilled with any fields mapped in the Migration.
   * @param $row
   *  Raw source data object - passed through to prepare/complete handlers.
   * @return array
   *  Array of key fields of the object that was saved if
   *  successful. FALSE on failure.
   */
  public function import(stdClass $entity, stdClass $row) {
    if($og_gid = og_get_group_ids('node', array($entity->gid))) {
      $entity->gid = $og_gid[$entity->gid];
    }

    if (empty($entity->group_type)) {
      throw new MigrateException('Missing group type.');
    }
    if (empty($entity->gid)) {
      throw new MigrateException('Missing group ID.');
    }
    if (empty($entity->entity_type)) {
      throw new MigrateException('Missing enity type.');
    }
    if (empty($entity->etid)) {
      throw new MigrateException('Missing enity ID.');
    }

     // Set state, make sure legacy states from OG6 are converted to
     // pending.
    if (isset($entity->state)) {
      $state = $entity->state ? OG_STATE_ACTIVE : OG_STATE_PENDING;
    }
    else {
      $state = OG_STATE_ACTIVE;
    }

    $values = array(
      'entity type' => $entity->entity_type,
      'entity' => user_load($entity->etid, TRUE),
      'state' => $state,
      'created' => isset($entity->created) ? $entity->created : REQUEST_TIME,
    );

    $og_states = array(OG_STATE_ACTIVE, OG_STATE_PENDING, OG_STATE_BLOCKED);

    // Check if user is a member. 
    if(!og_is_member($entity->gid, 'user', $values['entity'], $og_states)) {
      og_group($entity->gid, $values);
    }

    og_role_grant($entity->gid, $entity->etid, $entity->group_role);

    return array($entity->etid, $entity->group_role, $entity->gid);
  }

  public function fields() {
    return array(
      'group_type' => 'Group entity type',
      'gid' => 'Group entity id',
      'entity_type' => 'Entity type',
      'etid' => 'Entity ID (e.g. user ID)',
      'state' => 'User\'s group membership can be OG_STATE_ACTIVE or OG_STATE_PENDING. Defaults to OG_STATE_ACTIVE.',
      'created' => 'Create date for this membership. Defaults to REQUEST_TIME',
      'is_admin' => 'Legacy: Is member an administrator in this group. Defaults to No.',
      'group_role' => 'Array of role names to assign to the user in this group.',
    );
  }
}
