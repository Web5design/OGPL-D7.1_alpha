<?php
/**
 * @file
 * datagov_announcements.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_announcements_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node announcements choice.
  $permissions['administer panelizer node announcements choice'] = array(
    'name' => 'administer panelizer node announcements choice',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node announcements content.
  $permissions['administer panelizer node announcements content'] = array(
    'name' => 'administer panelizer node announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node announcements context.
  $permissions['administer panelizer node announcements context'] = array(
    'name' => 'administer panelizer node announcements context',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node announcements layout.
  $permissions['administer panelizer node announcements layout'] = array(
    'name' => 'administer panelizer node announcements layout',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node announcements settings.
  $permissions['administer panelizer node announcements settings'] = array(
    'name' => 'administer panelizer node announcements settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: create announcements content.
  $permissions['create announcements content'] = array(
    'name' => 'create announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any announcements content.
  $permissions['delete any announcements content'] = array(
    'name' => 'delete any announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own announcements content.
  $permissions['delete own announcements content'] = array(
    'name' => 'delete own announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any announcements content.
  $permissions['edit any announcements content'] = array(
    'name' => 'edit any announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own announcements content.
  $permissions['edit own announcements content'] = array(
    'name' => 'edit own announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
