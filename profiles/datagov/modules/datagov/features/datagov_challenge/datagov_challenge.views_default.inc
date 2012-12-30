<?php
/**
 * @file
 * datagov_challenge.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datagov_challenge_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'community_challenges';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Community Challenges';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Community Challenges';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no current challenges in this category.';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';

  /* Display: Community Challenges Pane */
  $handler = $view->new_display('panel_pane', 'Community Challenges Pane', 'panel_pane_1');
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Community Challenges Page */
  $handler = $view->new_display('page', 'Community Challenges Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Content */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: OG Membership: Custom Group ID filter */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['gid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['gid']['expose']['operator_id'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['label'] = 'Community';
  $handler->display->display_options['filters']['gid']['expose']['operator'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['identifier'] = 'gid';
  $handler->display->display_options['filters']['gid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['gid']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'challenges';

  /* Display: Open Challenges Pane */
  $handler = $view->new_display('panel_pane', 'Open Challenges Pane', 'panel_pane_2');
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Winner Announced (field_winner_announced) */
  $handler->display->display_options['filters']['field_winner_announced_value']['id'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['table'] = 'field_data_field_winner_announced';
  $handler->display->display_options['filters']['field_winner_announced_value']['field'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['operator'] = 'empty';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Challenge Winners Pane */
  $handler = $view->new_display('panel_pane', 'Challenge Winners Pane', 'panel_pane_3');
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Winner Announced (field_winner_announced) */
  $handler->display->display_options['filters']['field_winner_announced_value']['id'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['table'] = 'field_data_field_winner_announced';
  $handler->display->display_options['filters']['field_winner_announced_value']['field'] = 'field_winner_announced_value';
  $handler->display->display_options['filters']['field_winner_announced_value']['operator'] = 'not empty';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Closed Challenges Pane */
  $handler = $view->new_display('panel_pane', 'Closed Challenges Pane', 'panel_pane_4');
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
    'challenge' => 'challenge',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Challenge Start Date - end date (field_challenge_start_date:value2) */
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['id'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['table'] = 'field_data_field_challenge_start_date';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['field'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator_id'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['label'] = 'Challenge Start Date - end date (field_challenge_start_date:value2)';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['operator'] = 'field_challenge_start_date_value2_op';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['expose']['identifier'] = 'field_challenge_start_date_value2';
  $handler->display->display_options['filters']['field_challenge_start_date_value2']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['community_challenges'] = $view;

  return $export;
}
