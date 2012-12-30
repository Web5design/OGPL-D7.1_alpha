<?php
/**
 * @file
 * datagov_home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_home_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
