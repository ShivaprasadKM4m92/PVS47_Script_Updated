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
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

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
		"59d75cd83886d5d4c8cf014bbd38ae855859f1e5");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=81", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL=http://10.100.22.24:8181/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t4.inf", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc", 
		LAST);

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept", 
		"*/*");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL=http://10.100.22.24:8181/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_concurrent_start(NULL);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t9.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/cast-edu-messaging+https://www.googleapis.com/auth/clouddevices+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/plus.peopleapi.readwrite+https://www.googleapis.com/auth/userinfo.email&client_id="
		"919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&device_id=e06c8409-4e65-402e-823f-f31b85a1565a&device_type=chrome&lib_ver=extension", 
		LAST);

	web_add_auto_header("User-Agent", 
		"Chrome WIN 81.0.4044.138 (8c6c7ba89cc9453625af54f11fd83179e23450fa-refs/branch-heads/4044@{#999}) channel(stable)");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Content-Encoding", 
		"gzip");

	web_add_header("Pragma", 
		"no-cache");

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

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t12.inf", 
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
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_start_transaction("QuantitativeReview_01_OpenApplication");

	lr_end_transaction("QuantitativeReview_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

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

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-81.0.4044.138");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:1836520143&cup2hreq=45cac270f8c815b30a1f88c476ea0602ceb653368d4d88763af9aa18cad8139a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{af1a534b-f7a3-4d7f-8bb2-a8406a8dc507}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{5dd3405d-3bd8-421b-8957-e5f286f31157}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{54db9e2b-f61c-4bac-a32d-f44b6bb59930}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{83783701-cbaa-41cf-ae38-06dd3ebc1c04}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{26d9c213-cad9-4e41-a24c-7d8ef541fdfc}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.693458e8d61b08ad38d9dceec8d6204a74cfc0952a39dca6d1e6d4828a5cbcf4\"}]},\"ping\":{\"ping_freshness\":\"{65471581-633c-47ff-bf95-63dc0c0f88e2}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"1.11.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\""
		":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{6cd304ac-7a90-4e40-9cd3-de3072e066cb}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{4fd4f45f-6089-40f3-b4bb-5faa0fd537d3}\",\"rd\":4895},\"updatecheck\":{},\""
		"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.8220.319.1.2\"}]},\"ping\":{\"ping_freshness\":\"{641c0458-63ae-43d4-9633-36b9ea91e351}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"8220.319.1.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\","
		"\"version\":\"10.0.17763.1217\"},\"prodversion\":\"81.0.4044.138\",\"protocol\":\"3.1\",\"requestid\":\"{d62554eb-2d5d-4307-b0f4-c2a37c01dde9}\",\"sessionid\":\"{15ff319d-bd3f-4dce-8cd4-6e627d7aad1b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"81.0.4044.138\"}}", 
		LAST);

	lr_start_transaction("QuantitativeReview_02_Login");

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
		"Name=_csrf", "Value=9971c7f0-5f8d-4ce1-a224-efa55240c944", ENDITEM, 
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
		"text/css,*/*;q=0.1");

	web_url("pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL=http://10.100.22.24:8181/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
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

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
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
		"text/css,*/*;q=0.1");

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t31.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t32.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t34.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t35.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t36.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t37.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
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

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t41.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t42.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t43.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t44.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t48.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t50.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
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

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t54.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t55.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t56.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t57.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t58.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t59.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t60.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t61.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL=http://10.100.22.24:8181/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL=http://10.100.22.24:8181/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t64.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t74.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t75.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t78.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t79.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t80.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t81.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t82.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t83.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t84.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t86.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t87.inf", 
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
		"Snapshot=t85.inf", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t89.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(NULL);

	web_url("dashboard_widget.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t90.inf", 
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
		"Snapshot=t91.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1590648660226", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1590648660225", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1590648660224", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1590648660227", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590648660229", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590648660230", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1590648660228", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCawvb5cmFgDSEgsNnOy7GRIAGgAiABILDb2Fgw8SABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCawvb5cmFgDSEgsNnOy7GRIAGgAiABILDb2Fgw8SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t99.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"9971c7f0-5f8d-4ce1-a224-efa55240c944");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Apr-2020", ENDITEM, 
		"Name=end", "Value=08-Jun-2020", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648660231", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1590648660232", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

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
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,khaoiebndkojlmppeemjhbpbandiljpe,aemomkdncapdnfajjbbcbdebjljbpmpj,giekcmmlnklenlaomppkphknjmnnpneh,ehgidpndbllacpjalkiimkbadgjfnnmc,copjbmjbojbakpaedmpkhmiplmmehfck,jflookgnkcckhobaglndicnbbgbonegd,bklopemakmnopmghhmccadeonafabnal,gkmgaooipdjhmangpemjhigmamcehddo,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-81.0.4044.138");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:3329729806&cup2hreq=443693af481757ad7553b02262d30c77b7e69bf78784288a113b09bab90412fc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{b3f78c7a-0645-41f2-a317-8ae1191e222d}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{85097306-849c-4816-b435-56f790335033}\",\"rd\":4895},\"updatecheck\":{},\""
		"version\":\"4.10.1610.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{5d94cba0-9341-4b2c-a98b-1fd8c0fb3217}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.af8d24f263b24fb209f14e7a478d44218c2192a904ddb43fac7824855383c83c\"}]},\"ping\":{\"ping_freshness\":\"{6fe8a9e0-b0c2-452f-b776-a5340be92d34}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"5898\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{18b9542e-9333-47a0-a430-fd86df6fcebc}\",\"rd\":4895},\""
		"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{7f661f5c-9adf-48bb-9bb5-69624106f8ce}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":"
		"\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{9eadc05e-c7ef-417c-9d6a-2bd73db1261a}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{bec8faf1-6a93-44b0-a785-51dcc589ad4b}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{599c39e7-e78c-4ad7-93dd-61775cb6ef0e}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{07fb3c52-3158-4623-a7ab-0d4f22c15c4f}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{4289fa52-50d3-4af3-bf8b-84567cdc3f1d}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GGLS\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\""
		"{9692d535-3472-4149-8592-94363db0e39c}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.433c30f3f9ef8b83ccf42d31d54a0bae7845555dbc61b8bae2bff354157bb88d\"}]},\"ping\":{\"ping_freshness\":\"{25df40e7-9caf-494f-8423-96e0d5c84534}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"1219\"},{\"appid\":"
		"\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{874f3ebe-b6ea-443f-9b5a-dabcc6f538a2}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\""
		"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a94e96f52af7838519aac1ae4ef68686817be9661165e20964f81c2b5bec7740\"}]},\"ping\":{\"ping_freshness\":\"{03246bdd-63fa-446e-8426-0a0c091e41de}\",\"rd\":4895},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.236.200\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\""
		":\"1.59f80dfc20335b1b6c4562bf68e07f7eeb1ac8b6f5d3099beefa6e130a1ab368\"}]},\"ping\":{\"ping_freshness\":\"{31e7452e-a552-48f4-b70d-1a302e7d3b51}\",\"rd\":4895},\"updatecheck\":{},\"version\":\"2020.5.17.1142\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"81.0.4044.138\",\"protocol\":\"3.1\",\"requestid\":\""
		"{0aaa8c3c-e6d0-4547-9616-d074cd0562f9}\",\"sessionid\":\"{98437abd-3250-46a8-aad4-cde61b278264}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"81.0.4044.138\"}}", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t105.inf", 
		LAST);

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1590648660233", 
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

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket", 
		"URL=http://10.100.22.24:8181/signal/stomp/515/nhlfwg5l/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t109.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1590648660234", 
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

	web_concurrent_end(NULL);

	lr_end_transaction("QuantitativeReview_02_Login",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648660235", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648660236", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeReview_03_NavigateTriggeredAlertsQuantitativeReview");

	web_add_header("X-CSRF-TOKEN", 
		"9971c7f0-5f8d-4ce1-a224-efa55240c944");

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

	web_url("review", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
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
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t118.inf", 
		LAST);

	web_url("deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("simple_case_alert_review-00e9c3583729a51ba495c99fa9d8b592.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/simple_case_alert_review-00e9c3583729a51ba495c99fa9d8b592.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t122.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("priorities", 
		"URL=http://10.100.22.24:8181/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState", 
		"URL=http://10.100.22.24:8181/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t124.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCTYpmtasdEcoEgsNvYWDDxIAGgAiABoAEjIJ0ZKnMPfGhMQSCw3zXyKDEgAaACIAEgsNvYWDDxIAGgAiABILDXDj810SABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCTYpmtasdEcoEgsNvYWDDxIAGgAiABoAEjIJ0ZKnMPfGhMQSCw3zXyKDEgAaACIAEgsNvYWDDxIAGgAiABILDXDj810SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t125.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("listConfig", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/listConfig?adhocRun=false&draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=productSelection&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=pecCount&"
		"columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=closedPecCount&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=alertPriority&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true"
		"&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=dateRagne&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=9&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1590648709519", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("7435_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648709520", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/302/tnrva5j1/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QuantitativeReview_03_NavigateTriggeredAlertsQuantitativeReview",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648709521", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648709522", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeReview_04_ClickOnAlertName");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t134.inf", 
		LAST);

	web_url("bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/bootstrap-modal-popover/bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"URL=http://10.100.22.24:8181/signal/assets/query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"URL=http://10.100.22.24:8181/signal/assets/colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("fixedColumns-18e4b58b095bead044c38f2fbb3fd070.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/fixedColumns-18e4b58b095bead044c38f2fbb3fd070.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/priority/priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alert_utils/common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"URL=http://10.100.22.24:8181/signal/assets/backbone/underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("productEventHistoryTable-e9d8010929d435ee34f500c4b9421495.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/productEventHistory/productEventHistoryTable-e9d8010929d435ee34f500c4b9421495.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("backbone-fb26971962c1315514c8ede192bc0252.js", 
		"URL=http://10.100.22.24:8181/signal/assets/backbone/backbone-fb26971962c1315514c8ede192bc0252.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("advancedFilterQueryBuilder-6a50d7065df84d243f869aadaf8c60eb.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/advancedFilter/advancedFilterQueryBuilder-6a50d7065df84d243f869aadaf8c60eb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t148.inf", 
		LAST);

	web_url("datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t149.inf", 
		LAST);

	web_url("disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/disposition/disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t150.inf", 
		LAST);

	web_url("caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/caseHistory/caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t151.inf", 
		LAST);

	web_url("to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/query/to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t152.inf", 
		LAST);

	web_url("agg_case_alert_details-e09516ed84b4974749cf027718b23fa6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/agg_case_alert_details-e09516ed84b4974749cf027718b23fa6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t153.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchSubGroupsMap", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/fetchSubGroupsMap?dataSource=pva", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t154.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("commonTagDetails", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t155.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6564&_=1590648741142", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t156.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIyCazxM2pM5g0OEgsNL0aOchIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAGgAScwkpzzYJmAuQGhILDX0QCekSABoAIgASCw1zOzqZEgAaACIAEgsN4b08GBIAGgAiABILDUSnGXoSABoAIgASCw2RyfPpEgAaACIAEgsN7SM2XBIAGgAiABILDTd7KU0SABoAIgASCw0R2hn9EgAaACIA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIyCazxM2pM5g0OEgsNL0aOchIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAGgAScwkpzzYJmAuQGhILDX0QCekSABoAIgASCw1zOzqZEgAaACIAEgsN4b08GBIAGgAiABILDUSnGXoSABoAIgASCw2RyfPpEgAaACIAEgsN7SM2XBIAGgAiABILDTd7KU0SABoAIgASCw0R2hn9EgAaACIAGgAShAMJlyghsQvfFkESCw24IZMMEgAaACIAEgsNlJCS-hIAGgAiABILDeJlGlASABoAIgASCw29hYMPEgAaACIAEgsN3SU85xIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEgsNkT4dcBIAGgAiABILDd7dDsASABoAIgASCw26djN3EgAaACIAEgsNtJ6AvhIAGgAiABILDYkMBT8SABoAIgASCw2K8dIVEgAaACIAEg"
		"sN3SU85xIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEgsNkT4dcBIAGgAiABILDd7dDsASABoAIgASCw26djN3EgAaACIAEgsNtJ6AvhIAGgAiABILDYkMBT8SABoAIgASCw2K8dIVEgAaACIAEgsN1ch7GxIAGgAiABILDZ25hX4SABoAIgASCw1Fvy1IEgAaACIAEgsNBu27_xIAGgAiABILDbLkoa8SABoAIgASCw2z64X_EgAaACIAEgsNBu27_xIAGgAiABoAEhgJHVWUl6LMz9YSCw1Yc_b2EgAaACIAGgAScwmFScjjMmkP_xILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDaDq5EQSABoAIgASCw0yEtgJEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t157.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741143", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/999/jz9yidbh/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t160.inf", 
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
		"Snapshot=t161.inf", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("X-CSRF-TOKEN", 
		"9971c7f0-5f8d-4ce1-a224-efa55240c944");

	web_submit_data("61", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/listByExecutedConfig/61?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t162.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=1", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=flags", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=priority", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=actions", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=productName", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=soc", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=true", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=pt", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=false", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=impEvents", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listed", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=newCount", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=newSponCount", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=newSeriousCount", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=newFatalCount", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=newStudyCount", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=freqPriority", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=trendType", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=eb05", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=disposition", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=assignedTo", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=positiveRechallenge", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=positiveDechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=ebgm", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=related", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=pregenency", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=newPediatricCount", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=newInteractingCount", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=exe0newSponCount", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=exe0newSeriousCount", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=exe0newFatalCount", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=exe0newStudyCount", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=exe0ebgm", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=exe0eb05", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=exe1newSponCount", ENDITEM, 
		"Name=columns[37][name]", "Value=", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=exe1newSeriousCount", ENDITEM, 
		"Name=columns[38][name]", "Value=", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=true", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=exe1newFatalCount", ENDITEM, 
		"Name=columns[39][name]", "Value=", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=exe1newStudyCount", ENDITEM, 
		"Name=columns[40][name]", "Value=", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=exe1ebgm", ENDITEM, 
		"Name=columns[41][name]", "Value=", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=true", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=exe1eb05", ENDITEM, 
		"Name=columns[42][name]", "Value=", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=exe2newSponCount", ENDITEM, 
		"Name=columns[43][name]", "Value=", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=exe2newSeriousCount", ENDITEM, 
		"Name=columns[44][name]", "Value=", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=exe2newFatalCount", ENDITEM, 
		"Name=columns[45][name]", "Value=", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=exe2newStudyCount", ENDITEM, 
		"Name=columns[46][name]", "Value=", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=exe2ebgm", ENDITEM, 
		"Name=columns[47][name]", "Value=", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=exe2eb05", ENDITEM, 
		"Name=columns[48][name]", "Value=", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("priority.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/priority.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t163.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("action_drop_down.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/action_drop_down.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t164.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("disposition.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/disposition.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t165.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("QuantitativeReview_04_ClickOnAlertName",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741144", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741145", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t167.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeReview_05_ClickOnCaseSeries");

	web_url("7435_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741146", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t168.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("caseSeriesDetails", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/caseSeriesDetails?aggExecutionId=61&aggAlertId=580&aggCountType=NEW_COUNT&productId=100077&ptCode=10037419&type=NEW&typeFlag=CUMM_FLAG", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t169.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t170.inf", 
		LAST);

	web_url("highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t171.inf", 
		LAST);

	web_url("similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/similarCases/similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t172.inf", 
		LAST);

	web_url("caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/caseHistory/caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t173.inf", 
		LAST);

	web_url("highcharts-de65192df8733b7a60482497a875df4c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-de65192df8733b7a60482497a875df4c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t174.inf", 
		LAST);

	web_url("single_case_alert_details-50076305d9a840e6a3de6bf721a5516a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/single_case_alert_details-50076305d9a840e6a3de6bf721a5516a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t175.inf", 
		LAST);

	web_url("grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/themes/grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t176.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_2", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_2", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6560&_=1590648773285", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t178.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIyCazxM2pM5g0OEgsNL0aOchIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAGgAScwkpzzYJmAuQGhILDX0QCekSABoAIgASCw1zOzqZEgAaACIAEgsN4b08GBIAGgAiABILDUSnGXoSABoAIgASCw2RyfPpEgAaACIAEgsN7SM2XBIAGgAiABILDTd7KU0SABoAIgASCw0R2hn9EgAaACIA_2", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIyCazxM2pM5g0OEgsNL0aOchIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAGgAScwkpzzYJmAuQGhILDX0QCekSABoAIgASCw1zOzqZEgAaACIAEgsN4b08GBIAGgAiABILDUSnGXoSABoAIgASCw2RyfPpEgAaACIAEgsN7SM2XBIAGgAiABILDTd7KU0SABoAIgASCw0R2hn9EgAaACIAGgASPwkHu8d4yEOnIBILDd4iJwcSABoAIgASCw2RYZVOEgAaACIAEgsNv66n_xIAGgAiABILDRh5I9gSABoAIgAaABLDAgmNE2qIuGAYjRILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAiABILDb2Fgw8SABoAIgASCw3DCiiOEgAaACIAEgsNKUNv1RIAGgAiABILDdWmrRsSABoAIgASCw367bLeEgAaACIAEg"
		"sN6-c4SBIAGgAiABILDZWijowSABoAIgASCw3DCiiOEgAaACIAEgsNKUNv1RIAGgAiABILDdWmrRsSABoAIgASCw367bLeEgAaACIAEgsN6-c4SBIAGgAiABILDZWijowSABoAIgASCw1w4_NdEgAaACIAEgsN1ch7GxIAGgAiABILDUW_LUgSABoAIgASCw3RNB3xEgAaACIAEgsNBu27_xIAGgAiABILDbLkoa8SABoAIgASCw2z64X_EgAaACIAEgsNBu27_xIAGgAiABoAEhgJHVWUl6LMz9YSCw1Yc_b2EgAaACIAGgAScwmFScjjMmkP_xILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDaDq5EQSABoAIgASCw0yEtgJEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t179.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t180.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"9971c7f0-5f8d-4ce1-a224-efa55240c944");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("63", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/63?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]&isFaers=false", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=1", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=priority", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=actions", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=false", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=productName", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=pt", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=listedness", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=outcome", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=false", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=disposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=false", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=false", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=conComit", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=serious", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=country", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=age", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=gender", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=death", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=caseType", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=submitter", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("7435_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648773286", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t182.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABLQAgktM5WfW0vBjxILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABLQAgktM5WfW0vBjxILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAiABILDb2Fgw8SABoAIgASCw3DCiiOEgAaACIAEgsNKUNv1RIAGgAiABILDdWmrRsSABoAIgASCw367bLeEgAaACIAEgsN6-c4SBIAGgAiABILDZWijowSABoAIgASCw3DCiiOEgAaACIAEgsNKUNv1RIAGgAiABILDdWmrRsSABoAIgASCw367bLeEgAaACIAEgsN6-c4SBIAGgAiABILDZWijowSABoAIgASCw2UkJL6EgAaACIAEg"
		"sNcOPzXRIAGgAiABILDdXIexsSABoAIgASCw1Fvy1IEgAaACIAEgsN0TQd8RIAGgAiABILDQbtu_8SABoAIgASCw2y5KGvEgAaACIAEgsNs-uF_xIAGgAiABILDQbtu_8SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t183.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/332/_esk9bgw/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QuantitativeReview_05_ClickOnCaseSeries",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648773287", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=63&isFaers=&isCaseSeries=true", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741147", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741148", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741149", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeReview_06_SaveCaseSeries");

	web_url("7435_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741150", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t189.inf", 
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
		"Ch0KDGdvb2dsZWNocm9tZRINODEuMC40MDQ0LjEzOBopCAUQARobCg0IBRAGGAEiAzAwMTABEPfSCBoCGAdwMHddIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCAuAcaAhgHJKyQFyIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ-b4HGgIYB8D6J0wiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEOa9BxoCGAfkR4u5IgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEKIaGgIYB-1frLQiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQyysaAhgHatT4kiIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAeqCEgXIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAbGgIYB8zcBVwiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEPEIGgIYByyj0ckiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEJp0GgIYB4RSSI0iBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEIzXAxoCGAenn4N9IgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCtAxoCGAcJjm9uIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t190.inf", 
		LAST);

	lr_end_transaction("QuantitativeReview_06_SaveCaseSeries",LR_AUTO);

	lr_think_time(3);

	web_url("7435_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590648741151", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("discardTempChanges", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6564", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/dms/dmsConfiguration-dd126e153d823fef612ba29b3824b193.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t194.inf", 
		LAST);

	web_url("template-71bb2f4a5d7b0f5d9ca4bad0d92ac989.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/template/template-71bb2f4a5d7b0f5d9ca4bad0d92ac989.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t195.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=http://10.100.22.24:8181/signal/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("getDmsFolders", 
		"URL=http://10.100.22.24:8181/signal/controlPanel/getDmsFolders?folder=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("getGeneratedReports", 
		"URL=http://10.100.22.24:8181/signal/template/getGeneratedReports?configId=61&alertId=580&_=1590649085944", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t199.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("templates", 
		"URL=http://10.100.22.24:8181/signal/api/templates?_=1590649085945", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("7435_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649085943", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/628/98k0696f/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t202.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_Ccf1na-_MxWkEgsNxZJPCBIAGgAiABILDb2Fgw8SABoAIgASCw2DdMjbEgAaACIAEgsNvYWDDxIAGgAiABoA", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRI_Ccf1na-_MxWkEgsNxZJPCBIAGgAiABILDb2Fgw8SABoAIgASCw2DdMjbEgAaACIAEgsNvYWDDxIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t203.inf", 
		LAST);

	lr_start_transaction("QuantitativeReview_07_ClickonReport");

	lr_end_transaction("QuantitativeReview_07_ClickonReport",LR_AUTO);

	lr_think_time(3);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649085946", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/template/index?configId=61&type=NEW&alertId=580&typeFlag=CUMM_FLAG", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("ClickBack");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_2", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/review", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchSubGroupsMap_2", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/fetchSubGroupsMap?dataSource=pva", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("commonTagDetails_3", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_3", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6564&_=1590649136636", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649136637", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/184/7d8vsxek/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"9971c7f0-5f8d-4ce1-a224-efa55240c944");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("61_2", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/listByExecutedConfig/61?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=1", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=flags", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=priority", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=actions", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=productName", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=soc", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=true", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=pt", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=false", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=impEvents", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listed", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=newCount", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=newSponCount", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=newSeriousCount", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=newFatalCount", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=newStudyCount", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=freqPriority", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=trendType", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=eb05", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=disposition", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=assignedTo", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=positiveRechallenge", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=positiveDechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=ebgm", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=related", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=pregenency", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=newPediatricCount", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=newInteractingCount", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=exe0newSponCount", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=exe0newSeriousCount", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=exe0newFatalCount", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=exe0newStudyCount", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=exe0ebgm", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=exe0eb05", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=exe1newSponCount", ENDITEM, 
		"Name=columns[37][name]", "Value=", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=exe1newSeriousCount", ENDITEM, 
		"Name=columns[38][name]", "Value=", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=true", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=exe1newFatalCount", ENDITEM, 
		"Name=columns[39][name]", "Value=", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=exe1newStudyCount", ENDITEM, 
		"Name=columns[40][name]", "Value=", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=exe1ebgm", ENDITEM, 
		"Name=columns[41][name]", "Value=", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=true", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=exe1eb05", ENDITEM, 
		"Name=columns[42][name]", "Value=", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=exe2newSponCount", ENDITEM, 
		"Name=columns[43][name]", "Value=", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=exe2newSeriousCount", ENDITEM, 
		"Name=columns[44][name]", "Value=", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=exe2newFatalCount", ENDITEM, 
		"Name=columns[45][name]", "Value=", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=exe2newStudyCount", ENDITEM, 
		"Name=columns[46][name]", "Value=", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=exe2ebgm", ENDITEM, 
		"Name=columns[47][name]", "Value=", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=exe2eb05", ENDITEM, 
		"Name=columns[48][name]", "Value=", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649136638", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("ClickBack",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("QuantitativeReview_11_Export50Cases_Excel");

	web_url("discardTempChanges_2", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6564", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("61_3", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/exportReport/61?outputFormat=XLSX&alertName=aggregateCaseAlert&callingScreen=review&length=-1&start=0&adhocRun=false&isFilterRequest=false&filters=[]&selectedCases=580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530,580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559"
		",560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530&viewId=6564", 
		"Resource=1", 
		"RecContentType=application/vnd.openxmlformats-officedocument.spreadsheetml.sheet", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t215.inf", 
		LAST);

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

	web_custom_request("download", 
		"URL=https://sb-ssl.google.com/safebrowsing/clientreport/download?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nÚhttp://10.100.22.24:8181/signal/aggregateCaseAlert/exportReport/61?outputFormat=XLSX&alertName=aggregateCaseAlert&callingScreen=review&length=-1&start=0&adhocRun=false&isFilterRequest=false&filters=[]&selectedCases=580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530,580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,"
		"561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530&viewId=6564\"\n 9ﬁP_ü=·∂Åxg ûﬁ;@!£'Ü3nDAR‘qâ®«g\"`\n\\http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61#\"‚\nÚhttp://10.100.22.24:8181/signal/aggregateCaseAlert/exportReport/61?outputFormat=XLSX&alertName=aggregateCaseAlert&callingScreen=review&length=-1&start=0&adhocRun=false&isFilterRequest=false&filters=[]&selectedCases="
		"580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530,580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530&viewId=6564", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649136639", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t217.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QuantitativeReview_11_Export50Cases_Excel",LR_AUTO);

	lr_think_time(3);

	web_url("7435_23", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649136640", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeReview_11_Export50Cases_PDF");

	web_url("discardTempChanges_3", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6564", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t219.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("61_4", 
		"URL=http://10.100.22.24:8181/signal/aggregateCaseAlert/exportReport/61?outputFormat=PDF&alertName=aggregateCaseAlert&callingScreen=review&length=-1&start=0&adhocRun=false&isFilterRequest=false&filters=[]&selectedCases=580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530,580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,"
		"560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530&viewId=6564", 
		"Resource=1", 
		"RecContentType=application/pdf", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t220.inf", 
		LAST);

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

	web_custom_request("download_2", 
		"URL=https://sb-ssl.google.com/safebrowsing/clientreport/download?key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t221.inf", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nÒhttp://10.100.22.24:8181/signal/aggregateCaseAlert/exportReport/61?outputFormat=PDF&alertName=aggregateCaseAlert&callingScreen=review&length=-1&start=0&adhocRun=false&isFilterRequest=false&filters=[]&selectedCases=580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530,580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561"
		",559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530&viewId=6564\"\n ñI∞.`=“Êu… 6ëßá†–Q≤Uﬁubµ'®5¿ô«EÜ≥\"`\n\\http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61#\"·\nÒhttp://10.100.22.24:8181/signal/aggregateCaseAlert/exportReport/61?outputFormat=PDF&alertName=aggregateCaseAlert&callingScreen=review&length=-1&start=0&adhocRun=false&isFilterRequest=false&filters=[]&selectedCases=580,"
		"579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530,580,579,577,578,575,576,573,574,572,570,571,568,569,566,567,564,565,562,563,561,559,560,557,558,555,556,553,554,551,552,549,550,548,546,547,544,545,542,543,540,541,538,539,536,537,535,533,534,532,530&viewId=6564", 
		LAST);

	lr_end_transaction("QuantitativeReview_11_Export50Cases_PDF",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_24", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649136641", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t222.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeReview_13_Select2CasesandclickonDisposition");

	lr_end_transaction("QuantitativeReview_13_Select2CasesandclickonDisposition",LR_AUTO);

	lr_think_time(3);

	web_url("7435_25", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649136642", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t223.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeReview_13_Select2CasesandclickonDisposition");

	web_url("bulk_operation_options.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/bulk_operation_options.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t224.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN", 
		"9971c7f0-5f8d-4ce1-a224-efa55240c944");

	web_submit_data("changeDisposition", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/changeDisposition", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t225.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=selectedRows", "Value=[{\"configObj.id\":43,\"executedConfigObj.id\":61,\"alert.id\":579},{\"configObj.id\":43,\"executedConfigObj.id\":61,\"alert.id\":577}]", ENDITEM, 
		"Name=justification", "Value=Validation of current case/PEC based on available evidences<div class=\"box\"></div>", ENDITEM, 
		"Name=targetDisposition.id", "Value=13", ENDITEM, 
		"Name=incomingDisposition", "Value=New", ENDITEM, 
		LAST);

	web_submit_data("61_5", 
		"Action=http://10.100.22.24:8181/signal/aggregateCaseAlert/listByExecutedConfig/61?callingScreen=review&cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]&frequency=", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t226.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=draw", "Value=2", ENDITEM, 
		"Name=columns[0][data]", "Value=selected", ENDITEM, 
		"Name=columns[0][name]", "Value=", ENDITEM, 
		"Name=columns[0][searchable]", "Value=true", ENDITEM, 
		"Name=columns[0][orderable]", "Value=false", ENDITEM, 
		"Name=columns[0][search][value]", "Value=", ENDITEM, 
		"Name=columns[0][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[1][data]", "Value=dropdown", ENDITEM, 
		"Name=columns[1][name]", "Value=", ENDITEM, 
		"Name=columns[1][searchable]", "Value=true", ENDITEM, 
		"Name=columns[1][orderable]", "Value=false", ENDITEM, 
		"Name=columns[1][search][value]", "Value=", ENDITEM, 
		"Name=columns[1][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[2][data]", "Value=flags", ENDITEM, 
		"Name=columns[2][name]", "Value=", ENDITEM, 
		"Name=columns[2][searchable]", "Value=true", ENDITEM, 
		"Name=columns[2][orderable]", "Value=true", ENDITEM, 
		"Name=columns[2][search][value]", "Value=", ENDITEM, 
		"Name=columns[2][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[3][data]", "Value=priority", ENDITEM, 
		"Name=columns[3][name]", "Value=", ENDITEM, 
		"Name=columns[3][searchable]", "Value=true", ENDITEM, 
		"Name=columns[3][orderable]", "Value=true", ENDITEM, 
		"Name=columns[3][search][value]", "Value=", ENDITEM, 
		"Name=columns[3][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[4][data]", "Value=actions", ENDITEM, 
		"Name=columns[4][name]", "Value=", ENDITEM, 
		"Name=columns[4][searchable]", "Value=true", ENDITEM, 
		"Name=columns[4][orderable]", "Value=true", ENDITEM, 
		"Name=columns[4][search][value]", "Value=", ENDITEM, 
		"Name=columns[4][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[5][data]", "Value=productName", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=soc", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=true", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=pt", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=true", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=false", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=listed", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=newCount", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=newSeriousCount", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=newFatalCount", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=true", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=trendType", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=eb05", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=assignedTo", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=impEvents", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=newSponCount", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=true", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=newStudyCount", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=true", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=freqPriority", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=true", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=disposition", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=true", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=positiveRechallenge", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=true", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=positiveDechallenge", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=true", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=ebgm", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=true", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=related", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=true", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=pregenency", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=true", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=newPediatricCount", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=true", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=newInteractingCount", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=exe0newSponCount", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=exe0newSeriousCount", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=exe0newFatalCount", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=exe0newStudyCount", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=exe0ebgm", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=exe0eb05", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[37][data]", "Value=exe1newSponCount", ENDITEM, 
		"Name=columns[37][name]", "Value=", ENDITEM, 
		"Name=columns[37][searchable]", "Value=true", ENDITEM, 
		"Name=columns[37][orderable]", "Value=true", ENDITEM, 
		"Name=columns[37][search][value]", "Value=", ENDITEM, 
		"Name=columns[37][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[38][data]", "Value=exe1newSeriousCount", ENDITEM, 
		"Name=columns[38][name]", "Value=", ENDITEM, 
		"Name=columns[38][searchable]", "Value=true", ENDITEM, 
		"Name=columns[38][orderable]", "Value=true", ENDITEM, 
		"Name=columns[38][search][value]", "Value=", ENDITEM, 
		"Name=columns[38][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[39][data]", "Value=exe1newFatalCount", ENDITEM, 
		"Name=columns[39][name]", "Value=", ENDITEM, 
		"Name=columns[39][searchable]", "Value=true", ENDITEM, 
		"Name=columns[39][orderable]", "Value=true", ENDITEM, 
		"Name=columns[39][search][value]", "Value=", ENDITEM, 
		"Name=columns[39][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[40][data]", "Value=exe1newStudyCount", ENDITEM, 
		"Name=columns[40][name]", "Value=", ENDITEM, 
		"Name=columns[40][searchable]", "Value=true", ENDITEM, 
		"Name=columns[40][orderable]", "Value=true", ENDITEM, 
		"Name=columns[40][search][value]", "Value=", ENDITEM, 
		"Name=columns[40][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[41][data]", "Value=exe1ebgm", ENDITEM, 
		"Name=columns[41][name]", "Value=", ENDITEM, 
		"Name=columns[41][searchable]", "Value=true", ENDITEM, 
		"Name=columns[41][orderable]", "Value=true", ENDITEM, 
		"Name=columns[41][search][value]", "Value=", ENDITEM, 
		"Name=columns[41][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[42][data]", "Value=exe1eb05", ENDITEM, 
		"Name=columns[42][name]", "Value=", ENDITEM, 
		"Name=columns[42][searchable]", "Value=true", ENDITEM, 
		"Name=columns[42][orderable]", "Value=true", ENDITEM, 
		"Name=columns[42][search][value]", "Value=", ENDITEM, 
		"Name=columns[42][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[43][data]", "Value=exe2newSponCount", ENDITEM, 
		"Name=columns[43][name]", "Value=", ENDITEM, 
		"Name=columns[43][searchable]", "Value=true", ENDITEM, 
		"Name=columns[43][orderable]", "Value=true", ENDITEM, 
		"Name=columns[43][search][value]", "Value=", ENDITEM, 
		"Name=columns[43][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[44][data]", "Value=exe2newSeriousCount", ENDITEM, 
		"Name=columns[44][name]", "Value=", ENDITEM, 
		"Name=columns[44][searchable]", "Value=true", ENDITEM, 
		"Name=columns[44][orderable]", "Value=true", ENDITEM, 
		"Name=columns[44][search][value]", "Value=", ENDITEM, 
		"Name=columns[44][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[45][data]", "Value=exe2newFatalCount", ENDITEM, 
		"Name=columns[45][name]", "Value=", ENDITEM, 
		"Name=columns[45][searchable]", "Value=true", ENDITEM, 
		"Name=columns[45][orderable]", "Value=true", ENDITEM, 
		"Name=columns[45][search][value]", "Value=", ENDITEM, 
		"Name=columns[45][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[46][data]", "Value=exe2newStudyCount", ENDITEM, 
		"Name=columns[46][name]", "Value=", ENDITEM, 
		"Name=columns[46][searchable]", "Value=true", ENDITEM, 
		"Name=columns[46][orderable]", "Value=true", ENDITEM, 
		"Name=columns[46][search][value]", "Value=", ENDITEM, 
		"Name=columns[46][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[47][data]", "Value=exe2ebgm", ENDITEM, 
		"Name=columns[47][name]", "Value=", ENDITEM, 
		"Name=columns[47][searchable]", "Value=true", ENDITEM, 
		"Name=columns[47][orderable]", "Value=true", ENDITEM, 
		"Name=columns[47][search][value]", "Value=", ENDITEM, 
		"Name=columns[47][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[48][data]", "Value=exe2eb05", ENDITEM, 
		"Name=columns[48][name]", "Value=", ENDITEM, 
		"Name=columns[48][searchable]", "Value=true", ENDITEM, 
		"Name=columns[48][orderable]", "Value=true", ENDITEM, 
		"Name=columns[48][search][value]", "Value=", ENDITEM, 
		"Name=columns[48][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		LAST);

	lr_end_transaction("QuantitativeReview_13_Select2CasesandclickonDisposition",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_26", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649136643", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QuantitativeReview_12_Logout");

	web_url("7435_27", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590649136644", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("discardTempChanges_4", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6564", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t229.inf", 
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
		"Referer=http://10.100.22.24:8181/signal/aggregateCaseAlert/details?callingScreen=review&configId=61", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QuantitativeReview_12_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}