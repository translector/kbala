<?php
/**
 * @file
 * vitrina.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vitrina_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create vitrina content'.
  $permissions['create vitrina content'] = array(
    'name' => 'create vitrina content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any vitrina content'.
  $permissions['edit any vitrina content'] = array(
    'name' => 'edit any vitrina content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own vitrina content'.
  $permissions['edit own vitrina content'] = array(
    'name' => 'edit own vitrina content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
