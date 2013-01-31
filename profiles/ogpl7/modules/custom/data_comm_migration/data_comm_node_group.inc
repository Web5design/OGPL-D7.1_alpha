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
class DataCommNodeGroupMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate Data.gov communities Group nodes.');

    $this->dependencies = array('DataCommUser');

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
      ->condition('n.type', 'group', '=');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.node_revisions', 'nr', 'n.vid = nr.vid');
    $query->addField('nr', 'body');
    $query->addField('nr', 'teaser');
    $query->addField('nr', 'format');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.users', 'u', 'n.uid = u.uid');
    $query->addField('u', 'name');
    $query->orderBy('n.nid', 'ASC');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.content_type_group', 'ctg', 'n.nid = ctg.nid');
    $query->addField('ctg', 'field_group_image_fid');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.files', 'f', 'ctg.field_group_image_fid = f.fid');
    $query->addField('f', 'filename');
    $query->addField('f', 'filepath');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination - node in this case.
    $this->destination = new MigrateDestinationNode('community');

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
    //$this->addFieldMapping('path', 'url_alias');
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);

    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'));
    $this->addFieldMapping('body', 'body')->arguments($body_arguments);

    // Copy an image file, write DB record to files table, and save in Field storage.
    // We map the filename (relative to the source_dir below) to the field itself.
    $this->addFieldMapping('field_group_image', 'filepath');

    // Here we specify the directory containing the source files.
    $this->addFieldMapping('field_group_image:source_dir')
         ->defaultValue(MIGRATION_SOURCE_FILES_DIRECTORY);

    // And we map the alt and title values in the database to those on the image.
    $this->addFieldMapping('field_group_image:alt', 'filename');
    $this->addFieldMapping('field_group_image:title', 'filename');
    $this->addFieldMapping('field_group_image:file_replace')->defaultValue(FILE_EXISTS_RENAME);



    // Unmapped source fields
    $this->addUnmigratedSources(array('vid', 'type', 'language', 'moderate', 'tnid', 'translate', 'teaser', 'format', 'name'));

  }
}