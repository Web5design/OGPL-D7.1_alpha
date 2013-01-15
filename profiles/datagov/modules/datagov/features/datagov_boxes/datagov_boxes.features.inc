<?php
/**
 * @file
 * datagov_boxes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_boxes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
