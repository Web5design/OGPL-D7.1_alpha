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
class DataCommUserCommunityRoleMigration extends Migration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you like.
    $this->description = t('Migrate data_comm users gorup role');

    $this->dependencies = array('DataCommRole', 'DataCommUser', 'DataCommNodeGroup');

    $source_fields = array(
      'group_type' => 'Group entity type',
      'entity_type' => t('Entity type'),
      'group_role' => 'Array of role ids to assign to the user in this group.',
    );

    $query = db_select(MIGRATION_SOURCE_DATABASE_NAME . '.og_users_roles', 'our')
      ->fields('our', array('uid', 'gid', 'rid'));

    $query->orderBy('our.uid', 'ASC');

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new CustomMigrateDestinationOGMembership();
    //$this->systemOfRecord = Migration::DESTINATION;

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'uid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique User ID',
          'alias' => 'our',
        ),
        'rid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Role ID',
          'alias' => 'our',
        ),
        'gid' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => TRUE,
          'description' => 'D6 Unique Group ID',
          'alias' => 'our',
        ),
      ),
      CustomMigrateDestinationOGMembership::getKeySchema()
    );

    // Make the mappings

    $this->addFieldMapping('group_type', 'group_type');
    $this->addFieldMapping('gid', 'gid')->sourceMigration('DataCommNodeGroup');
    $this->addFieldMapping('entity_type', 'entity_type');
    $this->addFieldMapping('etid', 'uid')->sourceMigration('DataCommUser');
    $this->addFieldMapping('group_role', 'group_role');

    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('created', 'is_admin', 'state'));
  }

  public function prepareRow($current_row) {
    /**
	OG ROLE MAP TABLE FROM D6 TO D7
	
	D6-OG-rid	D6-OG-role-name		D7-OG-rid	D7-OG-role-name
	------		-------------		-------		--------------
	6   		community admin		3 		Community Administrator
	5   		community contributor   5		Community Contributor
	10  		community moderator	4		Community Moderator  
	11  		community user		2		member
    */

    $ogRoleMap = array (
      '6' => 3,
      '5' => 5,
      '10' => 4,
      '11' => 2,
    );

    $current_row->group_role = $ogRoleMap[$current_row->rid];
    $current_row->entity_type = 'user';
    $current_row->group_type = 'user';
  }
}
