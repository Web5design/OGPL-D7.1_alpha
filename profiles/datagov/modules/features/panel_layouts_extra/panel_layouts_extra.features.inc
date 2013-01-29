<?php
/**
 * @file
 * panel_layouts_extra.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_layouts_extra_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
