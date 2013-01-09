<?php
/**
 * @file
 * datagov_base.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function datagov_base_content_defaults() {
  $content = array();

  $content['home-page'] = (object) array(
    'exported_path' => 'home',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/home-page',
      'router_path' => 'node/%',
      'link_title' => 'Home',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'identifier' => 'main-menu:node-name/home-page',
    ),
    'title' => 'Home',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'panel',
    'language' => 'und',
    'created' => '1357332124',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'home-page',
  );

return $content;
}
