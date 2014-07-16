/**
* product_show Module
*
* Description
*/
var product_show = angular.module('product_show', []);

product_show.controller('angles_test_controller', function ($scope){
	$scope.customers=[
	{name:'John Smith',city:'Guangzhou'},
	{name:'John Doe', city:'Hangzhou'},
	{name:'Jane Doe', city:'Tianjin'}
	];
});