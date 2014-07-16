(function($) {
    "use strict";
	
	$(document).ready(function(){
		
		
		
	});
    
    Drupal.behaviors.uc_color_attribute = {
        attach: function() {
			
			//active the color on change
			var nid = $('div.colors-background').find('input[type=hidden]').val(),
			ctx = $('#edit-products-'+nid),
			aid = $('.colors-color').attr('attrid');
		
					  
       	 	var color = $('select[name=\'attributes['+aid+']\']',ctx).val();
		
			$(".colors-color[oid='"+color+"']").addClass('active');
			
			//click events
			//$('div.colors-color').unbind('click');
            $('div.colors-color').click(function() {
                  var nid = $(this).parent('div.colors-background').find('input[type=hidden]').val();
                      
                  if ($('#edit-products-'+nid).length > 0)
                  {
                      	ctx = '#edit-products-'+nid;
                  }else
                  {
                      	ctx = '#uc_product_add_to_cart_form-'+nid+'-attributes';
                  }

                  var aid = $(this).attr('attrid'),
                      oid = $(this).attr('oid'),
                      msg = $('div.txtmsg',ctx),
                      title = $(this).attr('title');
				  if ($(ctx+' select[name=\'products['+nid+'][attributes]['+aid+']\'] option[value=\''+oid+'\']').length > 0)
				  {
                  		$(ctx+' select[name=\'products['+nid+'][attributes]['+aid+']\'] option[value=\''+oid+'\']').prop('selected', true);
                  }else		
                  {			
                  		
                  		$(ctx+' select[name="attributes['+aid+']"] option[value="'+oid+'"]').prop('selected', true);
                  }
				  $('div.colors-color',ctx).removeClass('active');
				  $(this).addClass('active');
                  
                  /*if(msg.length > 0){
                          $(msg).html('<strong>Selected Color:</strong> '+title);
                  }else{
                          $('div.colors-background',ctx).before('<div class="txtmsg"><strong>Selected Colour:</strong> '+title+'</div>');
                  }   */             
            });
        }
    }
})(jQuery);