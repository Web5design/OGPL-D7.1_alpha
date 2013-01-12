<?php
/**
 * @file
 * data_gov_communities_configuration.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function data_gov_communities_configuration_content_defaults() {
  $content = array();

  $content['demo-community-page'] = (object) array(
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/demo-community-page',
      'router_path' => 'node/%',
      'link_title' => 'Demo Community',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'parent_path' => 'communities',
      'identifier' => 'main-menu:node-name/demo-community-page',
    ),
    'title' => 'Demo Community',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'community',
    'language' => 'und',
    'created' => '1357962221',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'demo-community-page',
    'body' => array(),
  );

return $content;
}
