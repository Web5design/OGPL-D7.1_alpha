<?php
/**
 * @file
 * datagov_slideshow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_slideshow_user_default_permissions() {
  $permissions = array();

  // Exported permission: get nodequeues.
  $permissions['get nodequeues'] = array(
    'name' => 'get nodequeues',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'nodequeue_service',
  );

  return $permissions;
}
