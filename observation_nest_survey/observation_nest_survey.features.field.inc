<?php
/**
 * @file
 * observation_nest_survey.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function observation_nest_survey_field_default_fields() {
  $fields = array();

  // Exported field: 'node-observation-field_address'.
  $fields['node-observation-field_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '26',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_address',
      'label' => 'Address',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'format_handlers' => array(
            0 => 'address',
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '51',
      ),
    ),
  );

  // Exported field: 'node-observation-field_coreid'.
  $fields['node-observation-field_coreid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_coreid',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '46',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_coreid',
      'label' => 'ObserveDetailID',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '62',
      ),
    ),
  );

  // Exported field: 'node-observation-field_count'.
  $fields['node-observation-field_count'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_count',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => 'How many did you observe?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 1,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '3',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_count',
      'label' => 'Count',
      'required' => 1,
      'settings' => array(
        'max' => '10000',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-observation-field_count_type'.
  $fields['node-observation-field_count_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_count_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Absolute' => 'Absolute',
          'Estimate' => 'An Estimate',
          'Minimum' => 'A Minimum',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => 'Absolute',
        ),
      ),
      'deleted' => '0',
      'description' => 'This count was...',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_count_type',
      'label' => 'Count Type',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-observation-field_county'.
  $fields['node-observation-field_county'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_county',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'county',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '20',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_county',
      'label' => 'County',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'options_buttons',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation-field_data_entry_notes'.
  $fields['node-observation-field_data_entry_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_entry_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '38',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_data_entry_notes',
      'label' => 'Data Entry Notes',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => '59',
      ),
    ),
  );

  // Exported field: 'node-observation-field_date_confidence'.
  $fields['node-observation-field_date_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date_confidence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => '86400',
        ),
      ),
      'deleted' => '0',
      'description' => 'The selected date/time is accurate within... ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 1,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '21',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date_confidence',
      'label' => 'Date/Time Precision',
      'required' => 1,
      'settings' => array(
        'max' => '2147483647',
        'min' => '0',
        'prefix' => '±',
        'suffix' => ' seconds',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '1|Second
60|Minute
3600|Hour
86400|Day
604800|Week
2592000|Month
7776000|Three Months
15778440|Six Months
31557600|Year
315576000|Decade
2147483647|> 50 Years',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => 'Please enter an accuracy in seconds (e.g. 1209600 = two weeks)',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '50',
      ),
    ),
  );

  // Exported field: 'node-observation-field_date_notes'.
  $fields['node-observation-field_date_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p><strong>Optional:</strong> This area is intended to hold any extra information about the date entered. For example, "<em>This observation was likely made during the second week of October, however since I was uncertain I marked that the observation was made at some point between October 1st and October 31st with a low confidence selected.</em>"</p> ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '23',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date_notes',
      'label' => 'Date Notes',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '4',
        ),
        'type' => 'text_textarea',
        'weight' => '40',
      ),
    ),
  );

  // Exported field: 'node-observation-field_datetime'.
  $fields['node-observation-field_datetime'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_datetime',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '2',
        'cache_enabled' => 1,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'date',
      ),
      'translatable' => '0',
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'longz',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '20',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_datetime',
      'label' => 'Date Time',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 1,
          'increment' => '1',
          'input_format' => 'm/d/Y - g:i:sa',
          'input_format_custom' => '',
          'label_position' => 'above',
          'multiple_value_widget' => 'table',
          'text_parts' => array(),
          'year_range' => '-10:+0',
        ),
        'type' => 'date_popup',
        'weight' => '49',
      ),
    ),
  );

  // Exported field: 'node-observation-field_directions'.
  $fields['node-observation-field_directions'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_directions',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p><strong>Optional:</strong> Enter a description of how to get to this location, for example, "<em>From Crouch drive west on the Banks-Lowman Highway then north on Scott Mountain Road for 5.5 miles. Make sure you have spare tires.</em>"</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '14',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_directions',
      'label' => 'Directions',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-observation-field_email'.
  $fields['node-observation-field_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '27',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_email',
      'label' => 'Email',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '50',
      ),
    ),
  );

  // Exported field: 'node-observation-field_entry_author'.
  $fields['node-observation-field_entry_author'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_entry_author',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '43',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_entry_author',
      'label' => 'Entry Author',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '57',
      ),
    ),
  );

  // Exported field: 'node-observation-field_file'.
  $fields['node-observation-field_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'deleted' => '0',
      'description' => 'If you have any external references, spatial files or documentation for this observation please attach them here.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '31',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_file',
      'label' => 'File(s)',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => 'observations/files/[current-date:custom:Y]/[current-date:custom:m]',
        'file_extensions' => 'pdf ppt pptx doc docx xls xlsx csv kmz kml zip gpx txt readme',
        'max_filesize' => '10 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '53',
      ),
    ),
  );

  // Exported field: 'node-observation-field_full_name'.
  $fields['node-observation-field_full_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_full_name',
      'foreign keys' => array(),
      'indexes' => array(
        'family' => array(
          0 => 'family',
        ),
        'given' => array(
          0 => 'given',
        ),
      ),
      'locked' => '0',
      'module' => 'name',
      'settings' => array(
        'allow_family_or_given' => 0,
        'autocomplete_separator' => array(
          'credentials' => ', ',
          'family' => ' -',
          'generational' => ' ',
          'given' => ' -',
          'middle' => ' -',
          'title' => ' ',
        ),
        'autocomplete_source' => array(
          'credentials' => array(),
          'family' => array(),
          'generational' => array(
            'generational' => 'generational',
          ),
          'given' => array(),
          'middle' => array(),
          'title' => array(
            'title' => 'title',
          ),
        ),
        'components' => array(
          'credentials' => 0,
          'family' => 'family',
          'generational' => 'generational',
          'given' => 'given',
          'middle' => 'middle',
          'title' => 'title',
        ),
        'generational_options' => '-- --
Jr.
Sr.
I
II
III
IV
V
VI
VII
VIII
IX
X',
        'labels' => array(
          'credentials' => 'Credentials',
          'family' => 'Family',
          'generational' => 'Generational',
          'given' => 'Given',
          'middle' => 'Middle name(s)',
          'title' => 'Title',
        ),
        'max_length' => array(
          'credentials' => '255',
          'family' => '63',
          'generational' => '15',
          'given' => '63',
          'middle' => '127',
          'title' => '31',
        ),
        'minimum_components' => array(
          'credentials' => 0,
          'family' => 'family',
          'generational' => 0,
          'given' => 0,
          'middle' => 0,
          'title' => 0,
        ),
        'sort_options' => array(
          'generational' => 0,
          'title' => 'title',
        ),
        'title_options' => '-- --
Mr.
Mrs.
Miss
Ms.
Capt.
Dr.
Prof.
Sir.',
      ),
      'translatable' => '0',
      'type' => 'name',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter as much or as little of their name as you know. Logging in will allow you to enter multiple as well as save and reuse observers.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'name',
          'settings' => array(
            'format' => 'default',
            'markup' => 0,
            'multiple' => 'default',
            'multiple_and' => 'text',
            'multiple_delimiter' => ', ',
            'multiple_delimiter_precedes_last' => 'never',
            'multiple_el_al_first' => 1,
            'multiple_el_al_min' => 3,
            'output' => 'default',
          ),
          'type' => 'name_formatter',
          'weight' => '23',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_full_name',
      'label' => 'Observer',
      'required' => 0,
      'settings' => array(
        'component_css' => '',
        'component_layout' => 'default',
        'credentials_inline' => 0,
        'field_type' => array(
          'credentials' => 'text',
          'family' => 'text',
          'generational' => 'select',
          'given' => 'text',
          'middle' => 'text',
          'title' => 'select',
        ),
        'generational_field' => 'select',
        'inline_css' => array(
          'credentials' => '',
          'family' => '',
          'generational' => '',
          'given' => '',
          'middle' => '',
          'title' => '',
        ),
        'override_format' => 'default',
        'show_component_required_marker' => 0,
        'size' => array(
          'credentials' => '35',
          'family' => '20',
          'generational' => '5',
          'given' => '20',
          'middle' => '20',
          'title' => '6',
        ),
        'title_display' => array(
          'credentials' => 'description',
          'family' => 'description',
          'generational' => 'description',
          'given' => 'description',
          'middle' => 'description',
          'title' => 'description',
        ),
        'title_field' => 'select',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'name',
        'settings' => array(),
        'type' => 'name_widget',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'node-observation-field_gmu'.
  $fields['node-observation-field_gmu'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gmu',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'gmu',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '19',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_gmu',
      'label' => 'Game Management Unit',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'options_buttons',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation-field_habitat_description'.
  $fields['node-observation-field_habitat_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_habitat_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p><strong>Optional:</strong> Enter a description about the characteristics of the landscape in the immediate vicinity of this location.  For example, "<em>mature lodgepole pine on high mountain slope.</em>"</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '17',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_habitat_description',
      'label' => 'Habitat Description',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation-field_highway'.
  $fields['node-observation-field_highway'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_highway',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '10',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '21',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_highway',
      'label' => 'Highway',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '10',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-observation-field_identification_tools'.
  $fields['node-observation-field_identification_tools'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_identification_tools',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'What tools, guides or reference materials were used to assist with this identification?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '30',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_identification_tools',
      'label' => 'Identification Tools',
      'required' => 0,
      'settings' => array(
        'exclude_cv' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '2',
        ),
        'type' => 'text_textarea',
        'weight' => '52',
      ),
    ),
  );

  // Exported field: 'node-observation-field_life_stage'.
  $fields['node-observation-field_life_stage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_life_stage',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Unknown' => 'Unknown',
          'Immature' => 'Immature',
          'Juvenile' => 'Juvenile',
          'Subadult' => 'Subadult',
          'Mature' => 'Mature',
          'Yearling' => 'Yearling',
          'Egg' => 'Egg',
          'Pupa' => 'Pupa',
          'Larva' => 'Larva',
          'Nymph' => 'Nymph',
          'Seedling' => 'Seedling',
          'Vegetative' => 'Vegetative',
          'Flowering' => 'Flowering',
          'Fruiting' => 'Fruiting',
          'Dormant' => 'Dormant',
          'Mixed' => 'Mixed',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => 'Unknown',
        ),
      ),
      'deleted' => '0',
      'description' => 'How old was the individual(s)?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '7',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_life_stage',
      'label' => 'Life Stage',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-observation-field_life_state'.
  $fields['node-observation-field_life_state'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_life_state',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Unknown' => 'Unknown',
          'Dead' => 'Dead',
          'Alive' => 'Alive',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => 'Alive',
        ),
      ),
      'deleted' => '0',
      'description' => 'Dead or Alive?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '6',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_life_state',
      'label' => 'Life State',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-observation-field_location'.
  $fields['node-observation-field_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'backend' => 'default',
        'srid' => '4326',
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Examples:
<em>
<ul>
<li>{"type":"Point","coordinates":[-116.8,48.49]}</li>
<li>{"type":"Polygon","coordinates":[[[-114.1378,43.34123],[-114.8,43.523],[-114.08,43],[-114.1378,43.34123]]]}</li>
<li>{"type":"LineString","coordinates":[[-104.98726129532,39.741361723361],[-104.98720765114,39.741324599196],[-104.98715400696,39.741270975367]]}</li>
<li>{"type":"GeometryCollection","geometries":[{"type":"Point","coordinates":[100.5,0.5]},{"type":"LineString","coordinates":[[101.7,0.7],[102.7,1.7]]},{"type":"MultiPolygon","coordinates":[[[[102,2],[103,2],[103,3],[102,3],[102,2]]],[[[100,0],[101,0],[101,1],[100,1],[100,0]]]]}]}</li>
</ul>
</em>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield_map',
          'settings' => array(
            'geofield_map_baselayers_hybrid' => 1,
            'geofield_map_baselayers_map' => 1,
            'geofield_map_baselayers_physical' => 1,
            'geofield_map_baselayers_satellite' => 1,
            'geofield_map_center' => array(
              'lat' => 0,
              'lon' => 0,
            ),
            'geofield_map_controltype' => 'default',
            'geofield_map_draggable' => 1,
            'geofield_map_height' => '440px',
            'geofield_map_maptype' => 'physical',
            'geofield_map_max_zoom' => '0',
            'geofield_map_min_zoom' => '0',
            'geofield_map_mtc' => 'standard',
            'geofield_map_overview' => 0,
            'geofield_map_overview_opened' => 0,
            'geofield_map_pancontrol' => 1,
            'geofield_map_scale' => 1,
            'geofield_map_scrollwheel' => 0,
            'geofield_map_streetview_show' => 1,
            'geofield_map_width' => '100%',
            'geofield_map_zoom' => '12',
          ),
          'type' => 'geofield_map_map',
          'weight' => '10',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location',
      'label' => 'Location',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(),
        'type' => 'geofield_geojson',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-observation-field_location_confidence'.
  $fields['node-observation-field_location_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_confidence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => '1000',
        ),
      ),
      'deleted' => '0',
      'description' => 'How precise is this location?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => 1,
            'scale' => 0,
            'thousand_separator' => ',',
          ),
          'type' => 'number_integer',
          'weight' => '11',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_confidence',
      'label' => 'Location Precision',
      'required' => 1,
      'settings' => array(
        'max' => '10000000',
        'min' => '0',
        'prefix' => '±',
        'suffix' => ' meters',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '10|Precise (within 10m/11yd)
50|Accurate (within 50m/55yd)
250|Moderate Precision (within 250m/273yd)
1000|Estimated Precision (< 1km/0.6mi)
10000|Low Precision (> 1km/0.6mi)',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => 'Please enter an accuracy in meters',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-observation-field_location_resource'.
  $fields['node-observation-field_location_resource'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_resource',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '12',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_resource',
      'label' => 'Location Resource',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-observation-field_location_steps'.
  $fields['node-observation-field_location_steps'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_steps',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Processing steps',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '16',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_steps',
      'label' => 'Location Steps',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-observation-field_location_unresolveable'.
  $fields['node-observation-field_location_unresolveable'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_unresolveable',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '40',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_unresolveable',
      'label' => 'Location Unresolveable',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation-field_location_use'.
  $fields['node-observation-field_location_use'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_use',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Not Applicable' => 'Not Applicable',
          'Unknown' => 'Unknown',
          'Breeding' => 'Breeding',
          'Migratory' => 'Migratory',
          'Non-breeding Aggregation' => 'Non-breeding Aggregation (e.g. Bachelor colony, den, roosting)',
          'Hibernaculum' => 'Hibernaculum',
          'Presumed Hibernaculum' => 'Presumed Hibernaculum',
          'Maternity colony' => 'Maternity colony',
          'Bachelor colony' => 'Bachelor colony',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => 'Unknown',
        ),
      ),
      'deleted' => '0',
      'description' => 'Is this location of special conservation significance?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '15',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_use',
      'label' => 'Location Use',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation-field_milepost'.
  $fields['node-observation-field_milepost'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_milepost',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '22',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_milepost',
      'label' => 'Milepost',
      'required' => 0,
      'settings' => array(
        'max' => '550',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-observation-field_museum'.
  $fields['node-observation-field_museum'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_museum',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'ANSP' => 'Academy of Natural Sciences [ANSP]',
          'PH' => 'Academy of Natural Sciences Herbarium [PH]',
          'AMNH' => 'American Museum of Natural History [AMNH]',
          'BLM-OWYHEE' => 'BLM-Owyhee Field Office Herbarium [BLM-OWYHEE]',
          'BLM-POCAT' => 'BLM-Pocatello Field Office Herbarium [BLM-POCAT]',
          'BLM-SALMON' => 'BLM-Salmon Field Office Herbarium [BLM-SALMON]',
          'BSU' => 'Boise State University [BSU]',
          'BYU' => 'Brigham Young University [BYU]',
          'BRY' => 'Brigham Young University Herbarium [BRY]',
          'CAS' => 'California Academy of Sciences [CAS]',
          'NML' => 'Canadian Museum of Nature [NML]',
          'CAN' => 'Canadian Museum of Nature Herbarium [CAN]',
          'CM' => 'Carnegie Museum [CM]',
          'CIC' => 'College of Idaho Herbarium (formerly Albertson College of Idaho) [CIC]',
          'CU' => 'Cornell University [CU]',
          'FMNH' => 'Field Museum of Natural History [FMNH]',
          'F' => 'Field Museum of Natural History Herbarium [F]',
          'FLMNH' => 'Florida Museum of Natural History [FLMNH]',
          'OJS' => 'from Comb_PHV2 list [OJS]',
          'AC' => 'from NIHDBID list - Albertson\'s syn?? [AC]',
          'UF' => 'from NIHDBID list [UF]',
          'GLAC' => 'Glacier National Park Collection [GLAC]',
          'GH' => 'Harvard University [GH]',
          'IDFG' => 'Idaho Department of Fish and Game Herbarium [IDFG]',
          'IMNH' => 'Idaho Museum of Natural History [IMNH]',
          'IDAHO' => 'Idaho State University [IDAHO]',
          'IDS' => 'Idaho State University Herbarium [IDS]',
          'INHS' => 'Illinois Natural History Survey [INHS]',
          'IND' => 'Indiana University Herbarium [IND]',
          'BOIS' => 'Intermountain Forest and Range Experiment Station Herbarium, USFS [BOIS]',
          'LCSC' => 'Lewis-Clark State College [LCSC]',
          'LACM' => 'Los Angeles County Museum [LACM]',
          'LSUMZ' => 'Louisiana State University [LSUMZ]',
          'LTU' => 'Louisiana Tech University [LTU]',
          'WS' => 'Marion Ownbey Herbarium, Washington State University [WS]',
          'MSUM' => 'Michigan State University [MSUM]',
          'MPM' => 'Milwaukee Public Museum [MPM]',
          'MO' => 'Missouri Botanical Garden Herbarium [MO]',
          'MTHP' => 'Montana Natural Heritage Program [MTHP]',
          'MSBU' => 'Montana State University [MSBU]',
          'MRNP' => 'Mount Rainier National Park Herbarium [MRNP]',
          'MCZ' => 'Museum of Comparative Zoology - Harvard [MCZ]',
          'UIMNH' => 'Museum of Natural History, Champaign-Urbana, University of Illinois [UIMNH]',
          'ACMNH' => 'Orma J. Smith Museum of Natural History, College of Idaho (ALBRCIDA) (formerly Albertson College of Idaho) [ACMNH]',
          'UGAMNH' => 'Museum of Natural History, University of Georgia [UGAMNH]',
          'MSB' => 'Museum of Southwestern Biology [MSB]',
          'NA' => 'NA Herbarium [NA]',
          'NY' => 'New York Botanical Garden Herbarium [NY]',
          'NPT' => 'Nez Perce Tribe Herbarium [NPT]',
          'NCSM' => 'North Carolina State Museum of Natural History [NCSM]',
          'NLU' => 'Northern Louisiana University [NLU]',
          'NMUMZ' => 'Northern Michigan University, Marquette [NMUMZ]',
          'NNC' => 'Northwest Nazarene College [NNC]',
          'OMNH' => 'Oklahoma Museum of Natural History [OMNH]',
          'OSC' => 'Oregon State University Herbarium [OSC]',
          'PLU' => 'Pacific Lutheran University [PLU]',
          'RM' => 'Rocky Mountain Herbarium [RM]',
          'PS' => 'Slater Museum of Natural History Herbarium, University of Puget Sound [PS]',
          'SRP' => 'Snake River Plains Herbarium, Boise State University [SRP]',
          'STI' => 'Stillenger Herbarium, University of Idaho [STI]',
          'TCWC' => 'Texas A&M University [TCWC]',
          'TTU' => 'Texas Technical University [TTU]',
          'TU' => 'Tulane University [TU]',
          'DAV' => 'UC Davis Herbarium, University of California [DAV]',
          'US' => 'United States National Herbarium, Smithsonian Institution [US]',
          'USNM' => 'United States National Museum, Smithsonian Institution [USNM]',
          'MVZ' => 'University of California - Berkeley [MVZ]',
          'UC' => 'University of California Herbarium - Berkeley [UC]',
          'UCM' => 'University of Colorado [UCM]',
          'GA' => 'University of Georgia Herbarium [GA]',
          'UIDA' => 'University of Idaho [UIDA]',
          'UIM' => 'University of Idaho [UIM]',
          'IDF' => 'University of Idaho Herbarium, College of Forestry [IDF]',
          'KU' => 'University of Kansas [KU]',
          'UL' => 'University of Louisville [UL]',
          'UMMZ' => 'University of Michigan [UMMZ]',
          'MICH' => 'University of Michigan Herbarium [MICH]',
          'UMZ' => 'University of Montana [UMZ]',
          'NCU' => 'University of North Carolina Herbarium [NCU]',
          'ORE' => 'University of Oregon Herbarium [ORE]',
          'CPS' => 'University of Puget Sound [CPS]',
          'USD' => 'University of South Dakota [USD]',
          'UTACV' => 'University of Texas - Arlington [UTACV]',
          'UTEP' => 'University of Texas - El Paso [UTEP]',
          'UU' => 'University of Utah [UU]',
          'WTU' => 'University of Washington Herbarium [WTU]',
          'WAT' => 'University of Waterloo Herbarium [WAT]',
          'UWO' => 'University of Western Ontario Herbarium [UWO]',
          'DAO' => 'Vascular Plant Herbarium, Agriculture & Agri-Food Canada [DAO]',
          'CRCM' => 'Washington State University [CRCM]',
          'WSC' => 'Washington State University Herbarium [WSC]',
          'WILLU' => 'Willamette University Herbarium [WILLU]',
          'YMP' => 'Yale University [YMP]',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '42',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_museum',
      'label' => 'Museum',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '55',
      ),
    ),
  );

  // Exported field: 'node-observation-field_observation_method'.
  $fields['node-observation-field_observation_method'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_observation_method',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Seen' => 'Individual(s) Observed (seen)',
          'Hand' => 'Observed Individual(s) in Hand or Close Range',
          'Heard' => 'Heard Vocalizations',
          'Nest' => 'Nest, Den, Burrow or Habitation Observed',
          'Scat' => 'Scat Observed',
          'Tracks' => 'Tracks Observed',
          'Telemetry' => 'Telemetry (GPS, Argos, Radio collar)',
          'Sample' => 'Sample Collected',
          'Specimen' => 'Museum or Herbarium Specimen',
          'Photographed' => 'Photographed',
          'Negative' => 'Not Found (Negative Data)',
          'EnfInvestigation' => 'Enforcement Investigation',
          'Unknown' => 'Unknown',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please choose all methods that apply.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '2',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_observation_method',
      'label' => 'Observation Method(s)',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-observation-field_observer'.
  $fields['node-observation-field_observer'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_observer',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'bgmr' => 0,
          'collar' => 0,
          'individual' => 0,
          'issue' => 0,
          'observation' => 0,
          'observation_capture' => 0,
          'observation_import' => 0,
          'observation_in_aerial_survey' => 0,
          'observation_in_waterbird_survey' => 0,
          'observation_individual' => 0,
          'observation_plant' => 0,
          'page' => 0,
          'person' => 'person',
          'roadkill' => 0,
          'survey_aerial' => 0,
          'survey_site' => 0,
          'survey_waterbird' => 0,
          'swap_species_prioritization' => 0,
          'swap_species_projects_actions_fo' => 0,
          'taxa' => 0,
          'unlawful_take' => 0,
          'weed_control' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Who observed this animal or plant? The first observer is required. You may drag and drop to reorder the list.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '22',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_observer',
      'label' => 'Observer(s)',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'starts_with',
          'autocomplete_path' => 'node_reference/autocomplete',
          'multiple_value_widget' => 'table',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_hide_input' => 1,
          'references_dialog_remove' => 1,
          'references_dialog_search' => 1,
          'references_dialog_search_view' => '',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'node-observation-field_organization'.
  $fields['node-observation-field_organization'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Agency, Group, Business, etc.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '24',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization',
      'label' => 'Organization',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '47',
      ),
    ),
  );

  // Exported field: 'node-observation-field_phone'.
  $fields['node-observation-field_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '20',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '28',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '49',
      ),
    ),
  );

  // Exported field: 'node-observation-field_photo'.
  $fields['node-observation-field_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'deleted' => '0',
      'description' => 'Share photos of your observation to help the community confirm your identification.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'medium640',
          ),
          'type' => 'image',
          'weight' => '9',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_photo',
      'label' => 'Photo(s)',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'observations/photos/[current-date:custom:Y]/[current-date:custom:m]',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '10 MB',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-observation-field_position'.
  $fields['node-observation-field_position'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_position',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Job title and/or experience as it relates to fish, game and the outdoors',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '25',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_position',
      'label' => 'Position',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '46',
      ),
    ),
  );

  // Exported field: 'node-observation-field_region'.
  $fields['node-observation-field_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_region',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'fish_game_region',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '18',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_region',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-observation-field_sacode'.
  $fields['node-observation-field_sacode'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sacode',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The SA code is for internal use only.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '37',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sacode',
      'label' => 'SA code (IDFG Reference Code)',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '60',
      ),
    ),
  );

  // Exported field: 'node-observation-field_sensitive'.
  $fields['node-observation-field_sensitive'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sensitive',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Academic research' => 'Academic research',
          'Private land' => 'Private land',
          'Location use' => 'Sensitive location use',
          'Cave' => 'Sensitive location cave',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '45',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sensitive',
      'label' => 'Sensitive',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_buttons',
        'weight' => '58',
      ),
    ),
  );

  // Exported field: 'node-observation-field_session'.
  $fields['node-observation-field_session'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_session',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '35',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_session',
      'label' => 'Session',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '64',
      ),
    ),
  );

  // Exported field: 'node-observation-field_sex'.
  $fields['node-observation-field_sex'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sex',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Unknown' => 'Unknown',
          'Female' => 'Female',
          'Male' => 'Male',
          'Both' => 'Both Sexes',
          'NA' => 'Not Applicable',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => 'Unknown',
        ),
      ),
      'deleted' => '0',
      'description' => 'Male, Female or Not Applicable?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '5',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sex',
      'label' => 'Sex',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-observation-field_source_agency'.
  $fields['node-observation-field_source_agency'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_source_agency',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '36',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_source_agency',
      'label' => 'Source Agency',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Aquila Environmental
Boise State University
City of Boise
Coeur d\'Alene Tribe
College of Idaho
Contractor
Cornell Laboratory of Ornithology
Idaho Army National Guard
Idaho Bird Observatory
Idaho Department of Environmental Quality
Idaho Department of Fish and Game
Idaho Power Company
Latah Soil and Water Conservation District
Maxim Technologies
Other
Potlatch Corportation
Raptor Research Center
Red Willow Research, Inc.
Science Applications International Corporation, Environmental Programs Division
Shoshone-Paiute Tribes
TetraTech
The Nature Conservancy of Idaho
Trec, Inc.
U.S. Bureau of Land Management
U.S. Fish and Wildlife Service
U.S. Forest Service
U.S. Forest Service -- NRIS Fauna
U.S. Geological Survey
University of Idaho
various, patuxent data dump
WEST, Inc
Idaho Cave Survey
ERO Resources Corp.
Idaho State University
JBR Environmental Consultants Inc.
Wong Fei Hung
Xover
Survey
Glen Plake
Mike Grant',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'available',
          'sort_options' => 1,
        ),
        'type' => 'select_or_other',
        'weight' => '58',
      ),
    ),
  );

  // Exported field: 'node-observation-field_source_type'.
  $fields['node-observation-field_source_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_source_type',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => 'Animal Observation Report (Sightings)',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '41',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_source_type',
      'label' => 'Source Type',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Animal Observation Report (Sightings)
Digital, Hand entered
Digital, Appended
Data Spreadsheet, Hard Copy (Sightings)
Unpublished agency report
Published report
Data Spreadsheet, Hard Copy (w/ source code)
Misc (email, notes, etc) (Sightings)
Museum Collections Record
Plant Observation Report -Hard copy (Sightings)
Plant Observation Report-Digital (Electronic File)
Herbarium Label (Sightings)
Herbarium Label
Scientific Reporting Permit',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'available',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '63',
      ),
    ),
  );

  // Exported field: 'node-observation-field_species'.
  $fields['node-observation-field_species'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_species',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'bgmr' => 0,
          'collar' => 0,
          'individual' => 0,
          'observation' => 0,
          'observation_capture' => 0,
          'observation_import' => 0,
          'observation_in_aerial_survey' => 0,
          'observation_in_waterbird_survey' => 0,
          'observation_individual' => 0,
          'observations_of_plants' => 0,
          'page' => 0,
          'person' => 0,
          'roadkill' => 0,
          'survey_aerial' => 0,
          'survey_plant' => 0,
          'survey_site' => 0,
          'survey_waterbird' => 0,
          'swap_species_prioritization' => 0,
          'swap_species_projects_actions_fo' => 0,
          'taxa' => 'taxa',
          'unlawful_take' => 0,
          'weed_control' => 0,
        ),
        'references_id_trim_roles' => array(
          2 => '2',
          3 => '3',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please enter the species or taxa that was observed. Choices will appear as you type, please select one.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(
            'node_reference_view_mode' => 'preview',
          ),
          'type' => 'node_reference_node',
          'weight' => '0',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_species',
      'label' => 'Species',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'starts_with',
          'autocomplete_path' => 'node_reference/autocomplete',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_hide_input' => 0,
          'references_dialog_remove' => 0,
          'references_dialog_search' => 0,
          'references_dialog_search_view' => '',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-observation-field_species_account'.
  $fields['node-observation-field_species_account'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_species_account',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p><strong>Optional, but helpful:</strong> Tell us about this sighting. Tell us details such as the color, size, behavior, identifiable features, etc. or give us more information about your encounter.</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_species_account',
      'label' => 'Species Account',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation-field_species_confidence'.
  $fields['node-observation-field_species_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_species_confidence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => '50',
        ),
      ),
      'deleted' => '0',
      'description' => 'How confident are you of this identification?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'select_or_other',
          'settings' => array(),
          'type' => 'select_or_other_formatter',
          'weight' => '1',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_species_confidence',
      'label' => 'Species Confidence',
      'required' => 1,
      'settings' => array(
        'max' => '100',
        'min' => '0',
        'prefix' => '',
        'suffix' => '%',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '0|Please help me identify!
10|I\'m guessing here...
50|Probably. I\'m a bit uncertain
80|I\'m very confident
100|I\'m absolutely certain',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => 'Enter a percent certainty as an integer between 0 (No idea) and 100 (Certain)',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-observation-field_specimen_number'.
  $fields['node-observation-field_specimen_number'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_specimen_number',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '39',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_specimen_number',
      'label' => 'Specimen Number',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '56',
      ),
    ),
  );

  // Exported field: 'node-observation-field_survey_method'.
  $fields['node-observation-field_survey_method'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_survey_method',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => array(
        0 => array(
          'value' => 'Incidental Observation',
        ),
      ),
      'deleted' => '0',
      'description' => 'If this observation is part of a larger survey or protocol, please select the best match or add.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '33',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_survey_method',
      'label' => 'Survey Method',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Bald Eagle Nest Monitoring
BLM Survey
Breeding Bird Survey
Bruneau Dunes Tiger Beetle DNA Study
Burrowing Owl Survey
Colony Counts
Columbia Spotted Frog GBDPS Survey
Cursory or Incidental-Non Thorough Survey
EDRR
Fairly Thorough Survey
Fisheries Survey
Four Rivers Burrowing Owl Survey
Golden Eagle Nest Monitoring
Harlequin Duck Aerial Survey
Harlequin Duck Ground Survey
Herbarium Label
Idaho Falls District Burrowing Owl Survey
Idaho Waterbird Survey
Incidental Observation
Inventory/Targeted Survey
Landbird Survey
Long-billed Curlew Survey
MAPS
Marshbird Monitoring
Monitoring
Monitoring program
Plant Summary
Raptor Nest Survey
Red Willow Research Center Inventory or Survey
Revisit to previously known location
Sandhill Crane Rocky Mtn Pop Survey
Snow Track Survey
Steenhof
Trumpeter Swan Survey
Very Thorough Survey
Hibernacula Monitoring Survey
Forest Service Owl Survey
ERO Resources Corp. survey
Idaho Training Range EIS field survey
Upland Raptor Survey
OHV Trail Use Monitoring with remote sensing cameras
Recreation Maintenance work at the Grayback Campground, SW of Idaho City, ID
Mourning Dove Call Count Survey
Invertebrate Collecting
Bat Survey
Survey
Sightability - Abundance
Trend Count
Winter Comp
Summer Comp
Fixed Wing
Found during sagebrush and range use surveys incidentally 
found during a fuel moisture survey collecting needles 
Observed on trail camera - see attached photo
Research Project
Incidentally trapped
Trail camera',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '54',
      ),
    ),
  );

  // Exported field: 'node-observation-field_survey_site'.
  $fields['node-observation-field_survey_site'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_survey_site',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'property' => 'title',
            'type' => 'property',
          ),
          'target_bundles' => array(
            'survey_site' => 'survey_site',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value_function' => 'entityreference_prepopulate_field_default_value',
      'deleted' => '0',
      'description' => 'Optional add a survey site if this is a revisited location such as a lek, survey route or bird count stop.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => 1,
          ),
          'type' => 'entityreference_label',
          'weight' => '13',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_survey_site',
      'label' => 'Survey Site',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'action' => 'none',
            'action_on_edit' => 0,
            'fallback' => 'none',
            'og_context' => 0,
            'skip_perm' => '0',
            'status' => 1,
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'delete_references' => 0,
            'ief_view_mode' => 'inline_entity_form',
            'match_operator' => 'STARTS_WITH',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-observation-field_verification_status'.
  $fields['node-observation-field_verification_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_verification_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'verified' => 'Verified',
          'possible' => 'Possible',
          'unverified' => 'Unverified',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '47',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_verification_status',
      'label' => 'Verification Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '65',
      ),
    ),
  );

  // Exported field: 'node-observation-field_xid'.
  $fields['node-observation-field_xid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_xid',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '44',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_xid',
      'label' => 'Source ID',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '61',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_address'.
  $fields['node-observation_nest_survey-field_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => 24,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_address',
      'label' => 'Address',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'format_handlers' => array(
            0 => 'address',
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_coreid'.
  $fields['node-observation_nest_survey-field_coreid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_coreid',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 48,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_coreid',
      'label' => 'ObserveDetailID',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_count'.
  $fields['node-observation_nest_survey-field_count'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_count',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => 'How many did you observe?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 1,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_count',
      'label' => 'Count',
      'required' => 1,
      'settings' => array(
        'max' => '10000',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_count_type'.
  $fields['node-observation_nest_survey-field_count_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_count_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Absolute' => 'Absolute',
          'Estimate' => 'An Estimate',
          'Minimum' => 'A Minimum',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => 'Absolute',
        ),
      ),
      'deleted' => '0',
      'description' => 'This count was...',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_count_type',
      'label' => 'Count Type',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_county'.
  $fields['node-observation_nest_survey-field_county'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_county',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'county',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 3,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_county',
      'label' => 'County',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'options_buttons',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_data_entry_notes'.
  $fields['node-observation_nest_survey-field_data_entry_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_entry_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 38,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_data_entry_notes',
      'label' => 'Data Entry Notes',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_date_confidence'.
  $fields['node-observation_nest_survey-field_date_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date_confidence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => '86400',
        ),
      ),
      'deleted' => '0',
      'description' => 'The selected date/time is accurate within... ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 29,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date_confidence',
      'label' => 'Date/Time Precision',
      'required' => 1,
      'settings' => array(
        'max' => '2147483647',
        'min' => '0',
        'prefix' => '±',
        'suffix' => ' seconds',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '1|Second
60|Minute
3600|Hour
86400|Day
604800|Week
2592000|Month
7776000|Three Months
15778440|Six Months
31557600|Year
315576000|Decade
2147483647|> 50 Years',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => 'Please enter an accuracy in seconds (e.g. 1209600 = two weeks)',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_date_notes'.
  $fields['node-observation_nest_survey-field_date_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p><strong>Optional:</strong> This area is intended to hold any extra information about the date entered. For example, "<em>This observation was likely made during the second week of October, however since I was uncertain I marked that the observation was made at some point between October 1st and October 31st with a low confidence selected.</em>"</p> ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_date_notes',
      'label' => 'Date Notes',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '4',
        ),
        'type' => 'text_textarea',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_datetime'.
  $fields['node-observation_nest_survey-field_datetime'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_datetime',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '2',
        'cache_enabled' => 1,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'date',
      ),
      'translatable' => '0',
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => 36,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_datetime',
      'label' => 'Date Time',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 1,
          'increment' => '1',
          'input_format' => 'm/d/Y - g:i:sa',
          'input_format_custom' => '',
          'label_position' => 'above',
          'multiple_value_widget' => 'table',
          'text_parts' => array(),
          'year_range' => '-10:+0',
        ),
        'type' => 'date_popup',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_directions'.
  $fields['node-observation_nest_survey-field_directions'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_directions',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p><strong>Optional:</strong> Enter a description of how to get to this location, for example, "<em>From Crouch drive west on the Banks-Lowman Highway then north on Scott Mountain Road for 5.5 miles. Make sure you have spare tires.</em>"</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 5,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_directions',
      'label' => 'Directions',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_ecological_system'.
  $fields['node-observation_nest_survey-field_ecological_system'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ecological_system',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The ecological system where the observation occurred.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 60,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ecological_system',
      'label' => 'Ecological System',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'multiple_value_widget' => 'table',
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_ecological_systems'.
  $fields['node-observation_nest_survey-field_ecological_systems'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ecological_systems',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The ecological system(s) adjacent to where the observation occurred, if different',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 61,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ecological_systems',
      'label' => 'Adjacent Ecological Systems',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'multiple_value_widget' => 'table',
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_email'.
  $fields['node-observation_nest_survey-field_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => 27,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_email',
      'label' => 'Email',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_entry_author'.
  $fields['node-observation_nest_survey-field_entry_author'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_entry_author',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 43,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_entry_author',
      'label' => 'Entry Author',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_file'.
  $fields['node-observation_nest_survey-field_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'deleted' => '0',
      'description' => 'If you have any external references, spatial files or documentation for this observation please attach them here.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 6,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_file',
      'label' => 'File(s)',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => 'observations/files/[current-date:custom:Y]/[current-date:custom:m]',
        'file_extensions' => 'pdf ppt pptx doc docx xls xlsx csv kmz kml zip gpx txt readme',
        'max_filesize' => '10 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_full_name'.
  $fields['node-observation_nest_survey-field_full_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_full_name',
      'foreign keys' => array(),
      'indexes' => array(
        'family' => array(
          0 => 'family',
        ),
        'given' => array(
          0 => 'given',
        ),
      ),
      'locked' => '0',
      'module' => 'name',
      'settings' => array(
        'allow_family_or_given' => 0,
        'autocomplete_separator' => array(
          'credentials' => ', ',
          'family' => ' -',
          'generational' => ' ',
          'given' => ' -',
          'middle' => ' -',
          'title' => ' ',
        ),
        'autocomplete_source' => array(
          'credentials' => array(),
          'family' => array(),
          'generational' => array(
            'generational' => 'generational',
          ),
          'given' => array(),
          'middle' => array(),
          'title' => array(
            'title' => 'title',
          ),
        ),
        'components' => array(
          'credentials' => 0,
          'family' => 'family',
          'generational' => 'generational',
          'given' => 'given',
          'middle' => 'middle',
          'title' => 'title',
        ),
        'generational_options' => '-- --
Jr.
Sr.
I
II
III
IV
V
VI
VII
VIII
IX
X',
        'labels' => array(
          'credentials' => 'Credentials',
          'family' => 'Family',
          'generational' => 'Generational',
          'given' => 'Given',
          'middle' => 'Middle name(s)',
          'title' => 'Title',
        ),
        'max_length' => array(
          'credentials' => '255',
          'family' => '63',
          'generational' => '15',
          'given' => '63',
          'middle' => '127',
          'title' => '31',
        ),
        'minimum_components' => array(
          'credentials' => 0,
          'family' => 'family',
          'generational' => 0,
          'given' => 0,
          'middle' => 0,
          'title' => 0,
        ),
        'sort_options' => array(
          'generational' => 0,
          'title' => 'title',
        ),
        'title_options' => '-- --
Mr.
Mrs.
Miss
Ms.
Capt.
Dr.
Prof.
Sir.',
      ),
      'translatable' => '0',
      'type' => 'name',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter as much or as little of their name as you know. Logging in will allow you to enter multiple as well as save and reuse observers.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'name',
          'settings' => array(
            'format' => 'default',
            'markup' => 0,
            'multiple' => 'default',
            'multiple_and' => 'text',
            'multiple_delimiter' => ', ',
            'multiple_delimiter_precedes_last' => 'never',
            'multiple_el_al_first' => 1,
            'multiple_el_al_min' => 3,
            'output' => 'default',
          ),
          'type' => 'name_formatter',
          'weight' => 23,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_full_name',
      'label' => 'Observer',
      'required' => 0,
      'settings' => array(
        'component_css' => '',
        'component_layout' => 'default',
        'credentials_inline' => 0,
        'field_type' => array(
          'credentials' => 'text',
          'family' => 'text',
          'generational' => 'select',
          'given' => 'text',
          'middle' => 'text',
          'title' => 'select',
        ),
        'generational_field' => 'select',
        'inline_css' => array(
          'credentials' => '',
          'family' => '',
          'generational' => '',
          'given' => '',
          'middle' => '',
          'title' => '',
        ),
        'override_format' => 'default',
        'show_component_required_marker' => 0,
        'size' => array(
          'credentials' => '35',
          'family' => '20',
          'generational' => '5',
          'given' => '20',
          'middle' => '20',
          'title' => '6',
        ),
        'title_display' => array(
          'credentials' => 'description',
          'family' => 'description',
          'generational' => 'description',
          'given' => 'description',
          'middle' => 'description',
          'title' => 'description',
        ),
        'title_field' => 'select',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'name',
        'settings' => array(),
        'type' => 'name_widget',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_gmu'.
  $fields['node-observation_nest_survey-field_gmu'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gmu',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'gmu',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 7,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_gmu',
      'label' => 'Game Management Unit',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'options_buttons',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_habitat_description'.
  $fields['node-observation_nest_survey-field_habitat_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_habitat_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p><strong>Optional:</strong> Enter a description about the characteristics of the landscape in the immediate vicinity of this location.  For example, "<em>mature lodgepole pine on high mountain slope.</em>"</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 8,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_habitat_description',
      'label' => 'Habitat Description',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_highway'.
  $fields['node-observation_nest_survey-field_highway'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_highway',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '10',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 32,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_highway',
      'label' => 'Highway',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '10',
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_identification_tools'.
  $fields['node-observation_nest_survey-field_identification_tools'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_identification_tools',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'What tools, guides or reference materials were used to assist with this identification?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 9,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_identification_tools',
      'label' => 'Identification Tools',
      'required' => 0,
      'settings' => array(
        'exclude_cv' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '2',
        ),
        'type' => 'text_textarea',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_landowner'.
  $fields['node-observation_nest_survey-field_landowner'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_landowner',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'BLM' => 'Bureau of Land Management - BLM',
          'BOR' => 'Bureau of Reclamation - BOR',
          'COE' => 'Corp of Engineers - COE',
          'CO' => 'County',
          'MIL' => 'Military',
          'MUN' => 'Municipal',
          'NPS' => 'National Park Service - NPS',
          'OTHER' => 'Other',
          'PLS' => 'Palouse Land Trust',
          'PRIVATE' => 'Private',
          'STATE' => 'State of Idaho',
          'STATEFG' => 'State of Idaho Fish and Game - IDFG',
          'STATEPR' => 'State of Idaho Parks and Recreation - IDPR',
          'STATELAND' => 'State of Idaho Dept of Lands, Endowment',
          'STATEOTH' => 'State of Idaho - Other',
          'TET' => 'Teton Regional Land Trust',
          'IR' => 'Tribal Lands',
          'AIR' => 'U.S. Air Force',
          'TRI' => 'U.S. Bureau of Indian Affairs',
          'LU_USDA' => 'U.S. Department of Agriculture - USDA',
          'DEF' => 'U.S. Department of Defense',
          'DOE' => 'U.S. Department of Energy - DOE',
          'LU_DOI' => 'U.S. Department of Interior - DOI',
          'NWR' => 'U.S. Fish & Wildlife Service - NWR',
          'USFS' => 'U.S. Forest Service - USFS',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 63,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_landowner',
      'label' => 'Land Manager(s)',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_life_stage'.
  $fields['node-observation_nest_survey-field_life_stage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_life_stage',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Unknown' => 'Unknown',
          'Immature' => 'Immature',
          'Juvenile' => 'Juvenile',
          'Subadult' => 'Subadult',
          'Mature' => 'Mature',
          'Yearling' => 'Yearling',
          'Egg' => 'Egg',
          'Pupa' => 'Pupa',
          'Larva' => 'Larva',
          'Nymph' => 'Nymph',
          'Seedling' => 'Seedling',
          'Vegetative' => 'Vegetative',
          'Flowering' => 'Flowering',
          'Fruiting' => 'Fruiting',
          'Dormant' => 'Dormant',
          'Mixed' => 'Mixed',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => 'Unknown',
        ),
      ),
      'deleted' => '0',
      'description' => 'How old was the individual(s)?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 10,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_life_stage',
      'label' => 'Life Stage',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_life_state'.
  $fields['node-observation_nest_survey-field_life_state'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_life_state',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Unknown' => 'Unknown',
          'Dead' => 'Dead',
          'Alive' => 'Alive',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => 'Alive',
        ),
      ),
      'deleted' => '0',
      'description' => 'Dead or Alive?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 11,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_life_state',
      'label' => 'Life State',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_location'.
  $fields['node-observation_nest_survey-field_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'backend' => 'default',
        'srid' => '4326',
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Examples:
<em>
<ul>
<li>{"type":"Point","coordinates":[-116.8,48.49]}</li>
<li>{"type":"Polygon","coordinates":[[[-114.1378,43.34123],[-114.8,43.523],[-114.08,43],[-114.1378,43.34123]]]}</li>
<li>{"type":"LineString","coordinates":[[-104.98726129532,39.741361723361],[-104.98720765114,39.741324599196],[-104.98715400696,39.741270975367]]}</li>
<li>{"type":"GeometryCollection","geometries":[{"type":"Point","coordinates":[100.5,0.5]},{"type":"LineString","coordinates":[[101.7,0.7],[102.7,1.7]]},{"type":"MultiPolygon","coordinates":[[[[102,2],[103,2],[103,3],[102,3],[102,2]]],[[[100,0],[101,0],[101,1],[100,1],[100,0]]]]}]}</li>
</ul>
</em>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => 12,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location',
      'label' => 'Location',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(),
        'type' => 'geofield_geojson',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_location_comment'.
  $fields['node-observation_nest_survey-field_location_comment'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_comment',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 62,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_comment',
      'label' => 'Location Comment',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'multiple_value_widget' => 'table',
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_location_confidence'.
  $fields['node-observation_nest_survey-field_location_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_confidence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => '1000',
        ),
      ),
      'deleted' => '0',
      'description' => 'How precise is this location?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 30,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_confidence',
      'label' => 'Location Precision',
      'required' => 1,
      'settings' => array(
        'max' => '10000000',
        'min' => '0',
        'prefix' => '±',
        'suffix' => ' meters',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '10|Precise (within 10m/11yd)
50|Accurate (within 50m/55yd)
250|Moderate Precision (within 250m/273yd)
1000|Estimated Precision (< 1km/0.6mi)
10000|Low Precision (> 1km/0.6mi)',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => 'Please enter an accuracy in meters',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_location_resource'.
  $fields['node-observation_nest_survey-field_location_resource'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_resource',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 13,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_resource',
      'label' => 'Location Resource',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_location_steps'.
  $fields['node-observation_nest_survey-field_location_steps'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_steps',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Processing steps',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 14,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_steps',
      'label' => 'Location Steps',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_location_unresolveable'.
  $fields['node-observation_nest_survey-field_location_unresolveable'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_unresolveable',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 40,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_unresolveable',
      'label' => 'Location Unresolveable',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_location_use'.
  $fields['node-observation_nest_survey-field_location_use'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_use',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Not Applicable' => 'Not Applicable',
          'Unknown' => 'Unknown',
          'Breeding' => 'Breeding',
          'Migratory' => 'Migratory',
          'Non-breeding Aggregation' => 'Non-breeding Aggregation (e.g. Bachelor colony, den, roosting)',
          'Hibernaculum' => 'Hibernaculum',
          'Presumed Hibernaculum' => 'Presumed Hibernaculum',
          'Maternity colony' => 'Maternity colony',
          'Bachelor colony' => 'Bachelor colony',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => 'Unknown',
        ),
      ),
      'deleted' => '0',
      'description' => 'Is this location of special conservation significance?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 15,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_use',
      'label' => 'Location Use',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_milepost'.
  $fields['node-observation_nest_survey-field_milepost'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_milepost',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => 33,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_milepost',
      'label' => 'Milepost',
      'required' => 0,
      'settings' => array(
        'max' => '550',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_museum'.
  $fields['node-observation_nest_survey-field_museum'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_museum',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'ANSP' => 'Academy of Natural Sciences [ANSP]',
          'PH' => 'Academy of Natural Sciences Herbarium [PH]',
          'AMNH' => 'American Museum of Natural History [AMNH]',
          'BLM-OWYHEE' => 'BLM-Owyhee Field Office Herbarium [BLM-OWYHEE]',
          'BLM-POCAT' => 'BLM-Pocatello Field Office Herbarium [BLM-POCAT]',
          'BLM-SALMON' => 'BLM-Salmon Field Office Herbarium [BLM-SALMON]',
          'BSU' => 'Boise State University [BSU]',
          'BYU' => 'Brigham Young University [BYU]',
          'BRY' => 'Brigham Young University Herbarium [BRY]',
          'CAS' => 'California Academy of Sciences [CAS]',
          'NML' => 'Canadian Museum of Nature [NML]',
          'CAN' => 'Canadian Museum of Nature Herbarium [CAN]',
          'CM' => 'Carnegie Museum [CM]',
          'CIC' => 'College of Idaho Herbarium (formerly Albertson College of Idaho) [CIC]',
          'CU' => 'Cornell University [CU]',
          'FMNH' => 'Field Museum of Natural History [FMNH]',
          'F' => 'Field Museum of Natural History Herbarium [F]',
          'FLMNH' => 'Florida Museum of Natural History [FLMNH]',
          'OJS' => 'from Comb_PHV2 list [OJS]',
          'AC' => 'from NIHDBID list - Albertson\'s syn?? [AC]',
          'UF' => 'from NIHDBID list [UF]',
          'GLAC' => 'Glacier National Park Collection [GLAC]',
          'GH' => 'Harvard University [GH]',
          'IDFG' => 'Idaho Department of Fish and Game Herbarium [IDFG]',
          'IMNH' => 'Idaho Museum of Natural History [IMNH]',
          'IDAHO' => 'Idaho State University [IDAHO]',
          'IDS' => 'Idaho State University Herbarium [IDS]',
          'INHS' => 'Illinois Natural History Survey [INHS]',
          'IND' => 'Indiana University Herbarium [IND]',
          'BOIS' => 'Intermountain Forest and Range Experiment Station Herbarium, USFS [BOIS]',
          'LCSC' => 'Lewis-Clark State College [LCSC]',
          'LACM' => 'Los Angeles County Museum [LACM]',
          'LSUMZ' => 'Louisiana State University [LSUMZ]',
          'LTU' => 'Louisiana Tech University [LTU]',
          'WS' => 'Marion Ownbey Herbarium, Washington State University [WS]',
          'MSUM' => 'Michigan State University [MSUM]',
          'MPM' => 'Milwaukee Public Museum [MPM]',
          'MO' => 'Missouri Botanical Garden Herbarium [MO]',
          'MTHP' => 'Montana Natural Heritage Program [MTHP]',
          'MSBU' => 'Montana State University [MSBU]',
          'MRNP' => 'Mount Rainier National Park Herbarium [MRNP]',
          'MCZ' => 'Museum of Comparative Zoology - Harvard [MCZ]',
          'UIMNH' => 'Museum of Natural History, Champaign-Urbana, University of Illinois [UIMNH]',
          'ACMNH' => 'Orma J. Smith Museum of Natural History, College of Idaho (ALBRCIDA) (formerly Albertson College of Idaho) [ACMNH]',
          'UGAMNH' => 'Museum of Natural History, University of Georgia [UGAMNH]',
          'MSB' => 'Museum of Southwestern Biology [MSB]',
          'NA' => 'NA Herbarium [NA]',
          'NY' => 'New York Botanical Garden Herbarium [NY]',
          'NPT' => 'Nez Perce Tribe Herbarium [NPT]',
          'NCSM' => 'North Carolina State Museum of Natural History [NCSM]',
          'NLU' => 'Northern Louisiana University [NLU]',
          'NMUMZ' => 'Northern Michigan University, Marquette [NMUMZ]',
          'NNC' => 'Northwest Nazarene College [NNC]',
          'OMNH' => 'Oklahoma Museum of Natural History [OMNH]',
          'OSC' => 'Oregon State University Herbarium [OSC]',
          'PLU' => 'Pacific Lutheran University [PLU]',
          'RM' => 'Rocky Mountain Herbarium [RM]',
          'PS' => 'Slater Museum of Natural History Herbarium, University of Puget Sound [PS]',
          'SRP' => 'Snake River Plains Herbarium, Boise State University [SRP]',
          'STI' => 'Stillenger Herbarium, University of Idaho [STI]',
          'TCWC' => 'Texas A&M University [TCWC]',
          'TTU' => 'Texas Technical University [TTU]',
          'TU' => 'Tulane University [TU]',
          'DAV' => 'UC Davis Herbarium, University of California [DAV]',
          'US' => 'United States National Herbarium, Smithsonian Institution [US]',
          'USNM' => 'United States National Museum, Smithsonian Institution [USNM]',
          'MVZ' => 'University of California - Berkeley [MVZ]',
          'UC' => 'University of California Herbarium - Berkeley [UC]',
          'UCM' => 'University of Colorado [UCM]',
          'GA' => 'University of Georgia Herbarium [GA]',
          'UIDA' => 'University of Idaho [UIDA]',
          'UIM' => 'University of Idaho [UIM]',
          'IDF' => 'University of Idaho Herbarium, College of Forestry [IDF]',
          'KU' => 'University of Kansas [KU]',
          'UL' => 'University of Louisville [UL]',
          'UMMZ' => 'University of Michigan [UMMZ]',
          'MICH' => 'University of Michigan Herbarium [MICH]',
          'UMZ' => 'University of Montana [UMZ]',
          'NCU' => 'University of North Carolina Herbarium [NCU]',
          'ORE' => 'University of Oregon Herbarium [ORE]',
          'CPS' => 'University of Puget Sound [CPS]',
          'USD' => 'University of South Dakota [USD]',
          'UTACV' => 'University of Texas - Arlington [UTACV]',
          'UTEP' => 'University of Texas - El Paso [UTEP]',
          'UU' => 'University of Utah [UU]',
          'WTU' => 'University of Washington Herbarium [WTU]',
          'WAT' => 'University of Waterloo Herbarium [WAT]',
          'UWO' => 'University of Western Ontario Herbarium [UWO]',
          'DAO' => 'Vascular Plant Herbarium, Agriculture & Agri-Food Canada [DAO]',
          'CRCM' => 'Washington State University [CRCM]',
          'WSC' => 'Washington State University Herbarium [WSC]',
          'WILLU' => 'Willamette University Herbarium [WILLU]',
          'YMP' => 'Yale University [YMP]',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 42,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_museum',
      'label' => 'Museum',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_nest_aspect'.
  $fields['node-observation_nest_survey-field_nest_aspect'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_nest_aspect',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '1',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Calculated in a clockwise direction starting from a reference direction of 0° and increasing to 359.9 degrees. Commonly used cardinal direction bearings include: North (0°), NE (45°), East (90°), SE (135°), South (180°), SW (225°), West (270°), NW (315°).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => 56,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_nest_aspect',
      'label' => 'Nest Aspect',
      'required' => 0,
      'settings' => array(
        'max' => '359.9',
        'min' => '0',
        'prefix' => '',
        'suffix' => 'degrees',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(
          'multiple_value_widget' => 'table',
        ),
        'type' => 'number',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_nest_condition'.
  $fields['node-observation_nest_survey-field_nest_condition'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_nest_condition',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The general condition of the nest (e.g. excellent, poor, old)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 59,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_nest_condition',
      'label' => 'Nest Condition',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'multiple_value_widget' => 'table',
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_nest_height'.
  $fields['node-observation_nest_survey-field_nest_height'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_nest_height',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '1',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The height of the nest from the bottom of the nesting substrate.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => 57,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_nest_height',
      'label' => 'Nest Height',
      'required' => 0,
      'settings' => array(
        'max' => '999',
        'min' => '0',
        'prefix' => '',
        'suffix' => 'meters',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(
          'multiple_value_widget' => 'table',
        ),
        'type' => 'number',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_nest_status'.
  $fields['node-observation_nest_survey-field_nest_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_nest_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Occupied' => 'Occupied (Pair, eggs, or young)',
          'Unoccupied' => 'Unoccupied (no individuals)',
          'Undetermined' => 'Undetermined (individuals present)',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 50,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_nest_status',
      'label' => 'Nest Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_nest_substrate'.
  $fields['node-observation_nest_survey-field_nest_substrate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_nest_substrate',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The substrate on which the nest is located (e.g. cliff, tree).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 53,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_nest_substrate',
      'label' => 'Nest Substrate',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'multiple_value_widget' => 'table',
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_nest_substrate_aspect'.
  $fields['node-observation_nest_survey-field_nest_substrate_aspect'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_nest_substrate_aspect',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '1',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Calculated in a clockwise direction starting from a reference direction of 0° and increasing to 359.9 degrees. Commonly used cardinal direction bearings include: North (0°), NE (45°), East (90°), SE (135°), South (180°), SW (225°), West (270°), NW (315°).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => 55,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_nest_substrate_aspect',
      'label' => 'Nest Substrate Aspect',
      'required' => 0,
      'settings' => array(
        'max' => '359.9',
        'min' => '0',
        'prefix' => '',
        'suffix' => 'degrees',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(
          'multiple_value_widget' => 'table',
        ),
        'type' => 'number',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_nest_substrate_height'.
  $fields['node-observation_nest_survey-field_nest_substrate_height'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_nest_substrate_height',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '1',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The height of the substrate on which the nest is located.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => 58,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_nest_substrate_height',
      'label' => 'Nest Substrate Height',
      'required' => 0,
      'settings' => array(
        'max' => '999',
        'min' => '0',
        'prefix' => '',
        'suffix' => 'meters',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(
          'multiple_value_widget' => 'table',
        ),
        'type' => 'number',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_observation_method'.
  $fields['node-observation_nest_survey-field_observation_method'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_observation_method',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Seen' => 'Individual(s) Observed (seen)',
          'Hand' => 'Observed Individual(s) in Hand or Close Range',
          'Heard' => 'Heard Vocalizations',
          'Nest' => 'Nest, Den, Burrow or Habitation Observed',
          'Scat' => 'Scat Observed',
          'Tracks' => 'Tracks Observed',
          'Telemetry' => 'Telemetry (GPS, Argos, Radio collar)',
          'Sample' => 'Sample Collected',
          'Specimen' => 'Museum or Herbarium Specimen',
          'Photographed' => 'Photographed',
          'Negative' => 'Not Found (Negative Data)',
          'EnfInvestigation' => 'Enforcement Investigation',
          'Unknown' => 'Unknown',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please choose all methods that apply.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 16,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_observation_method',
      'label' => 'Observation Method(s)',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_observer'.
  $fields['node-observation_nest_survey-field_observer'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_observer',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'bgmr' => 0,
          'collar' => 0,
          'individual' => 0,
          'issue' => 0,
          'observation' => 0,
          'observation_capture' => 0,
          'observation_import' => 0,
          'observation_in_aerial_survey' => 0,
          'observation_in_waterbird_survey' => 0,
          'observation_individual' => 0,
          'observation_plant' => 0,
          'page' => 0,
          'person' => 'person',
          'roadkill' => 0,
          'survey_aerial' => 0,
          'survey_site' => 0,
          'survey_waterbird' => 0,
          'swap_species_prioritization' => 0,
          'swap_species_projects_actions_fo' => 0,
          'taxa' => 0,
          'unlawful_take' => 0,
          'weed_control' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Who observed this animal or plant? The first observer is required. You may drag and drop to reorder the list.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 17,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_observer',
      'label' => 'Observer(s)',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'starts_with',
          'autocomplete_path' => 'node_reference/autocomplete',
          'multiple_value_widget' => 'table',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_hide_input' => 1,
          'references_dialog_remove' => 1,
          'references_dialog_search' => 1,
          'references_dialog_search_view' => '',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_organization'.
  $fields['node-observation_nest_survey-field_organization'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Agency, Group, Business, etc.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 25,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization',
      'label' => 'Organization',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_phone'.
  $fields['node-observation_nest_survey-field_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '20',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 28,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_photo'.
  $fields['node-observation_nest_survey-field_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'deleted' => '0',
      'description' => 'Share photos of your observation to help the community confirm your identification.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 18,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_photo',
      'label' => 'Photo(s)',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'observations/photos/[current-date:custom:Y]/[current-date:custom:m]',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '10 MB',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_position'.
  $fields['node-observation_nest_survey-field_position'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_position',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Job title and/or experience as it relates to fish, game and the outdoors',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 26,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_position',
      'label' => 'Position',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_region'.
  $fields['node-observation_nest_survey-field_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_region',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'fish_game_region',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 19,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_region',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_sacode'.
  $fields['node-observation_nest_survey-field_sacode'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sacode',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The SA code is for internal use only.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 37,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sacode',
      'label' => 'SA code (IDFG Reference Code)',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_sensitive'.
  $fields['node-observation_nest_survey-field_sensitive'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sensitive',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Academic research' => 'Academic research',
          'Private land' => 'Private land',
          'Location use' => 'Sensitive location use',
          'Cave' => 'Sensitive location cave',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 47,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sensitive',
      'label' => 'Sensitive',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_buttons',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_sex'.
  $fields['node-observation_nest_survey-field_sex'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sex',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Unknown' => 'Unknown',
          'Female' => 'Female',
          'Male' => 'Male',
          'Both' => 'Both Sexes',
          'NA' => 'Not Applicable',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => 'Unknown',
        ),
      ),
      'deleted' => '0',
      'description' => 'Male, Female or Not Applicable?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 20,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sex',
      'label' => 'Sex',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_source_agency'.
  $fields['node-observation_nest_survey-field_source_agency'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_source_agency',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 35,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_source_agency',
      'label' => 'Source Agency',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Aquila Environmental
Boise State University
City of Boise
Coeur d\'Alene Tribe
College of Idaho
Contractor
Cornell Laboratory of Ornithology
Idaho Army National Guard
Idaho Bird Observatory
Idaho Department of Environmental Quality
Idaho Department of Fish and Game
Idaho Power Company
Latah Soil and Water Conservation District
Maxim Technologies
Other
Potlatch Corportation
Raptor Research Center
Red Willow Research, Inc.
Science Applications International Corporation, Environmental Programs Division
Shoshone-Paiute Tribes
TetraTech
The Nature Conservancy of Idaho
Trec, Inc.
U.S. Bureau of Land Management
U.S. Fish and Wildlife Service
U.S. Forest Service
U.S. Forest Service -- NRIS Fauna
U.S. Geological Survey
University of Idaho
various, patuxent data dump
WEST, Inc
Idaho Cave Survey
ERO Resources Corp.
Idaho State University
JBR Environmental Consultants Inc.
Wong Fei Hung
Xover
Survey
Glen Plake
Mike Grant',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'available',
          'sort_options' => 1,
        ),
        'type' => 'select_or_other',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_source_type'.
  $fields['node-observation_nest_survey-field_source_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_source_type',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => 'Animal Observation Report (Sightings)',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 41,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_source_type',
      'label' => 'Source Type',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Animal Observation Report (Sightings)
Digital, Hand entered
Digital, Appended
Data Spreadsheet, Hard Copy (Sightings)
Unpublished agency report
Published report
Data Spreadsheet, Hard Copy (w/ source code)
Misc (email, notes, etc) (Sightings)
Museum Collections Record
Plant Observation Report -Hard copy (Sightings)
Plant Observation Report-Digital (Electronic File)
Herbarium Label (Sightings)
Herbarium Label
Scientific Reporting Permit',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'available',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_species'.
  $fields['node-observation_nest_survey-field_species'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_species',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'bgmr' => 0,
          'collar' => 0,
          'individual' => 0,
          'observation' => 0,
          'observation_capture' => 0,
          'observation_import' => 0,
          'observation_in_aerial_survey' => 0,
          'observation_in_waterbird_survey' => 0,
          'observation_individual' => 0,
          'observations_of_plants' => 0,
          'page' => 0,
          'person' => 0,
          'roadkill' => 0,
          'survey_aerial' => 0,
          'survey_plant' => 0,
          'survey_site' => 0,
          'survey_waterbird' => 0,
          'swap_species_prioritization' => 0,
          'swap_species_projects_actions_fo' => 0,
          'taxa' => 'taxa',
          'unlawful_take' => 0,
          'weed_control' => 0,
        ),
        'references_id_trim_roles' => array(
          2 => '2',
          3 => '3',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please enter the species or taxa that was observed. Choices will appear as you type, please select one.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 21,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_species',
      'label' => 'Species',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'starts_with',
          'autocomplete_path' => 'node_reference/autocomplete',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_hide_input' => 0,
          'references_dialog_remove' => 0,
          'references_dialog_search' => 0,
          'references_dialog_search_view' => '',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_species_account'.
  $fields['node-observation_nest_survey-field_species_account'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_species_account',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p><strong>Optional, but helpful:</strong> Tell us about this sighting. Tell us details such as the color, size, behavior, identifiable features, etc. or give us more information about your encounter.</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 22,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_species_account',
      'label' => 'Species Account',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_species_confidence'.
  $fields['node-observation_nest_survey-field_species_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_species_confidence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => '50',
        ),
      ),
      'deleted' => '0',
      'description' => 'How confident are you of this identification?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 31,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_species_confidence',
      'label' => 'Species Confidence',
      'required' => 1,
      'settings' => array(
        'max' => '100',
        'min' => '0',
        'prefix' => '',
        'suffix' => '%',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '0|Please help me identify!
10|I\'m guessing here...
50|Probably. I\'m a bit uncertain
80|I\'m very confident
100|I\'m absolutely certain',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => 'Enter a percent certainty as an integer between 0 (No idea) and 100 (Certain)',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_specimen_number'.
  $fields['node-observation_nest_survey-field_specimen_number'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_specimen_number',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 39,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_specimen_number',
      'label' => 'Specimen Number',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_survey_method'.
  $fields['node-observation_nest_survey-field_survey_method'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_survey_method',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => array(
        0 => array(
          'value' => 'Incidental Observation',
        ),
      ),
      'deleted' => '0',
      'description' => 'If this observation is part of a larger survey or protocol, please select the best match or add.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 34,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_survey_method',
      'label' => 'Survey Method',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => 'Bald Eagle Nest Monitoring
BLM Survey
Breeding Bird Survey
Bruneau Dunes Tiger Beetle DNA Study
Burrowing Owl Survey
Colony Counts
Columbia Spotted Frog GBDPS Survey
Cursory or Incidental-Non Thorough Survey
EDRR
Fairly Thorough Survey
Fisheries Survey
Four Rivers Burrowing Owl Survey
Golden Eagle Nest Monitoring
Harlequin Duck Aerial Survey
Harlequin Duck Ground Survey
Herbarium Label
Idaho Falls District Burrowing Owl Survey
Idaho Waterbird Survey
Incidental Observation
Inventory/Targeted Survey
Landbird Survey
Long-billed Curlew Survey
MAPS
Marshbird Monitoring
Monitoring
Monitoring program
Plant Summary
Raptor Nest Survey
Red Willow Research Center Inventory or Survey
Revisit to previously known location
Sandhill Crane Rocky Mtn Pop Survey
Snow Track Survey
Steenhof
Trumpeter Swan Survey
Very Thorough Survey
Hibernacula Monitoring Survey
Forest Service Owl Survey
ERO Resources Corp. survey
Idaho Training Range EIS field survey
Upland Raptor Survey
OHV Trail Use Monitoring with remote sensing cameras
Recreation Maintenance work at the Grayback Campground, SW of Idaho City, ID
Mourning Dove Call Count Survey
Invertebrate Collecting
Bat Survey
Survey
Sightability - Abundance
Trend Count
Winter Comp
Summer Comp
Fixed Wing
Found during sagebrush and range use surveys incidentally 
found during a fuel moisture survey collecting needles 
Observed on trail camera - see attached photo
Research Project
Incidentally trapped
Trail camera',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_survey_site'.
  $fields['node-observation_nest_survey-field_survey_site'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_survey_site',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'property' => 'title',
            'type' => 'property',
          ),
          'target_bundles' => array(
            'survey_site' => 'survey_site',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value_function' => 'entityreference_prepopulate_field_default_value',
      'deleted' => '0',
      'description' => 'Optional add a survey site if this is a revisited location such as a lek, survey route or bird count stop.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 45,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_survey_site',
      'label' => 'Survey Site',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'action' => 'none',
            'action_on_edit' => 0,
            'fallback' => 'none',
            'og_context' => 0,
            'skip_perm' => '0',
            'status' => 1,
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_existing' => 1,
            'delete_references' => 0,
            'ief_view_mode' => 'inline_entity_form',
            'match_operator' => 'STARTS_WITH',
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_territory_occupancy'.
  $fields['node-observation_nest_survey-field_territory_occupancy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_territory_occupancy',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 52,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_territory_occupancy',
      'label' => 'Territory Occupancy',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'available_options' => 'No adults or field sign
Decorated nest
Nest affinity
Courtship or reproductive behavior
Incubating posture
Eggs observed
Young observed
Fledged young nearby',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other_buttons',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_territory_status'.
  $fields['node-observation_nest_survey-field_territory_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_territory_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Occupied' => 'Occupied (occupied nest in territory or adults exhibiting territorial or reproductive behavior)',
          'Unoccupied' => 'Unoccupied (no adults or field sign observered after repeated visits)',
          'Undetermined' => 'Undetermined',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 51,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_territory_status',
      'label' => 'Territory Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_verification_status'.
  $fields['node-observation_nest_survey-field_verification_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_verification_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'verified' => 'Verified',
          'possible' => 'Possible',
          'unverified' => 'Unverified',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 49,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_verification_status',
      'label' => 'Verification Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'node-observation_nest_survey-field_xid'.
  $fields['node-observation_nest_survey-field_xid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_xid',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'observation_nest_survey',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 46,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_xid',
      'label' => 'Source ID',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'node-person-field_about'.
  $fields['node-person-field_about'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_about',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Describe your background and experience as it relates to fish, game and the outdoors',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_about',
      'label' => 'About',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '4',
        ),
        'type' => 'text_textarea',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-person-field_address'.
  $fields['node-person-field_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => array(
        0 => array(
          'element_key' => 'node|person|field_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'administrative_area' => '',
          'postal_code' => '',
          'country' => 'US',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '5',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_address',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-country' => 0,
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-person-field_email'.
  $fields['node-person-field_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '3',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_email',
      'label' => 'Email',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-person-field_full_name'.
  $fields['node-person-field_full_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_full_name',
      'foreign keys' => array(),
      'indexes' => array(
        'family' => array(
          0 => 'family',
        ),
        'given' => array(
          0 => 'given',
        ),
      ),
      'locked' => '0',
      'module' => 'name',
      'settings' => array(
        'allow_family_or_given' => 0,
        'autocomplete_separator' => array(
          'credentials' => ', ',
          'family' => ' -',
          'generational' => ' ',
          'given' => ' -',
          'middle' => ' -',
          'title' => ' ',
        ),
        'autocomplete_source' => array(
          'credentials' => array(),
          'family' => array(),
          'generational' => array(
            'generational' => 'generational',
          ),
          'given' => array(),
          'middle' => array(),
          'title' => array(
            'title' => 'title',
          ),
        ),
        'components' => array(
          'credentials' => 0,
          'family' => 'family',
          'generational' => 'generational',
          'given' => 'given',
          'middle' => 'middle',
          'title' => 'title',
        ),
        'generational_options' => '-- --
Jr.
Sr.
I
II
III
IV
V
VI
VII
VIII
IX
X',
        'labels' => array(
          'credentials' => 'Credentials',
          'family' => 'Family',
          'generational' => 'Generational',
          'given' => 'Given',
          'middle' => 'Middle name(s)',
          'title' => 'Title',
        ),
        'max_length' => array(
          'credentials' => '255',
          'family' => '63',
          'generational' => '15',
          'given' => '63',
          'middle' => '127',
          'title' => '31',
        ),
        'minimum_components' => array(
          'credentials' => 0,
          'family' => 'family',
          'generational' => 0,
          'given' => 0,
          'middle' => 0,
          'title' => 0,
        ),
        'sort_options' => array(
          'generational' => 0,
          'title' => 'title',
        ),
        'title_options' => '-- --
Mr.
Mrs.
Miss
Ms.
Capt.
Dr.
Prof.
Sir.',
      ),
      'translatable' => '0',
      'type' => 'name',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'name',
          'settings' => array(
            'format' => 'default',
            'markup' => 0,
            'multiple' => 'default',
            'multiple_and' => 'text',
            'multiple_delimiter' => ', ',
            'multiple_delimiter_precedes_last' => 'never',
            'multiple_el_al_first' => 1,
            'multiple_el_al_min' => 3,
            'output' => 'default',
          ),
          'type' => 'name_formatter',
          'weight' => '6',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_full_name',
      'label' => 'Full Name',
      'required' => 1,
      'settings' => array(
        'component_css' => '',
        'component_layout' => 'default',
        'credentials_inline' => 0,
        'field_type' => array(
          'credentials' => 'text',
          'family' => 'text',
          'generational' => 'select',
          'given' => 'text',
          'middle' => 'text',
          'title' => 'select',
        ),
        'generational_field' => 'select',
        'inline_css' => array(
          'credentials' => '',
          'family' => '',
          'generational' => '',
          'given' => '',
          'middle' => '',
          'title' => '',
        ),
        'override_format' => 'default',
        'show_component_required_marker' => 0,
        'size' => array(
          'credentials' => '35',
          'family' => '20',
          'generational' => '5',
          'given' => '20',
          'middle' => '20',
          'title' => '6',
        ),
        'title_display' => array(
          'credentials' => 'description',
          'family' => 'description',
          'generational' => 'description',
          'given' => 'description',
          'middle' => 'description',
          'title' => 'description',
        ),
        'title_field' => 'select',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'name',
        'settings' => array(),
        'type' => 'name_widget',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-person-field_observer_confidence'.
  $fields['node-person-field_observer_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_observer_confidence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => array(
        0 => array(
          'value' => '10',
        ),
      ),
      'deleted' => '0',
      'description' => 'How confident are you of this observer?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '7',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_observer_confidence',
      'label' => 'Observer Confidence',
      'required' => 1,
      'settings' => array(
        'max' => '100',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '0|No idea - I do not know them
10|Uncertain
40|They have some experience
60|They are very experienced
80|They are a wildlife professional
',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => 'Enter a percent confidence as an integer between 0 (No idea) and 100 (Very Confident)',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-person-field_organization'.
  $fields['node-person-field_organization'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organization',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Agency, Group, Business, etc.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_organization',
      'label' => 'Organization',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-person-field_person_confidence'.
  $fields['node-person-field_person_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_confidence',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Unknown background',
          40 => 'Uncertain background',
          60 => 'Citizen scientist',
          75 => 'Approved observer by data partner',
          80 => 'Biologist, researcher or taxa expert',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_person_confidence',
      'label' => 'Person Confidence',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-person-field_phone'.
  $fields['node-person-field_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '20',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-person-field_position'.
  $fields['node-person-field_position'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_position',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Job title or experience as it relates to fish, game and the outdoors',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_position',
      'label' => 'Position',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-person-field_xid'.
  $fields['node-person-field_xid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_xid',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'person',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 10,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_xid',
      'label' => 'External ID',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'multiple_value_widget' => 'table',
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_county'.
  $fields['node-survey_site-field_county'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_county',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'county',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '15',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_county',
      'label' => 'County',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'options_buttons',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_data_entry_notes'.
  $fields['node-survey_site-field_data_entry_notes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_data_entry_notes',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 26,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_data_entry_notes',
      'label' => 'Data Entry Notes',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_datetime'.
  $fields['node-survey_site-field_datetime'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_datetime',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '2',
        'cache_enabled' => 1,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => 'UTC',
        'todate' => 'optional',
        'tz_handling' => 'date',
      ),
      'translatable' => '0',
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => '14',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_datetime',
      'label' => 'Date Range',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '15',
          'input_format' => 'm/d/Y - g:i:sa',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_directions'.
  $fields['node-survey_site-field_directions'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_directions',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Directions to site or a description of the location.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '15',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_directions',
      'label' => 'Survey Site Directions',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_entry_author'.
  $fields['node-survey_site-field_entry_author'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_entry_author',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 25,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_entry_author',
      'label' => 'Entry Author',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_gmu'.
  $fields['node-survey_site-field_gmu'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gmu',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'gmu',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '16',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_gmu',
      'label' => 'Game Management Unit',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'options_buttons',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_habitat_description'.
  $fields['node-survey_site-field_habitat_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_habitat_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 23,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_habitat_description',
      'label' => 'Habitat Description',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_location'.
  $fields['node-survey_site-field_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'backend' => 'default',
        'srid' => '4326',
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => array(),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => '13',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location',
      'label' => 'Location',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'geofield',
        'settings' => array(),
        'type' => 'geofield_latlon',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_location_confidence'.
  $fields['node-survey_site-field_location_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_confidence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => array(
        0 => array(
          'value' => '1000',
        ),
      ),
      'deleted' => '0',
      'description' => 'How confident are you of this location?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '19',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_confidence',
      'label' => 'Location Confidence',
      'required' => 1,
      'settings' => array(
        'max' => '10000000',
        'min' => '0',
        'prefix' => '±',
        'suffix' => ' meters',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '10|Precise (within 10m/11ft)
50|Accurate (within 50m/55yrd)
250|Moderate Precision (within 250m/273yd)
1000|Estimated Precision (< 1km/0.6mi)
10000|Low Precision (> 1km/0.6mi)',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => 60,
          'other_title' => 'Please enter an accuracy in meters',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_location_resource'.
  $fields['node-survey_site-field_location_resource'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_resource',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '17',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_resource',
      'label' => 'Location Resource',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_location_steps'.
  $fields['node-survey_site-field_location_steps'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_steps',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Processing steps',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '18',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location_steps',
      'label' => 'Location Steps',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_map4gis'.
  $fields['node-survey_site-field_map4gis'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map4gis',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the feature class most likely to mapped from this record.
',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 29,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map4gis',
      'label' => 'map4gis',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_primary_data_source'.
  $fields['node-survey_site-field_primary_data_source'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_primary_data_source',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'A brief description of the data source that provided the given location/coordinates.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 21,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_primary_data_source',
      'label' => 'Primary Data Source',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_region'.
  $fields['node-survey_site-field_region'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_region',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'fish_game_region',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '14',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_region',
      'label' => 'Region',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_sacode'.
  $fields['node-survey_site-field_sacode'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sacode',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The SA code is for internal use only.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 27,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sacode',
      'label' => 'SA Code',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_study_area'.
  $fields['node-survey_site-field_study_area'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_study_area',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => array(),
      'deleted' => '0',
      'description' => 'An given area, as described by a surveyor, that contains a grouping of “field_survey_site_name" (Observation Sites).  For example, this may be a raptor territory (can contain multiple nest sites), a waterbird survey area (can be divided into multiple sections), and so forth.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '12',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_study_area',
      'label' => 'Study Area',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'available_options' => 'Boise River',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'available',
          'size' => 60,
          'sort_options' => 1,
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_survey_site_method'.
  $fields['node-survey_site-field_survey_site_method'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_survey_site_method',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The method of survey at the site.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 20,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_survey_site_method',
      'label' => 'Survey Site Method',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'select_or_other',
        'settings' => array(
          'apply_chosen' => '',
          'available_options' => '1|Incidental Observation
2|Breeding Bird Survey
3|MAPS
4|Landbird Survey
6|Idaho Waterbird Survey
7|Marshbird Monitoring
8|Snow Track Survey
9|Colony Counts
10|Inventory/Targeted Survey
11|Columbia Spotted Frog GBDPS Survey
12|BLM Survey
13|Monitoring
14|Raptor Nest Survey
15|EDRR
16|Trumpeter Swan Survey
17|Harlequin Duck Ground Survey
18|Steenhof
19|Sandhill Crane Rocky Mtn Pop Survey
20|Red Willow Research Center Inventory or Survey
21|Harlequin Duck Aerial Survey
22|Bald Eagle Nest Monitoring
23|Bruneau Dunes Tiger Beetle DNA Study
24|Herbarium Label
25|Plant Summary
26|Very Thorough Survey
27|Fairly Thorough Survey
28|Cursory or Incidental-Non Thorough Survey
29|Revisit to previously known location
30|Monitoring program
31|Four Rivers Burrowing Owl Survey
32|Idaho Falls District Burrowing Owl Survey
33|Golden Eagle Nest Monitoring
34|Long-billed Curlew Survey
35|Burrowing Owl Survey
36|Fisheries Survey',
          'available_options_php' => '',
          'markup_available_options_php' => '&lt;none&gt;',
          'other' => 'Other',
          'other_size' => '60',
          'other_title' => '',
          'other_unknown_defaults' => 'other',
          'sort_options' => 0,
        ),
        'type' => 'select_or_other',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_survey_site_name'.
  $fields['node-survey_site-field_survey_site_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_survey_site_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'The descriptory name for the site at the lowest level (e.g. for Boise River Waterbird Survey @ Veterans, this would be "Veterans" and Survey Area would be Boise River and Survey Type would be Waterbird Survey).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '11',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_survey_site_name',
      'label' => 'Survey Site',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_survey_station_mark'.
  $fields['node-survey_site-field_survey_station_mark'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_survey_station_mark',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 22,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_survey_station_mark',
      'label' => 'Station Mark',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_tmp_location_feature_type'.
  $fields['node-survey_site-field_tmp_location_feature_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tmp_location_feature_type',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 24,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tmp_location_feature_type',
      'label' => 'tmp Location Feature Type',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-survey_site-field_xid'.
  $fields['node-survey_site-field_xid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_xid',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'survey_site',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Former primary key for the table this came from.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 28,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_xid',
      'label' => 'Observation Site ID',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_app'.
  $fields['node-taxa-field_app'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_app',
      'foreign keys' => array(
        'taxonomy_term_data' => array(
          'columns' => array(
            'target_id' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'app' => 'app',
          ),
        ),
        'target_type' => 'taxonomy_term',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'default_value_function' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 46,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_app',
      'label' => 'App',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'status' => 0,
          ),
          'taxonomy-index' => array(
            'status' => TRUE,
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'STARTS_WITH',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete_tags',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_blm_type'.
  $fields['node-taxa-field_blm_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_blm_type',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => '1',
          2 => '2',
          3 => '3',
          4 => '4',
          5 => '5',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Types as identified in the <a title="Sensitive Species List PDF Document" href="http://www.blm.gov/pgdata/etc/medialib/blm/id/directives/commonly_requested.Par.83567.File.dat/" target="_blank">Idaho Bureau of Land Management (BLM) Sensitive Species List</a> ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '27',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '39',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '39',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_blm_type',
      'label' => 'BLM Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_common_name'.
  $fields['node-taxa-field_common_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_common_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_common_name',
      'label' => 'Common Name(s)',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_coreid'.
  $fields['node-taxa-field_coreid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_coreid',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(),
          'type' => 'number_unformatted',
          'weight' => '9',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_coreid',
      'label' => 'CoreID',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_cwcs'.
  $fields['node-taxa-field_cwcs'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_cwcs',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Is this species included in the Idaho Comprehensive Wildlife Conservation Strategy (CWCS)?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '21',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_cwcs',
      'label' => 'SGCN',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_distribution_confidence'.
  $fields['node-taxa-field_distribution_confidence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_distribution_confidence',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'C' => 'C - Confident',
          'P' => 'P- Potential',
          'PRF' => 'PRF - Potential but false reports exist',
          'R' => 'R - Reported but unconfirmed',
          'RD' => 'RD - Reported but doubtful',
          'RF' => 'RF - Reported but false',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'How confident are we of this distribution?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '33',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_distribution_confidence',
      'label' => 'Distribution Confidence',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_distribution_population'.
  $fields['node-taxa-field_distribution_population'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_distribution_population',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Breeding' => 'Breeding',
          'Non-breeding' => 'Non-breeding',
          'Transient' => 'Transient',
          'Unknown' => 'Unknown',
          'Year-round' => 'Year-round',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is the population breeding, non-breeding, transient or year-round?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '35',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_distribution_population',
      'label' => 'Distribution Population',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_distribution_presence'.
  $fields['node-taxa-field_distribution_presence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_distribution_presence',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Absent' => 'Absent',
          'Present' => 'Present',
          'Unknown/Undetermined' => 'Unknown/Undetermined',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is it currently absent, present or undetermined?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '36',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_distribution_presence',
      'label' => 'Distribution Presence',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_distribution_regularity'.
  $fields['node-taxa-field_distribution_regularity'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_distribution_regularity',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Accidental/Nonregular' => 'Accidental/Nonregular',
          'Regularly occurring' => 'Regularly occurring',
          'Unknown/Undetermined' => 'Unknown/Undetermined',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Accidental, Regular or Undetermined?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '34',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_distribution_regularity',
      'label' => 'Distribution Regularity',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_echelon'.
  $fields['node-taxa-field_echelon'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_echelon',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Kingdom',
          2 => 'Phylum',
          3 => 'Class',
          4 => 'Order',
          5 => 'Family',
          6 => 'Genus',
          7 => 'Species',
          8 => 'Subspecies',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => '7',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_echelon',
      'label' => 'Echelon',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_endemic'.
  $fields['node-taxa-field_endemic'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_endemic',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => ' Is this <a href="http://en.wikipedia.org/wiki/Endemism" target="_blank">endemic</a> (unique to a defined geographic location, such as an island, nation or other defined zone).',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '30',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_endemic',
      'label' => 'Endemic',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '28',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_eol_id'.
  $fields['node-taxa-field_eol_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_eol_id',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Encyclopedia of Life (EOL) primary key',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '12',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_eol_id',
      'label' => 'EOL ID',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_female_name'.
  $fields['node-taxa-field_female_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_female_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '60',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => 'Female',
        ),
      ),
      'deleted' => '0',
      'description' => 'What is the female called?  <br/>e.g. <em>cow, doe, ewe, falcon, goose, hen, jenny, lioness, mare, nanny, queen, sow, vixen</em>',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '43',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_female_name',
      'label' => 'Female Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_global_common_name'.
  $fields['node-taxa-field_global_common_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_global_common_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_global_common_name',
      'label' => 'Global Common Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_global_scientific_name'.
  $fields['node-taxa-field_global_scientific_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_global_scientific_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_global_scientific_name',
      'label' => 'Global Scientific Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_grank'.
  $fields['node-taxa-field_grank'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_grank',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '20',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Global Rank coordinated by NatureServe with regional conservation authority (IDFG in Idaho).',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '19',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_grank',
      'label' => 'Global Rank',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '20',
        ),
        'type' => 'text_textfield',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_group_name'.
  $fields['node-taxa-field_group_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_group_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '60',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => 'group',
        ),
      ),
      'deleted' => '0',
      'description' => 'What is a group called? <br/>e.g. <em>army, bed, brace, cast, charm, cluster, colony, dowt, family, flight, flock, gaze, herd, hood, labour, maelstrom, murder, pack, parliament, prickle, pride, quiver, rafter, romp, school, sedge, siege, skulk, swarm, tiding</em>',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '41',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_group_name',
      'label' => 'Group Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '39',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_idapa_protection'.
  $fields['node-taxa-field_idapa_protection'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_idapa_protection',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'idapa_protection',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Species protection level under Idaho code.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '26',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_idapa_protection',
      'label' => 'IDAPA Protection',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_immature_name'.
  $fields['node-taxa-field_immature_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_immature_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '60',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => 'Immature',
        ),
      ),
      'deleted' => '0',
      'description' => 'What is a youngster called?  <br/>e.g. <em>calf, chick, cub, duckling, eyas, fawn, fledgling, foal, fry, gosling, kid, kit, lamb, maggot, nymph, poult, pup, salamanderling, tadpole, wormlet</em>',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '42',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_immature_name',
      'label' => 'Immature Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '40',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_in_idaho'.
  $fields['node-taxa-field_in_idaho'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_in_idaho',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Is this taxa found in Idaho?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '22',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_in_idaho',
      'label' => 'In Idaho',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_in_lookup'.
  $fields['node-taxa-field_in_lookup'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_in_lookup',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Should this taxa be included in the default lookup list when adding observations?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '38',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_in_lookup',
      'label' => 'In Lookup',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_inps'.
  $fields['node-taxa-field_inps'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_inps',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Global Priority 1' => 'Global Priority 1',
          'Global Priority 2' => 'Global Priority 2',
          'Global Priority 3' => 'Global Priority 3',
          'State Monitor' => 'State Monitor',
          'State Possibly Extirpated' => 'State Possibly Extirpated',
          'State Priority 1' => 'State Priority 1',
          'State Priority 2' => 'State Priority 2',
          'State Review' => 'State Review',
          'State Sensitive' => 'State Sensitive',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Idaho Native Plant Society Classifications',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '39',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_inps',
      'label' => 'INPS',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_inps_threats'.
  $fields['node-taxa-field_inps_threats'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_inps_threats',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          '?' => '?',
          1 => '1',
          2 => '2',
          3 => '3',
          5 => '5',
          6 => '6',
          8 => '8',
          9 => '9',
          10 => '10',
          11 => '11',
          12 => '12',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '40',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_inps_threats',
      'label' => 'INPS Threats',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '38',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_itis_id'.
  $fields['node-taxa-field_itis_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_itis_id',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Integrated Taxonomic Information System (www.itis.gov) identifier. Hosted by the USGS Center for Biological Informatics (CBI), through the National Biological Information Infrastructure (NBII).',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '13',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_itis_id',
      'label' => 'ITIS ID',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_male_name'.
  $fields['node-taxa-field_male_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_male_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '60',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => array(
        0 => array(
          'value' => 'Male',
        ),
      ),
      'deleted' => '0',
      'description' => 'What is the male called? <br/>e.g. <em>billy, boar, buck, bull, drake, gander, jack, king, lion, ram, stallion, tiercel, tod, tom</em>',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '44',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_male_name',
      'label' => 'Male Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_natureserve_id'.
  $fields['node-taxa-field_natureserve_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_natureserve_id',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '12',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '8',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_natureserve_id',
      'label' => 'NatureServe ID',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '12',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_origin'.
  $fields['node-taxa-field_origin'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_origin',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Exotic' => 'Nonnative',
          'Native' => 'Native',
          'Unknown/Undetermined' => 'Unknown/Undetermined',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Is this species of native, exotic or undetermined origin?',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '29',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_origin',
      'label' => 'Origin',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '27',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_parent'.
  $fields['node-taxa-field_parent'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_parent',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'observation' => 0,
          'page' => 0,
          'person' => 0,
          'roadkill' => 0,
          'taxa' => 'taxa',
          'test' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '7',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_parent',
      'label' => 'Parent',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_hide_input' => 0,
          'references_dialog_remove' => 0,
          'references_dialog_search' => 0,
          'references_dialog_search_view' => '',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_photo'.
  $fields['node-taxa-field_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'deleted' => '0',
      'description' => '<pclass="description">Choose a photo to upload.  For alternative text provide the source URI.  For title use this pattern: <em>[Species State Scientific Name or Source Photo Title] - Photo ([Attribution]) [Author] on [Source Location]</em><br/><br/> <strong>Example</strong><br/>
<strong>Alternative text:</strong> <em>http://farm3.static.flickr.com/2666/4041632339_19648895f4_o.jpg</em><br/>
<strong>Title:</strong> <em>Podiceps nigricollis - Photo (BY-NC-SA) Hans Zwitzer on Flickr: EOL Images</em><br/>
<br/>
Where Attribution follows <a href="http://creativecommons.org" title="CC">Creative Commons</a> notation (BY, BY-NC, BY-NC-SA, Copyright, Public Domain) </p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'medium640',
          ),
          'type' => 'image',
          'weight' => '11',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'small',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'small',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_photo',
      'label' => 'Photo(s)',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'taxa',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_scientific_name'.
  $fields['node-taxa-field_scientific_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scientific_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_scientific_name',
      'label' => 'Scientific Name(s)',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_srank'.
  $fields['node-taxa-field_srank'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_srank',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '20',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'State Rank set by Idaho Fish and Game',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '20',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_srank',
      'label' => 'State Rank',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '20',
        ),
        'type' => 'text_textfield',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_state_common_name'.
  $fields['node-taxa-field_state_common_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_state_common_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_state_common_name',
      'label' => 'State Common Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_state_scientific_name'.
  $fields['node-taxa-field_state_scientific_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_state_scientific_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_state_scientific_name',
      'label' => 'State Scientific Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_taxa_categories'.
  $fields['node-taxa-field_taxa_categories'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_taxa_categories',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'taxa_categories',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Categories of taxa such as birds, raptors and bats',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '37',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_taxa_categories',
      'label' => 'Taxa Categories',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_taxa_tree'.
  $fields['node-taxa-field_taxa_tree'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_taxa_tree',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 45,
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_taxa_tree',
      'label' => 'Taxa Tree',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_terrestrial'.
  $fields['node-taxa-field_terrestrial'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_terrestrial',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Amphibious' => 'Amphibious',
          'Aquatic' => 'Aquatic',
          'Terrestrial' => 'Terrestrial',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Terrestrial, aquatic or amphibious? Terrestrial animals live predominantly or entirely on land (e.g. ants, deer), as compared with aquatic animals, which live predominantly or entirely in the water (e.g. fish, crayfish), or amphibians, which rely on a combination of aquatic and terrestrial habitats (e.g. frogs, salamanders).',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '31',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_terrestrial',
      'label' => 'Terrestrial',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '29',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_usesa'.
  $fields['node-taxa-field_usesa'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_usesa',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Delisted' => 'Delisted',
          'Proposed' => 'Proposed',
          'Candidate' => 'Candidate',
          'Threatened' => 'Threatened',
          'Endangered' => 'Endangered',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'U.S. Endangered Species Act Classification',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '28',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_usesa',
      'label' => 'USESA',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '24',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_usfs_region1'.
  $fields['node-taxa-field_usfs_region1'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_usfs_region1',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Sensitive' => 'Sensitive',
          'Threatened' => 'Threatened',
          'Endangered' => 'Endangered',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '23',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_usfs_region1',
      'label' => 'USFS Region1',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_usfs_region4'.
  $fields['node-taxa-field_usfs_region4'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_usfs_region4',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Sensitive' => 'Sensitive',
          'Threatened' => 'Threatened',
          'Endangered' => 'Endangered',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '24',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_usfs_region4',
      'label' => 'USFS Region4',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_usfs_region6'.
  $fields['node-taxa-field_usfs_region6'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_usfs_region6',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Sensitive' => 'Sensitive',
          'Threatened' => 'Threatened',
          'Endangered' => 'Endangered',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '25',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_usfs_region6',
      'label' => 'USFS Region6',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-taxa-field_vertebrate'.
  $fields['node-taxa-field_vertebrate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_vertebrate',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Invertebrate' => 'Invertebrate',
          'Vertebrate' => 'Vertebrate',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'taxa',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'If an animal, is it a vertebrate or invertebrate?  Vertebrates are animals that are members of the subphylum Vertebrata (chordates with backbones and spinal columns).  Invertebrates are animal species that do not develop a vertebral column',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '32',
        ),
        'inline_entity_form' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'search_result' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_vertebrate',
      'label' => 'Vertebrate',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => 0,
        ),
        'type' => 'options_select',
        'weight' => '30',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-county-field_acres'.
  $fields['taxonomy_term-county-field_acres'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_acres',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'county',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_acres',
      'label' => 'Acres',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-county-field_masterid'.
  $fields['taxonomy_term-county-field_masterid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_masterid',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'county',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_masterid',
      'label' => 'MasterID',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-fish_game_region-field_code'.
  $fields['taxonomy_term-fish_game_region-field_code'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_code',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '20',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'fish_game_region',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_code',
      'label' => 'Code',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '12',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gmu-field_acres'.
  $fields['taxonomy_term-gmu-field_acres'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_acres',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => '10',
        'scale' => '2',
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'gmu',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_acres',
      'label' => 'Acres',
      'required' => 1,
      'settings' => array(
        'max' => '',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gmu-field_coreid'.
  $fields['taxonomy_term-gmu-field_coreid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_coreid',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'gmu',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_coreid',
      'label' => 'CoreID',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gmu-field_masterid'.
  $fields['taxonomy_term-gmu-field_masterid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_masterid',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'gmu',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_masterid',
      'label' => 'MasterID',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '33',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' Is this <a href="http://en.wikipedia.org/wiki/Endemism" target="_blank">endemic</a> (unique to a defined geographic location, such as an island, nation or other defined zone).');
  t('<p><strong>Optional, but helpful:</strong> Tell us about this sighting. Tell us details such as the color, size, behavior, identifiable features, etc. or give us more information about your encounter.</p>');
  t('<p><strong>Optional:</strong> Enter a description about the characteristics of the landscape in the immediate vicinity of this location.  For example, "<em>mature lodgepole pine on high mountain slope.</em>"</p>');
  t('<p><strong>Optional:</strong> Enter a description of how to get to this location, for example, "<em>From Crouch drive west on the Banks-Lowman Highway then north on Scott Mountain Road for 5.5 miles. Make sure you have spare tires.</em>"</p>');
  t('<p><strong>Optional:</strong> This area is intended to hold any extra information about the date entered. For example, "<em>This observation was likely made during the second week of October, however since I was uncertain I marked that the observation was made at some point between October 1st and October 31st with a low confidence selected.</em>"</p> ');
  t('<pclass="description">Choose a photo to upload.  For alternative text provide the source URI.  For title use this pattern: <em>[Species State Scientific Name or Source Photo Title] - Photo ([Attribution]) [Author] on [Source Location]</em><br/><br/> <strong>Example</strong><br/>
<strong>Alternative text:</strong> <em>http://farm3.static.flickr.com/2666/4041632339_19648895f4_o.jpg</em><br/>
<strong>Title:</strong> <em>Podiceps nigricollis - Photo (BY-NC-SA) Hans Zwitzer on Flickr: EOL Images</em><br/>
<br/>
Where Attribution follows <a href="http://creativecommons.org" title="CC">Creative Commons</a> notation (BY, BY-NC, BY-NC-SA, Copyright, Public Domain) </p>');
  t('A brief description of the data source that provided the given location/coordinates.');
  t('About');
  t('Accidental, Regular or Undetermined?');
  t('Acres');
  t('Address');
  t('Adjacent Ecological Systems');
  t('Agency, Group, Business, etc.');
  t('An given area, as described by a surveyor, that contains a grouping of “field_survey_site_name" (Observation Sites).  For example, this may be a raptor territory (can contain multiple nest sites), a waterbird survey area (can be divided into multiple sections), and so forth.');
  t('App');
  t('BLM Type');
  t('Calculated in a clockwise direction starting from a reference direction of 0° and increasing to 359.9 degrees. Commonly used cardinal direction bearings include: North (0°), NE (45°), East (90°), SE (135°), South (180°), SW (225°), West (270°), NW (315°).');
  t('Categories of taxa such as birds, raptors and bats');
  t('Code');
  t('Common Name(s)');
  t('CoreID');
  t('Count');
  t('Count Type');
  t('County');
  t('Data Entry Notes');
  t('Date Notes');
  t('Date Range');
  t('Date Time');
  t('Date/Time Precision');
  t('Dead or Alive?');
  t('Describe your background and experience as it relates to fish, game and the outdoors');
  t('Directions');
  t('Directions to site or a description of the location.');
  t('Distribution Confidence');
  t('Distribution Population');
  t('Distribution Presence');
  t('Distribution Regularity');
  t('EOL ID');
  t('Echelon');
  t('Ecological System');
  t('Email');
  t('Encyclopedia of Life (EOL) primary key');
  t('Endemic');
  t('Enter as much or as little of their name as you know. Logging in will allow you to enter multiple as well as save and reuse observers.');
  t('Entry Author');
  t('Examples:
<em>
<ul>
<li>{"type":"Point","coordinates":[-116.8,48.49]}</li>
<li>{"type":"Polygon","coordinates":[[[-114.1378,43.34123],[-114.8,43.523],[-114.08,43],[-114.1378,43.34123]]]}</li>
<li>{"type":"LineString","coordinates":[[-104.98726129532,39.741361723361],[-104.98720765114,39.741324599196],[-104.98715400696,39.741270975367]]}</li>
<li>{"type":"GeometryCollection","geometries":[{"type":"Point","coordinates":[100.5,0.5]},{"type":"LineString","coordinates":[[101.7,0.7],[102.7,1.7]]},{"type":"MultiPolygon","coordinates":[[[[102,2],[103,2],[103,3],[102,3],[102,2]]],[[[100,0],[101,0],[101,1],[100,1],[100,0]]]]}]}</li>
</ul>
</em>');
  t('External ID');
  t('Female Name');
  t('File(s)');
  t('Former primary key for the table this came from.');
  t('Full Name');
  t('Game Management Unit');
  t('Global Common Name');
  t('Global Rank');
  t('Global Rank coordinated by NatureServe with regional conservation authority (IDFG in Idaho).');
  t('Global Scientific Name');
  t('Group Name');
  t('Habitat Description');
  t('Highway');
  t('How confident are we of this distribution?');
  t('How confident are you of this identification?');
  t('How confident are you of this location?');
  t('How confident are you of this observer?');
  t('How many did you observe?');
  t('How old was the individual(s)?');
  t('How precise is this location?');
  t('IDAPA Protection');
  t('INPS');
  t('INPS Threats');
  t('ITIS ID');
  t('Idaho Native Plant Society Classifications');
  t('Identification Tools');
  t('If an animal, is it a vertebrate or invertebrate?  Vertebrates are animals that are members of the subphylum Vertebrata (chordates with backbones and spinal columns).  Invertebrates are animal species that do not develop a vertebral column');
  t('If this observation is part of a larger survey or protocol, please select the best match or add.');
  t('If you have any external references, spatial files or documentation for this observation please attach them here.');
  t('Immature Name');
  t('In Idaho');
  t('In Lookup');
  t('Integrated Taxonomic Information System (www.itis.gov) identifier. Hosted by the USGS Center for Biological Informatics (CBI), through the National Biological Information Infrastructure (NBII).');
  t('Is it currently absent, present or undetermined?');
  t('Is the population breeding, non-breeding, transient or year-round?');
  t('Is this location of special conservation significance?');
  t('Is this species included in the Idaho Comprehensive Wildlife Conservation Strategy (CWCS)?');
  t('Is this species of native, exotic or undetermined origin?');
  t('Is this taxa found in Idaho?');
  t('Job title and/or experience as it relates to fish, game and the outdoors');
  t('Job title or experience as it relates to fish, game and the outdoors');
  t('Land Manager(s)');
  t('Life Stage');
  t('Life State');
  t('Location');
  t('Location Comment');
  t('Location Confidence');
  t('Location Precision');
  t('Location Resource');
  t('Location Steps');
  t('Location Unresolveable');
  t('Location Use');
  t('Male Name');
  t('Male, Female or Not Applicable?');
  t('MasterID');
  t('Milepost');
  t('Museum');
  t('NatureServe ID');
  t('Nest Aspect');
  t('Nest Condition');
  t('Nest Height');
  t('Nest Status');
  t('Nest Substrate');
  t('Nest Substrate Aspect');
  t('Nest Substrate Height');
  t('Observation Method(s)');
  t('Observation Site ID');
  t('ObserveDetailID');
  t('Observer');
  t('Observer Confidence');
  t('Observer(s)');
  t('Optional add a survey site if this is a revisited location such as a lek, survey route or bird count stop.');
  t('Organization');
  t('Origin');
  t('Parent');
  t('Person Confidence');
  t('Phone');
  t('Photo(s)');
  t('Please choose all methods that apply.');
  t('Please enter the species or taxa that was observed. Choices will appear as you type, please select one.');
  t('Position');
  t('Primary Data Source');
  t('Processing steps');
  t('Region');
  t('SA Code');
  t('SA code (IDFG Reference Code)');
  t('SGCN');
  t('Scientific Name(s)');
  t('Sensitive');
  t('Session');
  t('Sex');
  t('Share photos of your observation to help the community confirm your identification.');
  t('Should this taxa be included in the default lookup list when adding observations?');
  t('Source Agency');
  t('Source ID');
  t('Source Type');
  t('Species');
  t('Species Account');
  t('Species Confidence');
  t('Species protection level under Idaho code.');
  t('Specimen Number');
  t('State Common Name');
  t('State Rank');
  t('State Rank set by Idaho Fish and Game');
  t('State Scientific Name');
  t('Station Mark');
  t('Study Area');
  t('Survey Method');
  t('Survey Site');
  t('Survey Site Directions');
  t('Survey Site Method');
  t('Taxa Categories');
  t('Taxa Tree');
  t('Terrestrial');
  t('Terrestrial, aquatic or amphibious? Terrestrial animals live predominantly or entirely on land (e.g. ants, deer), as compared with aquatic animals, which live predominantly or entirely in the water (e.g. fish, crayfish), or amphibians, which rely on a combination of aquatic and terrestrial habitats (e.g. frogs, salamanders).');
  t('Territory Occupancy');
  t('Territory Status');
  t('The SA code is for internal use only.');
  t('The descriptory name for the site at the lowest level (e.g. for Boise River Waterbird Survey @ Veterans, this would be "Veterans" and Survey Area would be Boise River and Survey Type would be Waterbird Survey).');
  t('The ecological system where the observation occurred.');
  t('The ecological system(s) adjacent to where the observation occurred, if different');
  t('The general condition of the nest (e.g. excellent, poor, old)');
  t('The height of the nest from the bottom of the nesting substrate.');
  t('The height of the substrate on which the nest is located.');
  t('The method of survey at the site.');
  t('The selected date/time is accurate within... ');
  t('The substrate on which the nest is located (e.g. cliff, tree).');
  t('This count was...');
  t('This is the feature class most likely to mapped from this record.
');
  t('Types as identified in the <a title="Sensitive Species List PDF Document" href="http://www.blm.gov/pgdata/etc/medialib/blm/id/directives/commonly_requested.Par.83567.File.dat/" target="_blank">Idaho Bureau of Land Management (BLM) Sensitive Species List</a> ');
  t('U.S. Endangered Species Act Classification');
  t('USESA');
  t('USFS Region1');
  t('USFS Region4');
  t('USFS Region6');
  t('Verification Status');
  t('Vertebrate');
  t('What is a group called? <br/>e.g. <em>army, bed, brace, cast, charm, cluster, colony, dowt, family, flight, flock, gaze, herd, hood, labour, maelstrom, murder, pack, parliament, prickle, pride, quiver, rafter, romp, school, sedge, siege, skulk, swarm, tiding</em>');
  t('What is a youngster called?  <br/>e.g. <em>calf, chick, cub, duckling, eyas, fawn, fledgling, foal, fry, gosling, kid, kit, lamb, maggot, nymph, poult, pup, salamanderling, tadpole, wormlet</em>');
  t('What is the female called?  <br/>e.g. <em>cow, doe, ewe, falcon, goose, hen, jenny, lioness, mare, nanny, queen, sow, vixen</em>');
  t('What is the male called? <br/>e.g. <em>billy, boar, buck, bull, drake, gander, jack, king, lion, ram, stallion, tiercel, tod, tom</em>');
  t('What tools, guides or reference materials were used to assist with this identification?');
  t('Who observed this animal or plant? The first observer is required. You may drag and drop to reorder the list.');
  t('map4gis');
  t('tmp Location Feature Type');

  return $fields;
}
