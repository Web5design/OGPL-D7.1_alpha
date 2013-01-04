<?php
/**
 * @file
 * datagov_base.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function datagov_base_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'blockify-blockify-logo' => array(
      'delta' => 'blockify-logo',
      'module' => 'blockify',
    ),
  );

  // bartik
  $theme = array();

  $theme['blockify-blockify-logo'] = array(
    'module' => 'blockify',
    'delta' => 'blockify-logo',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $export['theme']['bartik'] = $theme;

  // datagov
  $theme = array();

  $theme['blockify-blockify-logo'] = array(
    'module' => 'blockify',
    'delta' => 'blockify-logo',
    'theme' => 'datagov',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $export['theme']['datagov'] = $theme;

  // seven
  $theme = array();

  $theme['blockify-blockify-logo'] = array(
    'module' => 'blockify',
    'delta' => 'blockify-logo',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
