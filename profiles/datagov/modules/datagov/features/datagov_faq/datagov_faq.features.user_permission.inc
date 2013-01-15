<?php
/**
 * @file
 * datagov_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer faq.
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'faq',
  );

  // Exported permission: administer faq order.
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'faq',
  );

  // Exported permission: create faq content.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any faq content.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own faq content.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any faq content.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own faq content.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: view faq page.
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'faq',
  );

  return $permissions;
}
