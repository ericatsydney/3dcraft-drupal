<?php
/**
 * @file
 * craft_deployment.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function craft_deployment_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_show';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product' => 'product',
        'product_kit' => 'product_kit',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'angles_application' => array(
      'app_name' => 'product_show',
    ),
  );
  $context->condition_mode = 0;
  $export['product_show'] = $context;

  return $export;
}
