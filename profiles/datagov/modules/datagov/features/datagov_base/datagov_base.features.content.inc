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

  $content['datagov-home-page'] = (object) array(
    'exported_path' => 'home',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/datagov-home-page',
      'router_path' => 'node/%',
      'link_title' => 'Home',
      'options' => array(
        'attributes' => array(),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-50',
      'identifier' => 'main-menu:node-name/datagov-home-page',
    ),
    'title' => 'Home',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'panel',
    'language' => 'en',
    'created' => '1339165499',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'datagov-home-page',
  );

return $content;
}
