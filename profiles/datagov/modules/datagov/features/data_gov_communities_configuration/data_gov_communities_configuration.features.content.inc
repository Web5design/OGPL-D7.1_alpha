<?php
/**
 * @file
 * data_gov_communities_configuration.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function data_gov_communities_configuration_content_defaults() {
  $content = array();

  $content['demo-application'] = (object) array(
    'exported_path' => 'applications/demo-application',
    'title' => 'Demo Application',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'applications',
    'language' => 'und',
    'created' => '1357964112',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'demo-application',
    'body' => array(),
    'field_application_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => '570',
          'height' => '325',
          'filename' => 'demoslide.jpg',
          'uri' => 'public://demoslide.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => '17424',
          'status' => '1',
          'image' => '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',
        ),
      ),
    ),
    'field_application_url' => array(
      'und' => array(
        0 => array(
          'url' => 'http://www.demo-application.data.gov',
          'title' => 'Demo Application',
          'attributes' => array(),
        ),
      ),
    ),
  );

  $content['demo-challange'] = (object) array(
    'title' => 'Demo Challange',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'challenge',
    'language' => 'und',
    'created' => '1357963999',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'demo-challange',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is a demo challange',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>This is a demo challange</p>
',
          'safe_summary' => '',
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
          'value' => '2014-01-12T00:00:00',
          'value2' => '2014-01-12T00:00:00',
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
          'title' => 'Demo Challange',
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
  );

  $content['demo-community-page'] = (object) array(
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/demo-community-page',
      'router_path' => 'node/%',
      'link_title' => 'Demo Community',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'identifier' => 'main-menu:node-name/demo-community-page',
    ),
    'title' => 'Demo Community',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'community',
    'language' => 'und',
    'created' => '1357962221',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'demo-community-page',
    'body' => array(),
  );

  $content['demo-event'] = (object) array(
    'exported_path' => 'event/demo-event',
    'title' => 'Demo Event',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'event',
    'language' => 'und',
    'created' => '1357963771',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'demo-event',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is a demo event',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>This is a demo event</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '1389499800',
          'value2' => '1389499800',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'UTC',
          'date_type' => 'datestamp',
        ),
      ),
    ),
    'field_location' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => 'DC',
          'sub_administrative_area' => NULL,
          'locality' => 'Washington DC',
          'dependent_locality' => NULL,
          'postal_code' => '21202',
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
  );

return $content;
}
