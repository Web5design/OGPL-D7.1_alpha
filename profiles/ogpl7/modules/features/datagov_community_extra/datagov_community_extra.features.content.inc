<?php
/**
 * @file
 * datagov_community_extra.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function datagov_community_extra_content_defaults() {
  $content = array();

  $content['demo-community-page'] = (object) array(
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/demo-community-page',
      'router_path' => 'node/%',
      'link_title' => 'Demo-Community',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'parent_path' => 'communities',
      'identifier' => 'main-menu:node-name/demo-community-page',
    ),
    'title' => 'Demo-Community',
    'status' => '1',
    'promote' => '0',
    'sticky' => '1',
    'type' => 'community',
    'language' => 'und',
    'created' => '1359506976',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'demo-community-page',
    'body' => array(),
    'group_group' => array(
      'und' => array(
        0 => array(
          'value' => '1',
        ),
      ),
    ),
  );

  $content['datagov-demo-challange'] = (object) array(
    'title' => 'Demo Challange',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'challenge',
    'language' => 'und',
    'created' => '1359480046',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'datagov-demo-challange',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is a demo challange',
          'summary' => '',
          'format' => 'full_html',
        ),
      ),
    ),
    'field_challenge_award' => array(
      'und' => array(
        0 => array(
          'value' => '$1',
          'format' => NULL,
          'safe_value' => '$1',
        ),
      ),
    ),
    'field_challenge_start_date' => array(
      'und' => array(
        0 => array(
          'value' => '2014-01-29T00:00:00',
          'value2' => '2014-03-01T00:00:00',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'Europe/Berlin',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_challenge_url' => array(
      'und' => array(
        0 => array(
          'url' => 'http://www.demo-challange.data.gov',
          'title' => 'This is a demo challange',
          'attributes' => array(),
        ),
      ),
    ),
    'field_winner_announced' => array(
      'und' => array(
        0 => array(
          'value' => '0',
        ),
      ),
    ),
    'group_audience' => array(
      'und' => array(
        0 => array(
          'gid' => '1',
          'state' => '1',
          'created' => '1359472872',
        ),
      ),
    ),
  );

  $content['datagov-demo-event'] = (object) array(
    'exported_path' => 'event/demo-event',
    'title' => 'Demo Event',
    'status' => '1',
    'promote' => '1',
    'sticky' => '1',
    'type' => 'event',
    'language' => 'und',
    'created' => '1359479962',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'datagov-demo-event',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is a demo event',
          'summary' => '',
          'format' => 'full_html',
        ),
      ),
    ),
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '1391016000',
          'value2' => '1391019600',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'UTC',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_geo_encoded_location' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (66.0248111874 33.8379177589)',
          'geo_type' => 'point',
          'lat' => '33.8379',
          'lon' => '66.0248',
          'left' => '66.0248',
          'top' => '33.8379',
          'right' => '66.0248',
          'bottom' => '33.8379',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
    'field_location' => array(
      'und' => array(
        0 => array(
          'country' => 'AF',
          'administrative_area' => NULL,
          'sub_administrative_area' => NULL,
          'locality' => '',
          'dependent_locality' => NULL,
          'postal_code' => NULL,
          'thoroughfare' => '',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
        1 => array(
          'country' => 'AF',
          'administrative_area' => NULL,
          'sub_administrative_area' => NULL,
          'locality' => '',
          'dependent_locality' => NULL,
          'postal_code' => NULL,
          'thoroughfare' => '',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'group_audience' => array(
      'und' => array(
        0 => array(
          'gid' => '1',
          'state' => '1',
          'created' => '1359472872',
        ),
      ),
    ),
  );

return $content;
}
