/* ========================================================================
 * Bootstrap: button.js v3.1.1
 * http://getbootstrap.com/javascript/#buttons
 * ========================================================================
 * Copyright 2011-2014 Twitter, Inc.
 * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)
 * ======================================================================== */

//Added by Eric
+function ($) {
      $("#btn-realview").click(function() {
        $("canvas").toggle();

        $(".field-slideshow-wrapper").toggle();
        if ($(this).hasClass('active')){
        	$(this).removeClass('active');
          $(this).text('Click to Customize')

        }else{
        	$(this).addClass('active');        	
          $(this).text('Back to Normal View')
        }        
      });  

	$(".field-slideshow-carousel-wrapper li a").click(function() {
        $("canvas").css({
        	"display":"none"
        });
       	$("#btn-realview").removeClass('active');
	
	});

     

}(jQuery);
