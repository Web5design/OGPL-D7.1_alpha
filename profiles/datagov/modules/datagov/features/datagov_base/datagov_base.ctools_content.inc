<?php
/**
 * @file
 * datagov_base.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function datagov_base_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'panel_separator';
  $content->admin_title = 'Panel Separator';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Panel Separator',
    'title' => '<none>',
    'body' => '<div class="separator-mini-700">&nbsp;</div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['panel_separator'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'separator';
  $content->admin_title = ' Separator';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => ' Separator',
    'title' => '<none>',
    'body' => '<div class="separator-mini-700">&nbsp;</div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['separator'] = $content;

  return $export;
}
