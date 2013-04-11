<?php
/**
 * @file
 * datagov_data.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_data_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function datagov_data_node_info() {
  $items = array(
    'data' => array(
      'name' => t('Data'),
      'base' => 'node_content',
      'description' => t('Data.gov Data or Tools'),
      'has_title' => '1',
      'title_label' => t('Dataset Title'),
      'help' => '',
    ),
  );
  return $items;
}
