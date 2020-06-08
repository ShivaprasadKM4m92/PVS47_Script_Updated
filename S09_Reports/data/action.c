Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.97 Safari/537.36");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("signal", 
		"URL=http://10.100.22.24:8181/signal", 
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

	web_add_header("If-None-Match", 
		"3969e9084f7996aecd54fe0eabf770994b1c1ba9");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=83", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL=http://10.100.22.24:8181/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL=http://10.100.22.24:8181/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
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
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t9.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCbwRebZvvad7EgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCbwRebZvvad7EgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t10.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("S09_01_OpenApplication");

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

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-83.0.4103.97");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2229489755&cup2hreq=a853536ae2f443d247606b5b74d837ed5d632af8a24a6d5d631ea02688a85920", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{7a8f2c83-17b6-45b0-9213-9e7aea2f7dbe}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{4963f5ac-2162-4fee-a297-72650e1db66d}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{88195350-b46a-4213-96b9-0acbb2b090f3}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{fc1f942c-a6ae-43ee-813b-d9ca5b77a07e}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{bbe3be0d-c244-46bc-b338-ff9058212e50}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.693458e8d61b08ad38d9dceec8d6204a74cfc0952a39dca6d1e6d4828a5cbcf4\"}]},\"ping\":{\"ping_freshness\":\"{6ef014f9-8709-4ee1-9c64-bcc5daa3b6af}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"1.11.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\""
		":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{3a9650af-9549-4e98-8dcd-51e98dc1d5f4}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{ef95fe79-943c-4c36-abc2-ff30a1274772}\",\"rd\":4907},\"updatecheck\":{},\""
		"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.2ab2be7a7c283b0e4ec01de815baab251360d04ad22206876428ad1cbedc446f\"}]},\"ping\":{\"ping_freshness\":\"{5ddd6875-a0f5-4ad6-9604-1b55691ddcb1}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"8320.407.0.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\","
		"\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.97\",\"protocol\":\"3.1\",\"requestid\":\"{b4cf069e-76fb-4c78-9bc5-cb6d99395048}\",\"sessionid\":\"{d5b49962-5a24-4e59-a267-f12afa355af2}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.97\"}}", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("authenticate", 
		"Action=http://10.100.22.24:8181/signal/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=7914a474-5379-4192-afa2-474f44072702", ENDITEM, 
		"Name=username", "Value=bhagya", ENDITEM, 
		"Name=password", "Value=bhagya", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"URL=http://10.100.22.24:8181/signal/assets/theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t13.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t14.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t15.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL=http://10.100.22.24:8181/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t16.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL=http://10.100.22.24:8181/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t17.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t18.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t29.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t30.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t31.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t32.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t34.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t35.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t36.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t37.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t38.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t39.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t41.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t42.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t43.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t44.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t48.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t50.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t52.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t53.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t54.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t55.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t56.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL=http://10.100.22.24:8181/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t57.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t58.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL=http://10.100.22.24:8181/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t59.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t60.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t61.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t64.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t74.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t75.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t78.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t79.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t80.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t81.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t83.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t82.inf", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t85.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKAAQlHvIFB7IvAMRILDe_YgOYSABoAIgASCw1_PJqbEgAaACIAEgsNkcnz6RIAGgAiABILDbnQilESABoAIgASCw3RZ88eEgAaACIAEgsN0miFORIAGgAiABILDRv2j6ASABoAIgASCw3wFhzoEgAaACIAEgsNOE-ZNhIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKAAQlHvIFB7IvAMRILDe_YgOYSABoAIgASCw1_PJqbEgAaACIAEgsNkcnz6RIAGgAiABILDbnQilESABoAIgASCw3RZ88eEgAaACIAEgsN0miFORIAGgAiABILDRv2j6ASABoAIgASCw3wFhzoEgAaACIAEgsNOE-ZNhIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t86.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1591617304223", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1591617304222", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t88.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCawvb5cmFgDSEgsNnOy7GRIAGgAiABILDb2Fgw8SABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCawvb5cmFgDSEgsNnOy7GRIAGgAiABILDb2Fgw8SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1591617304224", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1591617304228", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617304229", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1591617304225", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1591617304227", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1591617304226", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=01-Jun-2020", ENDITEM, 
		"Name=end", "Value=13-Jul-2020", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1591617304231", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t98.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CeLz7kID33hnEgsNcYiOKxIAGgAiABILDb2Fgw8SABoAIgASCw2c7LsZEgAaACIAEgsNvYWDDxIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_CeLz7kID33hnEgsNcYiOKxIAGgAiABILDb2Fgw8SABoAIgASCw2c7LsZEgAaACIAEgsNvYWDDxIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t99.inf", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket", 
		"URL=http://10.100.22.24:8181/signal/stomp/169/bk6x_frk/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t101.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJZCXXwJzK-GymlEgsNWdcY1RIAGgAiABILDb2Fgw8SABoAIgASCw1xiI4rEgAaACIAEgsNvYWDDxIAGgAiABILDZzsuxkSABoAIgASCw29hYMPEgAaACIAGgA=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJZCXXwJzK-GymlEgsNWdcY1RIAGgAiABILDb2Fgw8SABoAIgASCw1xiI4rEgAaACIAEgsNvYWDDxIAGgAiABILDZzsuxkSABoAIgASCw29hYMPEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t102.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1591617304232", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1591617304230", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t107.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Accept-Language");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,llkgjffcdpffmhiakmfcdcblohccpfmo,oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,hfnkpimlhhgieaddgfemjhofmfblmnib,hnimpnehoodheedghdeeijklkeaacbdc,aemomkdncapdnfajjbbcbdebjljbpmpj,gcmjkmgdlgnkkcocmoeiminaijmmjnii,khaoiebndkojlmppeemjhbpbandiljpe,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,gkmgaooipdjhmangpemjhigmamcehddo,ggkkehgbnfjpeggfpleeakpidbkibbmn,giekcmmlnklenlaomppkphknjmnnpneh,bklopemakmnopmghhmccadeonafabnal,"
		"copjbmjbojbakpaedmpkhmiplmmehfck");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-83.0.4103.97");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2226342373&cup2hreq=6cefd5a4250ae128170b742016cba9d86e75d789a86d0828fb6f5e05e9e6b7e7", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{9af6bd0c-63b4-446b-8304-e327503cd522}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{490b514f-d969-4c69-9986-92e76bf25e59}\",\"rd\":4907},\"updatecheck\":{},\""
		"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{281a8d66-94f7-462b-8ef2-15d8fbca82e3}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GCEU\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{81ada020-c52e-4e82-8eb9-d2349cf44909}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8a97167265494593ef517563c71ccd2421999d8299f4df3548de0330ffaa1ed7\"}]},\"ping\":{\"ping_freshness\":\""
		"{d0890cce-bc91-491a-8d0e-1a8ec9f92da4}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"5921\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{a1b816eb-3c81-4b7b-b466-beb66f19d305}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\""
		":true,\"ping\":{\"ping_freshness\":\"{359b972d-5439-44af-b931-0e4bd74829e3}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{1d6ebb24-6897-4fa5-ac0b-8c303790a3b2}\",\"rd\":4907},\""
		"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{3f0b43d5-556f-4473-a9b6-92d8b7d265aa}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\""
		"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{65d8d1c8-769b-4da1-ad95-379aa281c0f4}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":"
		"{\"package\":[{\"fp\":\"1.bd35a1f7ddfbd1729e05e751c08d489e8486728e8a473c01cee02cec0de44769\"}]},\"ping\":{\"ping_freshness\":\"{ed9d5357-909a-44eb-ae1f-d3dc7028abfe}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"1325\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a94e96f52af7838519aac1ae4ef68686817be9661165e20964f81c2b5bec7740\"}]},\"ping\":{\""
		"ping_freshness\":\"{d86296e3-e93c-4ad2-9930-dd715d7ced94}\",\"rd\":4907},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.236.200\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9:vjl@0.01\",\"cohorthint\":\"M80ToM83\",\"cohortname\":\"M80ToM83\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9fbf27ac6ca2d1c8e065e68b8fd7ca789342b27ab56f3eb4b9a05b87faf43ebb\"}]},\"ping\":{\"ping_freshness\":\"{4c4dff08-f4e3-47b1-913e-76f8cafc2c31}\",\"rd\""
		":4907},\"updatecheck\":{},\"version\":\"2020.6.2.834\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{4253dc5d-15ec-4ed7-8722-b7939383801d}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\""
		"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{4019cd73-29ee-4922-8917-f665f4eee39b}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GCEU\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{486115dd-99c4-4d76-91f2-dbfc8f30d8c2}\",\"rd\":4907},\"updatecheck\":{},\"version\":\"2018.9.6.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"83.0.4103.97\",\"protocol\":\"3.1\",\""
		"requestid\":\"{12260fbd-fab8-44c6-abf9-8a9a310f9249}\",\"sessionid\":\"{4d1990d1-563a-4f55-8ea1-7baa26b94eed}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.97\"}}", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617304233", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_03_NavigateToSignalReports");

	web_add_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
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

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/report/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("fab-0bcedd3f777268a38ded227a4b308710.css", 
		"URL=http://10.100.22.24:8181/signal/assets/fab-0bcedd3f777268a38ded227a4b308710.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("dateRangeEvdas-198248d2fcccc7379d1f5f4957f76002.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/dateRangeEvdas-198248d2fcccc7379d1f5f4957f76002.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"URL=http://10.100.22.24:8181/signal/assets/copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"URL=http://10.100.22.24:8181/signal/assets/configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t117.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alert_utils/dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("multi_datasource_dictionary-e388d3294bb91712f5e45b1449c86e27.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alert_utils/multi_datasource_dictionary-e388d3294bb91712f5e45b1449c86e27.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t120.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t121.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("report_history-87b95507519f147fb6e1123c40f43460.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/report/report_history-87b95507519f147fb6e1123c40f43460.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("fab-f04063fec34e1cfba276734dd5f3c88d.js", 
		"URL=http://10.100.22.24:8181/signal/assets/fab/fab-f04063fec34e1cfba276734dd5f3c88d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("graphReport-db78fa95710d497c78731ccde7a8a4ad.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/report/graphReport-db78fa95710d497c78731ccde7a8a4ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("graph-c5f91aa007d6226e156a6e26bf1b35c9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/report/graph-c5f91aa007d6226e156a6e26bf1b35c9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t126.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t129.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchFaersDisabledColumnsIndexes", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/fetchFaersDisabledColumnsIndexes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("history", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348386", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348385", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/086/utwcji7_/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348387", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_03_NavigateToSignalReports",LR_AUTO);

	lr_think_time(3);

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t140.inf", 
		LAST);

	lr_start_transaction("SelectProductAndDate");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348388", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t141.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("SelectProductAndDate",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_2", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348389", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348390", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348391", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_submit_data("searchViews", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=PENICILLAMINE Capsule", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=delimiter", "Value=;", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL=http://10.100.22.24:8181/signal/productDictionary/getSelectedItem?productId=100137&dataSource=pva&dictionaryLevel=3&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t147.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=3", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=100137", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_2", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t148.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=2", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=100077", ENDITEM, 
		LAST);

	web_submit_data("getPreLevelProductParents_3", 
		"Action=http://10.100.22.24:8181/signal/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
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

	web_url("history_3", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348392", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348393", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t151.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348394", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_4", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348395", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348396", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_5", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348397", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348398", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t156.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMODMuMC40MTAzLjk3GikIBRABGhsKDQgFEAYYASIDMDAxMAEQpNsIGgIYBwuXlgkiBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABEIq-BxoCGAd1kll9IgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARDJxQcaAhgHWUqOAyIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQjcYHGgIYBzMJVcEiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgHMbHJSCIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQqhoaAhgHHghkiSIEIAEgAigEGicICRABGhkKDQgJEAYYASIDMDAxMAYQAxoCGAd8Zz-3IgQgASACKAYaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARDLLhoCGAe7RIhlIgQgASACKAEaJwgKEAgaGQ"
		"oNCAoQCBgBIgMwMDEwARAFGgIYB6oISBciBCABIAIoARonCAkQARoZCg0ICRAGGAEiAzAwMTABEBsaAhgHzNwFXCIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQ_ggaAhgH_K7lEyIEIAEgAigBGigIDRABGhoKDQgNEAYYASIDMDAxMAEQv3QaAhgH5P79ISIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQ-d4DGgIYBx2ilRsiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEMwDGgIYBxHsON4iBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t157.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_custom_request("prepareICSRsReport", 
		"URL=http://10.100.22.24:8181/signal/report/prepareICSRsReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22100137%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=ICSR_BY_CASE_CHARACTERISTICS&dataSource=pva&reportName=S9_ICSR_Test1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D="
		"10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate=01-Jan-2001&endDate=31-Dec-2010&dateRangeType=CUSTOM", 
		LAST);

	lr_start_transaction("S09_04_GenerateICSRsByCaseCharacteristics");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348399", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_04_GenerateICSRsByCaseCharacteristics",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_6", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348400", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("S09_05_InitiatePBRERSignalSummaryReport");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348401", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t161.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_7", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348402", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_custom_request("requestReport", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22100137%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=PBRER_SIGNAL_SUMMARY&dataSource=pva&reportName=S9_PBRERSignal_Test1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D="
		"10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate=01-Jan-2001&endDate=31-Dec-2010&dateRangeType=CUSTOM", 
		LAST);

	web_url("notifications.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/notifications.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t164.inf", 
		LAST);

	web_url("history_8", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348403", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_9", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348404", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348405", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348406", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_10", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348407", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_custom_request("requestReport_2", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22100137%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=SIGNAL_SUMMARY_REPORT&dataSource=pva&reportName=S9_SignalSummary_Test1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D="
		"10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate=01-Jan-2001&endDate=31-Dec-2010&dateRangeType=CUSTOM", 
		LAST);

	web_url("history_11", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348408", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348409", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_05_InitiatePBRERSignalSummaryReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_06_InitiateSignalSummaryReport");

	lr_end_transaction("S09_06_InitiateSignalSummaryReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_07_InitiateSignalsByState");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_12", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348410", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_custom_request("requestReport_3", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22100137%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=SIGNALS_BY_STATE&dataSource=pva&reportName=S9_SignalbyState_Test1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D="
		"10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate=01-Jan-2001&endDate=31-Dec-2010&dateRangeType=CUSTOM", 
		LAST);

	web_url("history_13", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348411", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("history_14", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348412", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348413", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_07_InitiateSignalsByState",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_08_InitiateSignalProductsAction");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_15", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348414", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_custom_request("requestReport_4", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22100137%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=SIGNAL_PRODUCT_ACTIONS&dataSource=pva&reportName=S9_SignalPrdAction_Test1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D"
		"=10021881&socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+"
		"familial+and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&"
		"socListName%5B%5D=Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+"
		"thoracic+and+mediastinal+disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate=01-Jan-2001&endDate=31-Dec-2010&dateRangeType=CUSTOM", 
		LAST);

	web_url("history_16", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348415", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348416", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_08_InitiateSignalProductsAction",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_09_InitiateMemoReport");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_17", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348417", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"7914a474-5379-4192-afa2-474f44072702");

	web_custom_request("requestReport_5", 
		"URL=http://10.100.22.24:8181/signal/report/requestReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PENICILLAMINE+Capsule%22%2C%22id%22%3A%22100137%22%7D%5D%2C%224%22%3A%5B%5D%7D&reportType=MEMO_REPORT&dataSource=pva&reportName=S9_MemoReport_Test1&socList%5B%5D=10005329&socList%5B%5D=10007541&socList%5B%5D=10010331&socList%5B%5D=10013993&socList%5B%5D=10014698&socList%5B%5D=10015919&socList%5B%5D=10017947&socList%5B%5D=10018065&socList%5B%5D=10019805&socList%5B%5D=10021428&socList%5B%5D=10021881&"
		"socList%5B%5D=10022117&socList%5B%5D=10022891&socList%5B%5D=10027433&socList%5B%5D=10028395&socList%5B%5D=10029104&socList%5B%5D=10029205&socList%5B%5D=10036585&socList%5B%5D=10037175&socList%5B%5D=10038359&socList%5B%5D=10038604&socList%5B%5D=10038738&socList%5B%5D=10040785&socList%5B%5D=10041244&socList%5B%5D=10042613&socList%5B%5D=10047065&socList%5B%5D=10077536&socListName%5B%5D=Blood+and+lymphatic+system+disorders&socListName%5B%5D=Cardiac+disorders&socListName%5B%5D=Congenital%2C+familial+"
		"and+genetic+disorders&socListName%5B%5D=Ear+and+labyrinth+disorders&socListName%5B%5D=Endocrine+disorders&socListName%5B%5D=Eye+disorders&socListName%5B%5D=Gastrointestinal+disorders&socListName%5B%5D=General+disorders+and+administration+site+conditions&socListName%5B%5D=Hepatobiliary+disorders&socListName%5B%5D=Immune+system+disorders&socListName%5B%5D=Infections+and+infestations&socListName%5B%5D=Injury%2C+poisoning+and+procedural+complications&socListName%5B%5D=Investigations&socListName%5B%5D="
		"Metabolism+and+nutrition+disorders&socListName%5B%5D=Musculoskeletal+and+connective+tissue+disorders&socListName%5B%5D=Neoplasms+benign%2C+malignant+and+unspecified+(incl+cysts+and+polyps)&socListName%5B%5D=Nervous+system+disorders&socListName%5B%5D=Pregnancy%2C+puerperium+and+perinatal+conditions&socListName%5B%5D=Psychiatric+disorders&socListName%5B%5D=Renal+and+urinary+disorders&socListName%5B%5D=Reproductive+system+and+breast+disorders&socListName%5B%5D=Respiratory%2C+thoracic+and+mediastinal+"
		"disorders&socListName%5B%5D=Skin+and+subcutaneous+tissue+disorders&socListName%5B%5D=Social+circumstances&socListName%5B%5D=Surgical+and+medical+procedures&socListName%5B%5D=Vascular+disorders&socListName%5B%5D=Product+issues&startDate=01-Jan-2001&endDate=31-Dec-2010&dateRangeType=CUSTOM", 
		LAST);

	web_url("history_18", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348418", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1591617348419", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_09_InitiateMemoReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("S09_10_Logout");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("history_19", 
		"URL=http://10.100.22.24:8181/signal/report/history?_=1591617348420", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index_2", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/report/index", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("S09_10_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}