<?php
/**
 * @file
 * datagov_ckan.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datagov_ckan_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'datasets';
  $view->description = '';
  $view->tag = 'default, communities';
  $view->base_table = 'node';
  $view->human_name = 'Community Dataset List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_dataset_id' => 'field_dataset_id',
    'path' => 'path',
    'body' => 'body',
    'title' => 'title',
    'field_agency' => 'field_agency',
    'dataset_download' => 'dataset_download',
    'field_overall' => 'field_overall',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_dataset_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agency' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'dataset_download' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_overall' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found. ';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: Content: Dataset ID */
  $handler->display->display_options['fields']['field_dataset_id']['id'] = 'field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['table'] = 'field_data_field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['field'] = 'field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['label'] = '';
  $handler->display->display_options['fields']['field_dataset_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_id']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[path] class="dataset_list_title">[title] </a>
<div class="dataset_list_description">
[body] 
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['dataset_download']['id'] = 'dataset_download';
  $handler->display->display_options['fields']['dataset_download']['table'] = 'views';
  $handler->display->display_options['fields']['dataset_download']['field'] = 'nothing';
  $handler->display->display_options['fields']['dataset_download']['label'] = 'Downloads';
  $handler->display->display_options['fields']['dataset_download']['alter']['text'] = 'Placeholder';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['arguments']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['arguments']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group_audience_gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data' => 'data',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Category (field_categorization) */
  $handler->display->display_options['filters']['field_categorization_value']['id'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['table'] = 'field_data_field_categorization';
  $handler->display->display_options['filters']['field_categorization_value']['field'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value']['expose']['operator_id'] = 'field_categorization_value_op';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['operator'] = 'field_categorization_value_op';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['identifier'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: OG Membership: Custom Group ID filter */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['gid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['gid']['expose']['operator_id'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['label'] = 'Custom Group ID filter';
  $handler->display->display_options['filters']['gid']['expose']['operator'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['identifier'] = 'gid';
  /* Filter criterion: Content: Category (field_categorization) */
  $handler->display->display_options['filters']['field_categorization_value_1']['id'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['table'] = 'field_data_field_categorization';
  $handler->display->display_options['filters']['field_categorization_value_1']['field'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['operator_id'] = 'field_categorization_value_1_op';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['label'] = 'Category (field_categorization)';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['operator'] = 'field_categorization_value_1_op';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['identifier'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value_1']['group_info']['identifier'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1',
      'operator' => '=',
      'value' => '1',
    ),
    2 => array(
      'title' => '2',
      'operator' => '=',
      'value' => '2',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'ogpl_community_datasets_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'datasets';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'ogpl_community_datasets_block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data' => 'data',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys_1']['id'] = 'keys_1';
  $handler->display->display_options['filters']['keys_1']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys_1']['field'] = 'keys';
  $handler->display->display_options['filters']['keys_1']['group'] = 1;
  $handler->display->display_options['filters']['keys_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys_1']['expose']['operator_id'] = 'keys_1_op';
  $handler->display->display_options['filters']['keys_1']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys_1']['expose']['operator'] = 'keys_1_op';
  $handler->display->display_options['filters']['keys_1']['expose']['identifier'] = 'keys_1';
  $handler->display->display_options['filters']['keys_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Category (field_categorization) */
  $handler->display->display_options['filters']['field_categorization_value']['id'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['table'] = 'field_data_field_categorization';
  $handler->display->display_options['filters']['field_categorization_value']['field'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['group'] = 1;
  $handler->display->display_options['filters']['field_categorization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value']['expose']['operator_id'] = 'field_categorization_value_op';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['label'] = 'Category1';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['operator'] = 'field_categorization_value_op';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['identifier'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Category (field_categorization) */
  $handler->display->display_options['filters']['field_categorization_value_1']['id'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['table'] = 'field_data_field_categorization';
  $handler->display->display_options['filters']['field_categorization_value_1']['field'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['operator_id'] = 'field_categorization_value_1_op';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['label'] = 'Category (field_categorization)';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['operator'] = 'field_categorization_value_1_op';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['identifier'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value_1']['group_info']['identifier'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1',
      'operator' => '=',
      'value' => '1',
    ),
    2 => array(
      'title' => '2',
      'operator' => '=',
      'value' => '2',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );

  /* Display: Community Datasets pane */
  $handler = $view->new_display('panel_pane', 'Community Datasets pane', 'ogpl_dataset_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25, 50, 100';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<?php

if(!isset($_REQUEST[\'field_dataset_vocabulary_tid\']) || $_REQUEST[\'field_dataset_vocabulary_tid\']==\'\'){
  return;
}
$filter_text = \'<div>Taxonomy keyword : \'. check_plain($_REQUEST[\'field_dataset_vocabulary_tid\']) . \'</div>\';
$filter_text = \'<div class="filterby">List Filtered by \'.$filter_text.\'<a href=\'.$_SERVER[\'REQUEST_URI\'] . \'&field_dataset_vocabulary_tid=>Reset Taxonomy Filter</a></div>\';

echo  $filter_text;
?>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Dataset ID */
  $handler->display->display_options['fields']['field_dataset_id']['id'] = 'field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['table'] = 'field_data_field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['field'] = 'field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['label'] = '';
  $handler->display->display_options['fields']['field_dataset_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_id']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[path] class="dataset_list_title">[title] </a>
<div class="dataset_list_description">
[body] 
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['dataset_download']['id'] = 'dataset_download';
  $handler->display->display_options['fields']['dataset_download']['table'] = 'views';
  $handler->display->display_options['fields']['dataset_download']['field'] = 'nothing';
  $handler->display->display_options['fields']['dataset_download']['label'] = 'Downloads';
  $handler->display->display_options['fields']['dataset_download']['alter']['text'] = 'Placeholder';
  /* Field: Content: Overall */
  $handler->display->display_options['fields']['field_overall']['id'] = 'field_overall';
  $handler->display->display_options['fields']['field_overall']['table'] = 'field_data_field_overall';
  $handler->display->display_options['fields']['field_overall']['field'] = 'field_overall';
  $handler->display->display_options['fields']['field_overall']['label'] = 'Rating';
  $handler->display->display_options['fields']['field_overall']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overall']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_overall']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data' => 'data',
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Category (field_categorization) */
  $handler->display->display_options['filters']['field_categorization_value']['id'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['table'] = 'field_data_field_categorization';
  $handler->display->display_options['filters']['field_categorization_value']['field'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value']['expose']['operator_id'] = 'field_categorization_value_op';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['operator'] = 'field_categorization_value_op';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['identifier'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Category (field_categorization) */
  $handler->display->display_options['filters']['field_categorization_value_1']['id'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['table'] = 'field_data_field_categorization';
  $handler->display->display_options['filters']['field_categorization_value_1']['field'] = 'field_categorization_value';
  $handler->display->display_options['filters']['field_categorization_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['operator_id'] = 'field_categorization_value_1_op';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['label'] = 'Category (field_categorization)';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['operator'] = 'field_categorization_value_1_op';
  $handler->display->display_options['filters']['field_categorization_value_1']['expose']['identifier'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_categorization_value_1']['group_info']['identifier'] = 'field_categorization_value_1';
  $handler->display->display_options['filters']['field_categorization_value_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1',
      'operator' => '=',
      'value' => '1',
    ),
    2 => array(
      'title' => '2',
      'operator' => '=',
      'value' => '2',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  /* Filter criterion: Content: Dataset Vocabulary (field_dataset_vocabulary) */
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['id'] = 'field_dataset_vocabulary_tid';
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['table'] = 'field_data_field_dataset_vocabulary';
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['field'] = 'field_dataset_vocabulary_tid';
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['value'] = '';
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['expose']['operator_id'] = 'field_dataset_vocabulary_tid_op';
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['expose']['operator'] = 'field_dataset_vocabulary_tid_op';
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['expose']['identifier'] = 'field_dataset_vocabulary_tid';
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  $handler->display->display_options['filters']['field_dataset_vocabulary_tid']['vocabulary'] = 'legacy_datacomm_data_tools_vocabulary';
  $handler->display->display_options['pane_title'] = 'Community Datasets ';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Research Datasets pane */
  $handler = $view->new_display('panel_pane', 'Research Datasets pane', 'ogpl_research_latest_dataset_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research Latest Datasets';
  $handler->display->display_options['display_description'] = 'What\'s New';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Dataset ID */
  $handler->display->display_options['fields']['field_dataset_id']['id'] = 'field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['table'] = 'field_data_field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['field'] = 'field_dataset_id';
  $handler->display->display_options['fields']['field_dataset_id']['label'] = '';
  $handler->display->display_options['fields']['field_dataset_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset_id']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href=[path] class="dataset_list_title">[title] </a>
<div class="dataset_list_description">
[body] 
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['spaces'] = array(
    'type' => 'spaces_og',
    'frontpage' => 0,
  );
  /* Field: Content: Agency */
  $handler->display->display_options['fields']['field_agency']['id'] = 'field_agency';
  $handler->display->display_options['fields']['field_agency']['table'] = 'field_data_field_agency';
  $handler->display->display_options['fields']['field_agency']['field'] = 'field_agency';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['dataset_download']['id'] = 'dataset_download';
  $handler->display->display_options['fields']['dataset_download']['table'] = 'views';
  $handler->display->display_options['fields']['dataset_download']['field'] = 'nothing';
  $handler->display->display_options['fields']['dataset_download']['label'] = 'Downloads';
  $handler->display->display_options['fields']['dataset_download']['alter']['text'] = 'Placeholder';
  /* Field: Content: Overall */
  $handler->display->display_options['fields']['field_overall']['id'] = 'field_overall';
  $handler->display->display_options['fields']['field_overall']['table'] = 'field_data_field_overall';
  $handler->display->display_options['fields']['field_overall']['field'] = 'field_overall';
  $handler->display->display_options['fields']['field_overall']['label'] = 'Rating';
  $handler->display->display_options['fields']['field_overall']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overall']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_overall']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data' => 'data',
  );
  /* Filter criterion: OG Membership: Custom Group ID filter */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['gid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_title'] = 'Research Datasets ';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['datasets'] = $view;

  return $export;
}
