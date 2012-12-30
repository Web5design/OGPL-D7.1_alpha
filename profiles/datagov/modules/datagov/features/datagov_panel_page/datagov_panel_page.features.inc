<?php
/**
 * @file
 * datagov_panel_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_panel_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
