<?php
/**
 * @file
 * panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panel_de_control';
  $page->task = 'page';
  $page->admin_title = 'Panel de control';
  $page->admin_description = '';
  $page->path = 'panel';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panel_de_control__panel';
  $handler->task = 'page';
  $handler->subtask = 'panel_de_control';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_12_12_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Panel de control';
  $display->uuid = 'c6b0d804-17af-4627-9d28-d08104d5684c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d1cdbb7-863d-40f2-b13a-3d7dcfc9d6c3';
    $pane->panel = 'top';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d1cdbb7-863d-40f2-b13a-3d7dcfc9d6c3';
    $display->content['new-1d1cdbb7-863d-40f2-b13a-3d7dcfc9d6c3'] = $pane;
    $display->panels['top'][0] = 'new-1d1cdbb7-863d-40f2-b13a-3d7dcfc9d6c3';
    $pane = new stdClass();
    $pane->pid = 'new-caa5445c-a0d4-4d2a-bcf0-7a7637792661';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'caa5445c-a0d4-4d2a-bcf0-7a7637792661';
    $display->content['new-caa5445c-a0d4-4d2a-bcf0-7a7637792661'] = $pane;
    $display->panels['top'][1] = 'new-caa5445c-a0d4-4d2a-bcf0-7a7637792661';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panel_de_control'] = $page;

  return $pages;

}
