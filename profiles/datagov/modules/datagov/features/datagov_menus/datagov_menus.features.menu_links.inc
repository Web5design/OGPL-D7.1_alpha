<?php
/**
 * @file
 * datagov_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datagov_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:communities
  $menu_links['main-menu:communities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'communities',
    'router_path' => 'communities',
    'link_title' => 'Communities',
    'options' => array(
      'purl' => array(
        'disabled' => 1,
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: main-menu:https://explore.data.gov/
  $menu_links['main-menu:https://explore.data.gov/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://explore.data.gov/',
    'router_path' => '',
    'link_title' => 'Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'purl' => 'disabled',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:https://explore.data.gov/catalog/apps/
  $menu_links['main-menu:https://explore.data.gov/catalog/apps/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://explore.data.gov/catalog/apps/',
    'router_path' => '',
    'link_title' => 'Apps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'purl' => 'disabled',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:node/104
  $menu_links['main-menu:node/104'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/104',
    'router_path' => 'node/%',
    'link_title' => 'Open Government',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:node/11
  $menu_links['main-menu:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Metrics',
    'options' => array(
      'attributes' => array(
        'title' => 'View Data.gov Metrics',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:node/23
  $menu_links['main-menu:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/26
  $menu_links['main-menu:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/35631
  $menu_links['main-menu:node/35631'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/35631',
    'router_path' => 'node/%',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Apps');
  t('Blogs');
  t('Communities');
  t('Data');
  t('Home');
  t('Metrics');
  t('Open Government');


  return $menu_links;
}
