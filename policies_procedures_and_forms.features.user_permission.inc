<?php
/**
 * @file
 * policies_procedures_and_forms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function policies_procedures_and_forms_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create policies_procedures_and_forms content'.
  $permissions['create policies_procedures_and_forms content'] = array(
    'name' => 'create policies_procedures_and_forms content',
    'roles' => array(
      'Policies, Procedures, and Forms Admin' => 'Policies, Procedures, and Forms Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any policies_procedures_and_forms content'.
  $permissions['delete any policies_procedures_and_forms content'] = array(
    'name' => 'delete any policies_procedures_and_forms content',
    'roles' => array(
      'Policies, Procedures, and Forms Admin' => 'Policies, Procedures, and Forms Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own policies_procedures_and_forms content'.
  $permissions['delete own policies_procedures_and_forms content'] = array(
    'name' => 'delete own policies_procedures_and_forms content',
    'roles' => array(
      'Policies, Procedures, and Forms Admin' => 'Policies, Procedures, and Forms Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any policies_procedures_and_forms content'.
  $permissions['edit any policies_procedures_and_forms content'] = array(
    'name' => 'edit any policies_procedures_and_forms content',
    'roles' => array(
      'Policies, Procedures, and Forms Admin' => 'Policies, Procedures, and Forms Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own policies_procedures_and_forms content'.
  $permissions['edit own policies_procedures_and_forms content'] = array(
    'name' => 'edit own policies_procedures_and_forms content',
    'roles' => array(
      'Policies, Procedures, and Forms Admin' => 'Policies, Procedures, and Forms Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view ppf'.
  $permissions['view ppf'] = array(
    'name' => 'view ppf',
    'roles' => array(
      'Regular Staff Member' => 'Regular Staff Member',
    ),
    'module' => 'policies_procedures_and_forms',
  );

  return $permissions;
}
