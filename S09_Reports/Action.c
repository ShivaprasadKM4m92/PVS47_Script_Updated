Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_cleanup_auto_headers();
	
	web_cleanup_cookies();
	
	web_set_max_html_param_len("99999999");
	
	lr_start_transaction("S09_01_OpenApplication");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='7914a474-5379-4192-afa2-474f44072702' Name ='CsrfTokenId' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CsrfTokenId",
		"LB=name=\"_csrf\" value=\"",
		"RB=\"/>\n                    ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/auth*",
		LAST);

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("signal", 
		"URL={URL}/signal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("A-IM", 
		"x-bm,gzip");

	

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL={URL}/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL={URL}/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_concurrent_start(NULL);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Origin", 
		"{URL}");

	web_add_header("Accept", 
		"*/*");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t9.inf", 
		LAST);


	web_concurrent_end(NULL);

	

	lr_end_transaction("S09_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_02_Login");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Dashboard",
		LAST);
	
	//userId = "7435"
	web_reg_save_param_ex(
		"ParamName=User_Id",
		"LB=userId = \"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	

	web_submit_data("authenticate",
		"Action={URL}/signal/login/authenticate",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/signal/login/auth",
		"Snapshot=t12.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=_csrf", "Value={CsrfTokenId}", ENDITEM,
		"Name=username", "Value={UserName}", ENDITEM,
		"Name=password", "Value={Password}", ENDITEM,
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"URL={URL}/signal/assets/theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t13.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t14.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t15.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL={URL}/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t16.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL={URL}/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t17.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t18.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL={URL}/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t19.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t20.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL={URL}/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t21.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t22.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t23.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL={URL}/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t24.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t25.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL={URL}/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t26.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL={URL}/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t27.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t28.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t29.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL={URL}/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t30.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL={URL}/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t31.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL={URL}/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t32.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t33.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t34.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t35.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL={URL}/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t36.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL={URL}/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t37.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t38.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t39.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t40.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t41.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL={URL}/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t42.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL={URL}/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t43.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t44.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t45.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t46.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL={URL}/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t47.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t48.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t49.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL={URL}/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t50.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t51.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL={URL}/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t52.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL={URL}/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t53.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL={URL}/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t54.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t55.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t56.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL={URL}/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t57.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL={URL}/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t58.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL={URL}/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t59.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL={URL}/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t60.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL={URL}/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t61.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL={URL}/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t62.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL={URL}/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t63.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t64.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL={URL}/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t65.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL={URL}/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t66.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t67.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL={URL}/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t68.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t69.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t70.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t71.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
//		"URL={URL}/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t72.inf", 
//		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t73.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL={URL}/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t74.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL={URL}/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t75.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t76.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL={URL}/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t77.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL={URL}/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t78.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL={URL}/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t79.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL={URL}/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t80.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t81.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t83.inf", 
		LAST);

	

//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t82.inf", 
		LAST);

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("en.json", 
		"URL={URL}/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t85.inf", 
		LAST);

//
//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1591617304223", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1591617304222", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1591617304224", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1591617304228", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("{User_Id}", 
		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617304229", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1591617304225", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1591617304227", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1591617304226", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("Origin", 
//		"{URL}");
	
	web_concurrent_end(NULL);

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("events", 
		"Action={URL}/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=01-Jun-2020", ENDITEM, 
		"Name=end", "Value=13-Jul-2020", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);
	
//	
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("signalList", 
		"URL={URL}/signal/dashboard/signalList?_=1591617304231", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket", 
//		"URL={URL}/signal/stomp/169/bk6x_frk/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t100.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("Accept", 
//		"*/*");
//
//	web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t101.inf", 
		LAST);



//	web_concurrent_end(NULL);
//
//	web_revert_auto_header("Origin");
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1591617304232", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1591617304230", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

//	web_concurrent_start(NULL);

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t107.inf", 
		LAST);

	web_concurrent_end(NULL);

//	web_revert_auto_header("Accept");
//
//	web_revert_auto_header("Accept-Language");
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept-Encoding", 
//		"gzip, deflate, br");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Accept-Encoding", 
//		"gzip, deflate");
//
//	web_add_auto_header("Accept-Language", 
//		"en-US,en;q=0.9");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

//	web_url("{User_Id}_2", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617304233", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t109.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S09_02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_03_NavigateToSignalReports");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("saveDashboardConfig", 
		"Action={URL}/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dashboardWidgetsConfig", "Value={\"pvWidgetChart-11\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-11\",\"x\":0,\"y\":7,\"height\":6,\"width\":12},\"content\":{\"id\":\"listAction\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Actions\"},\"pvWidgetChart-9\":{\"reportWidgetName\":\"Qualitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-9\",\"x\":0,\"y\":37,\"width\":6,\"height\":7},\"content\":{\"id\":\"qualitative-products-status\","
		"\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-10\":{\"reportWidgetName\":\"Quantitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-10\",\"x\":0,\"y\":43,\"width\":6,\"height\":7},\"content\":{\"id\":\"quantitative-products-status\",\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-7\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-7\",\"x\":0,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"assignedSignalTable\",\"type"
		"\":\"pvDashReports\"},\"reportWidgetName\":\"Assigned Signals\"},\"pvWidgetChart-5\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-5\",\"x\":0,\"y\":0,\"height\":6,\"width\":12},\"content\":{\"id\":\"assignedTriggeredAlerts\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Alerts\"},\"pvWidgetChart-4\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-4\",\"x\":6,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"due-date-chart\",\"type\":\""
		"pvDashChart\"},\"reportWidgetName\":\"Alert By Due Date\"},\"pvWidgetChart-6\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-6\",\"x\":6,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"calendar\",\"type\":\"pvDashCalendar\"},\"reportWidgetName\":\"Calendar\"},\"pvWidgetChart-1\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-1\",\"x\":0,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"adhoc-chart\",\"type\":\"pvDashChart\"},\""
		"reportWidgetName\":\"Ad-hoc Review By Status\"},\"pvWidgetChart-2\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-2\",\"x\":6,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"case-status-chart\",\"type\":\"pvDashChart\"},\"reportWidgetName\":\"Qualitative Review By Status\"},\"pvWidgetChart-3\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-3\",\"x\":0,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"aggregate-chart\",\"type\":\"pvDashChart\"}"
		",\"reportWidgetName\":\"Quantitative Review By Status\"},\"inbox\":{\"reportWidgetName\":\"Inbox\",\"reportWidgetDetails\":{\"id\":\"inbox\"},\"visible\":true},\"isDirty\":true}", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Signal Reports",
		LAST);

	web_url("index", 
		"URL={URL}/signal/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("fab-0bcedd3f777268a38ded227a4b308710.css", 
		"URL={URL}/signal/assets/fab-0bcedd3f777268a38ded227a4b308710.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("dateRangeEvdas-198248d2fcccc7379d1f5f4957f76002.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/dateRangeEvdas-198248d2fcccc7379d1f5f4957f76002.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"URL={URL}/signal/assets/copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"URL={URL}/signal/assets/configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t117.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("multi_datasource_dictionary-e388d3294bb91712f5e45b1449c86e27.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/multi_datasource_dictionary-e388d3294bb91712f5e45b1449c86e27.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t120.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"URL={URL}/signal/assets/plugin/dictionary/dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t121.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("report_history-87b95507519f147fb6e1123c40f43460.js", 
		"URL={URL}/signal/assets/app/pvs/report/report_history-87b95507519f147fb6e1123c40f43460.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL={URL}/signal/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("fab-f04063fec34e1cfba276734dd5f3c88d.js", 
		"URL={URL}/signal/assets/fab/fab-f04063fec34e1cfba276734dd5f3c88d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("graphReport-db78fa95710d497c78731ccde7a8a4ad.js", 
		"URL={URL}/signal/assets/app/pvs/report/graphReport-db78fa95710d497c78731ccde7a8a4ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("graph-c5f91aa007d6226e156a6e26bf1b35c9.js", 
		"URL={URL}/signal/assets/app/pvs/report/graph-c5f91aa007d6226e156a6e26bf1b35c9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL={URL}/signal/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL={URL}/signal/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL={URL}/signal/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t129.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchFaersDisabledColumnsIndexes", 
		"URL={URL}/signal/aggregateCaseAlert/fetchFaersDisabledColumnsIndexes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

//	web_url("history", 
//		"URL={URL}/signal/report/history?_=1591617348386", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t132.inf", 
//		"Mode=HTTP", 
//		LAST);


	web_revert_auto_header("X-Requested-With");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

//	web_add_header("Upgrade", 
//		"websocket");
//
//	web_url("websocket_2", 
//		"URL={URL}/signal/stomp/086/utwcji7_/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t135.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("{User_Id}_4", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348387", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t137.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_url("polymer-mini.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_03_NavigateToSignalReports",LR_AUTO);

	lr_think_time(3);

	web_url("polymer-micro.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t140.inf", 
		LAST);

	lr_start_transaction("SelectProductAndDate");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("{User_Id}_5", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348388", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t141.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("SelectProductAndDate",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("history_2", 
//		"URL={URL}/signal/report/history?_=1591617348389", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t142.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("{User_Id}_6", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348390", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t143.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("{User_Id}_7", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348391", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t144.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("searchViews", 
		"Action={URL}/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value={ProductName}", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=delimiter", "Value=;", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL={URL}/signal/productDictionary/getSelectedItem?productId={ProductId}&dataSource=pva&dictionaryLevel=3&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value={ProductId}", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_2", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=100077", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_3", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=111698", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

//	web_url("history_3", 
//		"URL={URL}/signal/report/history?_=1591617348392", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t150.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("{User_Id}_8", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348393", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t151.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("{User_Id}_9", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348394", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t152.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

//	web_url("history_4", 
//		"URL={URL}/signal/report/history?_=1591617348395", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t153.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("{User_Id}_10", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348396", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t154.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

//	web_url("history_5", 
//		"URL={URL}/signal/report/history?_=1591617348397", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t155.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("{User_Id}_11", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348398", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t156.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_start_transaction("S09_04_GenerateICSRsByCaseCharacteristics");
	
	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");


	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

//	web_reg_find("Search=Body",
//		"Text=individualCasesByAgeChart",
//		LAST);

	web_reg_find("Search=Body",
		"Text=Your report is being processed",
		LAST);

	web_custom_request("prepareICSRsReport", 
		"URL={URL}/signal/report/prepareICSRsReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22{ICSR_Product_Name}%22%2C%22id%22%3A%22{ICSR_ProdId}%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=ICSR_BY_CASE_CHARACTERISTICS&dataSource=pva&reportName={ICSR_Report}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D="
		"10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate={ICSR_StartDate}&endDate={ICSR_EndDate}&dateRangeType=CUSTOM", 
		LAST);

	
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_url("{User_Id}_12", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348399", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t159.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_end_transaction("S09_04_GenerateICSRsByCaseCharacteristics",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

//	web_url("history_6", 
//		"URL={URL}/signal/report/history?_=1591617348400", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t160.inf", 
//		"Mode=HTTP", 
//		LAST);

//	lr_start_transaction("S09_05_InitiatePBRERSignalSummaryReport");
//
//	web_add_auto_header("Accept", 
//		"*/*");
////
////	web_url("{User_Id}_13", 
////		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348401", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/signal/report/index", 
////		"Snapshot=t161.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("history_7", 
//		"URL={URL}/signal/report/history?_=1591617348402", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t162.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_header("X-CSRF-TOKEN",
//		"{CsrfTokenId}");
//
//	web_reg_find("Search=Body",
//		"Text=Your report is being processed",
//		LAST);
//
//	web_custom_request("requestReport", 
//		"URL={URL}/signal/report/requestReport", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t163.inf", 
//		"Mode=HTTP", 
//		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
//		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22{ProductId}%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=PBRER_SIGNAL_SUMMARY&dataSource=pva&reportName={PBRERSignal_Report}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D="
//		"10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
//		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
//		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
//		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate={PBRER_StartDate}&endDate={PBRER_EndDate}&dateRangeType=CUSTOM", 
//		LAST);
//
//	web_url("notifications.hbs", 
//		"URL={URL}/signal/assets/app/pvs/hbs-templates/notifications.hbs", 
//		"Resource=1", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t164.inf", 
//		LAST);
//
//	web_url("history_8", 
//		"URL={URL}/signal/report/history?_=1591617348403", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t165.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("history_9", 
//		"URL={URL}/signal/report/history?_=1591617348404", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t166.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
////
////	web_url("{User_Id}_14", 
////		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348405", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/signal/report/index", 
////		"Snapshot=t167.inf", 
////		"Mode=HTTP", 
////		LAST);
////
////	web_url("{User_Id}_15", 
////		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348406", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/signal/report/index", 
////		"Snapshot=t168.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("history_10", 
//		"URL={URL}/signal/report/history?_=1591617348407", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t169.inf", 
//		"Mode=HTTP", 
//		LAST);
//	
//	
//	lr_end_transaction("S09_05_InitiatePBRERSignalSummaryReport",LR_AUTO);
//
//	lr_think_time(3);
//
//	lr_start_transaction("S09_06_InitiateSignalSummaryReport");
//
//	web_add_header("X-CSRF-TOKEN",
//		"{CsrfTokenId}");
//
//	web_reg_find("Search=Body",
//		"Text=Your report is being processed",
//		LAST);
//
//	web_custom_request("requestReport_2", 
//		"URL={URL}/signal/report/requestReport", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t170.inf", 
//		"Mode=HTTP", 
//		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
//		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22{ProductId}%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=SIGNAL_SUMMARY_REPORT&dataSource=pva&reportName={SignalSummaryReport}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D="
//		"10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
//		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
//		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
//		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate={SignalSummary_StartDate}&endDate={SignalSummary_EndDate}&dateRangeType=CUSTOM", 
//		LAST);
//
//	web_url("history_11", 
//		"URL={URL}/signal/report/history?_=1591617348408", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t171.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
////	web_url("{User_Id}_16", 
////		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348409", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/signal/report/index", 
////		"Snapshot=t172.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//
//	lr_end_transaction("S09_06_InitiateSignalSummaryReport",LR_AUTO);
//
//	lr_think_time(3);
//
//	lr_start_transaction("S09_07_InitiateSignalsByState");
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("history_12", 
//		"URL={URL}/signal/report/history?_=1591617348410", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t173.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_header("X-CSRF-TOKEN",
//		"{CsrfTokenId}");
//
//	web_reg_find("Search=Body",
//		"Text=Your report is being processed",
//		LAST);
//
//	web_custom_request("requestReport_3", 
//		"URL={URL}/signal/report/requestReport", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t174.inf", 
//		"Mode=HTTP", 
//		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
//		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22{ProductId}%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=SIGNALS_BY_STATE&dataSource=pva&reportName={SignalbyStateReport}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D="
//		"10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
//		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
//		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
//		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate={SignalbyState_StartDate}&endDate={SignalbyState_EndDate}&dateRangeType=CUSTOM", 
//		LAST);
//
//	web_url("history_13", 
//		"URL={URL}/signal/report/history?_=1591617348411", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t175.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_url("history_14", 
//		"URL={URL}/signal/report/history?_=1591617348412", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t176.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
////	web_url("{User_Id}_17", 
////		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348413", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/signal/report/index", 
////		"Snapshot=t177.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	lr_end_transaction("S09_07_InitiateSignalsByState",LR_AUTO);
//
//	lr_think_time(3);
//
//	lr_start_transaction("S09_08_InitiateSignalProductsAction");
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("history_15", 
//		"URL={URL}/signal/report/history?_=1591617348414", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t178.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_header("X-CSRF-TOKEN",
//		"{CsrfTokenId}");
//
//	web_reg_find("Search=Body",
//		"Text=Your report is being processed",
//		LAST);
//
//	web_custom_request("requestReport_4", 
//		"URL={URL}/signal/report/requestReport", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t179.inf", 
//		"Mode=HTTP", 
//		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
//		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22{ProductId}%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=SIGNAL_PRODUCT_ACTIONS&dataSource=pva&reportName={SignalPrdActionReport}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D"
//		"=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
//		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
//		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
//		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate={SignalPrdAction_StartDate}&endDate={SignalPrdAction_EndDate}&dateRangeType=CUSTOM", 
//		LAST);
//
//	web_url("history_16", 
//		"URL={URL}/signal/report/history?_=1591617348415", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t180.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
////	web_url("{User_Id}_18", 
////		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348416", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/signal/report/index", 
////		"Snapshot=t181.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	lr_end_transaction("S09_08_InitiateSignalProductsAction",LR_AUTO);
//
//	lr_think_time(3);
//
//	lr_start_transaction("S09_09_InitiateMemoReport");
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("history_17", 
//		"URL={URL}/signal/report/history?_=1591617348417", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t182.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_header("X-CSRF-TOKEN",
//		"{CsrfTokenId}");
//
//	web_reg_find("Search=Body",
//		"Text=Your report is being processed",
//		LAST);
//
//	web_custom_request("requestReport_5", 
//		"URL={URL}/signal/report/requestReport", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t183.inf", 
//		"Mode=HTTP", 
//		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
//		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22{ProductId}%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=MEMO_REPORT&dataSource=pva&reportName={MemoReport}&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&"
//		"socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+"
//		"and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D="
//		"Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+"
//		"disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate={MemoReport_StartDate}&endDate={MemoReport_EndDate}&dateRangeType=CUSTOM", 
//		LAST);
//
//	web_url("history_18", 
//		"URL={URL}/signal/report/history?_=1591617348418", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t184.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
////	web_url("{User_Id}_19", 
////		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1591617348419", 
////		"Resource=0", 
////		"RecContentType=application/json", 
////		"Referer={URL}/signal/report/index", 
////		"Snapshot=t185.inf", 
////		"Mode=HTTP", 
////		LAST);
//
//	lr_end_transaction("S09_09_InitiateMemoReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_10_Logout");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

//	web_url("history_19", 
//		"URL={URL}/signal/report/history?_=1591617348420", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/report/index", 
//		"Snapshot=t186.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("index_2", 
		"URL={URL}/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/report/index", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_10_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}