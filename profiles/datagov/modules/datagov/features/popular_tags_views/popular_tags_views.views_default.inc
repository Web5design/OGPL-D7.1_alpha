<?php
/**
 * @file
 * popular_tags_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function popular_tags_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'popular_tags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Popular Tags';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Popular tags';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'tagadelic';
  $handler->display->display_options['style_options']['steps'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Dataset Vocabulary */
  $handler->display->display_options['relationships']['reverse_field_dataset_vocabulary_node']['id'] = 'reverse_field_dataset_vocabulary_node';
  $handler->display->display_options['relationships']['reverse_field_dataset_vocabulary_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_dataset_vocabulary_node']['field'] = 'reverse_field_dataset_vocabulary_node';
  $handler->display->display_options['relationships']['reverse_field_dataset_vocabulary_node']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Content */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'reverse_field_dataset_vocabulary_node';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Taxonomy term: Name) */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Sort criterion: COUNT(Taxonomy vocabulary: Name) */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['group_type'] = 'count';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
  /* Contextual filter: OG membership: OG group gid */
  $handler->display->display_options['arguments']['group']['id'] = 'group';
  $handler->display->display_options['arguments']['group']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['group']['field'] = 'group';
  $handler->display->display_options['arguments']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['group']['default_action'] = 'default';
  $handler->display->display_options['arguments']['group']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['group']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'legacy_datacomm_data_tools_vocabulary' => 'legacy_datacomm_data_tools_vocabulary',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_dataset_vocabulary_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data' => 'data',
  );
  $export['popular_tags'] = $view;

  return $export;
}
