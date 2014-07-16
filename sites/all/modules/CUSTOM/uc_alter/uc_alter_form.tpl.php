<?php
/**
 * Template for theming the add to cart form for product products
 *
 * Available Variables:
 *   $form - contains the form array containing the product attributes
 */
//You can view the form variable by uncommenting this line
//print('<pre>'.print_r($form,1).'</pre>');
?>
<div class="product-wrapper">
  <div class="product-info-wrapper">
    
  </div>
   <h3 class="prod-kit-title"><?php print render($title); ?></h3>
  <span class="prod-sell-price h4">$ <?php print render(number_format($sell_price,2)); ?></span>
  <a href="#" id="btn-realview">Click to Customize</a>
  <div class="clearfix"></div>
  <?php if($form): ?>
      <?php print drupal_render_children($form); ?>
  <?php endif; ?>
  <div class="panel-body">
   <div class="well well-sm" ng-class="displayFont" ng-show="yourName.length > 0">Hello {{yourName}}!</div>
  </div>
</div>

<?php if($buttons): ?>
  <div class="node-buttons pull-left" style="margin-top:0.6em">
      <?php print render($buttons); ?>
  </div>
<?php endif; ?>
