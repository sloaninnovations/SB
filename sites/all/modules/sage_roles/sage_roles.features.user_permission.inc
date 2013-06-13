<?php
/**
 * @file
 * sage_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sage_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: access customer_level_1 content.
  $permissions['access customer_level_1 content'] = array(
    'name' => 'access customer_level_1 content',
    'roles' => array(
      'Customer - Level 1' => 'Customer - Level 1',
      'Customer - Level 2' => 'Customer - Level 2',
      'Customer - Level 3' => 'Customer - Level 3',
      'Employee' => 'Employee',
      'Partner' => 'Partner',
      'administrator' => 'administrator',
    ),
    'module' => 'sage_roles',
  );

  // Exported permission: access customer_level_2 content.
  $permissions['access customer_level_2 content'] = array(
    'name' => 'access customer_level_2 content',
    'roles' => array(
      'Customer - Level 2' => 'Customer - Level 2',
      'Customer - Level 3' => 'Customer - Level 3',
      'Employee' => 'Employee',
      'Partner' => 'Partner',
      'administrator' => 'administrator',
    ),
    'module' => 'sage_roles',
  );

  // Exported permission: access customer_level_3 content.
  $permissions['access customer_level_3 content'] = array(
    'name' => 'access customer_level_3 content',
    'roles' => array(
      'Customer - Level 3' => 'Customer - Level 3',
      'Employee' => 'Employee',
      'Partner' => 'Partner',
      'administrator' => 'administrator',
    ),
    'module' => 'sage_roles',
  );

  // Exported permission: access customer_off_plan content.
  $permissions['access customer_off_plan content'] = array(
    'name' => 'access customer_off_plan content',
    'roles' => array(
      'Customer (off plan)' => 'Customer (off plan)',
      'Customer - Level 1' => 'Customer - Level 1',
      'Customer - Level 2' => 'Customer - Level 2',
      'Customer - Level 3' => 'Customer - Level 3',
      'Employee' => 'Employee',
      'Partner' => 'Partner',
      'administrator' => 'administrator',
    ),
    'module' => 'sage_roles',
  );

  // Exported permission: access employee content.
  $permissions['access employee content'] = array(
    'name' => 'access employee content',
    'roles' => array(
      'Employee' => 'Employee',
      'administrator' => 'administrator',
    ),
    'module' => 'sage_roles',
  );

  // Exported permission: access partner content.
  $permissions['access partner content'] = array(
    'name' => 'access partner content',
    'roles' => array(
      'Employee' => 'Employee',
      'Partner' => 'Partner',
      'administrator' => 'administrator',
    ),
    'module' => 'sage_roles',
  );

  // Exported permission: access registered content.
  $permissions['access registered content'] = array(
    'name' => 'access registered content',
    'roles' => array(
      'Customer (off plan)' => 'Customer (off plan)',
      'Customer - Level 1' => 'Customer - Level 1',
      'Customer - Level 2' => 'Customer - Level 2',
      'Customer - Level 3' => 'Customer - Level 3',
      'Employee' => 'Employee',
      'Partner' => 'Partner',
      'Registered' => 'Registered',
      'Student' => 'Student',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'sage_roles',
  );

  // Exported permission: access student content.
  $permissions['access student content'] = array(
    'name' => 'access student content',
    'roles' => array(
      'Customer (off plan)' => 'Customer (off plan)',
      'Customer - Level 1' => 'Customer - Level 1',
      'Customer - Level 2' => 'Customer - Level 2',
      'Customer - Level 3' => 'Customer - Level 3',
      'Employee' => 'Employee',
      'Partner' => 'Partner',
      'Student' => 'Student',
      'administrator' => 'administrator',
    ),
    'module' => 'sage_roles',
  );

  return $permissions;
}
