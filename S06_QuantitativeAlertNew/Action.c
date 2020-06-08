Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_cleanup_auto_headers();
	
	web_set_max_html_param_len("999999999");
	
	lr_start_transaction("S06_01_OpenApplication");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");



	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");



	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment - Do not change!  Original value='6b6621dc-f125-49ef-8851-442ae7b21d95' Name ='CsrfTokenId' Type ='Manual'*/
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
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("If-None-Match", 
		"6e5406c103ef7317b32f3e6f0091183fcb5ac377");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/


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

	web_add_header("Accept", 
		"*/*");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL={URL}/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_concurrent_start(NULL);

//	web_url("client_model_v5_ext_variation_0.pb", 
//		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
//		"Resource=1", 
//		"RecContentType=application/octet-stream", 
//		"Referer=", 
//		"Snapshot=t9.inf", 
//		LAST);
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
//	web_url("client_model_v5_variation_0.pb", 
//		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
//		"Resource=1", 
//		"RecContentType=application/octet-stream", 
//		"Referer=", 
//		"Snapshot=t10.inf", 
//		LAST);

	web_concurrent_end(NULL);

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



	web_add_header("Origin", 
		"{URL}");

	web_add_header("Accept", 
		"*/*");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t12.inf", 
		LAST);

//	web_add_auto_header("User-Agent", 
//		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");
//
//	
//
//	web_add_header("X-Goog-Update-AppId", 
//		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");
//
//	web_add_header("X-Goog-Update-Updater", 
//		"chromecrx-81.0.4044.138");
//
//	web_add_auto_header("X-Goog-Update-Interactivity", 
//		"bg");
//
//	
//	web_revert_auto_header("Accept-Language");
//
//	web_add_header("X-Goog-Update-AppId", 
//		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,gkmgaooipdjhmangpemjhigmamcehddo,aemomkdncapdnfajjbbcbdebjljbpmpj,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,copjbmjbojbakpaedmpkhmiplmmehfck,mimojjlkmoijpicakmndhoigimigcmbb,bklopemakmnopmghhmccadeonafabnal,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,"
//		"ehgidpndbllacpjalkiimkbadgjfnnmc");
//
//	web_add_header("X-Goog-Update-Updater", 
//		"chrome-81.0.4044.138");

	

	

	lr_end_transaction("S06_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S06_02_Login");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

//	web_revert_auto_header("X-Goog-Update-Interactivity");

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

	//userId = "7435"
	web_reg_save_param_ex(
		"ParamName=User_Id",
		"LB=userId = \"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=ALL",
		LAST);

	
	web_reg_find("Search=Body",
		"Text=Welcome",
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

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t22.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t23.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL={URL}/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
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

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL={URL}/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
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
//		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL={URL}/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t30.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t31.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t32.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL={URL}/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t33.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t34.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL={URL}/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t35.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL={URL}/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t36.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t37.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t38.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL={URL}/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t39.inf", 
		LAST);
//
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

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL={URL}/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t41.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t42.inf", 
		LAST);

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

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t44.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
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

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL={URL}/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t47.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL={URL}/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t48.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL={URL}/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t49.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
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

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t52.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
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
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t55.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL={URL}/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
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

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t58.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t59.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
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

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL={URL}/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
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

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t64.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t65.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL={URL}/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
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
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL={URL}/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t68.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL={URL}/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t69.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL={URL}/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t70.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL={URL}/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t71.inf", 
		LAST);

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

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL={URL}/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t73.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t74.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL={URL}/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t75.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL={URL}/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t76.inf", 
		LAST);
//
//	web_add_header("Accept", 
//		"*/*");
//
//	
//	web_add_header("Accept", 
//		"*/*");

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t78.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t79.inf", 
		LAST);

//	web_add_header("Accept", 
//		"*/*");

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
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

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
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
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL={URL}/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t85.inf", 
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

//	web_concurrent_end(NULL);

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
//
//	
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
		"Snapshot=t87.inf", 
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
//
//	web_add_header("Accept", 
//		"*/*");

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL={URL}/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t89.inf", 
		LAST);

//	web_add_header("Accept", 
//		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t90.inf", 
		LAST);

//	web_add_auto_header("Accept", 
//		"*/*");

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL={URL}/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL={URL}/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t92.inf", 
		LAST);

//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t93.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t94.inf", 
		LAST);

//	web_add_header("Origin", 
//		"{URL}");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t95.inf", 
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
//
//	web_concurrent_end(NULL);

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1590415123505", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1590415123506", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1590415123507", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1590415123508", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590415123510", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1590415123509", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590415123511", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t103.inf", 
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
//	web_add_header("Origin", 
//		"{URL}");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t105.inf", 
		LAST);
//
//	web_add_header("Origin", 
//		"{URL}");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t106.inf", 
		LAST);

//	web_concurrent_end(NULL);

	

//	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("Origin", 
//		"{URL}");

	web_add_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_submit_data("events", 
		"Action={URL}/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Apr-2020", ENDITEM, 
		"Name=end", "Value=08-Jun-2020", ENDITEM, 
		LAST);

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1590415123513", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("signalList", 
		"URL={URL}/signal/dashboard/signalList?_=1590415123514", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t111.inf", 
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
//
//
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
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1590415123515", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t114.inf", 
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
//	
//	web_add_auto_header("Accept", 
//		"*/*");

	web_concurrent_end(NULL);

	lr_end_transaction("S06_02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S06_03_NavigateQuantitativeAlert");

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

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Alert Criteria",
		LAST);

	web_url("create", 
		"URL={URL}/signal/aggregateCaseAlert/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("common_alert_utils-e15cae7b949ab3dffb7111af1e15f4aa.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/common_alert_utils-e15cae7b949ab3dffb7111af1e15f4aa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("multi_datasource_dictionary-e388d3294bb91712f5e45b1449c86e27.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/multi_datasource_dictionary-e388d3294bb91712f5e45b1449c86e27.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("tags-16f4e8672ec9f17f638e115d583f861d.js", 
		"URL={URL}/signal/assets/app/pvs/tags-16f4e8672ec9f17f638e115d583f861d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"URL={URL}/signal/assets/configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("templateQueries-060164ef55aadce85888059803878760.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/templateQueries-060164ef55aadce85888059803878760.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"URL={URL}/signal/assets/copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("groups-ff12d6707943fcdbc2cff4f67b040005.js", 
		"URL={URL}/signal/assets/app/pvs/groups-ff12d6707943fcdbc2cff4f67b040005.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("dateRange-1abecbf9ac1d18b3d17e5738dad26804.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/dateRange-1abecbf9ac1d18b3d17e5738dad26804.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("configurationCommon-f8f219758a6f70b184f12e4897ae1571.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/configurationCommon-f8f219758a6f70b184f12e4897ae1571.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"URL={URL}/signal/assets/app/pvs/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("scheduler-9cb1a5abf9dea3870bf67a0959578bb2.js", 
		"URL={URL}/signal/assets/app/pvs/scheduler-9cb1a5abf9dea3870bf67a0959578bb2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("blankParameters-b845f44192b7e1f112b7293148ab746c.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/blankParameters-b845f44192b7e1f112b7293148ab746c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t131.inf", 
		LAST);

	web_url("alert_query_utils-8bb89b1504ef79831b23fa2972be5fbd.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/alert_query_utils-8bb89b1504ef79831b23fa2972be5fbd.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL={URL}/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL={URL}/signal/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL={URL}/signal/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t138.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"URL={URL}/signal/assets/plugin/dictionary/dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t139.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL={URL}/signal/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL={URL}/signal/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t141.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchFaersDisabledColumnsIndexes", 
		"URL={URL}/signal/aggregateCaseAlert/fetchFaersDisabledColumnsIndexes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t142.inf", 
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

	web_url("getStringOperators", 
		"URL={URL}/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL={URL}/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL={URL}/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators", 
		"URL={URL}/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");


	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t150.inf", 
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


	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-mini.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL={URL}/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL={URL}/signal/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t156.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	
	lr_end_transaction("S06_03_NavigateQuantitativeAlert",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("ClickProducts");
	

	lr_end_transaction("ClickProducts",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("SearchProducts");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN",
		"{CsrfTokenId}");

	web_submit_data("searchViews", 
		"Action={URL}/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value={ProductName}", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL={URL}/signal/productDictionary/getSelectedItem?productId={Product_Id}&dataSource=pva&dictionaryLevel=3&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value={Product_Id}", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_2", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=100445", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_3", 
		"Action={URL}/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=105935", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchAllowedUsers", 
		"URL={URL}/signal/configurationRest/fetchAllowedUsers?productList=DALOTUZUMAB+Infusion", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t164.inf", 
		"Mode=HTTP", 
		LAST);

	

	lr_end_transaction("SearchProducts",LR_AUTO);

	lr_think_time(3);


	lr_start_transaction("S06_04_CreateQuantitativeAlert");
//	
//	web_add_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8");
//
//	web_add_auto_header("Accept-Language", 
//		"en-IN");
//
//	web_add_auto_header("Accept-Encoding", 
//		"gzip, deflate");
//
//	web_add_auto_header("User-Agent", 
//		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/64.0.3282.140 Safari/537.36 Edge/18.17763");
//
//	web_add_header("Cache-Control", 
//		"max-age=0");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");

	web_reg_find("Search=Body",
		"Text=Your alert is executing, and will be delivered when it is complete",
		LAST);
//
//	web_submit_data("run", 
//		"Action={URL}/signal/singleCaseAlert/run", 
//		"Method=POST", 
//		"RecContentType=text/html", 
//		"Referer={URL}/signal/singleCaseAlert/create", 
//		"Snapshot=t1.inf", 
//		"Mode=HTTP", 
//		ITEMDATA, 
//		"Name=owner", "Value={User_Id}", ENDITEM, 
//		"Name=optradio", "Value=on", ENDITEM, 
//		"Name=_suspectProduct", "Value=", ENDITEM, 
//		"Name=isSuspectProduct", "Value=false", ENDITEM, 
//		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"{ProductName}\",\"id\":\"{Product_Id}\"}],\"4\":[]}", ENDITEM, 
//		"Name=studySelection", "Value=", ENDITEM, 
//		"Name=JSONExpressionValues", "Value=", ENDITEM, 
//		"Name=_limitPrimaryPath", "Value=", ENDITEM, 
//		"Name=eventSelection", "Value=", ENDITEM, 
//		"Name=dateRangeType", "Value=CASE_RECEIPT_DATE", ENDITEM, 
//		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM, 
//		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM, 
//		"Name=asOfVersionDateValue", "Value=", ENDITEM, 
//		"Name=asOfVersionDate", "Value=", ENDITEM, 
//		"Name=onOrAfterDate", "Value=", ENDITEM, 
//		"Name=_excludeFollowUp", "Value=", ENDITEM, 
//		"Name=_applyAlertStopList", "Value=", ENDITEM, 
//		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM, 
//		"Name=_adhocRun", "Value=", ENDITEM, 
//		"Name=_excludeNonValidCases", "Value=", ENDITEM, 
//		"Name=_missedCases", "Value=", ENDITEM, 
//		"Name=alertQuery", "Value=undefined", ENDITEM, 
//		"Name=alertQueryName", "Value=", ENDITEM, 
//		"Name=alertQueryId", "Value=", ENDITEM, 
//		"Name=alertDateRangeInformation.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
//		"Name=dateRangeEnum", "Value=", ENDITEM, 
//		"Name=alertDateRangeInformation.relativeDateRangeValue", "Value=1", ENDITEM, 
//		"Name=alertDateRangeInformation.dateRangeStartAbsolute", "Value=", ENDITEM, 
//		"Name=dateRangeStart", "Value=", ENDITEM, 
//		"Name=alertDateRangeInformation.dateRangeEndAbsolute", "Value=", ENDITEM, 
//		"Name=dateRangeEnd", "Value=", ENDITEM, 
//		"Name=validQueries", "Value=", ENDITEM, 
//		"Name=alertTriggerCases", "Value=0", ENDITEM, 
//		"Name=alertTriggerDays", "Value=0", ENDITEM, 
//		"Name=_seperateAlertForFollowUp", "Value=", ENDITEM, 
//		"Name=_unlistedEvents", "Value=", ENDITEM, 
//		"Name=_unlistedUnknown", "Value=", ENDITEM, 
//		"Name=_event_exactSearch", "Value=", ENDITEM, 
//		"Name=_product_exactSearch", "Value=", ENDITEM, 
//		"Name=_study_exactSearch", "Value=", ENDITEM, 
//		"Name=_study_imp", "Value=", ENDITEM, 
//		"Name=delimiter", "Value=none", ENDITEM, 
//		"Name=templateQueries[0].version", "Value=", ENDITEM, 
//		"Name=templateQueries[0].id", "Value=", ENDITEM, 
//		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM, 
//		"Name=templateQueries[0].new", "Value=true", ENDITEM, 
//		"Name=templateQueries[0].rptTempId", "Value=", ENDITEM, 
//		"Name=templateQueries[0].header", "Value=", ENDITEM, 
//		"Name=templateQueries[0].title", "Value=", ENDITEM, 
//		"Name=templateQueries[0].footer", "Value=", ENDITEM, 
//		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM, 
//		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM, 
//		"Name=templateQueries[0].templateName", "Value=", ENDITEM, 
//		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM, 
//		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM, 
//		"Name=templateQueries[0].queryId", "Value=", ENDITEM, 
//		"Name=templateQueries[0].queryName", "Value=", ENDITEM, 
//		"Name=templateQueries[0].queryLevel", "Value=", ENDITEM, 
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=", ENDITEM, 
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
//		"Name=templateQueries[0].validQueries", "Value=", ENDITEM, 
//		"Name=spotfireType", "Value=DRUG", ENDITEM, 
//		"Name=spotfireDaterange", "Value=CUMULATIVE", ENDITEM, 
//		"Name=name", "Value={AltertName}", ENDITEM, 
//		"Name=sharedWith", "Value=User_{User_Id}", ENDITEM, 
//		"Name=priority", "Value=6657", ENDITEM, 
//		"Name=assignedToValue", "Value=UserGroup_6578", ENDITEM, 
//		"Name=description", "Value=PT_Quali11\r\n", ENDITEM, 
//		"Name=TimeZoneSelectlist", "Value=", ENDITEM, 
//		"Name=intervalSelectlist", "Value=none", ENDITEM, 
//		"Name=monthlySelectlist", "Value=1", ENDITEM, 
//		"Name=repeat-monthly", "Value=bysetpos", ENDITEM, 
//		"Name=monthlySelectlist", "Value=1", ENDITEM, 
//		"Name=monthlySelectlist", "Value=SU", ENDITEM, 
//		"Name=repeat-yearly", "Value=bymonthday", ENDITEM, 
//		"Name=monthlySelectlist", "Value=1", ENDITEM, 
//		"Name=monthlySelectlist", "Value=1", ENDITEM, 
//		"Name=yearlyDateSelectlist", "Value=1", ENDITEM, 
//		"Name=yearlyDaySelectlist", "Value=SU", ENDITEM, 
//		"Name=yearlyDaySelectlist", "Value=1", ENDITEM, 
//		"Name=EndSelectlist", "Value=never", ENDITEM, 
//		"Name=isEnabled", "Value=true", ENDITEM, 
//		"Name=schedulerTime", "Value=2020-05-25 13:59:10", ENDITEM, 
//		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"12:56T12:56Z\",\"timeZone\":{\"name\":\"UTC\",\"offset\":\"+00:00\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
//		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM, 
//		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM, 
//		"Name=repeatExecution", "Value=false", ENDITEM, 
//		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
//		"Name=signalId", "Value=", ENDITEM, 
//		"Name=blankValuesJSON", "Value=", ENDITEM, 
//		"Name=previousAction", "Value=create", ENDITEM, 
//		"Name=_csrf", "Value={CsrfTokenId}", ENDITEM, 
//		LAST);
	
	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.97 Safari/537.36");

	web_submit_data("run", 
		"Action={URL}/signal/aggregateCaseAlert/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/aggregateCaseAlert/create", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=delimiter", "Value=none", ENDITEM, 
		"Name=owner", "Value={User_Id}", ENDITEM, 
		"Name=optradio", "Value=on", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"{ProductName}\",\"id\":\"{Product_Id}\"}],\"4\":[]}", ENDITEM, 
		"Name=studySelection", "Value=", ENDITEM, 
		"Name=JSONExpressionValues", "Value=", ENDITEM, 
		"Name=_limitPrimaryPath", "Value=", ENDITEM, 
		"Name=eventSelection", "Value=", ENDITEM, 
		"Name=dateRangeType", "Value=CASE_RECEIPT_DATE", ENDITEM, 
		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM, 
		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM, 
		"Name=asOfVersionDateValue", "Value=", ENDITEM, 
		"Name=asOfVersionDate", "Value=", ENDITEM, 
		"Name=_excludeFollowUp", "Value=", ENDITEM, 
		"Name=_applyAlertStopList", "Value=", ENDITEM, 
		"Name=applyAlertStopList", "Value=on", ENDITEM, 
		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM, 
		"Name=_groupBySmq", "Value=", ENDITEM, 
		"Name=_adhocRun", "Value=", ENDITEM, 
		"Name=_excludeNonValidCases", "Value=", ENDITEM, 
		"Name=_missedCases", "Value=", ENDITEM, 
		"Name=alertQuery", "Value=undefined", ENDITEM, 
		"Name=alertQueryName", "Value=", ENDITEM, 
		"Name=alertQueryId", "Value=", ENDITEM, 
		"Name=alertDateRangeInformation.dateRangeEnum", "Value=CUMULATIVE", ENDITEM, 
		"Name=dateRangeEnum", "Value=", ENDITEM, 
		"Name=alertDateRangeInformation.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=alertDateRangeInformation.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=dateRangeStart", "Value=", ENDITEM, 
		"Name=alertDateRangeInformation.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=dateRangeEnd", "Value=", ENDITEM, 
		"Name=drugType", "Value=SUSPECT", ENDITEM, 
		"Name=validQueries", "Value=", ENDITEM, 
		"Name=_event_exactSearch", "Value=", ENDITEM, 
		"Name=_product_exactSearch", "Value=", ENDITEM, 
		"Name=_study_exactSearch", "Value=", ENDITEM, 
		"Name=_study_imp", "Value=", ENDITEM, 
		"Name=templateQueries[0].version", "Value=", ENDITEM, 
		"Name=templateQueries[0].id", "Value=", ENDITEM, 
		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM, 
		"Name=templateQueries[0].new", "Value=true", ENDITEM, 
		"Name=templateQueries[0].rptTempId", "Value=", ENDITEM, 
		"Name=templateQueries[0].header", "Value=", ENDITEM, 
		"Name=templateQueries[0].title", "Value=", ENDITEM, 
		"Name=templateQueries[0].footer", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM, 
		"Name=templateQueries[0].templateName", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0].queryId", "Value=", ENDITEM, 
		"Name=templateQueries[0].queryName", "Value=", ENDITEM, 
		"Name=templateQueries[0].queryLevel", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM, 
		"Name=templateQueries[0].validQueries", "Value=", ENDITEM, 
		"Name=spotfireType", "Value=DRUG", ENDITEM, 
		"Name=spotfireDaterange", "Value=CUMULATIVE", ENDITEM, 
		"Name=name", "Value={AltertName}", ENDITEM, 
		"Name=sharedWith", "Value=User_{User_Id}", ENDITEM, 
		"Name=priority", "Value=6657", ENDITEM, 
		"Name=assignedToValue", "Value=UserGroup_6578", ENDITEM, 
		"Name=description", "Value=", ENDITEM, 
		"Name=TimeZoneSelectlist", "Value=", ENDITEM, 
		"Name=intervalSelectlist", "Value=none", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=repeat-monthly", "Value=bysetpos", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=monthlySelectlist", "Value=SU", ENDITEM, 
		"Name=repeat-yearly", "Value=bymonthday", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=yearlyDateSelectlist", "Value=1", ENDITEM, 
		"Name=yearlyDaySelectlist", "Value=SU", ENDITEM, 
		"Name=yearlyDaySelectlist", "Value=1", ENDITEM, 
		"Name=EndSelectlist", "Value=never", ENDITEM, 
		"Name=isEnabled", "Value=true", ENDITEM, 
		"Name=schedulerTime", "Value={SchDate} {SchTime}", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"{SchDate}T{SchTime2}Z\",\"timeZone\":{\"name\":\"UTC\",\"offset\":\"+00:00\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM, 
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM, 
		"Name=repeatExecution", "Value=false", ENDITEM, 
		"Name=editAggregate", "Value=false", ENDITEM, 
		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=previousAction", "Value=create", ENDITEM, 
		"Name=signalId", "Value=", ENDITEM, 
		"Name=_csrf", "Value={CsrfTokenId}", ENDITEM, 
		LAST);


	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("executionStatus-e35e74007b0b5422a22b611690365bff.css", 
		"URL={URL}/signal/assets/executionStatus-e35e74007b0b5422a22b611690365bff.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fuelux-f9b4ad7ab3a7ffc6f349ea76f519d981.js", 
		"URL={URL}/signal/assets/fuelux/fuelux-f9b4ad7ab3a7ffc6f349ea76f519d981.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL={URL}/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("executionStatus-8725fcdfa337d82dd022ca3ec2bde5f2.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/executionStatus-8725fcdfa337d82dd022ca3ec2bde5f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fuelux-6f987968c570ff7348ebf0d29c49fdbe.css", 
		"URL={URL}/signal/assets/fuelux-6f987968c570ff7348ebf0d29c49fdbe.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t6.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL={URL}/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("executionStatus", 
		"URL={URL}/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=SINGLE_CASE_ALERT&_=1590497959143", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=SINGLE_CASE_ALERT", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept-Encoding");

	web_revert_auto_header("Accept-Language");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

//	web_url("websocket", 
//		"URL={URL}/signal/stomp/983/dg74wbav/websocket", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t11.inf", 
//		"Mode=HTTP", 
//		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept-Language", 
		"en-IN");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");


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
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_url("searchUserGroupList", 
//		"URL={URL}/signal/user/searchUserGroupList?max=10&lang=en", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/aggregateCaseAlert/create", 
//		"Snapshot=t168.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_add_auto_header("Accept", 
//		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");
//
//	web_add_header("Cache-Control", 
//		"max-age=0");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");
//
//	web_reg_find("Search=Body",
//		"Text=Your alert is executing, and will be delivered when it is complete",
//		LAST);
//
//	web_submit_data("run",
//		"Action={URL}/signal/aggregateCaseAlert/run",
//		"Method=POST",
//		"RecContentType=text/html",
//		"Referer={URL}/signal/aggregateCaseAlert/create",
//		"Snapshot=t169.inf",
//		"Mode=HTTP",
//		ITEMDATA,
//		"Name=delimiter", "Value=none", ENDITEM,
//		"Name=owner", "Value={User_Id}", ENDITEM,
//		"Name=optradio", "Value=on", ENDITEM,
//		"Name=productSelection", "Value={\"1\":[],\"2\":[],\"3\":[{\"name\":\"{ProductName}\",\"id\":\"{Product_Id}\"}],\"4\":[]}", ENDITEM,
//		"Name=studySelection", "Value=", ENDITEM,
//		"Name=JSONExpressionValues", "Value=", ENDITEM,
//		"Name=_limitPrimaryPath", "Value=", ENDITEM,
//		"Name=eventSelection", "Value=", ENDITEM,
//		"Name=dateRangeType", "Value=CASE_RECEIPT_DATE", ENDITEM,
//		"Name=evaluateDateAsNonSubmission", "Value=LATEST_VERSION", ENDITEM,
//		"Name=evaluateDateAs", "Value=LATEST_VERSION", ENDITEM,
//		"Name=asOfVersionDateValue", "Value=", ENDITEM,
//		"Name=asOfVersionDate", "Value=", ENDITEM,
//		"Name=_excludeFollowUp", "Value=", ENDITEM,
//		"Name=_applyAlertStopList", "Value=", ENDITEM,
//		"Name=applyAlertStopList", "Value=on", ENDITEM,
//		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM,
//		"Name=_groupBySmq", "Value=", ENDITEM,
//		"Name=_adhocRun", "Value=", ENDITEM,
//		"Name=adhocRun", "Value=on", ENDITEM,
//		"Name=_excludeNonValidCases", "Value=", ENDITEM,
//		"Name=excludeNonValidCases", "Value=on", ENDITEM,
//		"Name=_missedCases", "Value=", ENDITEM,
//		"Name=missedCases", "Value=on", ENDITEM,
//		"Name=alertQuery", "Value=", ENDITEM,
//		"Name=alertQueryName", "Value=", ENDITEM,
//		"Name=alertQueryId", "Value=", ENDITEM,
//		"Name=alertDateRangeInformation.dateRangeEnum", "Value=CUMULATIVE", ENDITEM,
//		"Name=dateRangeEnum", "Value=", ENDITEM,
//		"Name=alertDateRangeInformation.relativeDateRangeValue", "Value=1", ENDITEM,
//		"Name=alertDateRangeInformation.dateRangeStartAbsolute", "Value=", ENDITEM,
//		"Name=dateRangeStart", "Value=", ENDITEM,
//		"Name=alertDateRangeInformation.dateRangeEndAbsolute", "Value=", ENDITEM,
//		"Name=dateRangeEnd", "Value=", ENDITEM,
//		"Name=drugType", "Value=SUSPECT", ENDITEM,
//		"Name=validQueries", "Value=", ENDITEM,
//		"Name=_event_exactSearch", "Value=", ENDITEM,
//		"Name=_product_exactSearch", "Value=", ENDITEM,
//		"Name=_study_exactSearch", "Value=", ENDITEM,
//		"Name=_study_imp", "Value=", ENDITEM,
//		"Name=templateQueries[0].version", "Value=", ENDITEM,
//		"Name=templateQueries[0].id", "Value=", ENDITEM,
//		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM,
//		"Name=templateQueries[0].new", "Value=true", ENDITEM,
//		"Name=templateQueries[0].rptTempId", "Value=", ENDITEM,
//		"Name=templateQueries[0].header", "Value=", ENDITEM,
//		"Name=templateQueries[0].title", "Value=", ENDITEM,
//		"Name=templateQueries[0].footer", "Value=", ENDITEM,
//		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM,
//		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM,
//		"Name=templateQueries[0].templateName", "Value=", ENDITEM,
//		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM,
//		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM,
//		"Name=templateQueries[0].queryId", "Value=", ENDITEM,
//		"Name=templateQueries[0].queryName", "Value=", ENDITEM,
//		"Name=templateQueries[0].queryLevel", "Value=", ENDITEM,
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=", ENDITEM,
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM,
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=", ENDITEM,
//		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=", ENDITEM,
//		"Name=templateQueries[0].validQueries", "Value=", ENDITEM,
//		"Name=spotfireType", "Value=DRUG", ENDITEM,
//		"Name=spotfireDaterange", "Value=CUMULATIVE", ENDITEM,
//		"Name=name", "Value={AltertName}", ENDITEM,
//		"Name=sharedWith", "Value=User_{User_Id}", ENDITEM,
//		"Name=priority", "Value=6637", ENDITEM,
//		"Name=assignedToValue", "Value=UserGroup_6578", ENDITEM,
//		"Name=description", "Value=", ENDITEM,
//		"Name=isEnabled", "Value=true", ENDITEM,
//		"Name=schedulerTime", "Value={SchedulerTime}", ENDITEM,
//		"Name=scheduleDateJSON", "Value=null", ENDITEM,
//		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM,
//		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM,
//		"Name=repeatExecution", "Value=false", ENDITEM,
//		"Name=editAggregate", "Value=false", ENDITEM,
//		"Name=schedulerFrom", "Value=createPage", ENDITEM,
//		"Name=blankValuesJSON", "Value=", ENDITEM,
//		"Name=previousAction", "Value=create", ENDITEM,
//		"Name=signalId", "Value=", ENDITEM,
//		"Name=_csrf", "Value={CsrfTokenId}", ENDITEM,
//		LAST);
//
//	web_concurrent_start(NULL);
//
//	web_url("executionStatus-8725fcdfa337d82dd022ca3ec2bde5f2.js", 
//		"URL={URL}/signal/assets/app/pvs/configuration/executionStatus-8725fcdfa337d82dd022ca3ec2bde5f2.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
//		"Snapshot=t170.inf", 
//		LAST);
//
//	web_url("executionStatus-e35e74007b0b5422a22b611690365bff.css", 
//		"URL={URL}/signal/assets/executionStatus-e35e74007b0b5422a22b611690365bff.css", 
//		"Resource=1", 
//		"RecContentType=text/css", 
//		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
//		"Snapshot=t171.inf", 
//		LAST);
//
//	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
//		"URL={URL}/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
//		"Snapshot=t172.inf", 
//		LAST);
//
//	web_url("fuelux-f9b4ad7ab3a7ffc6f349ea76f519d981.js", 
//		"URL={URL}/signal/assets/fuelux/fuelux-f9b4ad7ab3a7ffc6f349ea76f519d981.js", 
//		"Resource=1", 
//		"RecContentType=application/javascript", 
//		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
//		"Snapshot=t173.inf", 
//		LAST);
//
//	web_url("fuelux-6f987968c570ff7348ebf0d29c49fdbe.css", 
//		"URL={URL}/signal/assets/fuelux-6f987968c570ff7348ebf0d29c49fdbe.css", 
//		"Resource=1", 
//		"RecContentType=text/css", 
//		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
//		"Snapshot=t174.inf", 
//		LAST);
//
//	web_concurrent_end(NULL);
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
//	web_add_auto_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("dataTables_en.json", 
//		"URL={URL}/signal/assets/i18n/dataTables_en.json", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
//		"Snapshot=t176.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	
//
//	web_revert_auto_header("X-Requested-With");
//
//	web_url("info_3", 
//		"URL={URL}/signal/stomp/info", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
//		"Snapshot=t178.inf", 
//		"Mode=HTTP", 
//		LAST);
//
//	web_revert_auto_header("Accept");
//
//	web_add_header("Accept", 
//		"application/json, text/javascript, */*; q=0.01");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	web_url("executionStatus", 
//		"URL={URL}/signal/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=alertType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false"
//		"&columns%5B2%5D%5Bdata%5D=frequency&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=false&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=runDate&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=executionTime&columns%5B4%5D%5Bname%5D=&"
//		"columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=owner&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionStatus&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D="
//		"false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=3&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&searchString=&direction=desc&sort=runDate&status=GENERATING&alertType=AGGREGATE_CASE_ALERT&_=1590415247925", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
//		"Snapshot=t179.inf", 
//		"Mode=HTTP", 
//		LAST);
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
//	web_add_auto_header("Accept", 
//		"*/*");
//
//	web_add_auto_header("X-Requested-With", 
//		"XMLHttpRequest");
//
//	

	lr_end_transaction("S06_04_CreateQuantitativeAlert",LR_AUTO);

	lr_think_time(3);

	
	lr_start_transaction("S06_05_Logout");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Login",
		LAST);

	web_url("index", 
		"URL={URL}/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/configuration/executionStatus?alertType=AGGREGATE_CASE_ALERT", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S06_05_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}