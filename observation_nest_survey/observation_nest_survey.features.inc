<?php
/**
 * @file
 * observation_nest_survey.features.inc
 */

/**
 * Implements hook_node_info().
 */
function observation_nest_survey_node_info() {
  $items = array(
    'observation' => array(
      'name' => t('Observation'),
      'base' => 'node_content',
      'description' => t('Basic Observation'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'observation_nest_survey' => array(
      'name' => t('Observation Nest Survey'),
      'base' => 'node_content',
      'description' => t('A nest occupancy survey (possibly this will also hold population surveys and even perchance den surveys)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Add a person to your account you may use in observations and other forms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Note: Your name and organization will be shared with our partner agencies.'),
    ),
    'survey_site' => array(
      'name' => t('Survey Site'),
      'base' => 'node_content',
      'description' => t('The area of the earth\'s surface where a survey was conducted. Used to track recurring survey locations such as leks, colonies and dens.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('You are creating or editing a survey site. Please be as thorough as possible in filling out these fields.'),
    ),
    'taxa' => array(
      'name' => t('Taxa'),
      'base' => 'node_content',
      'description' => t('Official Taxonomic Linnean Hierarchy for Idaho'),
      'has_title' => '1',
      'title_label' => t('Taxon'),
      'help' => '',
    ),
  );
  return $items;
}
