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
class DataCommNodeApplicationMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate Data.gov communities application nodes.');

    $this->dependencies = array('DataCommUser', 'DataCommNodeGroup', 'DataCommTermsApplicationCategories', 'DataCommTermsResourceCategories');

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
      ->condition('n.type', 'application', '=');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_type_application', 'cta', 'n.vid = cta.vid');
    $query->addField('cta', 'field_application_url_url');
    $query->addField('cta', 'field_application_url_title');
    $query->addField('cta', 'field_application_url_attributes');
    $query->addField('cta', 'field_application_description_value');
    $query->addField('cta', 'field_app_extended_description_value');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_field_url_android', 'cfua', 'n.vid = cfua.vid');
    $query->addField('cfua', 'field_url_android_url');
    $query->addField('cfua', 'field_url_android_title'); 

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_field_url_blackberry', 'cfub', 'n.vid = cfub.vid');
    $query->addField('cfub', 'field_url_blackberry_url');
    $query->addField('cfub', 'field_url_blackberry_title');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_field_url_ios', 'cfui', 'n.vid = cfui.vid');
    $query->addField('cfui', 'field_url_ios_url');
    $query->addField('cfui', 'field_url_ios_title');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_field_url_mobile', 'cfum', 'n.vid = cfum.vid');
    $query->addField('cfum', 'field_url_mobile_url');
    $query->addField('cfum', 'field_url_mobile_title');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_field_url_windows', 'cfuw', 'n.vid = cfuw.vid');
    $query->addField('cfuw', 'field_url_windows_url');
    $query->addField('cfuw', 'field_url_windows_title');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_field_application_image', 'cfai', 'n.vid = cfai.vid');
    $query->addField('cfai', 'field_application_image_fid');
    $query->addField('cfai', 'field_application_image_list');
    $query->addField('cfai', 'field_application_image_data');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.files', 'f', 'cfai.field_application_image_fid = f.fid');
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
      'application_type' => t('The application type'),
      'application_category' => t('The application category'),
      'application_userpoints' => t('Userpoints Category'),
    );


    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, $source_fields);

    // Set up our destination - node in this case.
    $this->destination = new MigrateDestinationNode('applications');

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

    $link_args_a = MigrateCustomLinkFieldHandler::arguments(array('source_field' => 'field_application_url_title'));
    $this->addFieldMapping('field_application_url', 'field_application_url_url')->arguments($link_args_a);

    $link_args_b = MigrateCustomLinkFieldHandler::arguments(array('source_field' => 'field_url_android_title'));
    $this->addFieldMapping('field_android_app_download_url', 'field_url_android_url')->arguments($link_args_b);

    $link_args_c = MigrateCustomLinkFieldHandler::arguments(array('source_field' => 'field_url_blackberry_title'));
    $this->addFieldMapping('field_blackberry_app_download_ur', 'field_url_blackberry_url')->arguments($link_args_c);

    $link_args_d = MigrateCustomLinkFieldHandler::arguments(array('source_field' => 'field_url_ios_title'));
    $this->addFieldMapping('field_ios_app_download_url', 'field_url_ios_url')->arguments($link_args_d);

    $link_args_e = MigrateCustomLinkFieldHandler::arguments(array('source_field' => 'field_url_mobile_title'));
    $this->addFieldMapping('field_mobile_web_url', 'field_url_mobile_url')->arguments($link_args_e);

    $link_args_f = MigrateCustomLinkFieldHandler::arguments(array('source_field' => 'field_url_windows'));
    $this->addFieldMapping('field_windows_phone_app_download', 'field_url_windows_url')->arguments($link_args_f);

    $this->addFieldMapping('body', 'field_app_extended_description_value');
    $this->addFieldMapping('body:summary', 'field_application_description_value');

    // Copy an image file, write DB record to files table, and save in Field storage.
    // We map the filename (relative to the source_dir below) to the field itself.
    $this->addFieldMapping('field_application_image', 'filepath');

    // Here we specify the directory containing the source files.
    $this->addFieldMapping('field_application_image:source_dir')
         ->defaultValue(MIGRATION_SOURCE_FILES_DIRECTORY);

    // And we map the alt and title values in the database to those on the image.
    $this->addFieldMapping('field_application_image:alt', 'filename');
    $this->addFieldMapping('field_application_image:title', 'filename');
    $this->addFieldMapping('field_application_image:file_replace')->defaultValue(FILE_EXISTS_RENAME);

    $this->addFieldMapping('group_audience', 'group_id')->separator(',');

    //Add taxonomy
    $this->addFieldMapping('field_application_type', 'application_type')
         ->separator(',')
         ->sourceMigration('DataCommTermsResourceCategories');
    $this->addFieldMapping('field_application_type:source_type')->defaultValue('tid');

    $this->addFieldMapping('field_application_category', 'application_category')
         ->separator(',')
         ->sourceMigration('DataCommTermsApplicationCategories');
    $this->addFieldMapping('field_application_category:source_type')->defaultValue('tid'); 

    $this->addFieldMapping('field_userpoints_category', 'application_userpoints')
         ->separator(',')
         ->sourceMigration('DataCommTermsUserpointsSecond');
    $this->addFieldMapping('field_userpoints_category:source_type')->defaultValue('tid'); 

    // Unmapped source fields
    $this->addUnmigratedSources(array('vid', 'type', 'language', 'moderate', 'tnid', 'translate', 'teaser', 'format', 'name'));
  }

  public function prepareRow($current_row) {
    $current_row->application_type = data_comm_migration_get_terms($current_row->vid, DATA_COMM_TERM_RESOURCE_CATEGORIES);
    $current_row->application_category = data_comm_migration_get_terms($current_row->vid, DATA_COMM_TERM_APPLICATION_CATEGORIES);
    $current_row->application_userpoints = data_comm_migration_get_terms($current_row->vid, DATA_COMM_TERM_APPLICATION_USERPOINTS);

    $current_row->group_id = data_comm_migration_get_groups($current_row->group_nid);

    if(empty($current_row->field_app_extended_description_value)) {
      $current_row->field_app_extended_description_value = $current_row->field_application_description_value;
    }
  }
}
