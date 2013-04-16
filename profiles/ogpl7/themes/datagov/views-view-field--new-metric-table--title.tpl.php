<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php 

$name = $row->node_title;

if (!empty($row->field_field_metric_abbr[0]['rendered']['#markup'])) {
  $name .= " (" . $row->field_field_metric_abbr[0]['rendered']['#markup'] . ")";
}

$id_agency = empty($row->field_field_zend_agency_id[0]['rendered']['#markup'])?0:$row->field_field_zend_agency_id[0]['rendered']['#markup'];
$url = "/list/agency/$id_agency/";

$ckan_id ="";

if (!empty($row->field_field_ckan_unique_id) && strlen($row->field_field_ckan_unique_id[0]['rendered']['#markup']) != 0) {
  $ckan_id = "/" . $row->field_field_ckan_unique_id[0]['rendered']['#markup'];
}

if (empty($row->field_field_metric_parent_organization)) { //main agency
  $url .= "*" . $ckan_id;
  $name = '<span class="main"> <a href="' . $url . '">' . $name . '</a></span>';
}
else{ // subagency
  $id_subagency = empty($row->field_field_zend_subagency_id[0]['rendered']['#markup'])?0:$row->field_field_zend_subagency_id[0]['rendered']['#markup'];
  if ($id_subagency == $id_agency) { // Department/Agency Level
    $id_subagency = 0;
  }
  $url .= $id_subagency . $ckan_id;
  $name = '<span class="sub"> <a href="' . $url . '">' . $name . '</a></span>';
}

print $name;