<?php
/**
 * @file
 * craft_deployment.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function craft_deployment_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Administer UC Color Attribute page'.
  $permissions['Administer UC Color Attribute page'] = array(
    'name' => 'Administer UC Color Attribute page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_color_attribute',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access connections tab'.
  $permissions['access connections tab'] = array(
    'name' => 'access connections tab',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'connector',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access resource comment'.
  $permissions['access resource comment'] = array(
    'name' => 'access resource comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource field_collection_item'.
  $permissions['access resource field_collection_item'] = array(
    'name' => 'access resource field_collection_item',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource file'.
  $permissions['access resource file'] = array(
    'name' => 'access resource file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource node'.
  $permissions['access resource node'] = array(
    'name' => 'access resource node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource redirect'.
  $permissions['access resource redirect'] = array(
    'name' => 'access resource redirect',
    'roles' => array(),
    'module' => 'restws',
  );

  // Exported permission: 'access resource rules_config'.
  $permissions['access resource rules_config'] = array(
    'name' => 'access resource rules_config',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_term'.
  $permissions['access resource taxonomy_term'] = array(
    'name' => 'access resource taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_vocabulary'.
  $permissions['access resource taxonomy_vocabulary'] = array(
    'name' => 'access resource taxonomy_vocabulary',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource uc_cart_item'.
  $permissions['access resource uc_cart_item'] = array(
    'name' => 'access resource uc_cart_item',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource uc_order'.
  $permissions['access resource uc_order'] = array(
    'name' => 'access resource uc_order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource uc_order_product'.
  $permissions['access resource uc_order_product'] = array(
    'name' => 'access resource uc_order_product',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource user'.
  $permissions['access resource user'] = array(
    'name' => 'access resource user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource wysiwyg_profile'.
  $permissions['access resource wysiwyg_profile'] = array(
    'name' => 'access resource wysiwyg_profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer attributes'.
  $permissions['administer attributes'] = array(
    'name' => 'administer attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer cart links'.
  $permissions['administer cart links'] = array(
    'name' => 'administer cart links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_cart_links',
  );

  // Exported permission: 'administer catalog'.
  $permissions['administer catalog'] = array(
    'name' => 'administer catalog',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_catalog',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer jquery colorpicker'.
  $permissions['administer jquery colorpicker'] = array(
    'name' => 'administer jquery colorpicker',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'jquery_colorpicker',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer oauth connector'.
  $permissions['administer oauth connector'] = array(
    'name' => 'administer oauth connector',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauthconnector',
  );

  // Exported permission: 'administer order workflow'.
  $permissions['administer order workflow'] = array(
    'name' => 'administer order workflow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'administer own product features'.
  $permissions['administer own product features'] = array(
    'name' => 'administer own product features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer product attributes'.
  $permissions['administer product attributes'] = array(
    'name' => 'administer product attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer product classes'.
  $permissions['administer product classes'] = array(
    'name' => 'administer product classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer product features'.
  $permissions['administer product features'] = array(
    'name' => 'administer product features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer product options'.
  $permissions['administer product options'] = array(
    'name' => 'administer product options',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_attribute',
  );

  // Exported permission: 'administer product stock'.
  $permissions['administer product stock'] = array(
    'name' => 'administer product stock',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_stock',
  );

  // Exported permission: 'administer products'.
  $permissions['administer products'] = array(
    'name' => 'administer products',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_product',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer store'.
  $permissions['administer store'] = array(
    'name' => 'administer store',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_store',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure quotes'.
  $permissions['configure quotes'] = array(
    'name' => 'configure quotes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_quote',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create bootstrap_carousel content'.
  $permissions['create bootstrap_carousel content'] = array(
    'name' => 'create bootstrap_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create orders'.
  $permissions['create orders'] = array(
    'name' => 'create orders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create printerest content'.
  $permissions['create printerest content'] = array(
    'name' => 'create printerest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create product content'.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create product_kit content'.
  $permissions['create product_kit content'] = array(
    'name' => 'create product_kit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any bootstrap_carousel content'.
  $permissions['delete any bootstrap_carousel content'] = array(
    'name' => 'delete any bootstrap_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any printerest content'.
  $permissions['delete any printerest content'] = array(
    'name' => 'delete any printerest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any product content'.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any product_kit content'.
  $permissions['delete any product_kit content'] = array(
    'name' => 'delete any product_kit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete orders'.
  $permissions['delete orders'] = array(
    'name' => 'delete orders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own bootstrap_carousel content'.
  $permissions['delete own bootstrap_carousel content'] = array(
    'name' => 'delete own bootstrap_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own printerest content'.
  $permissions['delete own printerest content'] = array(
    'name' => 'delete own printerest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own product content'.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own product_kit content'.
  $permissions['delete own product_kit content'] = array(
    'name' => 'delete own product_kit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_payment',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in article_category'.
  $permissions['delete terms in article_category'] = array(
    'name' => 'delete terms in article_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in catalog'.
  $permissions['delete terms in catalog'] = array(
    'name' => 'delete terms in catalog',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any bootstrap_carousel content'.
  $permissions['edit any bootstrap_carousel content'] = array(
    'name' => 'edit any bootstrap_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any printerest content'.
  $permissions['edit any printerest content'] = array(
    'name' => 'edit any printerest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any product content'.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any product_kit content'.
  $permissions['edit any product_kit content'] = array(
    'name' => 'edit any product_kit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit orders'.
  $permissions['edit orders'] = array(
    'name' => 'edit orders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own bootstrap_carousel content'.
  $permissions['edit own bootstrap_carousel content'] = array(
    'name' => 'edit own bootstrap_carousel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own printerest content'.
  $permissions['edit own printerest content'] = array(
    'name' => 'edit own printerest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own product content'.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own product_kit content'.
  $permissions['edit own product_kit content'] = array(
    'name' => 'edit own product_kit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in article_category'.
  $permissions['edit terms in article_category'] = array(
    'name' => 'edit terms in article_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in catalog'.
  $permissions['edit terms in catalog'] = array(
    'name' => 'edit terms in catalog',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'fulfill orders'.
  $permissions['fulfill orders'] = array(
    'name' => 'fulfill orders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_shipping',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'kwresearch admin page keywords'.
  $permissions['kwresearch admin page keywords'] = array(
    'name' => 'kwresearch admin page keywords',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'kwresearch',
  );

  // Exported permission: 'kwresearch admin site keywords'.
  $permissions['kwresearch admin site keywords'] = array(
    'name' => 'kwresearch admin site keywords',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'kwresearch',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manual payments'.
  $permissions['manual payments'] = array(
    'name' => 'manual payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_payment',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'perform content analysis'.
  $permissions['perform content analysis'] = array(
    'name' => 'perform content analysis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contentanalysis',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'sync local profile with connections'.
  $permissions['sync local profile with connections'] = array(
    'name' => 'sync local profile with connections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'connector',
  );

  // Exported permission: 'unconditionally delete orders'.
  $permissions['unconditionally delete orders'] = array(
    'name' => 'unconditionally delete orders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view all orders'.
  $permissions['view all orders'] = array(
    'name' => 'view all orders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view cart links report'.
  $permissions['view cart links report'] = array(
    'name' => 'view cart links report',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_cart_links',
  );

  // Exported permission: 'view catalog'.
  $permissions['view catalog'] = array(
    'name' => 'view catalog',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_catalog',
  );

  // Exported permission: 'view customers'.
  $permissions['view customers'] = array(
    'name' => 'view customers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own invoices'.
  $permissions['view own invoices'] = array(
    'name' => 'view own invoices',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view own orders'.
  $permissions['view own orders'] = array(
    'name' => 'view own orders',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_order',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_payment',
  );

  // Exported permission: 'view reports'.
  $permissions['view reports'] = array(
    'name' => 'view reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uc_store',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
