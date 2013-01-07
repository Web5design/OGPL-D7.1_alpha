<?php
/**
 * @file
 * data_gov_communities_configuration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function data_gov_communities_configuration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-communities.
  $menus['menu-communities'] = array(
    'menu_name' => 'menu-communities',
    'title' => 'Communities',
    'description' => 'A menu for the list of communities.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu for the list of communities.');
  t('Communities');


  return $menus;
}
