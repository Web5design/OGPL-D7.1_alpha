jQuery(document).ready(function() {
		
	setFlds();
		
	jQuery('#edit-field-import-method-und').change(function(){
		setFlds();
	}); 

});


function setFlds() {

	var importStyle = jQuery('#edit-field-import-method-und :selected').val();
				
	if(importStyle == "Map Id") {
		
		jQuery('#node_arcgis_map_form_group_arcgis_forgot_gid').hide();
		jQuery('#field-group-id-add-more-wrapper').hide();
			
		jQuery('#edit-field-group-id-und-0-value').val('');
		jQuery('#edit-field-group-title-und-0-value').val('');
		jQuery('#edit-field-group-owner-und-0-value').val('');
			
		jQuery('#arcgis-map-id-add-more-wrapper').show();
	}
	else if(importStyle == "Group Id"){
		
		jQuery('#arcgis-map-id-add-more-wrapper').hide();			
		jQuery('#edit-arcgis-map-id-und-0-value').val('');
			
		jQuery('#node_arcgis_map_form_group_arcgis_forgot_gid').show();			
		jQuery('#field-group-id-add-more-wrapper').show();
		
	}
	else {
	
		jQuery('#node_arcgis_map_form_group_arcgis_forgot_gid').hide();
		jQuery('#field-group-id-add-more-wrapper').hide();
		jQuery('#arcgis-map-id-add-more-wrapper').hide();
		
	}
}
