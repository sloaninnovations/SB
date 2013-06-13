<?php
/**
 * @file
 * sage_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function sage_roles_user_default_roles() {
  $roles = array();

  // Exported role: Customer (off plan).
  $roles['Customer (off plan)'] = array(
    'name' => 'Customer (off plan)',
    'weight' => 5,
    'machine_name' => 'customer_off_plan',
  );

  // Exported role: Customer - Level 1.
  $roles['Customer - Level 1'] = array(
    'name' => 'Customer - Level 1',
    'weight' => 6,
    'machine_name' => 'customer_level_1',
  );

  // Exported role: Customer - Level 2.
  $roles['Customer - Level 2'] = array(
    'name' => 'Customer - Level 2',
    'weight' => 7,
    'machine_name' => 'customer_level_2',
  );

  // Exported role: Customer - Level 3.
  $roles['Customer - Level 3'] = array(
    'name' => 'Customer - Level 3',
    'weight' => 8,
    'machine_name' => 'customer_level_3',
  );

  // Exported role: Employee.
  $roles['Employee'] = array(
    'name' => 'Employee',
    'weight' => 10,
    'machine_name' => 'employee',
  );

  // Exported role: Partner.
  $roles['Partner'] = array(
    'name' => 'Partner',
    'weight' => 9,
    'machine_name' => 'partner',
  );

  // Exported role: Registered.
  $roles['Registered'] = array(
    'name' => 'Registered',
    'weight' => 3,
    'machine_name' => 'registered',
  );

  // Exported role: Student.
  $roles['Student'] = array(
    'name' => 'Student',
    'weight' => 4,
    'machine_name' => 'student',
  );

  return $roles;
}
