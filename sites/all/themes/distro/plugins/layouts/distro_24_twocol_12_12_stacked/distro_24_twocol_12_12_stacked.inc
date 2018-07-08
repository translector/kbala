<?php

/**
 * Implements hook_panels_layouts().
 */
function distro_distro_24_twocol_12_12_stacked_panels_layouts() {
  $items['distro_24_twocol_12_12_stacked'] = array(
    'title' => t('Two Column 12-12 stacked'),
    'category' => t('Distro: 24 Column Grid'),
    'icon' => 'distro_24_twocol_12_12_stacked.png',
    'theme' => 'distro_24_twocol_12_12_stacked',
    'admin css' => 'distro_panels_admin_24.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
