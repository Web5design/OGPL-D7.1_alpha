<?php
/**
 * @file
 * datagov_saml_sso.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datagov_saml_sso_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu:saml_login
  $menu_links['user-menu:saml_login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'saml_login',
    'router_path' => 'saml_login',
    'link_title' => 'SAML Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: user-menu:user/login
  $menu_links['user-menu:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'user',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log in');
  t('SAML Login');


  return $menu_links;
}
