<?php
/**
 * @file
 * datagov_content_moderation.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function datagov_content_moderation_user_default_roles() {
  $roles = array();

  // Exported role: Community Administrator.
  $roles['Community Administrator'] = array(
    'name' => 'Community Administrator',
    'weight' => '16',
  );

  // Exported role: Community Contributor.
  $roles['Community Contributor'] = array(
    'name' => 'Community Contributor',
    'weight' => '18',
  );

  // Exported role: Community Moderator.
  $roles['Community Moderator'] = array(
    'name' => 'Community Moderator',
    'weight' => '17',
  );

  // Exported role: Content Administrator.
  $roles['Content Administrator'] = array(
    'name' => 'Content Administrator',
    'weight' => '15',
  );

  return $roles;
}
