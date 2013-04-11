<?php
/**
 * @file
 * datagov_ckan.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_ckan_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datagov_ckan_views_api() {
  return array("api" => "3.0");
}
