<?php
//Concrete term migration for Data/tools Vocabulary
class DataCommTermsDataToolsVocabularyMigration extends DataCommTermMigration {
  public function __construct() {
    $vocabulary_id = DATA_COMM_TERM_DATA_TOOLS_VOCABULARY;
    $vocabulary_name = 'legacy_datacomm_data_tools_vocabulary';
    $description = 'Vocabulary to hold Forums. Legacy vid : 4';

    parent::__construct($vocabulary_id, $vocabulary_name, t($description));
  }
}
