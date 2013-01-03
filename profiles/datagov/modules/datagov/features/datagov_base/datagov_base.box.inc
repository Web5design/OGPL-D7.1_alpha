<?php
/**
 * @file
 * datagov_base.box.inc
 */

/**
 * Implements hook_default_box().
 */
function datagov_base_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'current_date_preheader';
  $box->plugin_key = 'simple';
  $box->title = '<none>';
  $box->description = 'Change Text Size - HowTo.gov';
  $box->options = array(
    'body' => array(
      'value' => '<p id="datagov-current-date"><a style="color: #ffffff !important; text-decoration: none;" href="http://www.howto.gov/site-policies/change-text">Change Text Size</a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['current_date_preheader'] = $box;

  return $export;
}
