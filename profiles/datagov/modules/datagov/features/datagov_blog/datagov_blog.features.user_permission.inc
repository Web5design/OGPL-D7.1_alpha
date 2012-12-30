<?php
/**
 * @file
 * datagov_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node blog choice.
  $permissions['administer panelizer node blog choice'] = array(
    'name' => 'administer panelizer node blog choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog content.
  $permissions['administer panelizer node blog content'] = array(
    'name' => 'administer panelizer node blog content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog context.
  $permissions['administer panelizer node blog context'] = array(
    'name' => 'administer panelizer node blog context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog layout.
  $permissions['administer panelizer node blog layout'] = array(
    'name' => 'administer panelizer node blog layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog settings.
  $permissions['administer panelizer node blog settings'] = array(
    'name' => 'administer panelizer node blog settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create blog content.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blog content.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog content.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blog content.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blog content.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
