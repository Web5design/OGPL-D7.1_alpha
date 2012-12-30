<?php
/**
 * @file
 * datagov_home_page.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function datagov_home_page_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'home_page_layout';
  $layout->admin_title = 'Home Page Layout';
  $layout->admin_description = 'A panel template for the home page of Data.gov.';
  $layout->category = 'Data.gov Panels';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 23,
          1 => 21,
          2 => 22,
        ),
        'parent' => 'canvas',
      ),
      21 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'feature_top_left_',
          1 => 'feature_top_middle_',
          2 => 'feature_top_right_',
        ),
        'parent' => 'main',
        'class' => 'feature-boxes',
      ),
      'feature_top_left_' => array(
        'type' => 'region',
        'title' => 'Feature Top Left',
        'width' => '33.36816440264715',
        'width_type' => '%',
        'parent' => '21',
        'class' => '',
      ),
      'feature_top_middle_' => array(
        'type' => 'region',
        'title' => 'Feature Top Middle',
        'width' => '33.36067447593066',
        'width_type' => '%',
        'parent' => '21',
        'class' => '',
      ),
      'feature_top_right_' => array(
        'type' => 'region',
        'title' => 'Feature Top Right',
        'width' => '33.27116112142219',
        'width_type' => '%',
        'parent' => '21',
        'class' => '',
      ),
      22 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'feature_bottom_left_',
          1 => 'feature_bottom_middle_',
          2 => 'feature_bottom_right_',
        ),
        'parent' => 'main',
        'class' => 'feature-boxes',
      ),
      'feature_bottom_left_' => array(
        'type' => 'region',
        'title' => 'Feature Bottom Left',
        'width' => '33.36816440264715',
        'width_type' => '%',
        'parent' => '22',
        'class' => '',
      ),
      'feature_bottom_middle_' => array(
        'type' => 'region',
        'title' => 'Feature Bottom Middle',
        'width' => '33.36067447593066',
        'width_type' => '%',
        'parent' => '22',
        'class' => '',
      ),
      'feature_bottom_right_' => array(
        'type' => 'region',
        'title' => 'Feature Bottom Right',
        'width' => '33.27116112142219',
        'width_type' => '%',
        'parent' => '22',
        'class' => '',
      ),
      23 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'slideshow_',
          1 => 'new_datasets',
        ),
        'parent' => 'main',
        'class' => 'promo-area',
      ),
      'slideshow_' => array(
        'type' => 'region',
        'title' => 'Slideshow',
        'width' => '570',
        'width_type' => 'px',
        'parent' => '23',
        'class' => '',
      ),
      'new_datasets' => array(
        'type' => 'region',
        'title' => 'Latest Datasets',
        'width' => '415',
        'width_type' => 'px',
        'parent' => '23',
        'class' => '',
      ),
    ),
  );
  $export['home_page_layout'] = $layout;

  return $export;
}
