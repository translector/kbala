<?php
/**
 * @file
 * panel.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function panel_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-controles_cambiar-clave:user/me/edit.
  $menu_links['menu-controles_cambiar-clave:user/me/edit'] = array(
    'menu_name' => 'menu-controles',
    'link_path' => 'user/me/edit',
    'router_path' => 'user/%/edit',
    'link_title' => 'Cambiar clave',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-controles_cambiar-clave:user/me/edit',
      'query' => array(
        'destination' => 'panel',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-controles_portada:<front>.
  $menu_links['menu-controles_portada:<front>'] = array(
    'menu_name' => 'menu-controles',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Portada',
    'options' => array(
      'attributes' => array(
        'title' => 'Ir a la portada del sitio',
      ),
      'identifier' => 'menu-controles_portada:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-controles_salir:user/logout.
  $menu_links['menu-controles_salir:user/logout'] = array(
    'menu_name' => 'menu-controles',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Salir',
    'options' => array(
      'attributes' => array(
        'title' => 'Desconectarse del sitio',
      ),
      'identifier' => 'menu-controles_salir:user/logout',
      'query' => array(
        'destination' => 'panel',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cambiar clave');
  t('Portada');
  t('Salir');

  return $menu_links;
}
