<?php
/**
 * @file
 * datagov_announcements.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function datagov_announcements_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'announcements_layout';
  $layout->admin_title = 'Announcements Layout';
  $layout->admin_description = 'A layout for the Annoucements page.';
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
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'previous_',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '70.02593472191874',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'previous_' => array(
        'type' => 'region',
        'title' => 'Previous Announcements',
        'width' => '29.974065278081255',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'extra',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'extra' => array(
        'type' => 'region',
        'title' => 'Extra',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_box',
          1 => 'middle_box',
          2 => 'right_box',
        ),
        'parent' => 'main',
        'class' => 'whats-new-feature-box',
      ),
      'left_box' => array(
        'type' => 'region',
        'title' => 'Left Box',
        'width' => '33.28107081978325',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'middle_box' => array(
        'type' => 'region',
        'title' => 'Middle Box',
        'width' => '33.36068720802496',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'right_box' => array(
        'type' => 'region',
        'title' => 'Right Box',
        'width' => '33.35824197219179',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $export['announcements_layout'] = $layout;

  return $export;
}
