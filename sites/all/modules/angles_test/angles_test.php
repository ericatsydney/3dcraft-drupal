
<div data-ng-app="">
	<div data-ng-controller="angles_test_controller">
		Name:
		<br>
		<input type="text" data-ng-model="name">
		<br>
		<ul>
			<li data-ng-repeat="personName in names | filter:name">{{ personName }}</li>
		</ul>		
		<div id="angles_test_div" >Angles Test Template</div>
	</div>
</div>
<script type="text/javascript" src="sites/all/libraries/angular/angular.min.js"></script>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div>
        <script src="/sites/all/themes/bootstrap_subtheme/bootstrap/js/three.js"></script>
        <script src="/sites/all/themes/bootstrap_subtheme/bootstrap/js/stats.js"></script>
        <script src="/sites/all/themes/bootstrap_subtheme/bootstrap/js/detector.js"></script>
<script>
						//color hex number
						//true blue 0a99e8
						//true yellow ffff00
						//true red cf1b1d
						//true orange ff7519
						//true green 26944b
						//true white ffffff
						
						
            var camera, scene, renderer,
            geometry, material, mesh, mesh1, light1, stats, variableDynamic;

            function trim (str) {
                str = str.replace(/^\s+/, '');
                for (var i = str.length - 1; i >= 0; i--) {
                    if (/\S/.test(str.charAt(i))) {
                        str = str.substring(0, i + 1);
                        break;
                    }
                }
                return str;
            }

            // Notes:
            // - STL file format: http://en.wikipedia.org/wiki/STL_(file_format)
            // - 80 byte unused header
            // - All binary STLs are assumed to be little endian, as per wiki doc
            var parseStlBinary = function(stl, stlColor, variableDynamic) {
                var geo = new THREE.Geometry();
                var dv = new DataView(stl, 80); // 80 == unused header
                var isLittleEndian = true;
                var triangles = dv.getUint32(0, isLittleEndian); 

                // console.log('arraybuffer length:  ' + stl.byteLength);
                // console.log('number of triangles: ' + triangles);

                var offset = 4;
                for (var i = 0; i < triangles; i++) {
                    // Get the normal for this triangle
                    var normal = new THREE.Vector3(
                        dv.getFloat32(offset, isLittleEndian),
                        dv.getFloat32(offset+4, isLittleEndian),
                        dv.getFloat32(offset+8, isLittleEndian)
                    );
                    offset += 12;

                    // Get all 3 vertices for this triangle
                    for (var j = 0; j < 3; j++) {
                        geo.vertices.push(
                            new THREE.Vector3(
                                dv.getFloat32(offset, isLittleEndian),
                                dv.getFloat32(offset+4, isLittleEndian),
                                dv.getFloat32(offset+8, isLittleEndian)
                            )
                        );
                        offset += 12
                    }

                    // there's also a Uint16 "attribute byte count" that we
                    // don't need, it should always be zero.
                    offset += 2;   

                    // Create a new face for from the vertices and the normal             
                    geo.faces.push(new THREE.Face3(i*3, i*3+1, i*3+2, normal));
                }

                // The binary STL I'm testing with seems to have all
                // zeroes for the normals, unlike its ASCII counterpart.
                // We can use three.js to compute the normals for us, though,
                // once we've assembled our geometry. This is a relatively 
                // expensive operation, but only needs to be done once.
                geo.computeFaceNormals();

                window[variableDynamic] = new THREE.Mesh( 
                    geo,
                    // new THREE.MeshNormalMaterial({
                    //     overdraw:true
                    // }
                    new THREE.MeshLambertMaterial({
                        overdraw:true,
                        color: stlColor,
                        shading: THREE.FlatShading
                    }
                ));
                scene.add(window[variableDynamic]);

                stl = null;
            };  
           
            init();
            animate();

            function init() {

                //Detector.addGetWebGLMessage();

                scene = new THREE.Scene();

                camera = new THREE.PerspectiveCamera( 100,1.25, /* window.innerWidth / window.innerHeight*/ 1, 10000 );
                camera.position.x = 10;
                camera.position.z = 80;
                camera.position.y = 20;
                scene.add( camera );

                var directionalLight = new THREE.DirectionalLight( 0xffffff );
                directionalLight.position.x = 0; 
                directionalLight.position.y = 1; 
                directionalLight.position.z = .8; 
                directionalLight.position.normalize();
                scene.add( directionalLight );

                var xhr = new XMLHttpRequest();
                xhr.onreadystatechange = function () {
                    if ( xhr.readyState == 4 ) {
                        if ( xhr.status == 200 || xhr.status == 0 ) {
                            var rep = xhr.response; // || xhr.mozResponseArrayBuffer;
                            console.log(rep);
                            parseStlBinary(rep,'0x0a99e8','mesh');
                            //parseStl(xhr.responseText);
                            mesh.rotation.x = 5;
                            mesh.rotation.z = .25;
                            console.log('done parsing');
                        }
                    }
                }
                xhr.onerror = function(e) {
                    console.log(e);
                }
                
                xhr.open( "GET", '/sites/default/files/boatnametag1.stl', true );
                xhr.responseType = "arraybuffer";
                //xhr.setRequestHeader("Accept","text/plain");
                //xhr.setRequestHeader("Content-Type","text/plain");
                //xhr.setRequestHeader('charset', 'x-user-defined');
                xhr.send( null );
                
                //Eric
                var xhr1 = new XMLHttpRequest();
                xhr1.onreadystatechange = function () {
                    if ( xhr1.readyState == 4 ) {
                        if ( xhr1.status == 200 || xhr1.status == 0 ) {
                            var rep = xhr1.response; // || xhr.mozResponseArrayBuffer;
                            console.log(rep);
                            parseStlBinary(rep,'0xffff00','mesh1');
                            //parseStl(xhr.responseText);
                            mesh1.rotation.x = 5;
                            mesh1.rotation.z = .25;
                            console.log('done parsing');
                        }
                    }
                }
                xhr1.onerror = function(e) {
                    console.log(e);
                }
                
                xhr1.open( "GET", '/sites/default/files/boatnametag2.stl', true );
                xhr1.responseType = "arraybuffer";
                //xhr.setRequestHeader("Accept","text/plain");
                //xhr.setRequestHeader("Content-Type","text/plain");
                //xhr.setRequestHeader('charset', 'x-user-defined');
                xhr1.send( null );

								
                renderer = new THREE.WebGLRenderer(); //new THREE.CanvasRenderer();
                renderer.setSize( 500, 400 );

								//renderer.setSize( window.innerWidth/2, window.innerHeight/2 );

                document.body.appendChild( renderer.domElement );

            }

            function animate() {

                // note: three.js includes requestAnimationFrame shim
                requestAnimationFrame( animate );
                render();

            }

            function render() {

                //mesh.rotation.x += 0.01;
                if (mesh) {
                    mesh.rotation.z += 0.008;
                }
                if (mesh1) {
                    mesh1.rotation.z += 0.008;
                }
       
                //light1.position.z -= 1;

                renderer.render( scene, camera );

            }

        </script>