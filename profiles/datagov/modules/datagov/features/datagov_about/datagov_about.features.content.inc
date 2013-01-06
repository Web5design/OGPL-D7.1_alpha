<?php
/**
 * @file
 * datagov_about.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function datagov_about_content_defaults() {
  $content = array();

  $content['about-page'] = (object) array(
    'exported_path' => 'about',
    'link' => array(
      'menu_name' => 'menu-footer-menu',
      'link_path' => 'node-name/about-page',
      'router_path' => 'node/%',
      'link_title' => 'About',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '19',
      'identifier' => 'menu-footer-menu:node-name/about-page',
    ),
    'title' => 'About',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1357510186',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'about-page',
    'body' => array(),
  );

return $content;
}
