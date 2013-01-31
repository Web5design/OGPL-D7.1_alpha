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
class DataCommUserMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate data_comm users');

    $this->dependencies = array('DataCommRole');

    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.users', 'u')
      ->fields('u', array('uid', 'name', 'pass', 'mail', 'created', 'access', 'login', 'status', 'init'));

    $query->leftJoin(MIGRATION_SOURCE_DATABASE_NAME . '.users_roles', 'ur', 'u.uid = ur.uid');

    $query->groupBy('u.uid');

    $query->addExpression('GROUP_CONCAT(ur.rid)', 'roles');

    $query->orderBy('u.uid', 'ASC');

    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationUser(array('md5_passwords' => TRUE));

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'uid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique User ID',
          'alias' => 'u',
        )
      ),
      MigrateDestinationUser::getKeySchema()
    );

    // Make the mappings
    //$this->addFieldMapping('is_new')->defaultValue(TRUE);
    //$this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('name', 'name')->dedupe('users', 'name');
    $this->addFieldMapping('pass', 'pass');
    $this->addFieldMapping('mail', 'mail')->dedupe('users', 'mail');
    $this->addFieldMapping('language')->defaultValue('');
    $this->addFieldMapping('theme')->defaultValue('');
    $this->addFieldMapping('signature')->defaultValue('');
    $this->addFieldMapping('signature_format')->defaultValue('plain_text');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('access', 'access');
    $this->addFieldMapping('login', 'login');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('picture')->defaultValue(0);
    $this->addFieldMapping('init', 'init');
    $this->addFieldMapping('timezone')->defaultValue(NULL);
    $this->addFieldMapping('roles', 'roles')
         ->separator(',')
         ->sourceMigration('DataCommRole');
    $this->addFieldMapping('path')->issueGroup(t('DNM'));

    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('is_new', 'role_names'));
  }

  public function prepareRow($current_row) {
    if(empty($current_row->name)) {
      $current_row->name = 'user_MEN_' . rand();
    }
  }
}
