<?php
/**
 * @file
 * panel.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function panel_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-controles.
  $menus['menu-controles'] = array(
    'menu_name' => 'menu-controles',
    'title' => 'Controles',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Controles');

  return $menus;
}
