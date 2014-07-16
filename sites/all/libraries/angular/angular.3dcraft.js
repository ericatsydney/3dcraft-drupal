/**
* product_show Module
*
* Description
*/
var product_show = angular.module('product_show', [])
	.factory('prdThreedViewService', ['$scope', function($scope){
		//TODO, currently use rootScope and module.value to set global variable 
		var colorStat = [
		{id:a, hexcolor:'0xffffff'}
		];
		
		var fontFamilyStat =[
		{id:a, fontFamily:'Arial'}];

		return function(){
			
		};
	}])
	.controller('prdColorCtrl', ['$scope','$rootScope','$element','myStl',function ($scope,$rootScope,$element,myStl){
		$rootScope.myColor = ["0x0a99e8","0xffff00"];		
		$scope.chooseColor = function($key){
			$rootScope.myColor[$key] = $element.attr('hexcolor'); 
		};

	}])
	.controller('prdThreedViewCtrl', ['$scope',function ($scope){
		//nothing
	}])
	.directive('craftThreedView',['$document','myStl','myCam',function($document,myStl,myCam){
		return{
			//map directive with the attribute name
			restrict: 'A',
			//isolate scope from outer scope
			scope:{
				'color': '=color'
			},

			link: function postLink(scope, element, attrs) {
				/*color hex number
				 * true blue 0x0a99e8
				 * true yellow 0xffff00
				 * true red 0xcf1b1d
				 * true orange 0xff7519
				 * true green 0x26944b
				 * true white 0xffffff
				*/
				var camera, scene, renderer,
				geometry, material, light1, stats, rotation,directionalLight,
				color1, color2,mesh1,mesh2,yposition;
				color1= '0x0a99e8';
				color2= '0xffff00';
				rotation = 0;
				var startX = 0, x = 0, lastX = 0;

			    

			    //TODO

				/*window.addEventListener( 'resize', onWindowResize, false );*/

				// Notes:
				// - STL file format: http://en.wikipedia.org/wiki/STL_(file_format)
				// - 80 byte unused header
				// - All binary STLs are assumed to be little endian, as per wiki doc
				scope.parseStlBinary = function(stl, stlColor, myMesh) {
				    var geo = new THREE.Geometry();
				    var dv = new DataView(stl, 80); // 80 == unused header
				    var isLittleEndian = true;
				    var triangles = dv.getUint32(0, isLittleEndian); 

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

				    stl = null;

				    return geo;
				    
				};  //end of parse

				scope.init = function() {
				    //Detector.addGetWebGLMessage();
				    
				    for (var k in myCam) {
				    	if (k = "yposition") {yposition = myCam[k];}
				    	
				    }


				    scene = new THREE.Scene();
				    camera = new THREE.PerspectiveCamera( 60,675/502, 0.1, 10000 );
				    camera.position.x = 0;
				    camera.position.z = 0;
				    camera.position.y = yposition;
				    scene.add( camera );
				    directionalLight = new THREE.DirectionalLight( 0xffffff );
				    directionalLight.position.x = 0; 
				    directionalLight.position.y = 1; 
				    directionalLight.position.z = 1; 
				    directionalLight.position.normalize();
				    scene.add( directionalLight );

				    var i = 1;
					for (var key in myStl) {
						//TODO, dynamic variable is needed to implemented
						//somehow xhr and mesh is needed to clarify before running
						switch (i)
						{ 
							case 1:
						    var xhr1 = new XMLHttpRequest();
						    xhr1.onerror = function(e) {
						        console.log(e);
						    }	
						    
						    xhr1.open( "GET", '/sites/default/files/'+myStl[key], true );
						    console.log('/sites/default/files/'+myStl[key]);			    
						    xhr1.responseType = "arraybuffer";
						    xhr1.send( null );
						    console.log(xhr1.readyState);
						    xhr1.onreadystatechange = function () {
						        if ( xhr1.readyState == 4 ) {
						            if ( xhr1.status == 200 || xhr1.status == 0 ) {
						                window['rep' + key] = xhr1.response; // || xhr.mozResponseArrayBuffer;
						                window['myGeo' + key] = scope.parseStlBinary(window['rep' + key],color1,mesh1);
						                mesh1 = new THREE.Mesh( 
									        window['myGeo' + key],

									        new THREE.MeshLambertMaterial({
									            overdraw:true,
									            color: color1,
									            shading: THREE.FlatShading
									        }
									    ));
									    mesh1.rotation.x = 5;
									    mesh1.z = .25;
									    scene.add(mesh1);
						            }
						        }
						    };
						    break;
						    case 2:
						    var xhr2 = new XMLHttpRequest();
						    xhr2.onerror = function(e) {
						        console.log(e);
						    }	
						    
						    xhr2.open( "GET", '/sites/default/files/'+myStl[key], true );
						    console.log('/sites/default/files/'+myStl[key]);			    
						    xhr2.responseType = "arraybuffer";
						    xhr2.send( null );
						    console.log(xhr2.readyState);
						    xhr2.onreadystatechange = function () {
						        if ( xhr2.readyState == 4 ) {
						            if ( xhr2.status == 200 || xhr2.status == 0 ) {
						                window['rep' + key] = xhr2.response; // || xhr.mozResponseArrayBuffer;
						                window['myGeo' + key] = scope.parseStlBinary(window['rep' + key],color2,mesh2);
						                mesh2 = new THREE.Mesh( 
									        window['myGeo' + key],

									        new THREE.MeshLambertMaterial({
									            overdraw:true,
									            color: color2,
									            shading: THREE.FlatShading
									        }
									    ));
									    mesh2.rotation.x = 5;
									    mesh2.z = .25;
									    scene.add(mesh2);
						            }
						        }
						    };
						    break;

					  	}
					  	i++;

					};

				    
				    renderer = new THREE.WebGLRenderer(); 
				    renderer.setSize( 675, 502 );
				    // element is provided by the angular directive
          			element[0].appendChild( renderer.domElement );
				    //document.body.appendChild( renderer.domElement );

				}
				// -----------------------------------
		        // Draw and Animate
		        // -----------------------------------
				scope.animate = function() {
				    // note: three.js includes requestAnimationFrame shim
				    requestAnimationFrame( scope.animate );
				    scope.render();
				}

				scope.render = function() {
			    	//rotation += 0.01;
			    	rotation = -x*0.01;
					camera.position.x = Math.sin(rotation) * 60;
					camera.position.z = Math.cos(rotation) * 60;
					camera.lookAt( scene.position );
					directionalLight.position.x = Math.sin(rotation) * 1; 
				    directionalLight.position.z = Math.cos(rotation) * 0.8; 

				    renderer.render( scene, camera );

				}	

				scope.changeColor = function () {
					//TODO, dynamic variable is needed to implemented
					//somehow xhr and mesh is needed to clarify before running
					var i = 1;
					for (key in myStl){
						switch (i){
						case 1:
							mesh1.material.color.setHex(scope.color[key]);
							break;
						case 2:
							mesh2.material.color.setHex(scope.color[key]);
							break;
						}
						i++;
					}
		        };

				scope.$watch('color', function () {
		          scope.changeColor();
		        },true);

				//Begin
				scope.init();
				scope.animate();

				element.on('mousedown',function(event) {
				    startX = event.pageX;
				    element.on('mousemove',function(event) {
				    	event.preventDefault();
				        x = event.pageX - startX + lastX;
				        scope.animate();
				        //alert ('mousemove');
				    });
			    });

			    element.on('mouseup',function(event) {
			    	lastX = x;
			        element.unbind('mousemove');

			    });


			}//link function end
		}
	}
	]);//directive end