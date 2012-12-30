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
class DataCommUserCommunityMembershipMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate data_comm users gorup membership');

    $this->dependencies = array('DataCommRole', 'DataCommUser', 'DataCommNodeGroup');

    $source_fields = array(
      'group_id' => t('Find the gid from the group map table'),
    );

    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.og_uid', 'ou')
      ->fields('ou', array('uid'));

    $query->groupBy('ou.uid');

    $query->addExpression('GROUP_CONCAT(ou.nid)', 'group_nid');

    $query->orderBy('ou.uid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationUser();
    $this->systemOfRecord = Migration::DESTINATION;

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'uid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique User ID',
          'alias' => 'ou',
        )
      ),
      MigrateDestinationUser::getKeySchema()
    );

    // Make the mappings

    $this->addFieldMapping('uid', 'uid')->sourceMigration('DataCommUser');
    $this->addFieldMapping('group_audience', 'group_id')->separator(',');

    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('is_new', 'role_names', 'name', 'pass', 'mail', 'language', 'theme', 'signature', 'signature_format', 'created', 'access', 'login', 'status', 'init', 'timezone', 'roles', 'path', 'picture'));
  }

  public function prepareRow($current_row) {
    $current_row->group_id = data_comm_migration_get_groups($current_row->group_nid);
  }
}
