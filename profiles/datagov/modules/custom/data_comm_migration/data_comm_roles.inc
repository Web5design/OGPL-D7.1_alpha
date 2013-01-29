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
class DataCommRoleMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate Data.gov communities roles');

    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.role', 'r')
      ->fields('r', array('rid', 'name'))
      ->condition('r.rid', '2', '>');

    $query->orderBy('r.rid', 'ASC');

    // The role ID here is the one retrieved from each data item in the role table, and
    // used to identify specific items
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'rid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
        )
      ),
      MigrateDestinationRole::getKeySchema()
    );

    $this->source = new MigrateSourceSQL($query);

    $this->destination = new MigrateDestinationRole();

    $this->addFieldMapping('name', 'name');

    $this->addUnmigratedDestinations(array('weight'));
  }
}
