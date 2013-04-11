<?php
/**
 * @file
 * metric_views.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function metric_views_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-metric-tabs.
  $menus['menu-metric-tabs'] = array(
    'menu_name' => 'menu-metric-tabs',
    'title' => 'Metric Tabs',
    'description' => 'Tabs for the metrics page.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Metric Tabs');
  t('Tabs for the metrics page.');


  return $menus;
}
