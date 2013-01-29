<?php
/**
 * @file
 * datagov_challenge.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_challenge_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node challenge choice.
  $permissions['administer panelizer node challenge choice'] = array(
    'name' => 'administer panelizer node challenge choice',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node challenge content.
  $permissions['administer panelizer node challenge content'] = array(
    'name' => 'administer panelizer node challenge content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node challenge context.
  $permissions['administer panelizer node challenge context'] = array(
    'name' => 'administer panelizer node challenge context',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node challenge layout.
  $permissions['administer panelizer node challenge layout'] = array(
    'name' => 'administer panelizer node challenge layout',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node challenge settings.
  $permissions['administer panelizer node challenge settings'] = array(
    'name' => 'administer panelizer node challenge settings',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: create challenge content.
  $permissions['create challenge content'] = array(
    'name' => 'create challenge content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any challenge content.
  $permissions['delete any challenge content'] = array(
    'name' => 'delete any challenge content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own challenge content.
  $permissions['delete own challenge content'] = array(
    'name' => 'delete own challenge content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any challenge content.
  $permissions['edit any challenge content'] = array(
    'name' => 'edit any challenge content',
    'roles' => array(
      0 => 'Super User',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own challenge content.
  $permissions['edit own challenge content'] = array(
    'name' => 'edit own challenge content',
    'roles' => array(
      0 => 'Community Administrator',
      1 => 'Community Contributor',
      2 => 'Community Moderator',
      3 => 'Super User',
    ),
    'module' => 'node',
  );

  return $permissions;
}
