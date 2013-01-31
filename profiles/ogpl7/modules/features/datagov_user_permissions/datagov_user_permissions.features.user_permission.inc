<?php
/**
 * @file
 * datagov_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  return $permissions;
}
