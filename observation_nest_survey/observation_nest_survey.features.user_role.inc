<?php
/**
 * @file
 * observation_nest_survey.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function observation_nest_survey_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: datamanager.
  $roles['datamanager'] = array(
    'name' => 'datamanager',
    'weight' => '3',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '4',
  );

  // Exported role: idfg.
  $roles['idfg'] = array(
    'name' => 'idfg',
    'weight' => '5',
  );

  // Exported role: partner.
  $roles['partner'] = array(
    'name' => 'partner',
    'weight' => '6',
  );

  return $roles;
}
