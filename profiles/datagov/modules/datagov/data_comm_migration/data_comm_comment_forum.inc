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
class DataCommCommentForumMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate data_comm forum comments.');

    $this->dependencies = array('DataCommNodeForum');

    // Create a map object for tracking the relationships between source rows
    // and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
    // class, which uses database tables for tracking. Pass the machine name
    // (BeerTerm) of this migration to use in generating map and message tables.
    // And, pass schema definitions for the primary keys of the source and
    // destination - we need to be explicit for our source, but the destination
    // class knows its schema already.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'cid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Comment ID',
          'alias' => 'c',
        )
      ),
      MigrateDestinationComment::getKeySchema()
    );

    // We are getting data from tables in the Drupal default database - first,
    // set up a query for this data.
    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.comments', 'c')
      ->fields('c', array('cid', 'pid', 'nid', 'uid', 'subject', 'comment', 'hostname', 'timestamp', 'status', 'thread', 'name', 'mail', 'homepage', 'format'));
    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.node', 'n', 'c.nid = n.nid');
    $query->condition('n.type', 'forum', '=');
    $query->orderBy('c.cid', 'ASC');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination - comments in this case.
    $this->destination = new MigrateDestinationComment('comment_node_forum');

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('pid', 'pid');
    $this->addFieldMapping('nid', 'nid')
         ->sourceMigration('DataCommNodeForum');
    $this->addFieldMapping('uid', 'uid')
         ->sourceMigration('DataCommUser')
         ->defaultValue(1);
    $this->addFieldMapping('subject', 'subject');
    $this->addFieldMapping('hostname', 'hostname');
    $this->addFieldMapping('created', 'timestamp');
    $this->addFieldMapping('changed', 'timestamp');
    $this->addFieldMapping('status')->defaultValue(COMMENT_PUBLISHED);
    $this->addFieldMapping('thread', 'thread');
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('mail', 'mail');
    $this->addFieldMapping('homepage', 'homepage');
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('comment_body', 'comment');
    $this->addFieldMapping('comment_body:format', 'format');
    // Unmapped source fields
    $this->addUnmigratedSources(array('format', 'status'));

    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('path', 'comment_body:language'));
  }
  public function prepareRow($current_row) {
    // Set the correct text format for the comment.
    $current_row->format = data_comm_migration_get_text_format($current_row->format);

    // We could also have used this function to decide to skip a row, in cases
    // where that couldn't easily be done through the original query. Simply
    // return FALSE in such cases.
    return TRUE;
  }
}
