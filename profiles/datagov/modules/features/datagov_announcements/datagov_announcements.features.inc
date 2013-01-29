<?php
/**
 * @file
 * datagov_announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_announcements_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datagov_announcements_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function datagov_announcements_node_info() {
  $items = array(
    'announcements' => array(
      'name' => t('Announcements'),
      'base' => 'node_content',
      'description' => t('What\'s New notifications (ticker for authenticated users, widget area for anonymous users).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
