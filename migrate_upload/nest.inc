<?php 

class nestMigration extends Migration {
  public function __construct() {
    parent::__construct();
	
	  // The definition of the columns. Keys are integers. values are array(field name, description).
    //  If there is a machine name available we put that as the description.
    $columns = array(
      0 => array('Observer First Name', 'field_full_name:first'),
      1 => array('Observer Last Name', 'field_full_name:last'),
      2 => array('Title', 'field_position'),
      3 => array('Affiliation', 'field_organization'),
      4 => array('E-mail Address', 'field_email'),
      5 => array('Survey Type', 'field_survey_method'),
      6 => array('Species Common Name', 'field_species'),
      7 => array('Species Confidence', 'field_species_confidence'),
      8 => array('Site Name', 'survey_site.field_survey_site_name'),
      9 => array('Territory', 'survey_site.field_study_area'),
      
      10 => array('NestID', 'survey_site.field_xid'),
      11 => array('Date', 'field_datetime partial day'),
      12 => array('SurvStart_Time', 'field_datetime partial start time'),
      13 => array('SurvEnd_Time', 'field_datetime partial end time'),
      14 => array('Observation Type', 'field_observation_method'),
      15 => array('Nest Status', 'field_site_status'),
      16 => array('Territory Status', 'field_territory_status'),
      17 => array('No adults or field sign', 'field_territory_occupancy partial'),
      18 => array('Decorated nest', 'field_territory_occupancy partial'),
      19 => array('Nest affinity', 'field_territory_occupancy partial'),
      
      20 => array('Courtship or reproductive behavior', 'field_territory_occupancy partial'),
      21 => array('Incubating posture', 'field_territory_occupancy partial'),
      22 => array('Eggs observed', 'field_territory_occupancy partial'),
      23 => array('Young observed', 'field_territory_occupancy partial'),
      24 => array('Fledged young nearby', 'field_territory_occupancy partial'),
      25 => array('Territory Occupancy Other', 'field_territory_occupancy partial'),
      26 => array('Sex', 'field_sex'),
      27 => array('Northing (Latitude)', 'field_location Y partial'),
      28 => array('Easting (Longitude)', 'field_location X partial'),
      29 => array('Coordinate System', 'field_location CoordSys partial'),
      30 => array('Location Confidence', 'field_location_confidence'),
      
      31 => array('LocComment', 'field_location_comment'), 
      32 => array('Site Directions', 'field_directions'),
      33 => array('Land Manager', 'field_landowner'),	    
      34 => array('NestSub', 'field_nest_substrate'),
      35 => array('SubHgt', 'field_nest_substrate'),
      36 => array('SubAsp', 'field_nest_substrate'),
      37 => array('NestAsp', 'field_nest_substrate'),
      38 => array('NestHgt', 'field_nest_substrate'),
      39 => array('NestCond', 'field_nest_substrate'),
      40 => array('EcolSysNest', 'field_nest_substrate'),
      
      41 => array('EcolSysAdj', 'field_nest_substrate'),
      42 => array('Photos', 'field_observation_method partial'),
      43 => array('Comments', 'field_species_account'),
      44 => array('RecordID', 'field_xid, also MigrateSQLMap PK'),  // TODO Need to find way to populate from RowID
    );
    
    // Human-friendly description of your migration process. 
    $this->description = t('Import Nest observations');

    //The Source of the import, where the original data lives.  Upload to observations-import and copy location. (Right-click copy link location)
    $this->source = new MigrateSourceCSV(DRUPAL_ROOT . '/' . drupal_get_path('module', 'migrate_upload') . '/examples/TW_2013_GOEA_Owyhee--with_Notes.csv', $columns, array(
      'delimiter' => ',',
      'header_rows' => 1
    ));

	  //The destination bundle (content type machine name)
    $this->destination = new MigrateDestinationNode('observation_nest_survey');
	
    //Source and destination relation for rollbacks
    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'csvrownum' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'import'
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    //Field mapping
    $this->addFieldMapping('field_xid', 'csvrownum');  // TODO Should we add spreadsheet name/sa code?  What if RecordID provided?
    $this->addFieldMapping('field_observer', 'calc_observer_ID');  // TODO Calculate using function described in flowchart
    $this->addFieldMapping('field_full_name:given', 'Observer First Name');
    $this->addFieldMapping('field_full_name:family', 'Observer Last Name');
    $this->addFieldMapping('field_position', 'Title');
    $this->addFieldMapping('field_organization', 'Affiliation');
    $this->addFieldMapping('field_email', 'E-mail Address');
    $this->addFieldMapping('field_survey_method', 'Survey Type');
    $this->addFieldMapping('field_species', 'Species Common Name')
      ->callbacks(array($this, 'lu_species'));
    $this->addFieldMapping('field_species_confidence', 'Species Confidence')
      ->callbacks(array($this, 'lu_species_confidence'));
    $this->addFieldMapping('field_survey_site', 'NestID')
      ->callbacks(array($this, 'lu_survey_site'));
    $this->addFieldMapping('field_datetime', 'calc_datetime_from');
    $this->addFieldMapping('field_datetime:to', 'calc_datetime_to');
    $this->addFieldMapping('field_datetime:timezone', 'calc_datetime_timezone');
    $this->addFieldMapping('field_observation_method', 'calc_observation_method')
    	->separator(',');
    $this->addFieldMapping('field_site_status', 'calc_nest_status');
    $this->addFieldMapping('field_territory_status', 'calc_territory_status');
    $this->addFieldMapping('field_territory_occupancy', 'calc_territory_occupancy')
      ->separator(','); // TODO calc from Territory Occupancy nine fields.
      // For example if 19, 20 then "Courtship or reproductive behavior, Incubating posture"
    $this->addFieldMapping('field_sex', 'Sex')
      ->callbacks(array($this, 'lu_sex'));
    $this->addFieldMapping('field_location')
      ->defaultValue('');
    $this->addFieldMapping('field_location:input_format')
      ->defaultValue('lat/lon');
    $this->addFieldMapping('field_location:lat', 'calc_lat');
    $this->addFieldMapping('field_location:lon', 'calc_lon');
    $this->addFieldMapping('field_location_confidence', 'Location Confidence')
      ->callbacks(array($this, 'lu_location_confidence'));
    $this->addFieldMapping('field_directions', 'calc_directions');
    $this->addFieldMapping('field_landowner', 'Land Manager');  // TODO may need lookup for this for other datasets.
    $this->addFieldMapping('field_nest_substrate', 'NestSub');
    $this->addFieldMapping('field_nest_substrate_height', 'SubHgt');
    $this->addFieldMapping('field_nest_substrate_aspect', 'SubAsp')
      ->callbacks(array($this, 'lu_bearing'));
    $this->addFieldMapping('field_nest_aspect', 'NestAsp')
      ->callbacks(array($this, 'lu_bearing'));
    $this->addFieldMapping('field_nest_height', 'NestHgt');
    $this->addFieldMapping('field_nest_condition', 'NestCond');
    $this->addFieldMapping('field_ecological_system', 'EcolSysNest');
    $this->addFieldMapping('field_ecological_systems', 'EcolSysAdj'); // Really they are named singular and plural of system.
    $this->addFieldMapping('field_species_account', 'Comments');
    $this->addFieldMapping('field_location_resource', 'calc_location_resource');
    $this->addFieldMapping('field_location_steps', 'calc_location_steps');
    $this->addFieldMapping('field_count', 'calc_count'); 
    $this->addFieldMapping('field_count_type', 'calc_count_type');
    $this->addFieldMapping('field_life_state', 'calc_life_state');
    $this->addFieldMapping('field_life_stage', 'fixed_life_stage');
    $this->addFieldMapping('field_location_use', 'calc_location_use');
    $this->addFieldMapping('field_date_confidence', 'calc_date_confidence');
    $this->addFieldMapping('field_sacode','calc_sa_code');
    $this->addFieldMapping('field_sensitive','calc_sensitive');
    $this->addFieldMapping('uid','calc_uid');
  }

  // Create pseudo rows to use in the import, the values may be constant or calculated.
  public function prepareRow($row) {   
    // Calculate Start/End Date time and Date Confidence.
    if ($row->SurvStart_Time && $row->SurvEnd_Time) {
      $row->calc_date_confidence = 3600; // Hour
      $startdate = $row->{'Date'} . ' ' . trim($row->SurvStart_Time);
      $enddate = $row->{'Date'} . ' ' . trim($row->SurvEnd_Time);
    } else {
      $row->calc_date_confidence = 86400;  // Day
      $startdate = $row->{'Date'} . ' 00:00:00';
      $enddate = $row->{'Date'} . ' 00:00:00';
    }
    $row->calc_datetime_from = $startdate;
    $row->calc_datetime_to = $enddate;
    $row->calc_datetime_timezone = 'America/Denver';
    // TODO we probably need to add timezone to the spreadsheet or calculate based on location (unreliable).
    // Here be dragons. No offset on import, only timezone name.  Fix requires resave.  Ugly. Code fix needed.
    // Another possibility is to gank timezone from user account (site uses timezone detect module and have
    // some sort of verification on upload.
    
    // Calculate location.
    $wkid = _migrate_upload_lu_wkid($row->{'Coordinate System'});
    $geo_arguments = array(
      'lat_y' => $row->{'Northing (Latitude)'},
      'lon_x' => $row->{'Easting (Longitude)'},
      'input_format' => 'lat/lon',
      'wkid' => $wkid,
    );
    // Transform points if different coordinate system.
    // TODO needs research, not correctly saving.
    $geo_arguments = _migrate_upload_lu_location_wgs($geo_arguments);
    $row->calc_lat = $geo_arguments['lat_y'];
    $row->calc_lon = $geo_arguments['lon_x'];
    $row->calc_location_steps = '\'Transformed Location\' to ' . $row->calc_lat . ',' . $row->calc_lon . ' [Input, WKID: ' . $wkid . ', xvalue: ' . $row->{'Easting (Longitude)'} . ', yvalue:' . $row->{'Northing (Latitude)'} . '], [Accuracy: 10];';
    $row->calc_location_resource = 'Transformed Location'; 
   
    // These are calculated here rather than as callbacks because value used for other fields.   
    $row->calc_nest_status = $this->lu_site_status($row->{'Nest Status'});
    $row->calc_territory_status = $this->lu_site_status($row->{'Territory Status'});

    // Based on territory status we decide count.
    if ($row->calc_territory_status == 'Unoccupied') {
      $row->calc_count = 0;
      $row->calc_count_type = 'Absolute';
      $row->calc_life_state = null;
    } else {
      $row->calc_count = 1;
      $row->calc_count_type = 'Minimum';
      $row->calc_life_state = 'Alive';
    }
    
    // Observation Method.
    $row->calc_observation_method = $this->lu_observation_method($row->{'Observation Type'}, $row->{'Nest Status'}, $row->Photos);
    // Are there photos?
    if ($row->Photos) {
      $row->calc_observation_method .= ',Photographed';
    }
    dpm($row);

    $row->fixed_life_stage = 'Unknown'; // I believe there is not enough information in territory occupancy fields to determine.
    
    // Location Use
    $nest = strpos($row->calc_observation_method, 'Nest');
    if ($nest == false) {
      $row->calc_location_use = 'Unknown';
    }
    else {
      $row->calc_location_use = 'Breeding'; // Fixed value since all nests.
    }
    
    $directions = trim($row->{'Site Directions'} . PHP_EOL . $row->LocComment, ' \t\n\r');
    $row->calc_directions = trim($directions . PHP_EOL . 'Site Name: ' . $row->{'Site Name'} . PHP_EOL . 'Territory: ' . $row->{'Territory'} . PHP_EOL . 'NestID: ' . $row->NestID, ' \t\n\r');

    /**
      * The following need calculated from bibliography import.
      */
    // $row->calc_sa_code = 'UNK'; // TODO From biblio.
    // $row->calc_record_ID = 0; // TODO From biblio.
    $row->calc_uid = 1;  // TODO From biblio.

    /**
      * The following remain to be calculated from existing values.
      */
    // $row->calc_sensitive = 'Private'; // TODO if on private ground and NEW consent column unchecked.
    // $row->calc_territory_occupancy = 'One|Two|Three'; // TODO calc from nine territory fields.

    // Get Person Node.
    $person = array(
      'given' => $row->{'Observer First Name'},
      'family' => $row->{'Observer Last Name'},
      'position' => $row->{'Title'},
      'organization' => $row->{'Affiliation'},
      'email' => $row->{'E-mail Address'},
      'phone' => null,
      );
    $row->calc_observer_ID = _migrate_upload_lu_person($row->calc_uid, $person);
    $row->calc_survey_site_ID = _migrate_upload_lu_survey_site_by_xid($row->NestID);

  }

  // Convert strings to integers.
  protected function toInt($value) {
    $value = (int)$value;
    return $value;
  }

  // Lookup Species Confidence Values.
  protected function lu_species_confidence($value) {
    $haystack = array (
      0 => 'Identify (Request Help from Taxa Expert)',
      10 => 'Guess',
      50 => 'Uncertain',
      80 => 'Confident',
      100 => 'Certain',
    );
    $return = array_search($value, $haystack);
    if (!$return) { $return = 0; }
    return $return;
  }

  // Lookup Count Type Values.
  protected function lu_count_type($value) {
    $haystack = array (
      'Absolute' => 'Absolute',
      'Estimate' => 'An Estimate',
      'Minimum' => 'A Minimum',
    );
    $return = array_search($value, $haystack);
    if (!$return) { $return = 'Absolute'; }
    return $return;
  }

  // Lookup Sex Values.
  protected function lu_sex($value) {
    $haystack = array (
      'Unknown' => 'Unknown',
      'Female' => 'Female',
      'Male' => 'Male',
      'Both' => 'Pair',
      'NA' => 'Not Applicable',
    );
    $return = array_search($value, $haystack);
    if (!$return) { $return = 'Unknown'; }
    return $return;
  }

  // Lookup Location Use Values.
  protected function lu_location_use($value) {
    $haystack = array (
      'Not Applicable' => 'Not Applicable',
      'Unknown' => 'Unknown',
      'Breeding' => 'Breeding',
      'Migratory' => 'Migratory',
      'Hibernaculum' => 'Hibernaculum',
      'Presumed Hibernaculum' => 'Presumed Hibernaculum',
      'Maternity colony' => 'Maternity colony',
      'Bachelor colony' => 'Bachelor colony',
    );
    $return = array_search($value, $haystack);
    if (!$return) { $return = 'Unknown'; }
    return $return;
  }

  // Lookup Location Precision Values.
  // TODO we may need to add in other options like Precise (less than 10 meters).
  protected function lu_location_confidence($value) {
    $haystack = array (
      10 => 'Precise',
      50 => 'Accurate',
      250 => 'Moderate Precision',
      1000 => 'Estimated Precision',
      10000 => 'Low Precision',
    );
    $return = array_search($value, $haystack);
    if (!$return) { $return = 10000; }
    return $return;
  }
  
  // Lookup Species.
  protected function lu_species($value) {
    $return = _migrate_upload_lu_species_by_name($value, 'common');
    if (!$return) { $return = null; }  // This might be silly false/null but I'm tired.
    return $return;
  }
  
    // Lookup Survey Site.
  protected function lu_survey_site($value) {
    $return = _migrate_upload_lu_survey_site_by_xid($value);
    if (!$return) { $return = null; }  // This might be silly false/null but I'm tired.
    return $return;
  }
  
  // Lookup Observation Method.
  protected function lu_observation_method($observation_type, $nest_status, $photos) {
    $observation_type = strtolower($observation_type);
    if (substr($observation_type,0,4) == 'nest') {
      if ($nest_status == 'Occupied') {
        $value = 'Nest,Seen';
      } else {
        $value = 'Nest';
      }
    }
    elseif (substr($observation_type,0,8) == 'negative') {
      $value = 'Negative';
    }
    elseif (substr($observation_type,0,25) == 'individual seen and heard') {
      $value = 'Seen,Heard';
    } 
    elseif (substr($observation_type,0,15) == 'individual seen') {
      $value = 'Seen,Heard';
    }
    elseif (substr($observation_type,0,16) == 'individual heard') {
      $value = 'Seen,Heard';
    } else {
      $value = 'Unknown';
    }
    return $value;
  }
  
  // Lookup Nest Status and Territory Status Values.
  protected function lu_site_status($value) {
    $value = strtolower($value);
    $return = null;
    if (substr($value,0,8) == 'occupied') {
      $return = 'Occupied';
    }
    elseif (substr($value,0,10) == 'unoccupied') {
      $return = 'Unoccupied';
    }
    elseif (substr($value,0,12) == 'undetermined') {
      $return = 'Undetermined';
    }
    return $return;
  }
  
  // Lookup Bearings from Cardinal Directions.
  protected function lu_bearing($value) {
    if (is_numeric($value)) {
      if ($value = 360) { $value = 0; } // Correct for north wrap around.
      if ($value < 0 || $value > 360) {
        $value = null;
      }
      return $value;
    }
    
    // Lookup for names and abbreviations
    $value = strtolower($value);
    $abbreviations = array (
      0 => 'n',
      45 => 'ne',
      90 => 'e',
      135 => 'se',
      180 => 's',
      225 => 'sw',
      270 => 'w',
      315 => 'nw',
    );
    $names = array (
      0 => 'north',
      45 => 'northeast',
      90 => 'east',
      135 => 'southeast',
      180 => 'south',
      225 => 'southwest',
      270 => 'west',
      315 => 'northwest',
    );
    $bearing = array_search($value, $abbreviations);
    if (!$bearing) { 
      $bearing = array_search($value, $names);
      if (!$bearing) { 
        $bearing = null;
      }
    }
    return $bearing;
  }
  
  // Change empty fields to null via Dave Reid http://drupal.org/node/1665332
  // This avoids having lots of field labels with no values (empty string)
  public function prepare($entity, stdClass $source_row) {
    _migrate_upload_remove_empties($this->destination, $entity);
  }
}
