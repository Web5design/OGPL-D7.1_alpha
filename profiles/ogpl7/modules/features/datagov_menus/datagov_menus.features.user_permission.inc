<?php
/**
 * @file
 * datagov_menus.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_menus_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_moderator',
    ),
    'module' => 'menu',
  );

  return $permissions;
}
