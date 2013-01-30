<?php
/**
 * @file
 * datagov_vote.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function datagov_vote_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_add_css';
  $strongarm->value = 1;
  $export['plus1_add_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_add_js';
  $strongarm->value = 1;
  $export['plus1_add_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_comment_undo_vote';
  $strongarm->value = 0;
  $export['plus1_comment_undo_vote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_comment_undo_vote_text';
  $strongarm->value = '';
  $export['plus1_comment_undo_vote_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_comment_voted_text';
  $strongarm->value = '';
  $export['plus1_comment_voted_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_comment_vote_text';
  $strongarm->value = 'Vote';
  $export['plus1_comment_vote_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_comment_widget_show';
  $strongarm->value = 0;
  $export['plus1_comment_widget_show'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_comment_widget_weight';
  $strongarm->value = '100';
  $export['plus1_comment_widget_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_node_in_full_view';
  $strongarm->value = 1;
  $export['plus1_node_in_full_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_node_in_teaser';
  $strongarm->value = 0;
  $export['plus1_node_in_teaser'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_node_types';
  $strongarm->value = array(
    0 => 'blog',
  );
  $export['plus1_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_node_undo_vote';
  $strongarm->value = 1;
  $export['plus1_node_undo_vote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_node_undo_vote_text';
  $strongarm->value = '';
  $export['plus1_node_undo_vote_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_node_voted_text';
  $strongarm->value = 'You voted';
  $export['plus1_node_voted_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_node_vote_text';
  $strongarm->value = 'Vote';
  $export['plus1_node_vote_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'plus1_node_widget_weight';
  $strongarm->value = '100';
  $export['plus1_node_widget_weight'] = $strongarm;

  return $export;
}
