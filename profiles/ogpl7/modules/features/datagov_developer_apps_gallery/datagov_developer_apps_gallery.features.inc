<?php
/**
 * @file
 * datagov_developer_apps_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function datagov_developer_apps_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function datagov_developer_apps_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function datagov_developer_apps_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: applications_showcase.
  $styles['applications_showcase'] = array(
    'name' => 'applications_showcase',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '215',
          'height' => '135',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function datagov_developer_apps_gallery_node_info() {
  $items = array(
    'applications' => array(
      'name' => t('Applications'),
      'base' => 'node_content',
      'description' => t('Add a developer application related to Data.gov or specific community.'),
      'has_title' => '1',
      'title_label' => t('Application Name'),
      'help' => '',
    ),
  );
  return $items;
}
