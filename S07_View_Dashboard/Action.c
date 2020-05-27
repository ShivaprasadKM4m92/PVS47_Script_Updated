Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_set_max_html_param_len("99999999");

	lr_start_transaction("S07_T01_OpenApplication");
	
	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

/*Correlation comment - Do not change!  Original value='15193ed9-988a-4008-9009-685e589aaccc' Name ='CsrfTokenId' Type ='Manual'*/
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
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

//	web_add_header("Origin", 
//		"https://www.google.com");

	
	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL={URL}/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
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

	
	web_add_header("Accept", 
		"*/*");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL={URL}/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t8.inf", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"f684d7c6ae15c7c3bca0595dc19ada6626125926");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");



	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

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

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	
	web_concurrent_end(NULL);


	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-81.0.4044.138");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	lr_end_transaction("S07_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

//	web_revert_auto_header("Accept-Language");
//
//	web_add_header("X-Goog-Update-AppId", 
//		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,llkgjffcdpffmhiakmfcdcblohccpfmo,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,aemomkdncapdnfajjbbcbdebjljbpmpj,ehgidpndbllacpjalkiimkbadgjfnnmc,copjbmjbojbakpaedmpkhmiplmmehfck,gkmgaooipdjhmangpemjhigmamcehddo,ggkkehgbnfjpeggfpleeakpidbkibbmn,bklopemakmnopmghhmccadeonafabnal,"
//		"jflookgnkcckhobaglndicnbbgbonegd");
//
//	web_add_header("X-Goog-Update-Updater", 
//		"chrome-81.0.4044.138");



	lr_start_transaction("S07_T02_Login");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

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
		"Snapshot=t19.inf",
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
		"Snapshot=t20.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t21.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t22.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL={URL}/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t23.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
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
//		"text/css,*/*;q=0.1");

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL={URL}/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
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
//		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL={URL}/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t28.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t29.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t30.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
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

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t33.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL={URL}/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t34.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL={URL}/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
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

//	web_add_header("Accept", 
//		"*/*");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL={URL}/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t37.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL={URL}/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t38.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t39.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL={URL}/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t40.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t41.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t42.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t43.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t44.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL={URL}/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t45.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL={URL}/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t46.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL={URL}/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t47.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL={URL}/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t48.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t49.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t50.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t51.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t52.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t53.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t54.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL={URL}/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t55.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t56.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL={URL}/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t57.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t58.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t59.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL={URL}/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t60.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL={URL}/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t61.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t62.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL={URL}/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t63.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t64.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL={URL}/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t65.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL={URL}/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t66.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL={URL}/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t67.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL={URL}/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t68.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL={URL}/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t69.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL={URL}/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t70.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t71.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL={URL}/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t72.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL={URL}/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t73.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL={URL}/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t74.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL={URL}/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t75.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL={URL}/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t76.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t77.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t78.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t79.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t80.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t81.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t82.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL={URL}/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t83.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL={URL}/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t84.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL={URL}/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t86.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL={URL}/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t87.inf", 
		LAST);

//	web_concurrent_end(NULL);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t85.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("en.json", 
		"URL={URL}/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t89.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL={URL}/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL={URL}/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t91.inf", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t92.inf", 
		LAST);
//
//	web_add_header("Origin", 
//		"{URL}");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t93.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t94.inf", 
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



	

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1590495928031", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1590495928029", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1590495928030", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1590495928032", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1590495928033", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590495928035", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t101.inf", 
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

	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590495928034", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

//	web_url("{User_Id}", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1590495928036", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t104.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t105.inf", 
		LAST);
	
//	web_concurrent_end(NULL);

//	web_add_auto_header("Origin", 
//		"{URL}");
//
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("events", 
		"Action={URL}/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Apr-2020", ENDITEM, 
		"Name=end", "Value=08-Jun-2020", ENDITEM, 
		LAST);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t107.inf", 
		LAST);

//	web_revert_auto_header("Origin");
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"*/*");

//	web_url("info", 
//		"URL={URL}/signal/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t108.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1590495928037", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t109.inf", 
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
		"URL={URL}/signal/dashboard/signalList?_=1590495928038", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t111.inf", 
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

//	web_url("websocket", 
//		"URL={URL}/signal/stomp/486/rcp89teu/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t112.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1590495928039", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t113.inf", 
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
//	web_add_auto_header("Accept", 
//		"*/*");

//	web_url("{User_Id}_2", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1590495928040", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t115.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_concurrent_end(NULL);
	
	lr_end_transaction("S07_T02_Login",LR_AUTO);

	lr_think_time(3);

//	web_url("{User_Id}_3", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1590495928041", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t116.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_start_transaction("S07_T03_ClickDashboard");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("saveDashboardConfig", 
		"Action={URL}/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dashboardWidgetsConfig", "Value={\"pvWidgetChart-11\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-11\",\"x\":0,\"y\":7,\"height\":6,\"width\":12},\"content\":{\"id\":\"listAction\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Actions\"},\"pvWidgetChart-9\":{\"reportWidgetName\":\"Qualitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-9\",\"x\":0,\"y\":37,\"width\":6,\"height\":7},\"content\":{\"id\":\"qualitative-products-status\","
		"\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-10\":{\"reportWidgetName\":\"Quantitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-10\",\"x\":0,\"y\":43,\"width\":6,\"height\":7},\"content\":{\"id\":\"quantitative-products-status\",\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-7\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-7\",\"x\":0,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"assignedSignalTable\",\"type"
		"\":\"pvDashReports\"},\"reportWidgetName\":\"Assigned Signals\"},\"pvWidgetChart-5\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-5\",\"x\":0,\"y\":0,\"height\":6,\"width\":12},\"content\":{\"id\":\"assignedTriggeredAlerts\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Alerts\"},\"pvWidgetChart-4\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-4\",\"x\":6,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"due-date-chart\",\"type\":\""
		"pvDashChart\"},\"reportWidgetName\":\"Alert By Due Date\"},\"pvWidgetChart-6\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-6\",\"x\":6,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"calendar\",\"type\":\"pvDashCalendar\"},\"reportWidgetName\":\"Calendar\"},\"pvWidgetChart-1\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-1\",\"x\":0,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"adhoc-chart\",\"type\":\"pvDashChart\"},\""
		"reportWidgetName\":\"Ad-hoc Review By Status\"},\"pvWidgetChart-2\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-2\",\"x\":6,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"case-status-chart\",\"type\":\"pvDashChart\"},\"reportWidgetName\":\"Qualitative Review By Status\"},\"pvWidgetChart-3\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-3\",\"x\":0,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"aggregate-chart\",\"type\":\"pvDashChart\"}"
		",\"reportWidgetName\":\"Quantitative Review By Status\"},\"inbox\":{\"reportWidgetName\":\"Inbox\",\"reportWidgetDetails\":{\"id\":\"inbox\"},\"visible\":true},\"isDirty\":true}", ENDITEM, 
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	web_reg_find("Search=Body",
		"Text=Assigned Signals",
		LAST);

	web_url("signal_2", 
		"URL={URL}/signal/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_concurrent_start(NULL);
	
	web_url("sideBar_2", 
		"URL={URL}/signal/dashboard/sideBar?_=1590495962469", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus_2", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1590495962471", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus_2", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1590495962470", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus_2", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1590495962472", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate_2", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1590495962473", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_3", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590495962474", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_4", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590495962475", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

//	web_revert_auto_header("X-Requested-With");
//
//	web_url("info_2", 
//		"URL={URL}/signal/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t126.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_submit_data("events_2", 
		"Action={URL}/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Apr-2020", ENDITEM, 
		"Name=end", "Value=08-Jun-2020", ENDITEM, 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

//	web_url("{User_Id}_4", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1590495962476", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t128.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");

	web_url("alertList_2", 
		"URL={URL}/signal/dashboard/alertList?_=1590495962477", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signalList_2", 
		"URL={URL}/signal/dashboard/signalList?_=1590495962478", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t130.inf", 
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

//	web_url("websocket_2", 
//		"URL={URL}/signal/stomp/179/ntztd3vy/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t131.inf", 
//		"Mode=HTTP", 
//		LAST);

//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("actionList_2", 
		"URL={URL}/signal/dashboard/actionList?_=1590495962479", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");

//	web_url("{User_Id}_5", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1590495962480", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t133.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_concurrent_end(NULL);
	
	lr_end_transaction("S07_T03_ClickDashboard",LR_AUTO);

	lr_think_time(3);

//	web_url("{User_Id}_6", 
//		"URL={URL}/signal/inboxLog/forUser/{User_Id}?_=1590495962481", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/", 
//		"Snapshot=t134.inf", 
//		"Mode=HTTP", 
//		LAST);

	lr_start_transaction("S07_T04_LogOut");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("saveDashboardConfig_2", 
		"Action={URL}/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t135.inf", 
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
		"URL={URL}/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S07_T04_LogOut",LR_AUTO);

	lr_think_time(3);

	return 0;
}