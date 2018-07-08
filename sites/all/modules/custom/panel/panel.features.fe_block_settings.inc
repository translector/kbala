<?php
/**
 * @file
 * panel.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function panel_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-controles'] = array(
    'animate_css_class' => 'none',
    'animate_css_infinite' => 0,
    'animate_css_wow_delay' => -1,
    'animate_css_wow_duration' => -1,
    'animate_css_wow_iteration' => -1,
    'animate_css_wow_offset' => -1,
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-controles',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'distro' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'distro',
        'weight' => 0,
      ),
      'interior' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'interior',
        'weight' => 0,
      ),
      'panel' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'panel',
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'animate_css_class' => '',
    'animate_css_infinite' => 0,
    'animate_css_wow_delay' => -1,
    'animate_css_wow_duration' => -1,
    'animate_css_wow_iteration' => -1,
    'animate_css_wow_offset' => -1,
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'distro' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'distro',
        'weight' => -5,
      ),
      'interior' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'interior',
        'weight' => -5,
      ),
      'panel' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'panel',
        'weight' => -5,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
