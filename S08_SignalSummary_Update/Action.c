Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	lr_start_transaction("S08_01_OpenApplication");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='45a41868-1b22-40c7-a652-a073b45ee8c6' Name ='CsrfTokenId' Type ='Manual'*/
//	web_reg_save_param_attrib(
//		"ParamName=CsrfTokenId",
//		"TagName=input",
//		"Extract=value",
//		"Name=_csrf",
//		"Type=hidden",
//		SEARCH_FILTERS,
//		"IgnoreRedirections=Yes",
//		"RequestUrl=*/auth*",
//		LAST);

web_reg_save_param_ex(
		"ParamName=CsrfTokenId",
		"LB=_csrf\" value=\"",
		"RB=\"/>",
		SEARCH_FILTERS,
		"Scope=ALL",
		"IgnoreRedirections=No",
		LAST);

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("signal", 
		"URL={URL}/signal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_revert_auto_header("Accept-Language");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"6e5406c103ef7317b32f3e6f0091183fcb5ac377");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

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
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL={URL}/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t10.inf", 
		LAST);

	web_add_auto_header("User-Agent", 
		"Chrome WIN 81.0.4044.138 (8c6c7ba89cc9453625af54f11fd83179e23450fa-refs/branch-heads/4044@{#999}) channel(stable)");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Content-Encoding", 
		"gzip");

	web_add_header("Pragma", 
		"no-cache");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Client-Data", 
		"CIi2yQEIo7bJAQjEtskBCKmdygEI0K/KAQi8sMoBCO21ygEIjrrKARi9usoBGJu+ygE=");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	
	web_add_header("Origin", 
		"{URL}");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t13.inf", 
		LAST);

//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");


	web_concurrent_end(NULL);
	

	lr_end_transaction("S08_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	
	lr_start_transaction("S08_02_Login");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

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

	
	//userId = "7435"
	web_reg_save_param_ex(
		"ParamName=User_Id",
		"LB=userId = \"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	web_reg_find("Search=Body",
		"Text=Dashboard",
		LAST);

	web_submit_data("authenticate",
		"Action={URL}/signal/login/authenticate",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/signal/login/auth",
		"Snapshot=t17.inf",
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
		"Snapshot=t18.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t19.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL={URL}/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t20.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t21.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t22.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t23.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL={URL}/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t24.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t25.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL={URL}/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t26.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL={URL}/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t27.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t28.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t29.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t30.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL={URL}/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t31.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL={URL}/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t32.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL={URL}/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t33.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL={URL}/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t34.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t35.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t36.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL={URL}/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t37.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t38.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL={URL}/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t39.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t40.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t41.inf", 
		LAST);
//
//	web_concurrent_end(NULL);
//
//	web_revert_auto_header("Accept-Language");
//
//	web_add_header("X-Goog-Update-AppId", 
//		"ihnlcenocehgdaegdmhbidjhnhdchfmm,llkgjffcdpffmhiakmfcdcblohccpfmo,oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,aemomkdncapdnfajjbbcbdebjljbpmpj,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,ehgidpndbllacpjalkiimkbadgjfnnmc,copjbmjbojbakpaedmpkhmiplmmehfck,gkmgaooipdjhmangpemjhigmamcehddo,ggkkehgbnfjpeggfpleeakpidbkibbmn,bklopemakmnopmghhmccadeonafabnal,hnimpnehoodheedghdeeijklkeaacbdc,"
//		"jflookgnkcckhobaglndicnbbgbonegd");
//
//	web_add_header("X-Goog-Update-Interactivity", 
//		"bg");
//
//	web_add_header("X-Goog-Update-Updater", 
//		"chrome-81.0.4044.138");
//
//	
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("Accept-Language", 
//		"en-US,en;q=0.9");
//
//	web_concurrent_start(NULL);
	
	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL={URL}/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL={URL}/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL={URL}/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL={URL}/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL={URL}/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL={URL}/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL={URL}/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL={URL}/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL={URL}/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL={URL}/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL={URL}/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL={URL}/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL={URL}/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL={URL}/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL={URL}/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL={URL}/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL={URL}/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL={URL}/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL={URL}/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL={URL}/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL={URL}/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL={URL}/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t83.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t84.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("en.json", 
		"URL={URL}/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL={URL}/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t86.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t87.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL={URL}/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL={URL}/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL={URL}/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t90.inf", 
		LAST);

//	web_concurrent_end(NULL);
//	
////	web_add_header("Origin", 
////		"{URL}");
//
//	web_concurrent_start(NULL);

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t91.inf", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t92.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t93.inf", 
		LAST);

//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//
//	web_concurrent_end(NULL);
//	
//	
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_concurrent_start(NULL);
	
	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1590404877873", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1590404877874", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1590404877875", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1590404877876", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590404877879", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1590404877877", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590404877878", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);
	
//	web_concurrent_end(NULL);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("Origin", 
//		"{URL}");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("events", 
		"Action={URL}/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Apr-2020", ENDITEM, 
		"Name=end", "Value=08-Jun-2020", ENDITEM, 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	
//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//
//
//	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1590404877881", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");

	

	web_url("signalList", 
		"URL={URL}/signal/dashboard/signalList?_=1590404877882", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("Accept");
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");
//
//
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1590404877883", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_concurrent_start(NULL);
//
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t112.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t113.inf", 
		LAST);

//	web_add_header("X-HTTP-Method-Override", 
//		"POST");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");

	

	web_concurrent_end(NULL);

	lr_end_transaction("S08_02_Login",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	

	lr_start_transaction("S08_03_NavigateSignalSummary");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("saveDashboardConfig", 
		"Action={URL}/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t116.inf", 
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

	web_url("index", 
		"URL={URL}/signal/validatedSignal/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL={URL}/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"URL={URL}/signal/assets/yadcf/jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"URL={URL}/signal/assets/yadcf/jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"URL={URL}/signal/assets/colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("validated_signal-9eedce6540019141ed0e91fc0d1f4470.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/validated_signal-9eedce6540019141ed0e91fc0d1f4470.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"URL={URL}/signal/assets/app/pvs/updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t125.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_reg_find("Search=Body",
		"Text=Event Name",
		LAST);

	web_url("viewColumnInfo", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id=8478&_=1590404989153", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");


	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("list", 
		"URL={URL}/signal/validatedSignal/list?args="
		"%7B%22draw%22%3A1%2C%22columns%22%3A%5B%7B%22data%22%3A%22selected%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22name%22%2C%22name%22%3A%22name%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22productName%22%2C%22name%22%3A%22products%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atr"
		"ue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22eventName%22%2C%22name%22%3A%22events%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22noOfPec%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22noOfCases%22%2C%22name%22%3A%22%22%2C%22searchable%2"
		"2%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22monitoringStatus%22%2C%22name%22%3A%22disposition.displayName%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22topicCategory%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22dat"
		"a%22%3A%22assignedTo%22%2C%22name%22%3A%22assignedTo.fullName%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22priority%22%2C%22name%22%3A%22priority.displayName%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22actions%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3"
		"A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%5D%2C%22order%22%3A%5B%7B%22column%22%3A0%2C%22dir%22%3A%22asc%22%7D%5D%2C%22start%22%3A0%2C%22length%22%3A50%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D&_=1590404989154", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");



	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	

	lr_end_transaction("S08_03_NavigateSignalSummary",LR_AUTO);

	lr_think_time(3);


	lr_start_transaction("S08_04_ClickOnaSignal");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Workflow Management",
		LAST);

	web_url("details", 
		"URL={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/validatedSignal/index", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"URL={URL}/signal/assets/app/dms/dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("assessment_dictionary-54af83ba18adfb6d336571877bcd5dc1.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/assessment_dictionary-54af83ba18adfb6d336571877bcd5dc1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/themes/grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("components-d9f82004362210b46ccd5edf473d8690.css", 
		"URL={URL}/signal/assets/components-d9f82004362210b46ccd5edf473d8690.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"URL={URL}/signal/assets/copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"URL={URL}/signal/assets/configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("popover.min-1126e05676916775b399f1693085bfcd.css", 
		"URL={URL}/signal/assets/vendorUi/popover/popover.min-1126e05676916775b399f1693085bfcd.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("highcharts-50a25259e6a580b561454e81986e4486.js", 
		"URL={URL}/signal/assets/highcharts-50a25259e6a580b561454e81986e4486.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"URL={URL}/signal/assets/app/pvs/caseHistory/caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("validated_signal_charts-01d6504b57318441c2dc3734f4a4937c.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/validated_signal_charts-01d6504b57318441c2dc3734f4a4937c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"URL={URL}/signal/assets/app/bootstrap-modal-popover/bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("validated_signal_create-c9fa46c9e60d340a4a826375baafd214.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/validated_signal_create-c9fa46c9e60d340a4a826375baafd214.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t148.inf", 
		LAST);

	web_url("linked_configurations-f3f6b4c74897224e7a47327ad7d65253.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/linked_configurations-f3f6b4c74897224e7a47327ad7d65253.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t149.inf", 
		LAST);

	web_url("disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"URL={URL}/signal/assets/app/pvs/disposition/disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t150.inf", 
		LAST);

	web_url("priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"URL={URL}/signal/assets/app/pvs/priority/priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t151.inf", 
		LAST);

	web_url("dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t152.inf", 
		LAST);

	web_url("common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t153.inf", 
		LAST);

	web_url("dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t154.inf", 
		LAST);

	web_url("copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t155.inf", 
		LAST);

	web_url("highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t156.inf", 
		LAST);

	web_url("heatmap-0d373b281efb3c2e426ad55cc3b804b7.js", 
		"URL={URL}/signal/assets/heatmap-0d373b281efb3c2e426ad55cc3b804b7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t157.inf", 
		LAST);

	web_url("pe_analysis-9b94b811858e7d8962b1cfbc74ba940a.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/pe_analysis-9b94b811858e7d8962b1cfbc74ba940a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t158.inf", 
		LAST);

	web_url("dygraph-9ffc8edc13e94f06f279514e89ae9a34.css", 
		"URL={URL}/signal/assets/dygraph-9ffc8edc13e94f06f279514e89ae9a34.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t159.inf", 
		LAST);

	web_url("review-f2586ded5503b40004f22afda42c4971.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/review-f2586ded5503b40004f22afda42c4971.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t160.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL={URL}/signal/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t161.inf", 
		LAST);

	web_url("heat_map-f747d34b3b0c59f40239fc243fb56a35.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/heat_map-f747d34b3b0c59f40239fc243fb56a35.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t162.inf", 
		LAST);

	web_url("signal_charts-77adc41f9e1c88551dba910b24381240.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/signal_charts-77adc41f9e1c88551dba910b24381240.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t163.inf", 
		LAST);

	web_url("meeting-f02adf384d882e47fe96ca0a0ea95414.js", 
		"URL={URL}/signal/assets/app/pvs/meeting/meeting-f02adf384d882e47fe96ca0a0ea95414.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t164.inf", 
		LAST);

	web_url("alertComments-043f2fe715338e3aafc7b078655b345a.js", 
		"URL={URL}/signal/assets/app/pvs/alertComments/alertComments-043f2fe715338e3aafc7b078655b345a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t165.inf", 
		LAST);

	web_url("dygraph.min-0e7f2a89b8c55e6f5dd35fc29aeb0795.js", 
		"URL={URL}/signal/assets/dygraphs/dygraph.min-0e7f2a89b8c55e6f5dd35fc29aeb0795.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t166.inf", 
		LAST);

	web_url("actionManagement-f820db355f55ab6e392ac1989dd91a74.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/actionManagement-f820db355f55ab6e392ac1989dd91a74.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t167.inf", 
		LAST);

	web_url("scheduler-9cb1a5abf9dea3870bf67a0959578bb2.js", 
		"URL={URL}/signal/assets/app/pvs/scheduler-9cb1a5abf9dea3870bf67a0959578bb2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t168.inf", 
		LAST);

	web_url("signalHistoryTable-0c39c083359e752e14f0fb791c71bd84.js", 
		"URL={URL}/signal/assets/app/pvs/signalHistory/signalHistoryTable-0c39c083359e752e14f0fb791c71bd84.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t169.inf", 
		LAST);

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL={URL}/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("alert_review-6f0e965ada1970820b45111524a91fb0.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/alert_review-6f0e965ada1970820b45111524a91fb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t171.inf", 
		LAST);

	web_url("bootstrap-timepicker.min-5450fea488d9ab3de6359ebee9ab53d2.css", 
		"URL={URL}/signal/assets/bootstrap-timepicker/bootstrap-timepicker.min-5450fea488d9ab3de6359ebee9ab53d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t172.inf", 
		LAST);

	web_url("bootstrap-timepicker.min-c61759ebbf0b9c32d7dd4b576a02b3af.js", 
		"URL={URL}/signal/assets/bootstrap-timepicker/bootstrap-timepicker.min-c61759ebbf0b9c32d7dd4b576a02b3af.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t173.inf", 
		LAST);

	web_url("jquery-picklist-2048c1f4a033c97a39a65f4accd34e0f.css", 
		"URL={URL}/signal/assets/jquery-picklist-2048c1f4a033c97a39a65f4accd34e0f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t174.inf", 
		LAST);

	web_url("document-ec4a8acb37368b50cc28951c0859bf1c.js", 
		"URL={URL}/signal/assets/app/pvs/documentManagement/document-ec4a8acb37368b50cc28951c0859bf1c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t175.inf", 
		LAST);

	web_url("jquery-picklist-7f901c3043731e208b1316334872e809.js", 
		"URL={URL}/signal/assets/jquery/jquery-picklist-7f901c3043731e208b1316334872e809.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t176.inf", 
		LAST);

	web_url("summaryReportPreference-e2a8c6bda3f93e63f516e7078771f2ee.js", 
		"URL={URL}/signal/assets/app/pvs/documentManagement/summaryReportPreference-e2a8c6bda3f93e63f516e7078771f2ee.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t177.inf", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("activities-c675edac8f3d769b686522882abd176e.js", 
		"URL={URL}/signal/assets/app/pvs/activity/activities-c675edac8f3d769b686522882abd176e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t179.inf", 
		LAST);

	web_url("prev_assessment-77e06d295daa837a7b88f73dfb777681.js", 
		"URL={URL}/signal/assets/app/pvs/validated_signal/prev_assessment-77e06d295daa837a7b88f73dfb777681.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t180.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"URL={URL}/signal/assets/plugin/dictionary/dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t181.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL={URL}/signal/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t182.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL={URL}/signal/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t183.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL={URL}/signal/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t184.inf", 
		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("getDmsFolders", 
		"URL={URL}/signal/controlPanel/getDmsFolders?folder=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_custom_request("{Signal_Id}", 
		"URL={URL}/signal/validatedSignal/fetchLinkedConfiguration/{Signal_Id}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_url("dataTables_en.json", 
		"URL={URL}/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_header("If-None-Match", 
//		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_3", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("singleCaseAlertList", 
		"URL={URL}/signal/validatedSignal/singleCaseAlertList?id={Signal_Id}&_=1590405010841", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggregateCaseAlertList", 
		"URL={URL}/signal/validatedSignal/aggregateCaseAlertList?id={Signal_Id}&_=1590405010840", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("literatureAlertList", 
		"URL={URL}/signal/validatedSignal/literatureAlertList?id={Signal_Id}&_=1590405010843", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("peAnalysis", 
		"URL={URL}/signal/validatedSignal/peAnalysis?id={Signal_Id}&isTopic=false&_=1590405010844", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("adHocAlertList", 
		"URL={URL}/signal/validatedSignal/adHocAlertList?id={Signal_Id}&_=1590405010842", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("listByAlert", 
		"URL={URL}/signal/action/listByAlert?alertid={Signal_Id}&appType=Signal%20Management&_=1590405010845", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");



	web_url("list_2", 
		"URL={URL}/signal/meeting/list?alertid={Signal_Id}&appType=Signal%20Management&_=1590405010846", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

//	web_url("fetchAttachments", 
//		"URL={URL}/signal/validatedSignal/fetchAttachments?alertid={Signal_Id}&_=1590405010847", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
//		"Snapshot=t199.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_revert_auto_header("Accept");
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_header("Cache-Control", 
//		"no-cache");
//
//	web_add_header("Pragma", 
//		"no-cache");
//
//	web_add_header("Upgrade", 
//		"websocket");
//
//	
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("polymer.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("{Signal_Id}_2", 
		"URL={URL}/signal/activity/activitiesBySignal/8479?_=1590405010849", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

//	web_url("listBySignal", 
//		"URL={URL}/signal/alertDocument/listBySignal?signalid={Signal_Id}&_=1590405010848", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
//		"Snapshot=t203.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("polymer-mini.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t206.inf", 
		LAST);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	
//
//	web_add_header("X-Goog-Encode-Response-If-Executable", 
//		"base64");
//
//	web_add_header("X-Goog-Api-Key", 
//		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");
//
//	web_add_header("Sec-Fetch-Site", 
//		"none");
//
//	web_add_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_header("Sec-Fetch-Dest", 
//		"empty");

	web_concurrent_end(NULL);

	lr_end_transaction("S08_04_ClickOnaSignal",LR_AUTO);

	lr_think_time(3);


	lr_start_transaction("S08_05_UpdateComments");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

//	web_custom_request("update",
//		"URL={URL}/signal/validatedSignal/update",
//		"Method=POST",
//		"Resource=0",
//		"RecContentType=application/json",
//		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}",
//		"Snapshot=t210.inf",
//		"Mode=HTTP",
//		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
//		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PARACETAMOL+(8085+SOLUTION+FOR+INJECTION+STUDY)+Tablet%22%2C%22id%22%3A%22103620%22%7D%5D%2C%224%22%3A%5B%5D%7D&eventSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%7B%22name%22%3A%22Typhoid+fever%22%2C%22id%22%3A%2210045275%22%7D%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%5D%7D&name=PerfSignal1&topic=&detectedBy=Company&detectedDate=21-May-2020&initialDataSource=Data+mining+-+FAERS+database&signalSource=Data+mining+-+FAERS+database&signalEvaluationMethod=%5B%5D&topicCategoryList=%5B%5D&description=Performance+Testing&reasonForEvaluation=&priority=6637&assignedToValue=User_{User_Id}&aggReportStartDate=&aggReportEndDate=&signalActionTaken=%5B%5D&genericComment=&haSignalStatus=&haDateClosed=&commentSignalStatus=&signalid={Signal_Id}&_csrf={CsrfTokenId}",
//		LAST);
	
	web_custom_request("update", 
		"URL={URL}/signal/validatedSignal/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PARACETAMOL+(8085+SOLUTION+FOR+INJECTION+STUDY)+Tablet%22%2C%22id%22%3A%22103620%22%7D%5D%2C%224%22%3A%5B%5D%7D&eventSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%7B%22name%22%3A%22Typhoid+fever%22%2C%22id%22%3A%2210045275%22%7D%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%5D%7D&name=PerfSignal1&topic=&detectedBy=Company&detectedDate=21-May-2020&initialDataSource=Data+"
		"mining+-+FAERS+database&signalSource=Data+mining+-+FAERS+database&signalEvaluationMethod=%5B%5D&topicCategoryList=%5B%5D&description={Description}&reasonForEvaluation=&priority=6637&assignedToValue=User_{User_Id}&aggReportStartDate=&aggReportEndDate=&signalActionTaken=%5B%5D&genericComment=&haSignalStatus=&haDateClosed=&commentSignalStatus=&signalId={Signal_Id}&_csrf={CsrfTokenId}&_csrf={CsrfTokenId}", 
		LAST);


	web_add_auto_header("Accept", 
		"*/*");

	

	lr_end_transaction("S08_05_UpdateComments",LR_AUTO);

	lr_think_time(3);



	lr_start_transaction("S08_06_NavigateAssessmentTab");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_custom_request("graphReport", 
		"URL={URL}/signal/validatedSignal/graphReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=dataSource=pva&dateRange=LAST_1_YEAR&productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PARACETAMOL+(8085+SOLUTION+FOR+INJECTION+STUDY)+Tablet%22%2C%22id%22%3A%22103620%22%7D%5D%2C%224%22%3A%5B%5D%7D&eventSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%7B%22name%22%3A%22Typhoid+fever%22%2C%22id%22%3A%2210045275%22%7D%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%5D%7D&validatedSignal.id={Signal_Id}", 
		LAST);

	lr_end_transaction("S08_06_NavigateAssessmentTab",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S08_07_NavigateActionsandWorkflow");


	lr_end_transaction("S08_07_NavigateActionsandWorkflow",LR_AUTO);

	lr_think_time(3);



	lr_start_transaction("S08_08_NewAction");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("searchUserGroupList", 
		"URL={URL}/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	
	web_add_auto_header("Accept", 
		"*/*");



	lr_end_transaction("S08_08_NewAction",LR_AUTO);

	lr_think_time(3);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");


	lr_start_transaction("S08_09_CreateAction");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("save", 
		"Action={URL}/signal/action/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t223.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=config", "Value=7150", ENDITEM, 
		"Name=type", "Value=6766", ENDITEM, 
		"Name=assignedToValue", "Value=UserGroup_6578", ENDITEM, 
		"Name=dueDate", "Value={DueDate}", ENDITEM, 
		"Name=details", "Value=Test", ENDITEM, 
		"Name=comments", "Value=Test", ENDITEM, 
		"Name=alertId", "Value={Signal_Id}", ENDITEM, 
		"Name=appType", "Value=Signal Management", ENDITEM, 
		"Name=exeConfigId", "Value=", ENDITEM, 
		"Name=meetingId", "Value=", ENDITEM, 
		"Name=actionStatus", "Value=InProcess", ENDITEM, 
		"Name=actionId", "Value=", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("listByAlert_2", 
		"URL={URL}/signal/action/listByAlert?alertid={Signal_Id}&appType=Signal%20Management&_=1590405010860", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t224.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("list_3", 
		"URL={URL}/signal/meeting/list?alertid={Signal_Id}&appType=Signal%20Management&_=1590405010864", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t225.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("{Signal_Id}_3", 
		"URL={URL}/signal/activity/activitiesBySignal/{Signal_Id}?_=1590405010863", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t226.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");



	lr_end_transaction("S08_09_CreateAction",LR_AUTO);

	lr_think_time(3);


	lr_start_transaction("S08_10_DocumentManagement");

	lr_end_transaction("S08_10_DocumentManagement",LR_AUTO);

	lr_think_time(3);

	
	lr_start_transaction("S08_11_NavigateActivityLogTab");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("{Signal_Id}_4", 
		"URL={URL}/signal/activity/activitiesBySignal/{Signal_Id}?_=1590405010869", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");


	lr_end_transaction("S08_11_NavigateActivityLogTab",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S08_12_Logout");



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
		"Referer={URL}/signal/validatedSignal/details?id={Signal_Id}", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S08_12_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}