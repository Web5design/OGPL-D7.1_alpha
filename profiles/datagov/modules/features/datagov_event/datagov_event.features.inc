<?php
/**
 * @file
 * datagov_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datagov_event_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function datagov_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event that can be attached to a community.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
