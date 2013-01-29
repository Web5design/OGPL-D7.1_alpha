<?php
/**
 * @file
 * datagov_community.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_community_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
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
function datagov_community_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function datagov_community_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: community_hub_slides
  $nodequeues['community_hub_slides'] = array(
    'qid' => '1',
    'name' => 'community_hub_slides',
    'title' => 'Community Hub Slides',
    'subqueue_title' => '',
    'size' => '0',
    'link' => 'Add to Queue',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'slide',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function datagov_community_node_info() {
  $items = array(
    'community' => array(
      'name' => t('Community'),
      'base' => 'node_content',
      'description' => t('A community focused around common data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
