<?php
/**
 * @file
 * Bootstrap 8-4 template for Display Suite.
 */
?>


<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="row-fluid">
    <<?php print $left_wrapper; ?> class="col-md-8 <?php print $left_classes; ?>">
      <?php print $left; ?>
    </<?php print $left_wrapper; ?>>
    <<?php print $right_wrapper; ?> class="col-md-4 <?php print $right_classes; ?>">
      <?php print $right; ?>
    </<?php print $right_wrapper; ?>>
  </div>
</<?php print $layout_wrapper ?>>


<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>

<script src="/sites/all/themes/bootstrap_subtheme/bootstrap/js/three.js"></script>
<script src="/sites/all/themes/bootstrap_subtheme/bootstrap/js/stats.js"></script>
<script src="/sites/all/themes/bootstrap_subtheme/bootstrap/js/detector.js"></script>
<script src="/sites/all/themes/bootstrap_subtheme/bootstrap/js/domain.js"></script>
<script src="https://ajax.googleapis.com/ajax/libs/angularjs/1.3.0-beta.8/angular.min.js"></script>
<script type="text/javascript" src="/sites/all/libraries/angular/angular.3dcraft.js"></script>
<script type="text/javascript">
<?php 
   $tmpStr =  '';
   $camSet =  '';
   if (isset ($node->products))
   {
     foreach ($node->products as $key => $value) {
       $tmpStr .= $key.':"'.$node->products[$key]->field_stl_file[und][0][filename].'",';
       $camSet .= $node->products[$key]->field_camera_set[und][0][safe_value].',';
     }
   }
   else {
      $tmpStr .= $node->nid.':"'.$node->field_stl_file[und][0][filename].'",';
      $camSet .= $node->field_camera_set[und][0][safe_value].',';
    }
   echo 'product_show.value("myStl",{'.$tmpStr.'});';
   echo 'product_show.value("myCam",{'.$camSet.'});';
?>
</script>
<div ng-controller="prdThreedViewCtrl">
  <div id="webglContainer" color="myColor" craft-threed-view></div>
</div>