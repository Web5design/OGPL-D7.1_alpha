<?php
// The term migrations are very similar - we implement the commonalities here
abstract class DataCommTermMigration extends Migration {
  public function __construct($vocabulary_id, $vocabulary_name, $description) {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = $description;

    // Create a map object for tracking the relationships between source rows
    // and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
    // class, which uses database tables for tracking. Pass the machine name
    // (BeerTerm) of this migration to use in generating map and message tables.
    // And, pass schema definitions for the primary keys of the source and
    // destination - we need to be explicit for our source, but the destination
    // class knows its schema already.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Term ID',
          'alias' => 'td',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // We are getting data from tables in the Drupal default database - first,
    // set up a query for this data.
    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.term_data', 'td')
      ->fields('td', array('tid', 'vid', 'name', 'description', 'weight'))
      ->condition('td.vid', $vocabulary_id, '=');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.term_hierarchy', 'th', 'td.tid = th.tid');
    $query->addField('th', 'parent');
    $query->orderBy('th.parent', 'ASC');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination.
    $this->destination = new MigrateDestinationTerm($vocabulary_name);


    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('description', 'description');
    $this->addFieldMapping('format')->defaultValue('plain_text');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('parent', 'parent')->sourceMigration($this->getMachineName());

    // Unmapped source fields
    $this->addUnmigratedSources(array('vid'));

    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('path', 'parent_name'));
  }
}