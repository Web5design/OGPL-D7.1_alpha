<?php
/**
 * @file
 * datagov_metric_table.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_metric_table_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datagov_metric_table_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function datagov_metric_table_node_info() {
  $items = array(
    'metric_organization' => array(
      'name' => t('Metric Organization'),
      'base' => 'node_content',
      'description' => t('This content type holds raw/tools/geo dataset counts to be used  for metric table.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
