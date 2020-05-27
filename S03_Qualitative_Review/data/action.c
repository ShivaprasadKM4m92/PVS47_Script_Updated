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

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

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

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL=http://10.100.22.24:8181/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t3.inf", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
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
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL=http://10.100.22.24:8181/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/login/auth", 
		"Snapshot=t7.inf", 
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
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//0g6ctAeMSZnKkCgYIARAAGBASNwF-L9Irm6Hu9p2yeKU9XlaaWnYZg2MS-npEAPzQHjgQsqjjoJEqTeovScmMPGjjWXzrJklqPUc&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
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
		"Snapshot=t10.inf", 
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
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

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
		"Snapshot=t12.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/octet-stream", 
		"Body=\nshivaprasaadkm@gmail.com4*8\b", 
		LAST);

	web_concurrent_start(NULL);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

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

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-81.0.4044.138");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:3349590467&cup2hreq=f624d4f66ae6a424162cab5a6e7fdd7f47d2a71a0ea85150723c4f2277911a1a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{6c9fd43d-b001-4299-a123-d2c2bccb3f69}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{d2688ddf-f08c-49b3-b16c-feaa192e7d2d}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{c567e1cc-1a66-45fa-9ab4-00d71d039949}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{5da7a361-cb70-4287-875b-d2df641c3f8e}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{dd824200-9de9-4194-89ac-b064a41f2978}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.693458e8d61b08ad38d9dceec8d6204a74cfc0952a39dca6d1e6d4828a5cbcf4\"}]},\"ping\":{\"ping_freshness\":\"{361111e2-081a-4c10-90db-58f8c6d9e0d4}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"1.11.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\""
		":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{a786ccfa-90ef-466e-aa37-ae52a785b496}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{4dafa24e-f9f8-4bef-b471-b1f3f68cb220}\",\"rd\":4892},\"updatecheck\":{},\""
		"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GGLS\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.8220.319.1.2\"}]},\"ping\":{\"ping_freshness\":\"{2c3d0438-964f-43dc-90a9-903aaf98458f}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"8220.319.1.2\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\","
		"\"version\":\"10.0.17763.1217\"},\"prodversion\":\"81.0.4044.138\",\"protocol\":\"3.1\",\"requestid\":\"{a04b0744-305c-4527-a864-1a0bd2df1feb}\",\"sessionid\":\"{582b3a4f-2711-4ea8-a9dc-b3ce0ca1c086}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"81.0.4044.138\"}}", 
		LAST);

	lr_start_transaction("QualitativeReview_01_OpenApplication");

	lr_end_transaction("QualitativeReview_01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	web_revert_auto_header("Accept-Language");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,llkgjffcdpffmhiakmfcdcblohccpfmo,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,hnimpnehoodheedghdeeijklkeaacbdc,copjbmjbojbakpaedmpkhmiplmmehfck,ggkkehgbnfjpeggfpleeakpidbkibbmn,jflookgnkcckhobaglndicnbbgbonegd,bklopemakmnopmghhmccadeonafabnal,"
		"ehgidpndbllacpjalkiimkbadgjfnnmc");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-81.0.4044.138");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:3146176630&cup2hreq=26f3532eb38a00e61f8c90dc79f9c9b67f79f405eecccb81110eea3629561304", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{82a480ec-cb4b-40eb-a303-ad12e511b503}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{bf9d7c00-a84b-4084-8dea-38f3a9de30e3}\",\"rd\":4892},\"updatecheck\":{},\""
		"version\":\"4.10.1610.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e03bbdaab3b8f98164302f2b1d5a623bd5f6f393cc5279cf553329eed3d7b993\"}]},\"ping\":{\"ping_freshness\":\"{fd5f6f24-25b2-4a69-9238-94d764cf9d28}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"32.0.0.371\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\""
		"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{5b2da43b-b729-427d-91dd-863d071a2e7d}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{28726f21-2120-4802-acfb-5df72db3f38f}\",\"rd\""
		":4892},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.802b20de44dac0da1008b081d36208aa3a29024eaa9569e8236bad49bed63c62\"}]},\"ping\":{\"ping_freshness\":\"{6e111944-8a46-42f5-b233-ed46caf14985}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"5892\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{45b2da2d-5240-4750-89ea-5b8652fb7ed5}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{14793017-9ff7-4c84-9877-f5bc5edb7df7}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{4a626936-0667-45a7-9df1-9195a5902708}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e1aca3e8ebc06fe8b3b386fbdf5ad3ed7f76af9651106fba33276ad48d28ae23\"}]},\"ping\":{\"ping_freshness\":\"{132e0fe7-dc83-4315-ba57-3642d44d2a62}\",\"rd\":4892},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"81.235.200\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{de5c331a-9d63-45dc-9f73-e4aa3a9d93fe}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GGLS\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\""
		"{21290298-83b9-40d6-ab61-59da5775c845}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.59f80dfc20335b1b6c4562bf68e07f7eeb1ac8b6f5d3099beefa6e130a1ab368\"}]},\"ping\":{\"ping_freshness\":\"{239d2a8f-0c7a-4d53-84f6-820f9d53a5a6}\",\"rd\":4892},\"updatecheck\":{},\"version\":\""
		"2020.5.17.1142\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.55b6cd28205c081580b581687abe3a91b9cc10fdb2b84ebadeb7b6ad534bd691\"}]},\"ping\":{\"ping_freshness\":\"{daea32ba-6cc3-437d-aece-ed8b0e31bae8}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"1194\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GGLS\",\"cohort\":\"1:swl:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\"{cb8797f0-03ca-4f45-a512-3fdc275dee1a}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{da51e6a3-09da-4ded-a611-97718cfef433}\",\"rd\":4892},\"updatecheck\":{},\"version\":\"2018.8.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"81.0.4044.138\",\"protocol\":\"3.1\",\"requestid\":\""
		"{ff2a2c37-100d-4e4e-8f82-84c53a83f33a}\",\"sessionid\":\"{64091f3d-51be-420f-ad8a-6fb1afd729ea}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"81.0.4044.138\"}}", 
		LAST);

	lr_start_transaction("QualitativeReview_02_Login");

	web_revert_auto_header("X-Goog-Update-Interactivity");

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"event\":[{\"download_time_ms\":8102,\"downloaded\":11575,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"1195\",\"previousversion\":\"1194\",\"total\":11575,\"url\":\"http://redirector.gvt1.com/edgedl/release2/AIy-r2mB3j9cutacJ86MvY0_1195/APyUsFI5YQrTE1_39e5qvW0\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\""
		"1.d7b1a0a5be4e861c9776510a0dc9946ce9f81db59b1f5114b72b4cf517a4b014\",\"nextversion\":\"1195\",\"previousfp\":\"1.55b6cd28205c081580b581687abe3a91b9cc10fdb2b84ebadeb7b6ad534bd691\",\"previousversion\":\"1194\"}],\"version\":\"1195\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1217\"},\"prodversion\":\"81.0.4044.138\",\"protocol\":\"3.1\",\"requestid\":\""
		"{97bf144f-2ad9-42c4-9c26-ade8bd025214}\",\"sessionid\":\"{64091f3d-51be-420f-ad8a-6fb1afd729ea}\",\"updaterversion\":\"81.0.4044.138\"}}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

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
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_csrf", "Value=e26e580b-9d93-4c1b-860c-a68c4a973d77", ENDITEM, 
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

	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL=http://10.100.22.24:8181/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t29.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL=http://10.100.22.24:8181/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t30.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t31.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t32.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t34.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t35.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t36.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
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

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t39.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t41.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t42.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t43.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t44.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t48.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t50.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t52.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t53.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t54.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t55.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t56.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t57.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t58.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t59.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t60.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t61.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t64.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL=http://10.100.22.24:8181/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL=http://10.100.22.24:8181/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL=http://10.100.22.24:8181/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t74.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t75.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/spring-websocket-867783f03d5a8005372950a4b8cac2a4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t77.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t78.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
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

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t81.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t82.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t83.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t84.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t85.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t87.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t88.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t89.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t90.inf", 
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
		"Snapshot=t86.inf", 
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
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t92.inf", 
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
		"Snapshot=t93.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t94.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("Accept", 
		"*/*");

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=http://10.100.22.24:8181/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t95.inf", 
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
		"Snapshot=t96.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("caseByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/caseByStatus?_=1590390412870", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("sideBar", 
		"URL=http://10.100.22.24:8181/signal/dashboard/sideBar?_=1590390412869", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ahaByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/ahaByStatus?_=1590390412872", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("alertByDueDate", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertByDueDate?_=1590390412873", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("aggAlertByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/aggAlertByStatus?_=1590390412871", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590390412875", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getProductByStatus_2", 
		"URL=http://10.100.22.24:8181/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590390412874", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390412876", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t104.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_submit_data("events", 
		"Action=http://10.100.22.24:8181/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=start", "Value=27-Apr-2020", ENDITEM, 
		"Name=end", "Value=08-Jun-2020", ENDITEM, 
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
		"Snapshot=t106.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("alertList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/alertList?_=1590390412877", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_concurrent_start(NULL);

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t109.inf", 
		LAST);

	web_add_header("Origin", 
		"http://10.100.22.24:8181");

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL=http://10.100.22.24:8181/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=http://10.100.22.24:8181/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t110.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("signalList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/signalList?_=1590390412878", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t111.inf", 
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
		"Snapshot=t112.inf", 
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
		"URL=http://10.100.22.24:8181/signal/stomp/167/94pjsuly/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("actionList", 
		"URL=http://10.100.22.24:8181/signal/dashboard/actionList?_=1590390412879", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t114.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJZCXXwJzK-GymlEgsNWdcY1RIAGgAiABILDb2Fgw8SABoAIgASCw1xiI4rEgAaACIAEgsNvYWDDxIAGgAiABILDZzsuxkSABoAIgASCw29hYMPEgAaACIAGgA=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJZCXXwJzK-GymlEgsNWdcY1RIAGgAiABILDb2Fgw8SABoAIgASCw1xiI4rEgAaACIAEgsNvYWDDxIAGgAiABILDZzsuxkSABoAIgASCw29hYMPEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t115.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_2", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390412880", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t116.inf", 
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
		"Ch0KDGdvb2dsZWNocm9tZRINODEuMC40MDQ0LjEzOBopCAUQARobCg0IBRAGGAEiAzAwMTABENjQCBoCGAd9pyB6IgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCotgcaAhgHSNO0-iIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ47wHGgIYB1OLvF4iBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEMa7BxoCGAfexJToIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEEJ8aGgIYB_gAXYIiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQgisaAhgHsnSElyIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBRoCGAeqCEgXIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAbGgIYB8zcBVwiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEO4IGgIYB0L0zlAiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEIp0GgIYByZb5I0iBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEPbUAxoCGAcq-kPJIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCjAxoCGAfBR0TxIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t117.inf", 
		LAST);

	lr_end_transaction("QualitativeReview_02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("QualitativeReview_03_NavigateTriggeredAlertsQualitativeReview");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_submit_data("saveDashboardConfig", 
		"Action=http://10.100.22.24:8181/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t118.inf", 
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
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/configuration/deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("simple_case_alert_review-00e9c3583729a51ba495c99fa9d8b592.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/simple_case_alert_review-00e9c3583729a51ba495c99fa9d8b592.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t124.inf", 
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
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("workflowState", 
		"URL=http://10.100.22.24:8181/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCTYpmtasdEcoEgsNvYWDDxIAGgAiABoAEjIJPjZj6w7vTKwSCw3zXyKDEgAaACIAEgsNvYWDDxIAGgAiABILDZ25hX4SABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCTYpmtasdEcoEgsNvYWDDxIAGgAiABoAEjIJPjZj6w7vTKwSCw3zXyKDEgAaACIAEgsNvYWDDxIAGgAiABILDZ25hX4SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t127.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("listConfig", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/listConfig?adhocRun=false&draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=productSelection&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=caseCount&"
		"columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=newCases&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=closedCaseCount&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&"
		"columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=alertPriority&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=9&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1590390485286", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_3", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390485287", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_2", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t130.inf", 
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
		"URL=http://10.100.22.24:8181/signal/stomp/840/31v9zat8/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_4", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390485288", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_03_NavigateTriggeredAlertsQualitativeReview",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("QualitativeReview_04_ClickOnAlertName");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/review", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t134.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t135.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/themes/grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t136.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t137.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("highcharts-de65192df8733b7a60482497a875df4c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/highcharts/highcharts-de65192df8733b7a60482497a875df4c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t138.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"URL=http://10.100.22.24:8181/signal/assets/yadcf/jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t139.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"URL=http://10.100.22.24:8181/signal/assets/query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t140.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t141.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t142.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t143.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"URL=http://10.100.22.24:8181/signal/assets/colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t144.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/caseHistory/caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t145.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/vendorUi/datatables/datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t146.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t147.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/similarCases/similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t148.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/bootstrap-modal-popover/bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t149.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("single_case_alert_details-50076305d9a840e6a3de6bf721a5516a.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alerts_review/single_case_alert_details-50076305d9a840e6a3de6bf721a5516a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t150.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/caseHistory/caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t151.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/alert_utils/common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t152.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/priority/priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t153.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/disposition/disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t154.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"URL=http://10.100.22.24:8181/signal/assets/backbone/underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t155.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("backbone-fb26971962c1315514c8ede192bc0252.js", 
		"URL=http://10.100.22.24:8181/signal/assets/backbone/backbone-fb26971962c1315514c8ede192bc0252.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t156.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("advancedFilterQueryBuilder-6a50d7065df84d243f869aadaf8c60eb.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/advancedFilter/advancedFilterQueryBuilder-6a50d7065df84d243f869aadaf8c60eb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t157.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/query/to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t158.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6559&_=1590390513634", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_5", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390513635", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t161.inf", 
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
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIyCazxM2pM5g0OEgsNL0aOchIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAGgAScwkpzzYJmAuQGhILDX0QCekSABoAIgASCw1zOzqZEgAaACIAEgsN4b08GBIAGgAiABILDUSnGXoSABoAIgASCw2RyfPpEgAaACIAEgsN7SM2XBIAGgAiABILDTd7KU0SABoAIgASCw0R2hn9EgAaACIAGgASPwkHu8d4yEOnIBILDd4iJwcSABoAIgASCw2RYZVOEgAaACIAEgsNv66n_xIAGgAiABILDRh5I9gSABoAIgAaABLDAgkDgcudGuHWKBILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAiABILDb2Fgw8SABoAIgASCw0pQ2_VEgAaACIAEgsN1aatGxIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEg"
		"sNvDsmwhIAGgAiABILDUvltEkSABoAIgASCw0pQ2_VEgAaACIAEgsN1aatGxIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEgsNvDsmwhIAGgAiABILDUvltEkSABoAIgASCw1w4_NdEgAaACIAEgsN1ch7GxIAGgAiABILDUW_LUgSABoAIgASCw3RNB3xEgAaACIAEgsNBu27_xIAGgAiABILDbLkoa8SABoAIgASCw2z64X_EgAaACIAEgsNBu27_xIAGgAiABoAEhgJHVWUl6LMz9YSCw1Yc_b2EgAaACIAGgAScwmFScjjMmkP_xILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNTNXkfxIAGgAiABILDaDq5EQSABoAIgASCw0yEtgJEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t162.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t163.inf", 
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
		"Snapshot=t164.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_3", 
		"URL=http://10.100.22.24:8181/signal/stomp/227/huuf984a/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t165.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_submit_data("17", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t166.inf", 
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
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
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
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=disposition", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=serious", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("priority.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/priority.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t167.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("action_drop_down.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/action_drop_down.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t168.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("disposition.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/disposition.hbs", 
		"Resource=1", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t169.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_6", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390513636", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t170.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_04_ClickOnAlertName",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("QualitativeReview_05_SelectDetailedView");

	web_url("discardTempChanges", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6559", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_2", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_2", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_2", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6559&_=1590390543204", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_7", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390543205", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t175.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("17_2", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t177.inf", 
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
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
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
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=disposition", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=serious", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=sort", "Value=selected", ENDITEM, 
		"Name=direction", "Value=asc", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_4", 
		"URL=http://10.100.22.24:8181/signal/stomp/731/1xnvnmq9/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t178.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("case_details_child_view.hbs", 
		"URL=http://10.100.22.24:8181/signal/assets/app/pvs/hbs-templates/case_details_child_view.hbs", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t179.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABLNBwnO3uh8uYNGixILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABLNBwnO3uh8uYNGixILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAiABILDb2Fgw8SABoAIgASCw0pQ2_VEgAaACIAEgsN1aatGxIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEgsNvDsmwhIAGgAiABILDUvltEkSABoAIgASCw0pQ2_VEgAaACIAEgsN1aatGxIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEgsNvDsmwhIAGgAiABILDUvltEkSABoAIgASCw2UkJL6EgAaACIAEg"
		"sNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgAS"
		"Cw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDZSQkvoSABoAIgASCw2UkJL6EgAaACIAEgsNlJCS-hIAGgAiABILDXDj810SABoAIgASCw3VyHsbEgAaACIAEgsNRb8tSBIAGgAiABILDdE0HfESABoAIgASCw0G7bv_EgAaACIAEgsNsuShrxIAGgAiABILDbPrhf8SABoAIgASCw0G7bv_EgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t180.inf", 
		LAST);

	web_url("7435_8", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390543206", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t181.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_05_SelectDetailedView",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("QualitativeReview_06_UnSelectDetailedView");

	web_url("discardTempChanges_2", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6559", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_3", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=true", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_3", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_3", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6559&_=1590390566920", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_9", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390566921", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t186.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("17_3", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t188.inf", 
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
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
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
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=disposition", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=serious", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=sort", "Value=selected", ENDITEM, 
		"Name=direction", "Value=asc", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_5", 
		"URL=http://10.100.22.24:8181/signal/stomp/977/xdpfcxc6/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t189.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_10", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390566922", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t190.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_06_UnSelectDetailedView",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("fetchPossibleValues", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/fetchPossibleValues?executedConfigId=17", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchAllFieldValues", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/fetchAllFieldValues?isFaers=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t193.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKNAQlm-n8ByqkE-RILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsNOcrOLRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABKNAQlm-n8ByqkE-RILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNvYWDDxIAGgAiABILDb2Fgw8SABoAIgASCw1M1eR_EgAaACIAEgsNoOrkRBIAGgAiABILDTIS2AkSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t194.inf", 
		LAST);

	web_url("getNumOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL=http://10.100.22.24:8181/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords", 
		"URL=http://10.100.22.24:8181/signal/query/getAllKeywords", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t198.inf", 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABLbAQnqQ2vW138IKBILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsNOcrOLRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABLbAQnqQ2vW138IKBILDZRU-s8SABoAIgASCw09LLzYEgAaACIAEgsNOcrOLRIAGgAiABILDbvK_VUSABoAIgASCw1BMF9PEgAaACIAEgsNvYWDDxIAGgAiABILDb2Fgw8SABoAIgASCw1M1eR_EgAaACIAEgsNoOrkRBIAGgAiABILDTIS2AkSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw29hYMPEgAaACIAEgsNvYWDDxIAGgAiABILDUzV5H8SABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t199.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_11", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390566923", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t200.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QualitativeReview_07_SaveFilterAndApply");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_submit_data("save", 
		"Action=http://10.100.22.24:8181/signal/advancedFilter/save", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t201.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=alertType", "Value=Single Case Alert", ENDITEM, 
		"Name=filterId", "Value=", ENDITEM, 
		"Name=name", "Value=PerfTest1", ENDITEM, 
		"Name=description", "Value=", ENDITEM, 
		"Name=selectField", "Value=priority.id", ENDITEM, 
		"Name=selectOperator", "Value=EQUALS", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelect", "Value=6667", ENDITEM, 
		"Name=selectDate", "Value=05/25/2020", ENDITEM, 
		"Name=JSONQuery", "Value={\"all\":{\"containerGroups\":[ {\"expressions\":[ {\"index\":\"0\",\"field\":\"priority.id\",\"op\":\"EQUALS\",\"value\":\"6667\"} ] }  ] } }", ENDITEM, 
		"Name=hasBlanks", "Value=false", ENDITEM, 
		"Name=selectField", "Value=priority.id", ENDITEM, 
		"Name=selectOperator", "Value=EQUALS", ENDITEM, 
		"Name=selectValue", "Value=", ENDITEM, 
		"Name=selectSelect", "Value=6667", ENDITEM, 
		"Name=selectDate", "Value=05/25/2020", ENDITEM, 
		"Name=_csrf", "Value=e26e580b-9d93-4c1b-860c-a68c4a973d77", ENDITEM, 
		LAST);

	web_submit_data("17_4", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t202.inf", 
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
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
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
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
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
		"Name=columns[16][data]", "Value=serious", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=false", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=disposition", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=conComit", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=sort", "Value=selected", ENDITEM, 
		"Name=direction", "Value=asc", ENDITEM, 
		"Name=advancedFilterId", "Value=15619", ENDITEM, 
		"Name=queryJSON", "Value={\"all\":{\"containerGroups\":[ {\"expressions\":[ {\"index\":\"0\",\"field\":\"priority.id\",\"op\":\"EQUALS\",\"value\":\"6667\"} ] }  ] } }", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
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

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABLDAgkDgcudGuHWKBILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRJzCSnPNgmYC5AaEgsNfRAJ6RIAGgAiABILDXM7OpkSABoAIgASCw3hvTwYEgAaACIAEgsNRKcZehIAGgAiABILDZHJ8-kSABoAIgASCw3tIzZcEgAaACIAEgsNN3spTRIAGgAiABILDRHaGf0SABoAIgAaABLDAgkDgcudGuHWKBILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAiABILDb2Fgw8SABoAIgASCw0pQ2_VEgAaACIAEgsN1aatGxIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEgsNvDsmwhIAGgAiABILDUvltEkSABoAIgASCw0pQ2_VEgAaACIAEgsN1aatGxIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEgsNvDsmwhIAGgAiABILDUvltEkSABoAIgASCw1w4_NdEgAaACIAEg"
		"sN1ch7GxIAGgAiABILDUW_LUgSABoAIgASCw3RNB3xEgAaACIAEgsNBu27_xIAGgAiABILDbLkoa8SABoAIgASCw2z64X_EgAaACIAEgsNBu27_xIAGgAiABoA?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t203.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_12", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390566924", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t204.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_07_SaveFilterAndApply",LR_AUTO);

	lr_think_time(3);

	web_url("7435_13", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390566925", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t205.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("EditFilter");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("fetchAdvancedFilterInfo", 
		"URL=http://10.100.22.24:8181/signal/advancedFilter/fetchAdvancedFilterInfo?advancedFilter.id=15619", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchPossibleValues_2", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/fetchPossibleValues?executedConfigId=17", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("fetchAllFieldValues_2", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/fetchAllFieldValues?isFaers=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators_2", 
		"URL=http://10.100.22.24:8181/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators_2", 
		"URL=http://10.100.22.24:8181/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getDateOperators_2", 
		"URL=http://10.100.22.24:8181/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getAllKeywords_2", 
		"URL=http://10.100.22.24:8181/signal/query/getAllKeywords", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getNumOperators_2", 
		"URL=http://10.100.22.24:8181/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("7435_14", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390566926", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t214.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("EditFilter",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("QualitativeReview_08_Delete filter");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_submit_data("delete", 
		"Action=http://10.100.22.24:8181/signal/advancedFilter/delete", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=id", "Value=15619", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("discardTempChanges_3", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6559", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_4", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t217.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_4", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_4", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6559&_=1590390656240", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t219.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_15", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390656241", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t220.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t221.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("17_5", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t222.inf", 
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
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
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
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=disposition", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=serious", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=sort", "Value=selected", ENDITEM, 
		"Name=direction", "Value=asc", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_6", 
		"URL=http://10.100.22.24:8181/signal/stomp/061/bwh90nkj/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t223.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_16", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390656242", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t224.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_08_Delete filter",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("AddView");

	web_url("viewColumnInfo_5", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6559&_=1590390656243", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t225.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_17", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390656244", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t226.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("AddView",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_submit_data("updateViewColumnInfo", 
		"Action=http://10.100.22.24:8181/signal/viewInstance/updateViewColumnInfo?viewInstance.id=6559", 
		"Method=POST", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=columnList", "Value=[{\"label\":\"Categories\",\"name\":\"alertTags\",\"containerView\":1,\"seq\":6,\"listOrder\":0},{\"label\":\"Receipt Date\",\"name\":\"caseInitReceiptDate\",\"containerView\":1,\"seq\":7,\"listOrder\":1},{\"label\":\"Product Name\",\"name\":\"productName\",\"containerView\":1,\"seq\":8,\"listOrder\":2},{\"label\":\"PT\",\"name\":\"pt\",\"containerView\":1,\"seq\":9,\"listOrder\":3},{\"label\":\"Listedness\",\"name\":\"listedness\",\"containerView\":1,\"seq\":10,\""
		"listOrder\":4},{\"label\":\"Outcome\",\"name\":\"outcome\",\"containerView\":1,\"seq\":11,\"listOrder\":5},{\"label\":\"Signal / Topic\",\"name\":\"signalsAndTopics\",\"containerView\":1,\"seq\":12,\"listOrder\":6},{\"label\":\"Disposition\",\"name\":\"currentDisposition\",\"containerView\":1,\"seq\":13,\"listOrder\":7},{\"label\":\"Suspect Products\",\"name\":\"suspProd\",\"containerView\":1,\"seq\":17,\"listOrder\":8},{\"label\":\"Current Disposition\",\"name\":\"disposition\",\"containerView\""
		":1,\"seq\":14,\"listOrder\":9},{\"label\":\"Assigned To\",\"name\":\"assignedToUser\",\"containerView\":1,\"seq\":15,\"listOrder\":10},{\"label\":\"Due In\",\"name\":\"dueDate\",\"containerView\":1,\"seq\":16,\"listOrder\":11},{\"label\":\"Serious\",\"name\":\"serious\",\"containerView\":1,\"seq\":20,\"listOrder\":12},{\"label\":\"Con Med\",\"name\":\"conComit\",\"containerView\":3,\"seq\":18,\"listOrder\":9999},{\"label\":\"PT List\",\"name\":\"masterPrefTermAll\",\"containerView\":3,\"seq\":19,"
		"\"listOrder\":9999},{\"label\":\"Report Type\",\"name\":\"caseReportType\",\"containerView\":3,\"seq\":21,\"listOrder\":9999},{\"label\":\"HCP\",\"name\":\"reportersHcpFlag\",\"containerView\":3,\"seq\":22,\"listOrder\":9999},{\"label\":\"Country\",\"name\":\"country\",\"containerView\":3,\"seq\":23,\"listOrder\":9999},{\"label\":\"Age Group\",\"name\":\"age\",\"containerView\":3,\"seq\":24,\"listOrder\":9999},{\"label\":\"Gender\",\"name\":\"gender\",\"containerView\":3,\"seq\":25,\"listOrder\""
		":9999},{\"label\":\"Positive Rechallenge\",\"name\":\"rechallenge\",\"containerView\":3,\"seq\":26,\"listOrder\":9999},{\"label\":\"Locked Date\",\"name\":\"lockedDate\",\"containerView\":3,\"seq\":27,\"listOrder\":9999},{\"label\":\"Death\",\"name\":\"death\",\"containerView\":3,\"seq\":28,\"listOrder\":9999},{\"label\":\"Medication Error PTs\",\"name\":\"medErrorsPt\",\"containerView\":3,\"seq\":29,\"listOrder\":9999},{\"label\":\"Age\",\"name\":\"patientAge\",\"containerView\":3,\"seq\":30,\""
		"listOrder\":9999},{\"label\":\"Case Type\",\"name\":\"caseType\",\"containerView\":3,\"seq\":31,\"listOrder\":9999},{\"label\":\"Completeness Score\",\"name\":\"completenessScore\",\"containerView\":3,\"seq\":32,\"listOrder\":9999},{\"label\":\"Primary IND#\",\"name\":\"indNumber\",\"containerView\":3,\"seq\":33,\"listOrder\":9999},{\"label\":\"Application#\",\"name\":\"appTypeAndNum\",\"containerView\":3,\"seq\":34,\"listOrder\":9999},{\"label\":\"Compounding Flag\",\"name\":\"compoundingFlag\","
		"\"containerView\":3,\"seq\":35,\"listOrder\":9999},{\"label\":\"Submitter\",\"name\":\"submitter\",\"containerView\":3,\"seq\":36,\"listOrder\":9999}]", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_submit_data("17_6", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t228.inf", 
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
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
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
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=false", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=disposition", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=true", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=false", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=true", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=serious", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=false", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=conComit", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=true", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=sort", "Value=selected", ENDITEM, 
		"Name=direction", "Value=asc", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	lr_start_transaction("QualitativeReview_09_SaveView");

	web_submit_data("saveView", 
		"Action=http://10.100.22.24:8181/signal/viewInstance/saveView", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=name", "Value=PerfTest_View1", ENDITEM, 
		"Name=filterMap", "Value={}", ENDITEM, 
		"Name=columnList", "Value=", ENDITEM, 
		"Name=alertType", "Value=Single Case Alert", ENDITEM, 
		"Name=sorting", "Value={\"0\":\"asc\"}", ENDITEM, 
		"Name=advancedFilter", "Value=", ENDITEM, 
		"Name=currentViewId", "Value=6559", ENDITEM, 
		"Name=defaultView", "Value=false", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("discardTempChanges_4", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6559", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_5", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559&isCaseDetailView=false", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_5", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t232.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_6", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=15636&_=1590390747961", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t233.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_18", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390747962", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t234.inf", 
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
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIyCazxM2pM5g0OEgsNL0aOchIAGgAiABILDTtc4cwSABoAIgASCw3u458SEgAaACIAGgAScwkpzzYJmAuQGhILDX0QCekSABoAIgASCw1zOzqZEgAaACIAEgsN4b08GBIAGgAiABILDUSnGXoSABoAIgASCw2RyfPpEgAaACIAEgsN7SM2XBIAGgAiABILDTd7KU0SABoAIgASCw0R2hn9EgAaACIAGgASPwkHu8d4yEOnIBILDd4iJwcSABoAIgASCw2RYZVOEgAaACIAEgsNv66n_xIAGgAiABILDRh5I9gSABoAIgAaABLdAgmfY8bfTs30wxILDbghkwwSABoAIgASCw2UkJL6EgAaACIAEgsN4mUaUBIAGgAiABILDb2Fgw8SABoAIgASCw0pQ2_VEgAaACIAEgsN1aatGxIAGgAiABILDfrtst4SABoAIgASCw3r5zhIEgAaACIAEg"
		"sNvDsmwhIAGgAiABILDd7dDsASABoAIgASCw1L5bRJEgAaACIAEgsNKUNv1RIAGgAiABILDdWmrRsSABoAIgASCw367bLeEgAaACIAEgsN6-c4SBIAGgAiABILDbw7JsISABoAIgASCw3e3Q7AEgAaACIAEgsNS-W0SRIAGgAiABILDXDj810SABoAIgASCw3VyHsbEgAaACIAEgsNRb8tSBIAGgAiABILDdE0HfESABoAIgASCw0G7bv_EgAaACIAEgsNsuShrxIAGgAiABILDbPrhf8SABoAIgASCw0G7bv_EgAaACIAGgASGAkdVZSXoszP1hILDVhz9vYSABoAIgAaABJzCYVJyOMyaQ__EgsNlFT6zxIAGgAiABILDT0svNgSABoAIgASCw05ys4tEgAaACIAEgsNu8r9VRIAGgAiABILDUEwX08SABoAIgASCw1M1eR_EgAaACIAEgsNoOrkRBIAGgAiABILDTIS2AkSABoAIgAa"
		"AA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t235.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_submit_data("17_7", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t236.inf", 
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
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
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
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=disposition", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=serious", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=sort", "Value=selected", ENDITEM, 
		"Name=direction", "Value=asc", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"*/*");

	web_url("info_7", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t237.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_7", 
		"URL=http://10.100.22.24:8181/signal/stomp/242/f437q0zl/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t238.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_19", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390747963", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t239.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_09_SaveView",LR_AUTO);

	lr_think_time(3);

	web_url("7435_20", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390747964", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t240.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("QualitativeReview_10_SystemView");

	web_url("discardTempChanges_5", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=15636", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t241.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_6", 
		"URL=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=15636", 
		"Snapshot=t242.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_6", 
		"URL=http://10.100.22.24:8181/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Snapshot=t243.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("viewColumnInfo_7", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/viewColumnInfo?viewInstance.id=6559&_=1590390778358", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Snapshot=t244.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("7435_21", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390778359", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Snapshot=t245.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info_8", 
		"URL=http://10.100.22.24:8181/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Snapshot=t246.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN", 
		"e26e580b-9d93-4c1b-860c-a68c4a973d77");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("17_8", 
		"Action=http://10.100.22.24:8181/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Snapshot=t247.inf", 
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
		"Name=columns[2][data]", "Value=badge", ENDITEM, 
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
		"Name=columns[5][data]", "Value=caseNumber", ENDITEM, 
		"Name=columns[5][name]", "Value=", ENDITEM, 
		"Name=columns[5][searchable]", "Value=true", ENDITEM, 
		"Name=columns[5][orderable]", "Value=true", ENDITEM, 
		"Name=columns[5][search][value]", "Value=", ENDITEM, 
		"Name=columns[5][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[6][data]", "Value=alertTags", ENDITEM, 
		"Name=columns[6][name]", "Value=", ENDITEM, 
		"Name=columns[6][searchable]", "Value=true", ENDITEM, 
		"Name=columns[6][orderable]", "Value=false", ENDITEM, 
		"Name=columns[6][search][value]", "Value=", ENDITEM, 
		"Name=columns[6][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", ENDITEM, 
		"Name=columns[7][name]", "Value=", ENDITEM, 
		"Name=columns[7][searchable]", "Value=true", ENDITEM, 
		"Name=columns[7][orderable]", "Value=false", ENDITEM, 
		"Name=columns[7][search][value]", "Value=", ENDITEM, 
		"Name=columns[7][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[8][data]", "Value=productName", ENDITEM, 
		"Name=columns[8][name]", "Value=", ENDITEM, 
		"Name=columns[8][searchable]", "Value=true", ENDITEM, 
		"Name=columns[8][orderable]", "Value=true", ENDITEM, 
		"Name=columns[8][search][value]", "Value=", ENDITEM, 
		"Name=columns[8][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[9][data]", "Value=pt", ENDITEM, 
		"Name=columns[9][name]", "Value=", ENDITEM, 
		"Name=columns[9][searchable]", "Value=true", ENDITEM, 
		"Name=columns[9][orderable]", "Value=true", ENDITEM, 
		"Name=columns[9][search][value]", "Value=", ENDITEM, 
		"Name=columns[9][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[10][data]", "Value=listedness", ENDITEM, 
		"Name=columns[10][name]", "Value=", ENDITEM, 
		"Name=columns[10][searchable]", "Value=true", ENDITEM, 
		"Name=columns[10][orderable]", "Value=true", ENDITEM, 
		"Name=columns[10][search][value]", "Value=", ENDITEM, 
		"Name=columns[10][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[11][data]", "Value=outcome", ENDITEM, 
		"Name=columns[11][name]", "Value=", ENDITEM, 
		"Name=columns[11][searchable]", "Value=true", ENDITEM, 
		"Name=columns[11][orderable]", "Value=true", ENDITEM, 
		"Name=columns[11][search][value]", "Value=", ENDITEM, 
		"Name=columns[11][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[12][data]", "Value=signalsAndTopics", ENDITEM, 
		"Name=columns[12][name]", "Value=", ENDITEM, 
		"Name=columns[12][searchable]", "Value=true", ENDITEM, 
		"Name=columns[12][orderable]", "Value=false", ENDITEM, 
		"Name=columns[12][search][value]", "Value=", ENDITEM, 
		"Name=columns[12][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[13][data]", "Value=currentDisposition", ENDITEM, 
		"Name=columns[13][name]", "Value=", ENDITEM, 
		"Name=columns[13][searchable]", "Value=true", ENDITEM, 
		"Name=columns[13][orderable]", "Value=true", ENDITEM, 
		"Name=columns[13][search][value]", "Value=", ENDITEM, 
		"Name=columns[13][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[14][data]", "Value=disposition", ENDITEM, 
		"Name=columns[14][name]", "Value=", ENDITEM, 
		"Name=columns[14][searchable]", "Value=true", ENDITEM, 
		"Name=columns[14][orderable]", "Value=true", ENDITEM, 
		"Name=columns[14][search][value]", "Value=", ENDITEM, 
		"Name=columns[14][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[15][data]", "Value=assignedToUser", ENDITEM, 
		"Name=columns[15][name]", "Value=", ENDITEM, 
		"Name=columns[15][searchable]", "Value=true", ENDITEM, 
		"Name=columns[15][orderable]", "Value=false", ENDITEM, 
		"Name=columns[15][search][value]", "Value=", ENDITEM, 
		"Name=columns[15][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[16][data]", "Value=dueDate", ENDITEM, 
		"Name=columns[16][name]", "Value=", ENDITEM, 
		"Name=columns[16][searchable]", "Value=true", ENDITEM, 
		"Name=columns[16][orderable]", "Value=true", ENDITEM, 
		"Name=columns[16][search][value]", "Value=", ENDITEM, 
		"Name=columns[16][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[17][data]", "Value=suspProd", ENDITEM, 
		"Name=columns[17][name]", "Value=", ENDITEM, 
		"Name=columns[17][searchable]", "Value=true", ENDITEM, 
		"Name=columns[17][orderable]", "Value=false", ENDITEM, 
		"Name=columns[17][search][value]", "Value=", ENDITEM, 
		"Name=columns[17][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[18][data]", "Value=conComit", ENDITEM, 
		"Name=columns[18][name]", "Value=", ENDITEM, 
		"Name=columns[18][searchable]", "Value=true", ENDITEM, 
		"Name=columns[18][orderable]", "Value=true", ENDITEM, 
		"Name=columns[18][search][value]", "Value=", ENDITEM, 
		"Name=columns[18][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[19][data]", "Value=masterPrefTermAll", ENDITEM, 
		"Name=columns[19][name]", "Value=", ENDITEM, 
		"Name=columns[19][searchable]", "Value=true", ENDITEM, 
		"Name=columns[19][orderable]", "Value=false", ENDITEM, 
		"Name=columns[19][search][value]", "Value=", ENDITEM, 
		"Name=columns[19][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[20][data]", "Value=serious", ENDITEM, 
		"Name=columns[20][name]", "Value=", ENDITEM, 
		"Name=columns[20][searchable]", "Value=true", ENDITEM, 
		"Name=columns[20][orderable]", "Value=false", ENDITEM, 
		"Name=columns[20][search][value]", "Value=", ENDITEM, 
		"Name=columns[20][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[21][data]", "Value=caseReportType", ENDITEM, 
		"Name=columns[21][name]", "Value=", ENDITEM, 
		"Name=columns[21][searchable]", "Value=true", ENDITEM, 
		"Name=columns[21][orderable]", "Value=false", ENDITEM, 
		"Name=columns[21][search][value]", "Value=", ENDITEM, 
		"Name=columns[21][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[22][data]", "Value=reportersHcpFlag", ENDITEM, 
		"Name=columns[22][name]", "Value=", ENDITEM, 
		"Name=columns[22][searchable]", "Value=true", ENDITEM, 
		"Name=columns[22][orderable]", "Value=false", ENDITEM, 
		"Name=columns[22][search][value]", "Value=", ENDITEM, 
		"Name=columns[22][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[23][data]", "Value=country", ENDITEM, 
		"Name=columns[23][name]", "Value=", ENDITEM, 
		"Name=columns[23][searchable]", "Value=true", ENDITEM, 
		"Name=columns[23][orderable]", "Value=false", ENDITEM, 
		"Name=columns[23][search][value]", "Value=", ENDITEM, 
		"Name=columns[23][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[24][data]", "Value=age", ENDITEM, 
		"Name=columns[24][name]", "Value=", ENDITEM, 
		"Name=columns[24][searchable]", "Value=true", ENDITEM, 
		"Name=columns[24][orderable]", "Value=false", ENDITEM, 
		"Name=columns[24][search][value]", "Value=", ENDITEM, 
		"Name=columns[24][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[25][data]", "Value=gender", ENDITEM, 
		"Name=columns[25][name]", "Value=", ENDITEM, 
		"Name=columns[25][searchable]", "Value=true", ENDITEM, 
		"Name=columns[25][orderable]", "Value=false", ENDITEM, 
		"Name=columns[25][search][value]", "Value=", ENDITEM, 
		"Name=columns[25][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[26][data]", "Value=rechallenge", ENDITEM, 
		"Name=columns[26][name]", "Value=", ENDITEM, 
		"Name=columns[26][searchable]", "Value=true", ENDITEM, 
		"Name=columns[26][orderable]", "Value=false", ENDITEM, 
		"Name=columns[26][search][value]", "Value=", ENDITEM, 
		"Name=columns[26][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[27][data]", "Value=lockedDate", ENDITEM, 
		"Name=columns[27][name]", "Value=", ENDITEM, 
		"Name=columns[27][searchable]", "Value=true", ENDITEM, 
		"Name=columns[27][orderable]", "Value=false", ENDITEM, 
		"Name=columns[27][search][value]", "Value=", ENDITEM, 
		"Name=columns[27][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[28][data]", "Value=death", ENDITEM, 
		"Name=columns[28][name]", "Value=", ENDITEM, 
		"Name=columns[28][searchable]", "Value=true", ENDITEM, 
		"Name=columns[28][orderable]", "Value=false", ENDITEM, 
		"Name=columns[28][search][value]", "Value=", ENDITEM, 
		"Name=columns[28][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[29][data]", "Value=medErrorsPt", ENDITEM, 
		"Name=columns[29][name]", "Value=", ENDITEM, 
		"Name=columns[29][searchable]", "Value=true", ENDITEM, 
		"Name=columns[29][orderable]", "Value=false", ENDITEM, 
		"Name=columns[29][search][value]", "Value=", ENDITEM, 
		"Name=columns[29][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[30][data]", "Value=patientAge", ENDITEM, 
		"Name=columns[30][name]", "Value=", ENDITEM, 
		"Name=columns[30][searchable]", "Value=true", ENDITEM, 
		"Name=columns[30][orderable]", "Value=true", ENDITEM, 
		"Name=columns[30][search][value]", "Value=", ENDITEM, 
		"Name=columns[30][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[31][data]", "Value=caseType", ENDITEM, 
		"Name=columns[31][name]", "Value=", ENDITEM, 
		"Name=columns[31][searchable]", "Value=true", ENDITEM, 
		"Name=columns[31][orderable]", "Value=true", ENDITEM, 
		"Name=columns[31][search][value]", "Value=", ENDITEM, 
		"Name=columns[31][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[32][data]", "Value=completenessScore", ENDITEM, 
		"Name=columns[32][name]", "Value=", ENDITEM, 
		"Name=columns[32][searchable]", "Value=true", ENDITEM, 
		"Name=columns[32][orderable]", "Value=true", ENDITEM, 
		"Name=columns[32][search][value]", "Value=", ENDITEM, 
		"Name=columns[32][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[33][data]", "Value=indNumber", ENDITEM, 
		"Name=columns[33][name]", "Value=", ENDITEM, 
		"Name=columns[33][searchable]", "Value=true", ENDITEM, 
		"Name=columns[33][orderable]", "Value=true", ENDITEM, 
		"Name=columns[33][search][value]", "Value=", ENDITEM, 
		"Name=columns[33][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[34][data]", "Value=appTypeAndNum", ENDITEM, 
		"Name=columns[34][name]", "Value=", ENDITEM, 
		"Name=columns[34][searchable]", "Value=true", ENDITEM, 
		"Name=columns[34][orderable]", "Value=true", ENDITEM, 
		"Name=columns[34][search][value]", "Value=", ENDITEM, 
		"Name=columns[34][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[35][data]", "Value=compoundingFlag", ENDITEM, 
		"Name=columns[35][name]", "Value=", ENDITEM, 
		"Name=columns[35][searchable]", "Value=true", ENDITEM, 
		"Name=columns[35][orderable]", "Value=true", ENDITEM, 
		"Name=columns[35][search][value]", "Value=", ENDITEM, 
		"Name=columns[35][search][regex]", "Value=false", ENDITEM, 
		"Name=columns[36][data]", "Value=submitter", ENDITEM, 
		"Name=columns[36][name]", "Value=", ENDITEM, 
		"Name=columns[36][searchable]", "Value=true", ENDITEM, 
		"Name=columns[36][orderable]", "Value=true", ENDITEM, 
		"Name=columns[36][search][value]", "Value=", ENDITEM, 
		"Name=columns[36][search][regex]", "Value=false", ENDITEM, 
		"Name=order[0][column]", "Value=0", ENDITEM, 
		"Name=order[0][dir]", "Value=asc", ENDITEM, 
		"Name=start", "Value=0", ENDITEM, 
		"Name=length", "Value=50", ENDITEM, 
		"Name=search[value]", "Value=", ENDITEM, 
		"Name=search[regex]", "Value=false", ENDITEM, 
		"Name=callingScreen", "Value=review", ENDITEM, 
		LAST);

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_8", 
		"URL=http://10.100.22.24:8181/signal/stomp/971/me40iv38/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t248.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("7435_22", 
		"URL=http://10.100.22.24:8181/signal/inboxLog/forUser/7435?_=1590390778360", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Snapshot=t249.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_10_SystemView",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("QualitativeReview_11_Logout");

	web_url("discardTempChanges_6", 
		"URL=http://10.100.22.24:8181/signal/viewInstance/discardTempChanges?viewInstance.id=6559", 
		"Resource=0", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Snapshot=t250.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index", 
		"URL=http://10.100.22.24:8181/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.100.22.24:8181/signal/singleCaseAlert/details?callingScreen=review&configId=17&viewId=6559", 
		"Snapshot=t251.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("QualitativeReview_11_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}