<?php
/**
 * @file
 * datagov_ckan.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function datagov_ckan_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-demo-community-menu.
  $menus['menu-demo-community-menu'] = array(
    'menu_name' => 'menu-demo-community-menu',
    'title' => 'Demo Community Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Demo Community Menu');


  return $menus;
}
