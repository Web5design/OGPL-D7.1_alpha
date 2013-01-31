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
class DataCommNodeToolMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate Data.gov communities tool nodes.');

    $this->dependencies = array('DataCommUser', 'DataCommNodeGroup', 'DataCommTermsDataToolsVocabulary');

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
      ->condition('n.type', 'content_datagov_data_tools', '=');
    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_type_content_datagov_data_tools', 'ctcddt', 'n.vid = ctcddt.vid');
    $query->addField('ctcddt', 'field_datasetid_value');
    $query->addField('ctcddt', 'field_categorization_value');
    $query->addField('ctcddt', 'field_description_value');
    $query->addField('ctcddt', 'field_agency_info_value');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_field_application_image', 'cf', 'n.vid = cf.vid');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.files', 'f', 'cf.field_application_image_fid = f.fid');
    $query->addField('f', 'filename');
    $query->addField('f', 'filepath');


    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.og_ancestry', 'oa', 'n.nid  = oa.nid');
    $query->addExpression('GROUP_CONCAT(DISTINCT oa.group_nid)', 'group_nid');

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
      'dataset_vocabulary' => t('The dataset vocabulary'),
      'application_userpoints' => t('Userpoints Category'),
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, $source_fields);

    // Set up our destination - node in this case.
    $this->destination = new MigrateDestinationNode('data');

    // Assign mappings TO destination fields FROM source fields.
    //$this->addFieldMapping('is_new')->defaultValue(TRUE);
    $this->addFieldMapping('field_dataset_id', 'field_datasetid_value');

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
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_categorization', 'field_categorization_value');
    $this->addFieldMapping('body', 'field_description_value');
    $this->addFieldMapping('field_agency', 'field_agency_info_value');
  
    // Copy an image file, write DB record to files table, and save in Field storage.
    // We map the filename (relative to the source_dir below) to the field itself.
    $this->addFieldMapping('field_image_thumbnail', 'filepath');

    // Here we specify the directory containing the source files.
    $this->addFieldMapping('field_image_thumbnail:source_dir')
         ->defaultValue(MIGRATION_SOURCE_FILES_DIRECTORY);

    // And we map the alt and title values in the database to those on the image.
    $this->addFieldMapping('field_image_thumbnail:alt', 'filename');
    $this->addFieldMapping('field_image_thumbnail:title', 'filename');
    $this->addFieldMapping('field_image_thumbnail:file_replace')->defaultValue(FILE_EXISTS_RENAME);


    $this->addFieldMapping('group_audience', 'group_id')->separator(',');

    //Add taxonomy
    $this->addFieldMapping('field_dataset_vocabulary', 'dataset_vocabulary')
         ->separator(',')
         ->sourceMigration('DataCommTermsDataToolsVocabulary');
    $this->addFieldMapping('field_dataset_vocabulary:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_userpoints_category', 'application_userpoints')
         ->separator(',')
         ->sourceMigration('DataCommTermsUserpointsSecond');
    $this->addFieldMapping('field_userpoints_category:source_type')->defaultValue('tid'); 

    // Unmapped source fields
    $this->addUnmigratedSources(array('vid', 'type', 'language', 'moderate', 'tnid', 'translate', 'name'));

  }

  public function prepareRow($current_row) {
    $current_row->dataset_vocabulary = data_comm_migration_get_terms($current_row->vid, DATA_COMM_TERM_DATA_TOOLS_VOCABULARY);

    $current_row->application_userpoints = data_comm_migration_get_terms($current_row->vid, DATA_COMM_TERM_APPLICATION_USERPOINTS);

    $current_row->group_id = data_comm_migration_get_groups($current_row->group_nid);
  }

}
