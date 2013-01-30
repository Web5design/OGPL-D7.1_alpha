<?php
/**
 * @file
 * datagov_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function datagov_base_user_default_roles() {
  $roles = array();

  // Exported role: Community Contributor.
  $roles['Community Contributor'] = array(
    'name' => 'Community Contributor',
    'weight' => '18',
  );

  // Exported role: Community Moderator.
  $roles['Community Moderator'] = array(
    'name' => 'Community Moderator',
    'weight' => '17',
  );

  return $roles;
}
