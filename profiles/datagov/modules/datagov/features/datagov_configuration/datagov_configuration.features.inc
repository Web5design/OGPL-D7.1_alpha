<?php
/**
 * @file
 * datagov_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_configuration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datagov_configuration_views_api() {
  return array("version" => "3.0");
}
