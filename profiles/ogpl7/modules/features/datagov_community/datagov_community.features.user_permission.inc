<?php
/**
 * @file
 * datagov_community.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_community_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer dashboards.
  $permissions['administer dashboards'] = array(
    'name' => 'administer dashboards',
    'roles' => array(),
    'module' => 'spaces_dashboard',
  );

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(),
    'module' => 'og',
  );

  // Exported permission: administer og menu.
  $permissions['administer og menu'] = array(
    'name' => 'administer og menu',
    'roles' => array(),
    'module' => 'og_menu',
  );

  // Exported permission: administer panelizer node community choice.
  $permissions['administer panelizer node community choice'] = array(
    'name' => 'administer panelizer node community choice',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node community content.
  $permissions['administer panelizer node community content'] = array(
    'name' => 'administer panelizer node community content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node community context.
  $permissions['administer panelizer node community context'] = array(
    'name' => 'administer panelizer node community context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node community layout.
  $permissions['administer panelizer node community layout'] = array(
    'name' => 'administer panelizer node community layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node community settings.
  $permissions['administer panelizer node community settings'] = array(
    'name' => 'administer panelizer node community settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer spaces.
  $permissions['administer spaces'] = array(
    'name' => 'administer spaces',
    'roles' => array(),
    'module' => 'spaces',
  );

  // Exported permission: create community content.
  $permissions['create community content'] = array(
    'name' => 'create community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any community content.
  $permissions['delete any community content'] = array(
    'name' => 'delete any community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own community content.
  $permissions['delete own community content'] = array(
    'name' => 'delete own community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any community content.
  $permissions['edit any community content'] = array(
    'name' => 'edit any community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own community content.
  $permissions['edit own community content'] = array(
    'name' => 'edit own community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: manage group space.
  $permissions['manage group space'] = array(
    'name' => 'manage group space',
    'roles' => array(),
    'module' => 'spaces_og',
  );

  // Exported permission: view users outside groups.
  $permissions['view users outside groups'] = array(
    'name' => 'view users outside groups',
    'roles' => array(),
    'module' => 'spaces_og',
  );

  return $permissions;
}
