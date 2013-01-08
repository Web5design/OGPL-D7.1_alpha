<?php
/**
 * @file
 * datagov_challenge.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_challenge_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datagov_challenge_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function datagov_challenge_node_info() {
  $items = array(
    'challenge' => array(
      'name' => t('Challenge'),
      'base' => 'node_content',
      'description' => t('A challenge that can be created created for 1 or more communities and has a workflow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
