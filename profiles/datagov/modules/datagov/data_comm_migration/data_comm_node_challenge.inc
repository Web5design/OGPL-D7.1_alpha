<?php

/**
 * There are four essential components to set up in your constructor:
 *  $this->source - An instance of a class derived from MigrateSource, this
 *    will feed data to the migration.
 *  $this->destination - An instance of a class derived from MigrateDestination,
 *    this will receive data that originated from the source and has been mapped
 *    by the Migration class, and create Drupal objects.
 *  $this->map - An instance of a class derived from MigrateMap, this will keep
 *    track of which source items have been imported and what destination objects
 *    they map to.
 *  Mappings - Use $this->addFieldMapping to tell the Migration class what source
 *    fields correspond to what destination fields, and additional information
 *    associated with the mappings.
 */
class DataCommNodeChallengeMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate Data.gov communities challenge nodes.');

    $this->dependencies = array('DataCommUser', 'DataCommNodeGroup');

    // Create a map object for tracking the relationships between source rows
    // and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
    // class, which uses database tables for tracking. Pass the machine name
    // (BeerTerm) of this migration to use in generating map and message tables.
    // And, pass schema definitions for the primary keys of the source and
    // destination - we need to be explicit for our source, but the destination
    // class knows its schema already.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Node ID',
          'alias' => 'n',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // We are getting data from tables in the Drupal default database - first,
    // set up a query for this data.
    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.node', 'n')
      ->fields('n', array('nid', 'vid', 'type', 'language', 'title', 'uid', 'status', 'created', 'changed', 'comment', 'promote', 'moderate', 'sticky', 'tnid', 'translate'))
      ->condition('n.type', 'community_challenge', '=');
    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_type_community_challenge', 'ctcc', 'n.vid = ctcc.vid');
    $query->addField('ctcc', 'field_challenge_url_url');
    $query->addField('ctcc', 'field_challenge_url_title');
    $query->addField('ctcc', 'field_challenge_url_attributes');
    $query->addField('ctcc', 'field_challenge_start_date_value');
    $query->addField('ctcc', 'field_challenge_start_date_value2');
    $query->addField('ctcc', 'field_challenge_award_value');
    $query->addField('ctcc', 'field_winner_announced_value');
    $query->addField('ctcc', 'field_challenge_image_fid');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.files', 'f', 'ctcc.field_challenge_image_fid = f.fid');
    $query->addField('f', 'filename');
    $query->addField('f', 'filepath');
    //$query->addField('f', 'filemime ');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.og_ancestry', 'oa', 'n.nid  = oa.nid');
    $query->addExpression('GROUP_CONCAT(DISTINCT oa.group_nid)', 'group_nid');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.node_revisions', 'nr', 'n.vid = nr.vid');
    $query->addField('nr', 'body');
    $query->addField('nr', 'teaser');
    $query->addField('nr', 'format');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.users', 'u', 'n.uid = u.uid');
    $query->addField('u', 'name');

    $query->groupBy('n.nid');

    $query->orderBy('n.nid', 'ASC');

    // TIP: By passing an array of source fields to the MigrateSourceSQL constructor,
    // we can modify the descriptions of source fields (which just default, for
    // SQL migrations, to table_alias.column_name), as well as add additional fields
    // (which may be populated in prepareRow()).
    $source_fields = array(
      'nid' => t('The node ID of the page'),
      'url_alias' => t('The url alias of the node'),
      //'category' => t('The category for the node'),
      //'tags' => t('The terms for the node'),
      'file_upload' => t('File upload'),
      'challenge_date_range' => t('Challenge date range'),
      'source_file_path' => t('Migration source full path'),
      'destination_file_path' => t('Migration destination full path'),
      'group_id' => t('Find the gid from the group map table'),
      'field_winner_announced_boolean' => t('Boolean value for winner announced'),
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, $source_fields);

    // Set up our destination - node in this case.
    $this->destination = new MigrateDestinationNode('challenge');

    // Assign mappings TO destination fields FROM source fields.
    //$this->addFieldMapping('is_new')->defaultValue(TRUE);
    $this->addFieldMapping('title', 'title');

    //$this->addFieldMapping('nid', 'nid');
    $this->addFieldMapping('uid', 'uid')
         ->sourceMigration('DataCommUser')
         ->defaultValue(1);
    $this->addFieldMapping('revision')->defaultValue(TRUE);
    $this->addFieldMapping('revision_uid', 'uid');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'changed');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('sticky', 'sticky');
    $this->addFieldMapping('comment', 'comment');
    $this->addFieldMapping('path', 'url_alias');
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);
    //$this->addFieldMapping('field_story_category', 'category')->separator(',');
    //$this->addFieldMapping('field_tags', 'tags')->separator(',');

    $this->addFieldMapping('field_challenge_award', 'field_challenge_award_value');
    $this->addFieldMapping('field_winner_announced', 'field_winner_announced_boolean');

    $this->addFieldMapping('group_audience', 'group_id')->separator(',');

    $this->addFieldMapping('field_challenge_start_date', 'challenge_date_range');

    $link_args = MigrateCustomLinkFieldHandler::arguments(array('source_field' => 'field_challenge_url_title'));
    $this->addFieldMapping('field_challenge_url', 'field_challenge_url_url')->arguments($link_args);

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format', 'format');

    // Copy an image file, write DB record to files table, and save in Field storage.
    // We map the filename (relative to the source_dir below) to the field itself.
    $this->addFieldMapping('field_challenge_image', 'filepath');

    // Here we specify the directory containing the source files.
    $this->addFieldMapping('field_challenge_image:source_dir')
         ->defaultValue(MIGRATION_SOURCE_FILES_DIRECTORY);

    // And we map the alt and title values in the database to those on the image.
    $this->addFieldMapping('field_challenge_image:alt', 'filename');
    $this->addFieldMapping('field_challenge_image:title', 'filename');
    $this->addFieldMapping('field_challenge_image:file_replace')->defaultValue(FILE_EXISTS_RENAME);



    // Unmapped source fields
    $this->addUnmigratedSources(array('vid', 'type', 'language', 'moderate', 'tnid', 'translate', 'teaser', 'name'));

  }

  public function prepareRow($current_row) {
    // Set the text format for the node.
    $current_row->format = data_comm_migration_get_text_format($current_row->format);

    // The date range field can have multiple values.
    $current_row->challenge_date_range = array();
    $date_range = array(
      'from' => $current_row->field_challenge_start_date_value,
      'to' => $current_row->field_challenge_start_date_value2,
    );
    $current_row->challenge_date_range = drupal_json_encode($date_range);

    $current_row->field_winner_announced_boolean = (empty($current_row->field_winner_announced_value) || $current_row->field_winner_announced_value == "off")? 0 : 1;

    $current_row->group_id = data_comm_migration_get_groups($current_row->group_nid);
  }
}
