<?php
/**
 * @file
 * datagov_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datagov_blog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function datagov_blog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('A blog entry which may be a part of multiple groups and has a community workflow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
