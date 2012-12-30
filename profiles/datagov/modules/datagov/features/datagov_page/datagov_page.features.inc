<?php
/**
 * @file
 * datagov_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function datagov_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A piece of content to be displayed as a simple page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('A piece of content to be displayed as a simple page.'),
    ),
  );
  return $items;
}
