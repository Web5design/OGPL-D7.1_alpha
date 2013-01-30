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
class DataCommVotingapiNodeBlogMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate Data.gov communities voting API results.');

    $this->dependencies = array('DataCommUser', 'DataCommNodeBlog');

    // Create a map object for tracking the relationships between source rows
    // and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
    // class, which uses database tables for tracking. Pass the machine name
    // (BeerTerm) of this migration to use in generating map and message tables.
    // And, pass schema definitions for the primary keys of the source and
    // destination - we need to be explicit for our source, but the destination
    // class knows its schema already.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'vote_id' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Vote ID',
          'alias' => 'vv',
        )
      ),
      MigrateDestinationVotingapi::getKeySchema()
    );

    // We are getting data from tables in the Drupal default database - first,
    // set up a query for this data.
    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.votingapi_vote', 'vv')
      ->fields('vv', array('vote_id', 'content_type', 'content_id', 'value', 'value_type', 'tag', 'uid', 'timestamp', 'vote_source'));


    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.node', 'n', 'vv.content_id  = n.nid');
    $query->addField('n', 'type');

    $query->condition('n.type', 'blog', '=');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination - node in this case.
    $this->destination = new MigrateDestinationVotingapi('votingapi');

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('entity_type', 'content_type');
    $this->addFieldMapping('value', 'value');
    $this->addFieldMapping('value_type', 'value_type');
    $this->addFieldMapping('tag', 'tag');
    $this->addFieldMapping('timestamp', 'timestamp');
    $this->addFieldMapping('vote_source', 'vote_source');

    $this->addFieldMapping('entity_id', 'content_id')
         ->sourceMigration('DataCommNodeBlog');

    $this->addFieldMapping('uid', 'uid')
         ->sourceMigration('DataCommUser');

    // Unmapped source fields
    $this->addUnmigratedSources(array('type'));

  }

  public function prepareRow($current_row) {
    $current_row->tag = 'plus1_node_vote';
  }
}
