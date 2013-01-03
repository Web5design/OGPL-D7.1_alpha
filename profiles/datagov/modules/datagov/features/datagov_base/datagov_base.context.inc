<?php
/**
 * @file
 * datagov_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datagov_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Global elements that will appear on all pages';
  $context->tag = 'Theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-usaflag_info' => array(
          'module' => 'boxes',
          'delta' => 'usaflag_info',
          'region' => 'header_top',
          'weight' => '-10',
        ),
        'addthis-addthis_block' => array(
          'module' => 'addthis',
          'delta' => 'addthis_block',
          'region' => 'header_top',
          'weight' => '-9',
        ),
        'boxes-current_date_preheader' => array(
          'module' => 'boxes',
          'delta' => 'current_date_preheader',
          'region' => 'header_top',
          'weight' => '-8',
        ),
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'header',
          'weight' => '-69',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
          'weight' => '-68',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-67',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'main_menu',
          'weight' => '-10',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'boxes-datagov_footer_logo' => array(
          'module' => 'boxes',
          'delta' => 'datagov_footer_logo',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global elements that will appear on all pages');
  t('Theme');
  $export['global'] = $context;

  return $export;
}
