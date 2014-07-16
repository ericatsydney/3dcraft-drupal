<?php
/**
 * @file
 * craft_deployment.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function craft_deployment_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'angular_test_page';
  $page->task = 'page';
  $page->admin_title = 'Angular Test Page';
  $page->admin_description = 'Test Angular Page';
  $page->path = 'content/%node';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_angular_test_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'angular_test_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2870c1d9-9bf4-4317-9528-bc194be056e9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2fb0e14e-bf54-40dc-92f6-d136741d5cae';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array(
      'type' => 'none',
      'regions' => array(
        'center' => 'center',
      ),
    );
    $pane->uuid = '2fb0e14e-bf54-40dc-92f6-d136741d5cae';
    $display->content['new-2fb0e14e-bf54-40dc-92f6-d136741d5cae'] = $pane;
    $display->panels['center'][0] = 'new-2fb0e14e-bf54-40dc-92f6-d136741d5cae';
    $pane = new stdClass();
    $pane->pid = 'new-5753dff5-84dd-4537-8e17-60375846ea42';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '@1',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5753dff5-84dd-4537-8e17-60375846ea42';
    $display->content['new-5753dff5-84dd-4537-8e17-60375846ea42'] = $pane;
    $display->panels['center'][1] = 'new-5753dff5-84dd-4537-8e17-60375846ea42';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['angular_test_page'] = $page;

  return $pages;

}
