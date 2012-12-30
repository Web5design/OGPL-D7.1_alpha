<?php
/**
 * @file
 * datagov_configuration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function datagov_configuration_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: content_creator.
  $roles['content_creator'] = array(
    'name' => 'content_creator',
    'weight' => '3',
  );

  // Exported role: content_moderator.
  $roles['content_moderator'] = array(
    'name' => 'content_moderator',
    'weight' => '4',
  );

  return $roles;
}
