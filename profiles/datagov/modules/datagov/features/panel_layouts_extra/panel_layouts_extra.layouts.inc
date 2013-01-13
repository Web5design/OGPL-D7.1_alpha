<?php
/**
 * @file
 * panel_layouts_extra.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function panel_layouts_extra_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = '1_3_2_column';
  $layout->admin_title = '1 3 2 column';
  $layout->admin_description = '';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'communities-home-center',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'parent' => 'main',
        'class' => 'grid12-12 centered-div',
      ),
      2 => array(
        'type' => 'column',
        'width' => '30.09838158537044',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '69.90161841462957',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
          1 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'communities-home-left',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'communities-home-right',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
        ),
        'parent' => '3',
        'class' => '',
      ),
      7 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'children' => array(
          0 => 10,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'children' => array(
          0 => 9,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '1st_left',
        ),
        'parent' => '8',
        'class' => '',
      ),
      '1st_left' => array(
        'type' => 'region',
        'title' => '1st Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => 'communities-home-1st-left',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '2nd_left',
        ),
        'parent' => '7',
        'class' => '',
      ),
      '2nd_left' => array(
        'type' => 'region',
        'title' => '2nd Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'communities-home-2nd-left',
      ),
    ),
  );
  $export['1_3_2_column'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = '2_column_70_30';
  $layout->admin_title = 'Datagov one row plus two column 70/30';
  $layout->admin_description = '';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'communities-home-center',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'parent' => 'main',
        'class' => 'grid12-12 centered-div',
      ),
      2 => array(
        'type' => 'column',
        'width' => '30.09838158537044',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '69.90161841462957',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'communities-home-left',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'communities-home-right',
      ),
    ),
  );
  $export['2_column_70_30'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'communities_landing_page_layout';
  $layout->admin_title = 'Datagov Communities Landing Page';
  $layout->admin_description = '';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '29.973649538866933',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 9,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '70.02635046113306',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
          1 => 10,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 6,
          1 => 5,
        ),
        'parent' => '3',
        'class' => '',
      ),
      5 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'children' => array(
          0 => 8,
        ),
        'class' => '',
      ),
      6 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'children' => array(
          0 => 7,
        ),
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mini_left',
        ),
        'parent' => '6',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mini_right',
        ),
        'parent' => '5',
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '2',
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'mini_left' => array(
        'type' => 'region',
        'title' => 'Mini Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      'mini_right' => array(
        'type' => 'region',
        'title' => 'Mini Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
      ),
    ),
  );
  $export['communities_landing_page_layout'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'datagov_2_column_panel_grid_9_grid_3_';
  $layout->admin_title = 'Datagov 2 column panel (grid-9, grid-3)';
  $layout->admin_description = '';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '24.982018325671575',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'datagov-2col-sidebar',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => '75.01798167432842',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'datagov-2col-main',
      ),
    ),
  );
  $export['datagov_2_column_panel_grid_9_grid_3_'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'developers_corner_layout';
  $layout->admin_title = 'Datagov Developers Corner Layout';
  $layout->admin_description = '';
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
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => 'developers-boxes',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '50',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '50',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'developers-boxes',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $export['developers_corner_layout'] = $layout;

  return $export;
}
