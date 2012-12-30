<?php
/**
 * @file
 * datagov_announcements.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datagov_announcements_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/announcements
  $menu_links['navigation:node/add/announcements'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/announcements',
    'router_path' => 'node/add/announcements',
    'link_title' => 'Announcements',
    'options' => array(
      'attributes' => array(
        'title' => 'What\'s New notifications (ticker for authenticated users, widget area for anonymous users).',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Announcements');


  return $menu_links;
}
