<?php
/**
 * @file
 * datagov_saml_sso.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_saml_sso_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
