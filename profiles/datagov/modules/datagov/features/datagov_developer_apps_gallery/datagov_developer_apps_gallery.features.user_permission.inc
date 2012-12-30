<?php
/**
 * @file
 * datagov_developer_apps_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_developer_apps_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node applications choice.
  $permissions['administer panelizer node applications choice'] = array(
    'name' => 'administer panelizer node applications choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node applications content.
  $permissions['administer panelizer node applications content'] = array(
    'name' => 'administer panelizer node applications content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node applications context.
  $permissions['administer panelizer node applications context'] = array(
    'name' => 'administer panelizer node applications context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node applications layout.
  $permissions['administer panelizer node applications layout'] = array(
    'name' => 'administer panelizer node applications layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node applications settings.
  $permissions['administer panelizer node applications settings'] = array(
    'name' => 'administer panelizer node applications settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create applications content.
  $permissions['create applications content'] = array(
    'name' => 'create applications content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any applications content.
  $permissions['delete any applications content'] = array(
    'name' => 'delete any applications content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own applications content.
  $permissions['delete own applications content'] = array(
    'name' => 'delete own applications content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any applications content.
  $permissions['edit any applications content'] = array(
    'name' => 'edit any applications content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own applications content.
  $permissions['edit own applications content'] = array(
    'name' => 'edit own applications content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_moderator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_moderator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
