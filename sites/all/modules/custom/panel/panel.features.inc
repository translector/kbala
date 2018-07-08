<?php
/**
 * @file
 * panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function panel_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'panel',
      'theme' => 'panel',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'panel',
    ),
    'string' => '"drupal:path = panel >>> panel"',
    'childs' => array(),
  ),
);

return $rules;
}
