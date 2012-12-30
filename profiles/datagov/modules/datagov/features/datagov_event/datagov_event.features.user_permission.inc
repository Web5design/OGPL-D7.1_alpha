<?php
/**
 * @file
 * datagov_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node event choice.
  $permissions['administer panelizer node event choice'] = array(
    'name' => 'administer panelizer node event choice',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node event content.
  $permissions['administer panelizer node event content'] = array(
    'name' => 'administer panelizer node event content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node event context.
  $permissions['administer panelizer node event context'] = array(
    'name' => 'administer panelizer node event context',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node event layout.
  $permissions['administer panelizer node event layout'] = array(
    'name' => 'administer panelizer node event layout',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node event settings.
  $permissions['administer panelizer node event settings'] = array(
    'name' => 'administer panelizer node event settings',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
