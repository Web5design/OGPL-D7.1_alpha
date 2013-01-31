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
class DataCommNodeSlideMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate Data.gov communities slide nodes.');

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
      ->condition('n.type', 'feature_slide', '=');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_type_feature_slide', 'ct', 'n.vid = ct.vid');
    $query->addField('ct', 'field_url_url');
    $query->addField('ct', 'field_slide_image_fid');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.files', 'f', 'ct.field_slide_image_fid = f.fid');
    $query->addField('f', 'filename');
    $query->addField('f', 'filepath');

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
      'group_id' => t('Find the gid from the group map table'),
      'format' => t('Body format'),
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, $source_fields);

    // Set up our destination - node in this case.
    $this->destination = new MigrateDestinationNode('slide');

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'title');

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

    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_slide_url', 'field_url_url');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format', 'format');

    // Copy an image file, write DB record to files table, and save in Field storage.
    // We map the filename (relative to the source_dir below) to the field itself.
    $this->addFieldMapping('field_slide_image', 'filepath');

    // Here we specify the directory containing the source files.
    $this->addFieldMapping('field_slide_image:source_dir')
         ->defaultValue(MIGRATION_SOURCE_FILES_DIRECTORY);

    // And we map the alt and title values in the database to those on the image.
    $this->addFieldMapping('field_slide_image:alt', 'filename');
    $this->addFieldMapping('field_slide_image:title', 'filename');
    $this->addFieldMapping('field_slide_image:file_replace')->defaultValue(FILE_EXISTS_RENAME);

    $this->addFieldMapping('group_audience', 'group_id')->separator(',');

    // Unmapped source fields
    $this->addUnmigratedSources(array('vid', 'type', 'language', 'moderate', 'tnid', 'translate', 'teaser', 'name'));
  }

  public function prepareRow($current_row) {

    $current_row->format = data_comm_migration_get_text_format($current_row->format);
    
    $current_row->group_id = data_comm_migration_get_groups($current_row->group_nid);
  }
}
