<?php
/**
 * @file
 * datagov_saml_sso.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_saml_sso_user_default_permissions() {
  $permissions = array();

  // Exported permission: change own e-mail.
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(),
    'module' => 'userprotect',
  );

  // Exported permission: change own openid.
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(),
    'module' => 'userprotect',
  );

  // Exported permission: change own password.
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(),
    'module' => 'userprotect',
  );

  return $permissions;
}
