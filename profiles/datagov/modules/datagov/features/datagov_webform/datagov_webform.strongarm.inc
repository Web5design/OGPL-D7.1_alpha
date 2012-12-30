<?php
/**
 * @file
 * datagov_webform.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datagov_webform_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_webform';
  $strongarm->value = 'edit-group';
  $export['additional_settings__active_tab_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_webform';
  $strongarm->value = '0';
  $export['comment_anonymous_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_webform';
  $strongarm->value = 1;
  $export['comment_default_mode_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_webform';
  $strongarm->value = '50';
  $export['comment_default_per_page_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_webform';
  $strongarm->value = 1;
  $export['comment_form_location_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_webform';
  $strongarm->value = '1';
  $export['comment_preview_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_webform';
  $strongarm->value = 1;
  $export['comment_subject_field_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_webform';
  $strongarm->value = '1';
  $export['comment_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_webform';
  $strongarm->value = 1;
  $export['enable_revisions_page_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_webform';
  $strongarm->value = array(
    0 => 'menu-footer-menu',
    1 => 'main-menu',
    2 => 'menu-metric-tabs',
  );
  $export['menu_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_webform';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_webform';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_webform';
  $strongarm->value = '1';
  $export['node_preview_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_webform';
  $strongarm->value = 0;
  $export['node_submitted_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_type_webform';
  $strongarm->value = 'omitted';
  $export['og_group_type_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_types';
  $strongarm->value = array(
    0 => 'webform',
  );
  $export['webform_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_webform';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_webform';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_webform'] = $strongarm;

  return $export;
}
