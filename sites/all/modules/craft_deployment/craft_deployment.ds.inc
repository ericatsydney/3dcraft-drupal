<?php
/**
 * @file
 * craft_deployment.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function craft_deployment_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_kit|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_kit';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'prod-desc',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|product_kit|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'prod-desc',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|product|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function craft_deployment_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = '3dview';
  $ds_field->label = '3dview-icon';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="#" id="btn-realview"></a>
',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['3dview'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function craft_deployment_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_2_10';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'title' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_7_5';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_image',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'field_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|article|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|bootstrap_carousel|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'bootstrap_carousel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_2_10';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_control_options',
        1 => 'field_carousel_interval',
      ),
      'right' => array(
        2 => 'field_slides',
      ),
    ),
    'fields' => array(
      'field_control_options' => 'left',
      'field_carousel_interval' => 'left',
      'field_slides' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|bootstrap_carousel|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|printerest|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'printerest';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_4_4_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|printerest|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_kit|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_kit';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'uc_product_image',
        1 => 'body',
      ),
      'right' => array(
        2 => 'weight',
        3 => 'dimensions',
        4 => 'add_to_cart',
      ),
    ),
    'fields' => array(
      'uc_product_image' => 'left',
      'body' => 'left',
      'weight' => 'right',
      'dimensions' => 'right',
      'add_to_cart' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|product_kit|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'uc_product_image',
        1 => 'body',
      ),
      'right' => array(
        2 => 'add_to_cart',
      ),
    ),
    'fields' => array(
      'uc_product_image' => 'left',
      'body' => 'left',
      'add_to_cart' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|product|default'] = $ds_layout;

  return $export;
}
