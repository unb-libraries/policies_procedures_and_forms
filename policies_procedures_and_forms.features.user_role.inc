<?php
/**
 * @file
 * policies_procedures_and_forms.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function policies_procedures_and_forms_user_default_roles() {
  $roles = array();

  // Exported role: Policies, Procedures, and Forms Admin.
  $roles['Policies, Procedures, and Forms Admin'] = array(
    'name' => 'Policies, Procedures, and Forms Admin',
    'weight' => 21,
  );

  return $roles;
}
