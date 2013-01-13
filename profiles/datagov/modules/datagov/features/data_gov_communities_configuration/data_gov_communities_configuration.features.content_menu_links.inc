<?php
/**
 * @file
 * data_gov_communities_configuration.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function data_gov_communities_configuration_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/demo-community-page',
    'router_path' => 'node/%',
    'link_title' => 'Demo Community',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Demo Community');


  return $menu_links;
}
