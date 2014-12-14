<?php
/**
 * @file
 * observation_nest_survey.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function observation_nest_survey_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datedetails|node|observation|form';
  $field_group->group_name = 'group_datedetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_when';
  $field_group->data = array(
    'label' => 'Date Details (Optional)',
    'weight' => '51',
    'children' => array(
      0 => 'field_date_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Date Details (Optional)',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-datedetails field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_datedetails|node|observation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documentationdetails|node|observation|form';
  $field_group->group_name = 'group_documentationdetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_how';
  $field_group->data = array(
    'label' => 'Documentation Details (Optional)',
    'weight' => '53',
    'children' => array(
      0 => 'field_file',
      1 => 'field_survey_method',
      2 => 'field_specimen_number',
      3 => 'field_museum',
      4 => 'field_sensitive',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Documentation Details (Optional)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-documentationdetails field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_documentationdetails|node|observation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_how|node|observation_nest_survey|form';
  $field_group->group_name = 'group_how';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation_nest_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How',
    'weight' => '5',
    'children' => array(
      0 => 'field_file',
      1 => 'field_identification_tools',
      2 => 'field_survey_method',
      3 => 'field_source_agency',
      4 => 'field_sacode',
      5 => 'field_data_entry_notes',
      6 => 'field_specimen_number',
      7 => 'field_source_type',
      8 => 'field_museum',
      9 => 'field_entry_author',
      10 => 'field_xid',
      11 => 'field_sensitive',
      12 => 'field_coreid',
      13 => 'field_verification_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-how field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_how|node|observation_nest_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_how|node|observation|default';
  $field_group->group_name = 'group_how';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '& How',
    'weight' => '4',
    'children' => array(
      0 => 'field_file',
      1 => 'field_identification_tools',
      2 => 'field_session',
      3 => 'field_survey_method',
      4 => 'field_source_agency',
      5 => 'field_sacode',
      6 => 'field_data_entry_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '& How',
      'instance_settings' => array(
        'classes' => ' group-how field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_observation_full_group_how',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_how|node|observation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_how|node|observation|form';
  $field_group->group_name = 'group_how';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How',
    'weight' => '5',
    'children' => array(
      0 => 'field_identification_tools',
      1 => 'group_documentationdetails',
      2 => 'group_office_use',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'How',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'node_observation_form_group_how',
        'classes' => ' group-how field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_how|node|observation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internal_survey_site_notes|node|survey_site|form';
  $field_group->group_name = 'group_internal_survey_site_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'survey_site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Internal Use',
    'weight' => '3',
    'children' => array(
      0 => 'field_primary_data_source',
      1 => 'field_survey_station_mark',
      2 => 'field_entry_author',
      3 => 'field_data_entry_notes',
      4 => 'field_sacode',
      5 => 'field_xid',
      6 => 'field_map4gis',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-internal-survey-site-notes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_internal_survey_site_notes|node|survey_site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locationdetails|node|observation_nest_survey|form';
  $field_group->group_name = 'group_locationdetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation_nest_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_where';
  $field_group->data = array(
    'label' => 'Location Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_directions',
      1 => 'field_habitat_description',
      2 => 'field_location_unresolveable',
      3 => 'field_survey_site',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-locationdetails field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_locationdetails|node|observation_nest_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locationdetails|node|observation|form';
  $field_group->group_name = 'group_locationdetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_where';
  $field_group->data = array(
    'label' => 'Location Details (Optional)',
    'weight' => '9',
    'children' => array(
      0 => 'field_directions',
      1 => 'field_habitat_description',
      2 => 'field_location_unresolveable',
      3 => 'field_survey_site',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location Details (Optional)',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-locationdetails field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_locationdetails|node|observation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|survey_site|default';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'survey_site';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '1',
    'children' => array(
      0 => 'field_location',
      1 => 'field_county',
      2 => 'field_gmu',
      3 => 'field_location_resource',
      4 => 'field_location_steps',
      5 => 'field_region',
      6 => 'field_location_confidence',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location field-group-fieldset',
      ),
    ),
  );
  $export['group_location|node|survey_site|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nest_survey|node|observation_nest_survey|form';
  $field_group->group_name = 'group_nest_survey';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation_nest_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nest Survey',
    'weight' => '6',
    'children' => array(
      0 => 'field_nest_status',
      1 => 'field_territory_status',
      2 => 'field_territory_occupancy',
      3 => 'field_nest_substrate',
      4 => 'field_nest_substrate_aspect',
      5 => 'field_nest_aspect',
      6 => 'field_nest_height',
      7 => 'field_nest_substrate_height',
      8 => 'field_nest_condition',
      9 => 'field_ecological_system',
      10 => 'field_ecological_systems',
      11 => 'field_location_comment',
      12 => 'field_landowner',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nest-survey field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_nest_survey|node|observation_nest_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_office_use|node|observation|form';
  $field_group->group_name = 'group_office_use';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_how';
  $field_group->data = array(
    'label' => 'Office Use',
    'weight' => '54',
    'children' => array(
      0 => 'field_session',
      1 => 'field_source_agency',
      2 => 'field_sacode',
      3 => 'field_data_entry_notes',
      4 => 'field_source_type',
      5 => 'field_entry_author',
      6 => 'field_xid',
      7 => 'field_coreid',
      8 => 'field_verification_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Office Use',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-office-use field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_office_use|node|observation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speciesinfo|node|taxa|search_result';
  $field_group->group_name = 'group_speciesinfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'taxa';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomic Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_distribution_population',
      1 => 'field_distribution_presence',
      2 => 'field_distribution_regularity',
      3 => 'field_endemic',
      4 => 'field_idapa_protection',
      5 => 'field_in_idaho',
      6 => 'field_taxa_categories',
      7 => 'field_parent',
      8 => 'field_srank',
      9 => 'field_usesa',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomic Information',
      'instance_settings' => array(
        'classes' => ' group-speciesinfo field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_speciesinfo|node|taxa|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_survey_details|node|survey_site|default';
  $field_group->group_name = 'group_survey_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'survey_site';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Survey Site Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_study_area',
      1 => 'field_xid_survey_site',
      2 => 'field_datetime',
      3 => 'field_directions',
      4 => 'field_survey_site_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-survey-details field-group-fieldset',
      ),
    ),
  );
  $export['group_survey_details|node|survey_site|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_surveysitedetails|node|survey_site|form';
  $field_group->group_name = 'group_surveysitedetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'survey_site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Survey site details',
    'weight' => '1',
    'children' => array(
      0 => 'field_study_area',
      1 => 'field_datetime',
      2 => 'field_survey_site_name',
      3 => 'field_survey_site_method',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-surveysitedetails field-group-div',
        'required_fields' => 1,
        'id' => 'node_survey_site_form_group_surveysitedetails',
      ),
    ),
  );
  $export['group_surveysitedetails|node|survey_site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_surveysitelocation|node|survey_site|form';
  $field_group->group_name = 'group_surveysitelocation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'survey_site';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '2',
    'children' => array(
      0 => 'field_location',
      1 => 'field_directions',
      2 => 'field_county',
      3 => 'field_gmu',
      4 => 'field_location_resource',
      5 => 'field_location_steps',
      6 => 'field_region',
      7 => 'field_location_confidence',
      8 => 'field_habitat_description',
      9 => 'field_tmp_location_feature_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-surveysitelocation field-group-div',
        'required_fields' => 1,
        'id' => 'node_survey_site_form_group_surveysitelocation',
      ),
    ),
  );
  $export['group_surveysitelocation|node|survey_site|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_what|node|observation_nest_survey|form';
  $field_group->group_name = 'group_what';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation_nest_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What',
    'weight' => '1',
    'children' => array(
      0 => 'field_count',
      1 => 'field_count_type',
      2 => 'field_life_stage',
      3 => 'field_life_state',
      4 => 'field_location_use',
      5 => 'field_observation_method',
      6 => 'field_photo',
      7 => 'field_sex',
      8 => 'field_species',
      9 => 'field_species_account',
      10 => 'field_species_confidence',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-what field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_what|node|observation_nest_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_what|node|observation|default';
  $field_group->group_name = 'group_what';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What',
    'weight' => '0',
    'children' => array(
      0 => 'field_count',
      1 => 'field_count_type',
      2 => 'field_life_stage',
      3 => 'field_life_state',
      4 => 'field_observation_method',
      5 => 'field_photo',
      6 => 'field_sex',
      7 => 'field_species',
      8 => 'field_species_account',
      9 => 'field_species_confidence',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-what field-group-div',
        'required_fields' => 1,
        'id' => 'node_observation_full_group_what',
      ),
    ),
  );
  $export['group_what|node|observation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_what|node|observation|form';
  $field_group->group_name = 'group_what';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What',
    'weight' => '1',
    'children' => array(
      0 => 'field_count',
      1 => 'field_count_type',
      2 => 'field_life_stage',
      3 => 'field_life_state',
      4 => 'field_location_use',
      5 => 'field_observation_method',
      6 => 'field_photo',
      7 => 'field_sex',
      8 => 'field_species',
      9 => 'field_species_account',
      10 => 'field_species_confidence',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-what field-group-div',
        'required_fields' => 1,
        'id' => 'node_observation_form_group_what',
      ),
    ),
  );
  $export['group_what|node|observation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when|node|observation_nest_survey|form';
  $field_group->group_name = 'group_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation_nest_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '3',
    'children' => array(
      0 => 'field_date_notes',
      1 => 'field_date_confidence',
      2 => 'field_datetime',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-when field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_when|node|observation_nest_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when|node|observation|default';
  $field_group->group_name = 'group_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '2',
    'children' => array(
      0 => 'field_date_notes',
      1 => 'field_date_confidence',
      2 => 'field_datetime',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-when field-group-div',
        'required_fields' => 1,
        'id' => 'node_observation_full_group_when',
      ),
    ),
  );
  $export['group_when|node|observation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when|node|observation|form';
  $field_group->group_name = 'group_when';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When',
    'weight' => '3',
    'children' => array(
      0 => 'field_date_confidence',
      1 => 'field_datetime',
      2 => 'group_datedetails',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-when field-group-div',
        'required_fields' => 1,
        'id' => 'node_observation_form_group_when',
      ),
    ),
  );
  $export['group_when|node|observation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_where|node|observation_nest_survey|form';
  $field_group->group_name = 'group_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation_nest_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where',
    'weight' => '2',
    'children' => array(
      0 => 'field_county',
      1 => 'field_gmu',
      2 => 'field_location',
      3 => 'field_location_resource',
      4 => 'field_location_steps',
      5 => 'field_region',
      6 => 'field_location_confidence',
      7 => 'field_highway',
      8 => 'field_milepost',
      9 => 'group_locationdetails',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-where field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_where|node|observation_nest_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_where|node|observation|default';
  $field_group->group_name = 'group_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where',
    'weight' => '1',
    'children' => array(
      0 => 'field_county',
      1 => 'field_directions',
      2 => 'field_gmu',
      3 => 'field_habitat_description',
      4 => 'field_location',
      5 => 'field_location_resource',
      6 => 'field_location_steps',
      7 => 'field_location_use',
      8 => 'field_region',
      9 => 'field_location_confidence',
      10 => 'field_highway',
      11 => 'field_milepost',
      12 => 'field_survey_site',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-where field-group-div',
        'required_fields' => 1,
        'id' => 'node_observation_full_group_where',
      ),
    ),
  );
  $export['group_where|node|observation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_where|node|observation|form';
  $field_group->group_name = 'group_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where',
    'weight' => '2',
    'children' => array(
      0 => 'field_county',
      1 => 'field_gmu',
      2 => 'field_location',
      3 => 'field_location_resource',
      4 => 'field_location_steps',
      5 => 'field_region',
      6 => 'field_location_confidence',
      7 => 'field_highway',
      8 => 'field_milepost',
      9 => 'group_locationdetails',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-where field-group-div',
        'required_fields' => 1,
        'id' => 'node_observation_form_group_where',
      ),
    ),
  );
  $export['group_where|node|observation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_who|node|observation_nest_survey|form';
  $field_group->group_name = 'group_who';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation_nest_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Who',
    'weight' => '4',
    'children' => array(
      0 => 'field_observer',
      1 => 'field_full_name',
      2 => 'field_address',
      3 => 'field_organization',
      4 => 'field_position',
      5 => 'field_email',
      6 => 'field_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-who field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_who|node|observation_nest_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_who|node|observation|default';
  $field_group->group_name = 'group_who';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Who',
    'weight' => '3',
    'children' => array(
      0 => 'field_observer',
      1 => 'field_full_name',
      2 => 'field_address',
      3 => 'field_organization',
      4 => 'field_position',
      5 => 'field_email',
      6 => 'field_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Who',
      'instance_settings' => array(
        'classes' => ' group-who field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_observation_full_group_who',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_who|node|observation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_who|node|observation|form';
  $field_group->group_name = 'group_who';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'observation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Who',
    'weight' => '4',
    'children' => array(
      0 => 'field_observer',
      1 => 'field_full_name',
      2 => 'field_address',
      3 => 'field_organization',
      4 => 'field_position',
      5 => 'field_email',
      6 => 'field_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-who field-group-div',
        'required_fields' => 1,
        'id' => 'node_observation_form_group_who',
      ),
    ),
  );
  $export['group_who|node|observation|form'] = $field_group;

  return $export;
}
