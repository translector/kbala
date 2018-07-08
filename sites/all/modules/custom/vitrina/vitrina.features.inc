<?php
/**
 * @file
 * vitrina.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vitrina_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vitrina_image_default_styles() {
  $styles = array();

  // Exported image style: vitrina.
  $styles['vitrina'] = array(
    'label' => 'vitrina',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function vitrina_node_info() {
  $items = array(
    'vitrina' => array(
      'name' => t('Vitrina'),
      'base' => 'node_content',
      'description' => t('La vitrina es un lugar destacado en su página de inicio.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
