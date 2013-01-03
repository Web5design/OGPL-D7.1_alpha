<?php
/**
 * @file
 * datagov_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datagov_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slideshow';
  $view->description = 'A view for the front page slideshow on Data.gov.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshow';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['wrapper_class'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide_url' => 0,
    'field_slide_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_slide_url' => 0,
    'field_slide_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'slideshow' => 0,
  );
  /* Field: Content: Slide URL */
  $handler->display->display_options['fields']['field_slide_url']['id'] = 'field_slide_url';
  $handler->display->display_options['fields']['field_slide_url']['table'] = 'field_data_field_slide_url';
  $handler->display->display_options['fields']['field_slide_url']['field'] = 'field_slide_url';
  $handler->display->display_options['fields']['field_slide_url']['label'] = '';
  $handler->display->display_options['fields']['field_slide_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_slide_url']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['path'] = '[field_slide_url]';
  $handler->display->display_options['fields']['field_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slide_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'image_style' => 'home_slides',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = 0;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'slide' => 'slide',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  /* Filter criterion: Nodequeue: Queue title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['title']['value'] = 'Slideshow';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Slideshow';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'slideshow';
  $export['slideshow'] = $view;

  return $export;
}
