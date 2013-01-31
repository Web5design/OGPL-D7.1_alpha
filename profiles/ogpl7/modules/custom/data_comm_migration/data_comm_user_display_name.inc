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
class DataCommUserDisplayNameMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate data_comm users display name');

    $this->dependencies = array('DataCommUser');

    $source_fields = array(
      'flag_value' => 'Display as anonymous flag value',
    );

    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.profile_values', 'pv1')->fields('pv1', array('uid'))->distinct();

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.profile_values', 'pv2', 'pv1.uid = pv2.uid and pv2.fid = 9');
    $query->addField('pv2', 'value', 'flag');

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.profile_values', 'pv3', 'pv1.uid = pv3.uid and pv3.fid = 8');
    $query->addField('pv3', 'value', 'name');

    $query->orderBy('pv1.uid', 'DESC');

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
          'alias' => 'pv1',
        )
      ),
      MigrateDestinationUser::getKeySchema()
    );

    // Make the mappings
    $this->addFieldMapping('uid', 'uid')->sourceMigration('DataCommUser');
    $this->addFieldMapping('field_display_name', 'name');

    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('field_display_name:format', 'field_display_name:language', 'pathauto', 'group_audience', 'is_new', 'role_names', 'name', 'pass', 'mail', 'language', 'theme', 'signature', 'signature_format', 'created', 'access', 'login', 'status', 'init', 'timezone', 'roles', 'path', 'picture'));
  }

  public function prepareRow($current_row) {
    if($current_row->flag == '1') {
      $current_row->name = 'Anonymous';
    }
  }
}
