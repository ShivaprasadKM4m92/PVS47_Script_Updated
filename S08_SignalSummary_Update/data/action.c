Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

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

	web_add_header("Origin", 
		"https://www.google.com");

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

	web_concurrent_start(NULL);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Accept-Encoding", 
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

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc", 
		LAST);

	web_revert_auto_header("Accept-Language");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"6e5406c103ef7317b32f3e6f0091183fcb5ac377");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=81", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

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
		"URL=http://10.100.22.24:8181/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL=http://10.100.22.24:8181/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
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

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=tN2ml82IrGouScOnqCwshg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nshivaprasaadkm@gmail.com4*8\b", 
		LAST);

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/cast-edu-messaging+https://www.googleapis.com/auth/clouddevices+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/plus.peopleapi.readwrite+https://www.googleapis.com/auth/userinfo.email&client_id="
		"919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&device_id=e06c8409-4e65-402e-823f-f31b85a1565a&device_type=chrome&lib_ver=extension", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t13.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCbwRebZvvad7EgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCbwRebZvvad7EgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("Signalsummary_01_OpenApplication");

	lr_end_transaction("Signalsummary_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	web_custom_request("token_3", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc&scope=https://www.googleapis.com/auth/firebase.messaging", 
		LAST);

	web_custom_request("CHES4QEStwFBUEE5MWJHREZjUy11MldIampSanVKQS1ZNHdZVTZnYi12X3U1b1BZcWpuT2ZtUzdzXzhYbEFqcUhQbjhubWF5bTZjdHlsNXo2aWtFczZTYTlENG1mMG1Ic0xSLWRuQzZuM2ROTjZnX3BIVzBNX1pyY0hQZVNzSE5zRXVUSEtSelJrTHQzYXFZai1PLXRmaTFtRlFjQk5jeFoxajBfUUJ1dy0wbllMU2ljNXZhZE13eTBIeF9uMU0a", 
		"URL=https://clients4.google.com/invalidation/android/request/CHES4QEStwFBUEE5MWJHREZjUy11MldIampSanVKQS1ZNHdZVTZnYi12X3U1b1BZcWpuT2ZtUzdzXzhYbEFqcUhQbjhubWF5bTZjdHlsNXo2aWtFczZTYTlENG1mMG1Ic0xSLWRuQzZuM2ROTjZnX3BIVzBNX1pyY0hQZVNzSE5zRXVUSEtSelJrTHQzYXFZai1PLXRmaTFtRlFjQk5jeFoxajBfUUJ1dy0wbllMU2ljNXZhZE13eTBIeF9uMU0aACoCCAAyH2NvbS5nb29nbGUuY2hyb21lLmludmFsaWRhdGlvbnM", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"EncType=application/x-protobuffer", 
		"Body=\nY\n\n\b%\n\n\b\tóÊ.±I õ•Ä@”b\r¤Š#\b‚2\b", 
		LAST);

	lr_start_transaction("Signalsummary_02_Login");

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
		"http://10.100.22.24:8181");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("authenticate", 
		"Action=http://10.100.22.24:8181/signal/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=45a41868-1b22-40c7-a652-a073b45ee8c6", ENDITEM, 
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
		"Snapshot=t18.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL=http://10.100.22.24:8181/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL=http://10.100.22.24:8181/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t29.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t30.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t31.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t32.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t34.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t35.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t36.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t37.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t38.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t39.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t41.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Accept-Language");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,llkgjffcdpffmhiakmfcdcblohccpfmo,oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,aemomkdncapdnfajjbbcbdebjljbpmpj,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,ehgidpndbllacpjalkiimkbadgjfnnmc,copjbmjbojbakpaedmpkhmiplmmehfck,gkmgaooipdjhmangpemjhigmamcehddo,ggkkehgbnfjpeggfpleeakpidbkibbmn,bklopemakmnopmghhmccadeonafabnal,hnimpnehoodheedghdeeijklkeaacbdc,"
		"jflookgnkcckhobaglndicnbbgbonegd");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-81.0.4044.138");

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=9:2046374254&cup2hreq=f039579406375aa87799fcb028a01190059b440ef31c625832aa032d1339607a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1a4fbbc6-6a77-430a-8364-25f59de6ac75}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{3724d466-29de-4e00-9124-d5c43a00856d}\",\"rd\":4893},\"updatecheck\":{},\""
		"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{1eb306a0-1923-4459-9f92-afcd65633be6}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"4.10.1610.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{82948142-aff8-4188-8ba6-f46f7e0a4611}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{704c4131-d21d-4bae-a8bf-e3973d76ef7f}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1"
		":\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{70a48688-947f-4f9b-9c2f-fb0996aa8848}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\""
		":\"1.c60f9c8fb34dffb805df3e76bceac4567815b93ed6be8231556245759e2ca0e3\"}]},\"ping\":{\"ping_freshness\":\"{3000f409-dbcc-4062-bdf6-a17bdd50bfb4}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"5893\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\""
		"{10b0eb1f-ba43-4288-a70c-960f7b00245d}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{852d2a89-850f-435e-b8a6-25e9a5686a51}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\""
		"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{eff708aa-a0ad-4a1c-92a0-0ee494835ad5}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GGLS\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\""
		",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{7e618d37-c285-4e2f-9e3d-c5e65dada6f7}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.e1aca3e8ebc06fe8b3b386fbdf5ad3ed7f76af9651106fba33276ad48d28ae23\"}]},\"ping\":{\"ping_freshness\":\"{6c2a2d62-cf98-48d0-b2e6-da23fdd54bc8}\",\"rd\":4893},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"81.235.200\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.59f80dfc20335b1b6c4562bf68e07f7eeb1ac8b6f5d3099beefa6e130a1ab368\"}]},\""
		"ping\":{\"ping_freshness\":\"{6387d59b-92f3-4fe4-bab6-a3e1fc8a11df}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"2020.5.17.1142\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{2dbfb5e1-d6b8-4aac-a154-e87cdaf9d5d4}\",\"rd\":4893},\"updatecheck\":{},"
		"\"version\":\"3\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{b928d6b9-e837-47b9-b552-52d8b896f552}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.5ddeb0e65d590b681503a026a4277334ef08b6c634a46698367e37c584596d2d\"}]},\"ping\":{\"ping_freshness\":\"{4f59916e-18c2-491d-bd81-32b0392d4ffc}\",\"rd\":4893},\"updatecheck\":{},\"version\":\"1197\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"81.0.4044.138\",\"protocol\":\"3.1\""
		",\"requestid\":\"{8b9e4816-f195-4011-802e-7189b14d755f}\",\"sessionid\":\"{81a386eb-e3ad-4872-8486-7ffe46adb53d}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"81.0.4044.138\"}}", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL=http://10.100.22.24:8181/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL=http://10.100.22.24:8181/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t69.inf", 
		LAST);

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t71.inf", 
		LAST);

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t83.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("date_picker_template.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t84.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t86.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t87.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t90.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_concurrent_start(NULL);

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t91.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t92.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t93.inf", 
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
		"Snapshot=t94.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1590404877873", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1590404877874", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1590404877875", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1590404877876", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590404877879", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1590404877877", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590404877878", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"45a41868-1b22-40c7-a652-a073b45ee8c6");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Apr-2020", ENDITEM, 
		"Name=end", "Value=08-Jun-2020", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590404877880", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t103.inf", 
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
		"Snapshot=t104.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1590404877881", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t106.inf", 
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
		"Snapshot=t107.inf", 
		LAST);

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1590404877882", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket", 
		"URL=http://10.100.22.24:8181/signal/stomp/404/sphllc4l/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1590404877883", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t110.inf", 
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

	web_concurrent_start(NULL);

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJZCXXwJzK-GymlEgsNWdcY1RIAGgAiABILDb2Fgw8SABoAIgASCw1xiI4rEgAaACIAEgsNvYWDDxIAGgAiABILDZzsuxkSABoAIgASCw29hYMPEgAaACIAGgA=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJZCXXwJzK-GymlEgsNWdcY1RIAGgAiABILDb2Fgw8SABoAIgASCw1xiI4rEgAaACIAEgsNvYWDDxIAGgAiABILDZzsuxkSABoAIgASCw29hYMPEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t111.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t112.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t113.inf", 
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
		"Ch0KDGdvb2dsZWNocm9tZRINODEuMC40MDQ0LjEzOBopCAUQARobCg0IBRAGGAEiAzAwMTABEOnQCBoCGAc0wfXAIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARC4tgcaAhgHf1rc4SIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ8bwHGgIYB6l2oKAiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABENe7BxoCGAc0xAhxIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJ8aGgIYB_gAXYIiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQhisaAhgHVSpkiyIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAeqCEgXIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAbGgIYB8zcBVwiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEO4IGgIYB0L0zlAiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEIp0GgIYByZb5I0iBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEIbVAxoCGAcfJd-BIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCjAxoCGAfBR0TxIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t114.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("Signalsummary_02_Login",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590404877884", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_03_NavigateSignalSummary");

	web_add_header("X-CSRF-TOKEN", 
		"45a41868-1b22-40c7-a652-a073b45ee8c6");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
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
		"URL=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"URL=http://10.100.22.24:8181/signal/assets/colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("validated_signal-9eedce6540019141ed0e91fc0d1f4470.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/validated_signal-9eedce6540019141ed0e91fc0d1f4470.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t125.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("viewColumnInfo", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=8478&_=1590404989153", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIyCazxM2pM5g0OEgsNL0aOchIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAGgAScwkqePSrBxIBLxILDSTdXfoSABoAIgASCw29hYMPEgAaACIAEgsNoqK_9hIAGgAiABILDW2I6wkSABoAIgASCw2cFsKfEgAaACIAEgsN2N0uahIAGgAiABILDZ-9DGgSABoAIgASCw1D5jC3EgAaACIA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIyCazxM2pM5g0OEgsNL0aOchIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAGgAScwkqePSrBxIBLxILDSTdXfoSABoAIgASCw29hYMPEgAaACIAEgsNoqK_9hIAGgAiABILDW2I6wkSABoAIgASCw2cFsKfEgAaACIAEgsN2N0uahIAGgAiABILDZ-9DGgSABoAIgASCw1D5jC3EgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("7435_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590404989155", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("list", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/list?args="
		"%7B%22draw%22%3A1%2C%22columns%22%3A%5B%7B%22data%22%3A%22selected%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22name%22%2C%22name%22%3A%22name%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22productName%22%2C%22name%22%3A%22products%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atr"
		"ue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22eventName%22%2C%22name%22%3A%22events%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22noOfPec%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22noOfCases%22%2C%22name%22%3A%22%22%2C%22searchable%2"
		"2%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22monitoringStatus%22%2C%22name%22%3A%22disposition.displayName%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22topicCategory%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22dat"
		"a%22%3A%22assignedTo%22%2C%22name%22%3A%22assignedTo.fullName%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22priority%22%2C%22name%22%3A%22priority.displayName%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Atrue%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%2C%7B%22data%22%3A%22actions%22%2C%22name%22%3A%22%22%2C%22searchable%22%3Atrue%2C%22orderable%22%3Afalse%2C%22search%22%3"
		"A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D%5D%2C%22order%22%3A%5B%7B%22column%22%3A0%2C%22dir%22%3A%22asc%22%7D%5D%2C%22start%22%3A0%2C%22length%22%3A50%2C%22search%22%3A%7B%22value%22%3A%22%22%2C%22regex%22%3Afalse%7D%7D&_=1590404989154", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLBAQkiIh3cJzmkjBILDSTdXfoSABoAIgASCw29hYMPEgAaACIAEgsNoqK_9hIAGgAiABILDW2I6wkSABoAIgASCw2cFsKfEgAaACIAEgsN2N0uahIAGgAiABILDZ-9DGgSABoAIgASCw1D5jC3EgAaACIAEgsNoqK_9hIAGgAiABILDW2I6wkSABoAIgASCw2cFsKfEgAaACIAEgsN2N0uahIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLBAQkiIh3cJzmkjBILDSTdXfoSABoAIgASCw29hYMPEgAaACIAEgsNoqK_9hIAGgAiABILDW2I6wkSABoAIgASCw2cFsKfEgAaACIAEgsN2N0uahIAGgAiABILDZ-9DGgSABoAIgASCw1D5jC3EgAaACIAEgsNoqK_9hIAGgAiABILDW2I6wkSABoAIgASCw2cFsKfEgAaACIAEgsN2N0uahIAGgAiABILDZ-9DGgSABoAIgASCw1D5jC3EgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t131.inf", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/691/0v_eoy3z/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590404989156", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_03_NavigateSignalSummary",LR_AUTO);

	lr_think_time(3);

	web_url("7435_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590404989157", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_04_ClickOnaSignal");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/index", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/dms/dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("assessment_dictionary-54af83ba18adfb6d336571877bcd5dc1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/assessment_dictionary-54af83ba18adfb6d336571877bcd5dc1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/themes/grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("components-d9f82004362210b46ccd5edf473d8690.css", 
		"URL=http://10.100.22.24:8181/signal/assets/components-d9f82004362210b46ccd5edf473d8690.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"URL=http://10.100.22.24:8181/signal/assets/copyPasteModal-23c4a55ddeb74fe71b7e63fa6978b420.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"URL=http://10.100.22.24:8181/signal/assets/configuration-a161b5c4d73be3b8064380a1a3b2d4cc.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("popover.min-1126e05676916775b399f1693085bfcd.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/popover/popover.min-1126e05676916775b399f1693085bfcd.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("highcharts-50a25259e6a580b561454e81986e4486.js", 
		"URL=http://10.100.22.24:8181/signal/assets/highcharts-50a25259e6a580b561454e81986e4486.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/caseHistory/caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("validated_signal_charts-01d6504b57318441c2dc3734f4a4937c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/validated_signal_charts-01d6504b57318441c2dc3734f4a4937c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/bootstrap-modal-popover/bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("validated_signal_create-c9fa46c9e60d340a4a826375baafd214.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/validated_signal_create-c9fa46c9e60d340a4a826375baafd214.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t148.inf", 
		LAST);

	web_url("linked_configurations-f3f6b4c74897224e7a47327ad7d65253.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/linked_configurations-f3f6b4c74897224e7a47327ad7d65253.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t149.inf", 
		LAST);

	web_url("disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/disposition/disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t150.inf", 
		LAST);

	web_url("priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/priority/priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t151.inf", 
		LAST);

	web_url("dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/dictionaryMultiSearch-0020fa62bf78dac826cf4c30cfa199c3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t152.inf", 
		LAST);

	web_url("common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alert_utils/common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t153.inf", 
		LAST);

	web_url("dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alert_utils/dictionary-utils-ba930a6dd7a590de0557de925a255021.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t154.inf", 
		LAST);

	web_url("copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/copyPasteValues-dd8a34b0c3cea622c5bf12b4b7b0747e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t155.inf", 
		LAST);

	web_url("highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t156.inf", 
		LAST);

	web_url("heatmap-0d373b281efb3c2e426ad55cc3b804b7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/heatmap-0d373b281efb3c2e426ad55cc3b804b7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t157.inf", 
		LAST);

	web_url("pe_analysis-9b94b811858e7d8962b1cfbc74ba940a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/pe_analysis-9b94b811858e7d8962b1cfbc74ba940a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t158.inf", 
		LAST);

	web_url("dygraph-9ffc8edc13e94f06f279514e89ae9a34.css", 
		"URL=http://10.100.22.24:8181/signal/assets/dygraph-9ffc8edc13e94f06f279514e89ae9a34.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t159.inf", 
		LAST);

	web_url("review-f2586ded5503b40004f22afda42c4971.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/review-f2586ded5503b40004f22afda42c4971.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t160.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t161.inf", 
		LAST);

	web_url("heat_map-f747d34b3b0c59f40239fc243fb56a35.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/heat_map-f747d34b3b0c59f40239fc243fb56a35.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t162.inf", 
		LAST);

	web_url("signal_charts-77adc41f9e1c88551dba910b24381240.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/signal_charts-77adc41f9e1c88551dba910b24381240.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t163.inf", 
		LAST);

	web_url("meeting-f02adf384d882e47fe96ca0a0ea95414.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/meeting/meeting-f02adf384d882e47fe96ca0a0ea95414.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t164.inf", 
		LAST);

	web_url("alertComments-043f2fe715338e3aafc7b078655b345a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alertComments/alertComments-043f2fe715338e3aafc7b078655b345a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t165.inf", 
		LAST);

	web_url("dygraph.min-0e7f2a89b8c55e6f5dd35fc29aeb0795.js", 
		"URL=http://10.100.22.24:8181/signal/assets/dygraphs/dygraph.min-0e7f2a89b8c55e6f5dd35fc29aeb0795.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t166.inf", 
		LAST);

	web_url("actionManagement-f820db355f55ab6e392ac1989dd91a74.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/actionManagement-f820db355f55ab6e392ac1989dd91a74.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t167.inf", 
		LAST);

	web_url("scheduler-9cb1a5abf9dea3870bf67a0959578bb2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/scheduler-9cb1a5abf9dea3870bf67a0959578bb2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t168.inf", 
		LAST);

	web_url("signalHistoryTable-0c39c083359e752e14f0fb791c71bd84.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/signalHistory/signalHistoryTable-0c39c083359e752e14f0fb791c71bd84.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t169.inf", 
		LAST);

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("alert_review-6f0e965ada1970820b45111524a91fb0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/alert_review-6f0e965ada1970820b45111524a91fb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t171.inf", 
		LAST);

	web_url("bootstrap-timepicker.min-5450fea488d9ab3de6359ebee9ab53d2.css", 
		"URL=http://10.100.22.24:8181/signal/assets/bootstrap-timepicker/bootstrap-timepicker.min-5450fea488d9ab3de6359ebee9ab53d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t172.inf", 
		LAST);

	web_url("bootstrap-timepicker.min-c61759ebbf0b9c32d7dd4b576a02b3af.js", 
		"URL=http://10.100.22.24:8181/signal/assets/bootstrap-timepicker/bootstrap-timepicker.min-c61759ebbf0b9c32d7dd4b576a02b3af.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t173.inf", 
		LAST);

	web_url("jquery-picklist-2048c1f4a033c97a39a65f4accd34e0f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/jquery-picklist-2048c1f4a033c97a39a65f4accd34e0f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t174.inf", 
		LAST);

	web_url("document-ec4a8acb37368b50cc28951c0859bf1c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/documentManagement/document-ec4a8acb37368b50cc28951c0859bf1c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t175.inf", 
		LAST);

	web_url("jquery-picklist-7f901c3043731e208b1316334872e809.js", 
		"URL=http://10.100.22.24:8181/signal/assets/jquery/jquery-picklist-7f901c3043731e208b1316334872e809.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t176.inf", 
		LAST);

	web_url("summaryReportPreference-e2a8c6bda3f93e63f516e7078771f2ee.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/documentManagement/summaryReportPreference-e2a8c6bda3f93e63f516e7078771f2ee.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t177.inf", 
		LAST);

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("activities-c675edac8f3d769b686522882abd176e.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/activity/activities-c675edac8f3d769b686522882abd176e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t179.inf", 
		LAST);

	web_url("prev_assessment-77e06d295daa837a7b88f73dfb777681.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/validated_signal/prev_assessment-77e06d295daa837a7b88f73dfb777681.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t180.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/dictionaries-a389940428e37a7d9156a6bb1e25e277.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t181.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t182.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t183.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t184.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getDmsFolders", 
		"URL=http://10.100.22.24:8181/signal/controlPanel/getDmsFolders?folder=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"45a41868-1b22-40c7-a652-a073b45ee8c6");

	web_custom_request("8479", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/fetchLinkedConfiguration/8479", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010839", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("singleCaseAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/singleCaseAlertList?id=8479&_=1590405010841", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggregateCaseAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/aggregateCaseAlertList?id=8479&_=1590405010840", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("literatureAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/literatureAlertList?id=8479&_=1590405010843", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("peAnalysis", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/peAnalysis?id=8479&isTopic=false&_=1590405010844", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t194.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("adHocAlertList", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/adHocAlertList?id=8479&_=1590405010842", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("listByAlert", 
		"URL=http://10.100.22.24:8181/signal/action/listByAlert?alertId=8479&appType=Signal%20Management&_=1590405010845", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t196.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKQCQm8IIY3ddx11BILDTbbtxcSABoAIgASCw29hYMPEgAaACIAEgsNkN-EFxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKQCQm8IIY3ddx11BILDTbbtxcSABoAIgASCw29hYMPEgAaACIAEgsNkN-EFxIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsNQA5ywRIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsNnPXKjBIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsN4xl_zxIAGgAiABILDb2Fgw8SABoAIgASCw1xI55IEgAaACIAEgsNMhMRfhIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEg"
		"sNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw29hYMPEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNXKG1GhIAGgAiABILDRuFA5ESABoAIgASCw2RYZVOEgAaACIAEgsNXKG1GhIAGgAiABILDRuFA5ESABoAIgASCw2RYZVOEgAaACIAEgsNvYWDDxIAGgAiABILDb2Fgw8SABoAIgAS"
		"Cw19TXOGEgAaACIAEgsNV17dKBIAGgAiABILDR3Pq64SABoAIgASCw2foamWEgAaACIAEgsNkWGVThIAGgAiABILDdzOiw4SABoAIgASCw3czosOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgASCw3czosOEgAaACIAEgsNOOtjyxIAGgAiABILDSWPGeUSABoAIgASCw0ljxnlEgAaACIAEgsNB8z97RIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNP0nG1RIAGgAiABILDVVTIUkSABoAIgASCw0_0g94EgAaACIAEgsNwAIaShIAGgAiABILDb2Fgw8SABoAIgASCw3Y76NzEgAaACIAEgsNnbmFfhIAGgAiABILDQbtu_8SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw29hYMPEgAaACIAEgsNkWGVThIAGgAiAB"
		"ILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDTFlXuASABoAIgASCw1d6mHdEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t197.inf", 
		LAST);

	web_url("list_2", 
		"URL=http://10.100.22.24:8181/signal/meeting/list?alertId=8479&appType=Signal%20Management&_=1590405010846", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchAttachments", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/fetchAttachments?alertId=8479&_=1590405010847", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/479/orsn0bl6/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("polymer.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("8479_2", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/8479?_=1590405010849", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("listBySignal", 
		"URL=http://10.100.22.24:8181/signal/alertDocument/listBySignal?signalId=8479&_=1590405010848", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t203.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("polymer-mini.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL=http://10.100.22.24:8181/signal/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t206.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010850", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t207.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t208.inf", 
		LAST);

	lr_end_transaction("Signalsummary_04_ClickOnaSignal",LR_AUTO);

	lr_think_time(3);

	web_url("7435_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010851", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_05_UpdateComments");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"45a41868-1b22-40c7-a652-a073b45ee8c6");

	web_custom_request("update", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PARACETAMOL+(8085+SOLUTION+FOR+INJECTION+STUDY)+Tablet%22%2C%22id%22%3A%22103620%22%7D%5D%2C%224%22%3A%5B%5D%7D&eventSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%7B%22name%22%3A%22Typhoid+fever%22%2C%22id%22%3A%2210045275%22%7D%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%5D%7D&name=PerfSignal1&topic=&detectedBy=Company&detectedDate=21-May-2020&initialDataSource=Data+"
		"mining+-+FAERS+database&signalSource=Data+mining+-+FAERS+database&signalEvaluationMethod=%5B%5D&topicCategoryList=%5B%5D&description=Performance+Testing&reasonForEvaluation=&priority=6637&assignedToValue=User_7435&aggReportStartDate=&aggReportEndDate=&signalActionTaken=%5B%5D&genericComment=&haSignalStatus=&haDateClosed=&commentSignalStatus=&signalId=8479&_csrf=45a41868-1b22-40c7-a652-a073b45ee8c6", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010852", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_05_UpdateComments",LR_AUTO);

	lr_think_time(3);

	web_url("7435_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010853", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_06_NavigateAssessmentTab");

	web_add_header("X-CSRF-TOKEN", 
		"45a41868-1b22-40c7-a652-a073b45ee8c6");

	web_custom_request("graphReport", 
		"URL=http://10.100.22.24:8181/signal/validatedSignal/graphReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=dataSource=pva&dateRange=LAST_1_YEAR&productSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%7B%22name%22%3A%22PARACETAMOL+(8085+SOLUTION+FOR+INJECTION+STUDY)+Tablet%22%2C%22id%22%3A%22103620%22%7D%5D%2C%224%22%3A%5B%5D%7D&eventSelection=%7B%221%22%3A%5B%5D%2C%222%22%3A%5B%5D%2C%223%22%3A%5B%5D%2C%224%22%3A%5B%7B%22name%22%3A%22Typhoid+fever%22%2C%22id%22%3A%2210045275%22%7D%5D%2C%225%22%3A%5B%5D%2C%226%22%3A%5B%5D%7D&validatedSignal.id=8479", 
		LAST);

	lr_end_transaction("Signalsummary_06_NavigateAssessmentTab",LR_AUTO);

	lr_think_time(3);

	web_url("7435_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010854", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010855", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_07_NavigateActionsandWorkflow");

	web_url("7435_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010856", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_07_NavigateActionsandWorkflow",LR_AUTO);

	lr_think_time(3);

	web_url("7435_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010857", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t217.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_08_NewAction");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("searchUserGroupList", 
		"URL=http://10.100.22.24:8181/signal/user/searchUserGroupList?max=10&lang=en", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKdCQnA6jqTVE6UGxILDTbbtxcSABoAIgASCw29hYMPEgAaACIAEgsNkN-EFxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKdCQnA6jqTVE6UGxILDTbbtxcSABoAIgASCw29hYMPEgAaACIAEgsNkN-EFxIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsNQA5ywRIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsNnPXKjBIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsN4xl_zxIAGgAiABILDb2Fgw8SABoAIgASCw1xI55IEgAaACIAEgsNMhMRfhIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEg"
		"sNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw29hYMPEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNXKG1GhIAGgAiABILDRuFA5ESABoAIgASCw2RYZVOEgAaACIAEgsNXKG1GhIAGgAiABILDRuFA5ESABoAIgASCw2RYZVOEgAaACIAEgsNvYWDDxIAGgAiABILDb2Fgw8SABoAIgAS"
		"Cw19TXOGEgAaACIAEgsNV17dKBIAGgAiABILDR3Pq64SABoAIgASCw2foamWEgAaACIAEgsNkWGVThIAGgAiABILDdzOiw4SABoAIgASCw3czosOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgASCw3czosOEgAaACIAEgsNOOtjyxIAGgAiABILDSWPGeUSABoAIgASCw0ljxnlEgAaACIAEgsNB8z97RIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNP0nG1RIAGgAiABILDVVTIUkSABoAIgASCw0_0g94EgAaACIAEgsNwAIaShIAGgAiABILDb2Fgw8SABoAIgASCw3Y76NzEgAaACIAEgsNnbmFfhIAGgAiABILDQbtu_8SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw29hYMPEgAaACIAEgsNkWGVThIAGgAiAB"
		"ILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDTFlXuASABoAIgASCw1d6mHdEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsNvYWDDxIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t219.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010858", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t220.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_08_NewAction",LR_AUTO);

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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKQCQm8IIY3ddx11BILDTbbtxcSABoAIgASCw29hYMPEgAaACIAEgsNkN-EFxIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsNQA5ywRIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsNnPXKjBIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsN4xl_zxIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKQCQm8IIY3ddx11BILDTbbtxcSABoAIgASCw29hYMPEgAaACIAEgsNkN-EFxIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsNQA5ywRIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsNnPXKjBIAGgAiABILDb2Fgw8SABoAIgASCw3VyHsbEgAaACIAEgsN4xl_zxIAGgAiABILDb2Fgw8SABoAIgASCw1xI55IEgAaACIAEgsNMhMRfhIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEg"
		"sNlJCS-hIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw29hYMPEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNXKG1GhIAGgAiABILDRuFA5ESABoAIgASCw2RYZVOEgAaACIAEgsNXKG1GhIAGgAiABILDRuFA5ESABoAIgASCw2RYZVOEgAaACIAEgsNvYWDDxIAGgAiABILDb2Fgw8SABoAIgASCw19TXOGEgAaACIAEgsNV17dKBIAGgAiABILDR3Pq64SABoAIgASCw2foamWEgAaACIAEgsNkWGVThIAGgAiABILDdzOiw4SABoAIgASCw3czosOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgAS"
		"Cw3czosOEgAaACIAEgsNOOtjyxIAGgAiABILDSWPGeUSABoAIgASCw0ljxnlEgAaACIAEgsNB8z97RIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNP0nG1RIAGgAiABILDVVTIUkSABoAIgASCw0_0g94EgAaACIAEgsNwAIaShIAGgAiABILDb2Fgw8SABoAIgASCw3Y76NzEgAaACIAEgsNnbmFfhIAGgAiABILDQbtu_8SABoAIgASCw0G7bv_EgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw29hYMPEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiAB"
		"ILDTFlXuASABoAIgASCw1d6mHdEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t221.inf", 
		LAST);

	web_url("7435_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010859", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t222.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_09_CreateAction");

	web_add_header("X-CSRF-TOKEN", 
		"45a41868-1b22-40c7-a652-a073b45ee8c6");

	web_submit_data("save", 
		"Action=http://10.100.22.24:8181/signal/action/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t223.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=config", "Value=7150", ENDITEM, 
		"Name=type", "Value=6766", ENDITEM, 
		"Name=assignedToValue", "Value=UserGroup_6578", ENDITEM, 
		"Name=dueDate", "Value=27-May-2020", ENDITEM, 
		"Name=details", "Value=Test", ENDITEM, 
		"Name=comments", "Value=Test", ENDITEM, 
		"Name=alertId", "Value=8479", ENDITEM, 
		"Name=appType", "Value=Signal Management", ENDITEM, 
		"Name=exeConfigId", "Value=", ENDITEM, 
		"Name=meetingId", "Value=", ENDITEM, 
		"Name=actionStatus", "Value=InProcess", ENDITEM, 
		"Name=actionId", "Value=", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("listByAlert_2", 
		"URL=http://10.100.22.24:8181/signal/action/listByAlert?alertId=8479&appType=Signal%20Management&_=1590405010860", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t224.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("list_3", 
		"URL=http://10.100.22.24:8181/signal/meeting/list?alertId=8479&appType=Signal%20Management&_=1590405010864", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t225.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("8479_3", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/8479?_=1590405010863", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t226.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010865", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_09_CreateAction",LR_AUTO);

	lr_think_time(3);

	web_url("7435_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010866", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_10_DocumentManagement");

	lr_end_transaction("Signalsummary_10_DocumentManagement",LR_AUTO);

	lr_think_time(3);

	web_url("7435_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010867", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010868", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Signalsummary_11_NavigateActivityLogTab");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("8479_4", 
		"URL=http://10.100.22.24:8181/signal/activity/activitiesBySignal/8479?_=1590405010869", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010870", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t232.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_11_NavigateActivityLogTab",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Signalsummary_11_Logout");

	web_url("7435_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590405010871", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t233.inf", 
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
		"Referer=http://10.100.22.24:8181/signal/validatedSignal/details?id=8479", 
		"Snapshot=t234.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Signalsummary_11_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}