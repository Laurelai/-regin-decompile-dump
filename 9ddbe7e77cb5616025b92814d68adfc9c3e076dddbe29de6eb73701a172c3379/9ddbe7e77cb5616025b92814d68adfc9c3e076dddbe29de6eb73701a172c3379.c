void IoGetConfigurationInformation;
void KeInitializeEvent;
char IoReportResourceUsage[0] = "r\xffffff91";
char IoConnectInterrupt[0] = "T\xffffff95";
void KeInitializeSpinLock;
char KeInitializeSemaphore[0] = "<\xffffff95";
char memset[0] = "\xffffffa2\xffffff91";
char DbgBreakPoint[0] = "\xffffff8a\xffffff95";
char READ_PORT_UCHAR[0] = "\xffffff8a\xffffff96";
void WRITE_PORT_UCHAR;
char ExFreePool[0] = "d\xffffff91";
char IoQueryDeviceDescription[0] = "V\xffffff93";
void ExAllocatePoolWithTag;
char KeResetEvent[0] = "\xffffff9a\xffffff92";
char global10[1];
char global9[1];
char global12[1];
char KeWaitForSingleObject[0] = "\xffffff82\xffffff92";
char global15[1];
char global14[1];
char KeInitializeDpc[0] = "\xffffff84\xffffff93";
char RtlFreeUnicodeString[0] = "\xffffffae\xffffff93";
char IoCreateSynchronizationEvent[0] = "j\xffffff95";
char RtlAnsiStringToUnicodeString[0] = "\xffffffd8\xffffff93";
char RtlInitString[0] = "\xfffffff8\xffffff93";
void sprintf;
void RtlInitUnicodeString;
int global27 = 0;

__imp_memset(int param1, int param2, int param3);
void __imp_DbgBreakPoint();
proc3(int param1, int param2, int param3, int param4);
proc4(int param3, int param2, int param4, int param6, int param7, int param5, int param11, int param8, int param1, int param9, int param10);
proc5(int param5, int param1, int param2, int param3, int param4);
proc6(int param3, int param2, int param1, int param4);
proc7(int param4, int param2, int param1, int param3);
proc8(int param4, int param2, int param1, int param3);
proc9(int param6, int param2, int param3, int param1, int param4, int param5);
proc10(int param4, int param6, int param7, int param2, int param1, int param3, int param5);
proc11(int param5, int param2, int param7, int param3, int param1, int param4, int param6, int param8);
proc12(int param4, int param7, int param2, int param8, int param3, int param1, int param5, int param6, int param9);

// address: 0x18a88
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
    int local0; 		// r28{579}
    int local1; 		// r28{543}
    int local10; 		// r28{458}
    int local100; 		// m[r28 - 44]{826}
    int local1000; 		// m[r29 - 28]{51}
    int local1001; 		// m[r29 - 108]{51}
    int local1002; 		// m[r29 - 112]{51}
    int local1003; 		// m[r29 - 116]{51}
    int local1004; 		// m[r29 - 120]{51}
    int local1005; 		// m[r29 - 124]{51}
    int local1006; 		// m[r29 - 128]{51}
    int local1007; 		// m[r29 - 136]{51}
    int local1008; 		// m[r29 - 140]{51}
    int local1009; 		// m[r29 - 144]{51}
    int local101; 		// m[r28 - 48]{827}
    int local1010; 		// m[r29 - 148]{51}
    int local1011; 		// m[r29 - 152]{51}
    int local1012; 		// m[r29 - 156]{51}
    int local1013; 		// m[r24]{51}
    int local1014;
    int local1015; 		// m[r28]{51}
    int local1016; 		// m[r31]{51}
    void *local1017; 		// %pc{51}
    int local1018; 		// %flags{51}
    int local1019; 		// %CF{51}
    int local102; 		// m[r28 - 52]{828}
    void *local1020; 		// m[r28 - 12]{60}
    int local1021; 		// m[r28 - 8]{57}
    int local1022; 		// m[r28 - 4]{52}
    int local1023; 		// r2{40}
    int local1024; 		// r9{40}
    int local1025; 		// r10{40}
    int local1026; 		// r29{40}
    int local1027; 		// r30{40}
    int local1028; 		// r31{40}
    int local1029; 		// m[r24 + 8]{40}
    int local103;
    int local1030;
    int local1031;
    int local1032;
    int local1033;
    int local1034;
    int local1035;
    int local1036;
    int local1037;
    int local1038; 		// m[r28 + 4]{40}
    int local1039; 		// m[r28 + 8]{40}
    int local104; 		// m[r28 - 8]{830}
    int local1040; 		// m[r28 + 12]{40}
    int local1041; 		// m[r28 + 16]{40}
    int local1042; 		// m[r28 + 20]{40}
    int local1043; 		// m[r28 + 24]{40}
    int local1044; 		// m[r28 + 28]{40}
    int local1045; 		// m[r28 + 32]{40}
    int local1046;
    int local1047; 		// m[r29 + 12]{40}
    int local1048; 		// m[r30 + 56]{40}
    int local1049; 		// m[r30 + 64]{40}
    int local105; 		// m[r28 - 12]{831}
    int local1050; 		// m[r30 + 68]{40}
    int local1051; 		// m[r30 + 72]{40}
    int local1052; 		// m[r30 + 112]{40}
    int local1053;
    int local1054; 		// m[r28 - 9]{40}
    int local1055;
    int local1056;
    int local1057;
    int local1058;
    int local1059;
    int local106;
    int local1060; 		// m[r28 - 80]{40}
    int local1061; 		// m[r28 - 168]{40}
    int local1062; 		// m[r28 - 172]{40}
    int local1063; 		// m[r28 - 176]{40}
    int local1064; 		// m[r28 - 180]{40}
    int local1065; 		// m[r28 - 184]{40}
    int local1066; 		// m[r28 - 188]{40}
    int local1067;
    int local1068;
    int local1069;
    int local107; 		// m[r28 - 8]{833}
    int local1070;
    int local1071;
    int local1072;
    int local1073;
    int local1074;
    int local1075;
    int local1076;
    int local1077;
    int local1078;
    int local1079;
    int local108; 		// m[r28 - 12]{834}
    int local1080;
    int local1081;
    int local1082;
    int local1083;
    int local1084;
    int local1085;
    int local1086;
    int local1087;
    int local1088;
    int local1089;
    int local109;
    int local1090;
    int local1091;
    int local1092;
    int local1093;
    int local1094;
    int local1095;
    int local1096;
    int local1097;
    int local1098;
    int local1099;
    int local11; 		// m[r29 - 4]{1026}
    int local110; 		// m[r28 - 8]{836}
    int local1100; 		// m[r28 - 36]{40}
    int local1101; 		// m[r28 - 40]{40}
    int local1102; 		// m[r28 - 44]{40}
    int local1103; 		// m[r28 - 48]{40}
    int local1104; 		// m[r28 - 52]{40}
    int local1105;
    int local1106;
    int local1107;
    int local1108;
    int local1109;
    int local111; 		// m[r28 - 12]{837}
    int local1110;
    int local1111;
    int local1112;
    int local1113;
    int local1114;
    int local1115;
    int local1116;
    int local1117; 		// m[r28 - 28]{40}
    int local1118; 		// m[r28 - 32]{40}
    int local1119;
    int local112;
    int local1120;
    int local1121; 		// m[r28 - 4]{40}
    int local1122; 		// m[r28 - 8]{40}
    int local1123; 		// m[r28 - 12]{40}
    int local1124; 		// m[r28 - 16]{40}
    int local1125; 		// m[r28 - 20]{40}
    int local1126; 		// m[r28 - 24]{40}
    int local1127;
    int local1128; 		// m[r29 - 5]{40}
    int local1129;
    int local113;
    int local1130;
    int local1131; 		// m[r29 - 40]{40}
    int local1132;
    int local1133;
    int local1134;
    int local1135; 		// m[r29 - 24]{40}
    int local1136; 		// m[r29 - 32]{40}
    int local1137;
    int local1138;
    int local1139;
    int local114;
    int local1140;
    int local1141;
    int local1142;
    int local1143;
    int local1144;
    int local1145;
    int local1146;
    int local1147;
    int local1148;
    int local1149; 		// m[r29 - 4]{40}
    int local115;
    int local1150; 		// m[r29 - 12]{40}
    int local1151;
    int local1152; 		// m[r29 - 16]{40}
    int local1153; 		// m[r29 - 28]{40}
    int local1154; 		// m[r29 - 108]{40}
    int local1155; 		// m[r29 - 112]{40}
    int local1156; 		// m[r29 - 116]{40}
    int local1157; 		// m[r29 - 120]{40}
    int local1158; 		// m[r29 - 124]{40}
    int local1159; 		// m[r29 - 128]{40}
    int local116; 		// m[r28 - 24]{235}
    int local1160; 		// m[r29 - 136]{40}
    int local1161; 		// m[r29 - 140]{40}
    int local1162; 		// m[r29 - 144]{40}
    int local1163; 		// m[r29 - 148]{40}
    int local1164; 		// m[r29 - 152]{40}
    int local1165; 		// m[r29 - 156]{40}
    int local1166; 		// m[r24]{40}
    int local1167;
    int local1168; 		// m[r28]{40}
    int local1169; 		// m[r31]{40}
    int local117; 		// m[r28 - 4]{235}
    void *local1170; 		// %pc{40}
    int local1171; 		// %flags{40}
    int local1172; 		// %CF{40}
    void *local1173; 		// m[r28 - 12]{49}
    int local1174; 		// m[r28 - 8]{46}
    int local1175; 		// m[r28 - 4]{41}
    int local1176; 		// r31{242}
    int local1177; 		// m[r28 - 188]{38}
    void *local1178; 		// %pc{318}
    int local1179; 		// m[r28 - 20]{36}
    int local118; 		// m[r28 - 8]{235}
    int local1180; 		// m[r28 - 32]{35}
    int local1181; 		// m[r28 - 28]{34}
    int local1182; 		// m[r28 - 36]{33}
    int local1183; 		// m[r28 - 80]{32}
    int local1184; 		// m[r28 - 24]{31}
    char local1185; 		// m[r28 - 9]{30}
    int local1186; 		// m[r28 - 184]{28}
    int local1187; 		// m[r28 - 180]{20}
    int local1188; 		// m[r28 - 176]{13}
    int local1189; 		// m[r28 - 172]{10}
    int local119; 		// m[r28 - 12]{235}
    int local1190; 		// m[r28 - 168]{8}
    int local1191; 		// m[r28 - 4]{2}
    int local1192; 		// m[r29 - 4]{499}
    int local1193; 		// local709{769}
    int local1194; 		// local473{770}
    int local1195; 		// local474{771}
    int local1196; 		// local26{608}
    int local1197; 		// local146{612}
    int local1198; 		// local46{613}
    int local1199; 		// local47{614}
    int local12; 		// m[0x14170]{663}
    int local120; 		// m[r28 - 16]{235}
    void *local1200; 		// local145{621}
    int local1201; 		// local49{773}
    int local1202; 		// local50{774}
    int local1203; 		// local151{775}
    int local1204; 		// local52{776}
    int local1205; 		// local53{777}
    int local1206; 		// local54{778}
    int local1207; 		// local55{779}
    int local1208; 		// local56{780}
    int local1209; 		// local57{781}
    int local121; 		// m[r28 - 20]{235}
    int local1210; 		// local58{782}
    int local1211; 		// local152{783}
    int local1212; 		// local60{784}
    int local1213; 		// local61{785}
    int local1214; 		// local62{786}
    int local1215; 		// local63{787}
    int local1216; 		// local64{788}
    int local1217; 		// local160{796}
    int local1218; 		// local73{797}
    int local1219; 		// local74{798}
    int local122; 		// m[r29 - 5]{318}
    int local1220; 		// local75{799}
    int local1221; 		// local76{800}
    int local1222; 		// local77{801}
    int local1223; 		// local78{802}
    int local1224; 		// local79{803}
    int local1225; 		// local80{804}
    int local1226; 		// local81{805}
    int local1227; 		// local82{806}
    int local1228; 		// local83{807}
    int local1229; 		// local84{808}
    int local123; 		// m[r29 - 4]{318}
    int local1230; 		// local85{809}
    int local1231; 		// local86{810}
    int local1232; 		// local87{811}
    int local1233; 		// local161{812}
    int local1234; 		// local89{813}
    int local1235; 		// local90{814}
    int local1236; 		// local91{815}
    int local1237; 		// local92{816}
    int local1238; 		// local93{817}
    int local1239; 		// local94{818}
    int local124; 		// m[r29 - 16]{318}
    int local1240; 		// local162{819}
    int local1241; 		// local95{820}
    int local1242; 		// local96{821}
    int local1243; 		// local163{822}
    int local1244; 		// local97{823}
    int local1245; 		// local98{824}
    int local1246; 		// local164{825}
    int local1247; 		// local100{826}
    int local1248; 		// local101{827}
    int local1249; 		// local102{828}
    int local125; 		// m[r29 - 40]{842}
    int local1250; 		// local165{829}
    int local1251; 		// local104{830}
    int local1252; 		// local105{831}
    int local1253; 		// local166{832}
    int local1254; 		// local107{833}
    int local1255; 		// local108{834}
    int local1256; 		// local167{835}
    int local1257; 		// local110{836}
    int local1258; 		// local111{837}
    int local1259; 		// local125{842}
    int local126; 		// m[r29 - 24]{235}
    int local1260; 		// local172{843}
    int local1261; 		// local173{844}
    int local1262; 		// local174{845}
    int local1263; 		// local175{846}
    int local1264; 		// local176{847}
    int local1265; 		// local177{848}
    int local1266; 		// local178{849}
    int local1267; 		// local179{850}
    int local1268; 		// local180{851}
    int local1269; 		// local181{852}
    int local127; 		// m[r29 - 32]{235}
    int local1270; 		// local182{853}
    int local1271; 		// local183{854}
    int local1272; 		// local184{855}
    int local1273; 		// local185{856}
    int local1274; 		// local186{857}
    int local1275; 		// local187{858}
    int local1276; 		// local188{859}
    int local1277; 		// local189{860}
    int local1278; 		// local190{861}
    int local1279; 		// local143{864}
    int local128; 		// m[r29 - 108]{235}
    int local1280; 		// local193{865}
    int local1281; 		// r2{626}
    int local1282; 		// r9{628}
    int local1283; 		// r10{629}
    int local1284; 		// r28{635}
    int local1285; 		// local44{636}
    int local1286; 		// r30{637}
    int local1287; 		// global27{639}
    void *local1288; 		// %pc{644}
    int local1289; 		// local24{932}
    int local129; 		// m[r29 - 112]{235}
    int local1290; 		// r2{649}
    int local1291; 		// r9{651}
    int local1292; 		// r10{652}
    int local1293; 		// local33{658}
    int local1294; 		// local45{659}
    int local1295; 		// r30{660}
    int local1296; 		// global27{662}
    void *local1297; 		// %pc{667}
    int local1298; 		// local11{1026}
    int local1299; 		// r2{675}
    int local13; 		// r28{441}
    int local130; 		// m[r29 - 116]{235}
    int local1300; 		// r9{677}
    int local1301; 		// r10{678}
    int local1302; 		// local34{684}
    int local1303; 		// r29{685}
    int local1304; 		// r30{686}
    int local1305; 		// r31{687}
    int local1306; 		// global27{688}
    int local1307; 		// %pc{693}
    int local1308; 		// local8{1120}
    int local1309; 		// r29{713}
    int local131; 		// m[r29 - 120]{235}
    int local1310; 		// r30{714}
    int local1311; 		// r29{733}
    int local1312; 		// local35{745}
    int local1313; 		// r28{752}
    int local1314; 		// r28{763}
    short local1315; 		// r0
    short local1316; 		// r2
    short local1317; 		// r7
    short local1318; 		// r8
    short local1319; 		// r9
    int local132; 		// m[r29 - 124]{235}
    short local1320; 		// r10
    short local1321; 		// r11
    short local1322; 		// r24
    short local1323; 		// r25
    short local1324; 		// r26
    short local1325; 		// r27
    short local1326; 		// r28
    short local1327; 		// r29
    short local1328; 		// r30
    short local1329; 		// r31
    int local133; 		// m[r29 - 128]{235}
    int local134; 		// m[r29 - 136]{235}
    int local135; 		// m[r29 - 140]{235}
    int local136; 		// m[r29 - 144]{235}
    int local137; 		// m[r29 - 148]{235}
    int local138; 		// m[r29 - 152]{235}
    int local139; 		// m[r29 - 156]{235}
    int local14; 		// r28{389}
    int local140; 		// m[r29 - 4]{235}
    int local141; 		// m[r29 - 12]{235}
    int local142; 		// m[r24]{318}
    int local143; 		// m[r28]{864}
    int local144; 		// m[r28]{235}
    void *local145; 		// %pc{621}
    int local146; 		// r28{612}
    int local147; 		// r2{603}
    int local148; 		// r9{605}
    int local149; 		// r10{606}
    int local15; 		// r24{369}
    int local150; 		// m[r24 + 8]{772}
    int local151; 		// m[r28 + 12]{775}
    int local152; 		// m[r28 + 12]{783}
    int local153; 		// m[r29 + 12]{789}
    int local154; 		// m[r29 + 12]{790}
    int local155; 		// m[r30 + 56]{791}
    int local156; 		// m[r30 + 64]{792}
    int local157; 		// m[r30 + 68]{793}
    int local158; 		// m[r30 + 72]{794}
    int local159; 		// m[r30 + 112]{795}
    int local16; 		// r28{368}
    int local160; 		// m[r28 - 4]{796}
    int local161; 		// m[r28 - 12]{812}
    int local162; 		// m[r28 - 16]{819}
    int local163; 		// m[r28 - 28]{822}
    int local164; 		// m[r28 - 40]{825}
    int local165; 		// m[r28 - 4]{829}
    int local166; 		// m[r28 - 4]{832}
    int local167; 		// m[r28 - 4]{835}
    int local168; 		// m[r29 - 4]{838}
    int local169; 		// m[r29 - 5]{839}
    int local17; 		// r28{355}
    int local170; 		// m[r29 - 4]{840}
    int local171; 		// m[r29 - 16]{841}
    int local172; 		// m[r29 - 148]{843}
    int local173; 		// m[r29 - 152]{844}
    int local174; 		// m[r29 - 156]{845}
    int local175; 		// m[r29 - 24]{846}
    int local176; 		// m[r29 - 32]{847}
    int local177; 		// m[r29 - 108]{848}
    int local178; 		// m[r29 - 112]{849}
    int local179; 		// m[r29 - 116]{850}
    int local18; 		// m[r28 - 24]{350}
    int local180; 		// m[r29 - 120]{851}
    int local181; 		// m[r29 - 124]{852}
    int local182; 		// m[r29 - 128]{853}
    int local183; 		// m[r29 - 136]{854}
    int local184; 		// m[r29 - 140]{855}
    int local185; 		// m[r29 - 144]{856}
    int local186; 		// m[r29 - 148]{857}
    int local187; 		// m[r29 - 152]{858}
    int local188; 		// m[r29 - 156]{859}
    int local189; 		// m[r29 - 4]{860}
    int local19; 		// m[r28 - 20]{348}
    int local190; 		// m[r29 - 12]{861}
    int local191; 		// m[r29 - 16]{862}
    int local192; 		// m[r24]{863}
    int local193; 		// m[r28]{865}
    int local194; 		// global27{616}
    int local195; 		// r29{492}
    int local196;
    int local197; 		// r30{492}
    int local198; 		// global27{318}
    int local199;
    int local2; 		// m[r29 - 5]{689}
    int local20; 		// r28{337}
    int local200; 		// r24{293}
    int local201; 		// r28{293}
    int local202; 		// r30{293}
    int local203;
    int local204;
    int local205;
    int local206;
    int local207;
    int local208;
    int local209;
    int local21; 		// m[r28 - 12]{332}
    int local210;
    int local211; 		// m[r28 + 4]{293}
    int local212; 		// m[r28 + 8]{293}
    int local213; 		// m[r28 + 12]{293}
    int local214; 		// m[r28 + 16]{293}
    int local215; 		// m[r28 + 20]{293}
    int local216; 		// m[r28 + 24]{293}
    int local217; 		// m[r28 + 28]{293}
    int local218; 		// m[r28 + 32]{293}
    int local219;
    int local22; 		// m[r28 - 8]{330}
    int local220; 		// m[r28 - 9]{293}
    int local221;
    int local222;
    int local223;
    int local224;
    int local225;
    int local226; 		// m[r28 - 80]{293}
    int local227; 		// m[r28 - 168]{293}
    int local228; 		// m[r28 - 172]{293}
    int local229; 		// m[r28 - 176]{293}
    int local23; 		// m[r28 - 4]{325}
    int local230; 		// m[r28 - 180]{293}
    int local231; 		// m[r28 - 184]{293}
    int local232; 		// m[r28 - 188]{293}
    int local233;
    int local234;
    int local235;
    int local236;
    int local237;
    int local238;
    int local239;
    int local24; 		// m[r29 - 4]{932}
    int local240;
    int local241;
    int local242; 		// m[r28 - 16]{293}
    int local243; 		// m[r28 - 20]{293}
    int local244; 		// m[r28 - 24]{293}
    int local245; 		// m[r28 - 28]{293}
    int local246; 		// m[r28 - 32]{293}
    int local247; 		// m[r28 - 36]{293}
    int local248; 		// m[r28 - 40]{293}
    int local249; 		// m[r28 - 44]{293}
    int local25;
    int local250; 		// m[r28 - 48]{293}
    int local251; 		// m[r28 - 52]{293}
    int local252;
    int local253;
    int local254;
    int local255;
    int local256;
    int local257;
    int local258; 		// m[r28 - 4]{293}
    int local259; 		// m[r28 - 8]{293}
    int local26; 		// r24{608}
    int local260; 		// m[r28 - 12]{293}
    int local261; 		// m[r29 - 40]{293}
    int local262;
    int local263;
    int local264;
    int local265; 		// m[r29 - 24]{293}
    int local266; 		// m[r29 - 32]{293}
    int local267; 		// m[r29 - 108]{293}
    int local268; 		// m[r29 - 112]{293}
    int local269; 		// m[r29 - 116]{293}
    int local27; 		// r28{235}
    int local270; 		// m[r29 - 120]{293}
    int local271; 		// m[r29 - 124]{293}
    int local272; 		// m[r29 - 128]{293}
    int local273; 		// m[r29 - 136]{293}
    int local274; 		// m[r29 - 140]{293}
    int local275; 		// m[r29 - 144]{293}
    int local276; 		// m[r29 - 148]{293}
    int local277; 		// m[r29 - 152]{293}
    int local278; 		// m[r29 - 156]{293}
    int local279; 		// m[r29 - 4]{293}
    int local28; 		// r28{144}
    int local280; 		// m[r29 - 12]{293}
    int local281;
    int local282; 		// m[r28]{293}
    void *local283; 		// %pc{293}
    int local284; 		// r2{293}
    int local285; 		// r9{293}
    int local286; 		// r10{293}
    int local287; 		// r2{235}
    int local288; 		// r9{235}
    int local289; 		// r10{235}
    int local29; 		// r28{73}
    int local290; 		// r24{270}
    int local291; 		// r30{235}
    int local292; 		// m[r24 + 8]{235}
    int local293; 		// m[r28 + 4]{235}
    int local294; 		// m[r28 + 8]{235}
    int local295; 		// m[r28 + 16]{235}
    int local296; 		// m[r28 + 20]{235}
    int local297; 		// m[r28 + 24]{235}
    int local298; 		// m[r28 + 28]{235}
    int local299; 		// m[r28 + 32]{235}
    int local3; 		// m[r28 - 20]{487}
    int local30; 		// r28{62}
    int local300;
    int local301; 		// m[r29 + 12]{235}
    int local302; 		// m[r30 + 56]{235}
    int local303; 		// m[r30 + 64]{235}
    int local304; 		// m[r30 + 68]{235}
    int local305; 		// m[r30 + 72]{235}
    int local306; 		// m[r30 + 112]{235}
    int local307; 		// m[r28 - 9]{235}
    int local308;
    int local309;
    int local31; 		// r28{51}
    int local310;
    int local311;
    int local312;
    int local313; 		// m[r28 - 80]{235}
    int local314; 		// m[r28 - 168]{235}
    int local315; 		// m[r28 - 172]{235}
    int local316; 		// m[r28 - 176]{235}
    int local317; 		// m[r28 - 180]{235}
    int local318; 		// m[r28 - 184]{235}
    int local319; 		// m[r28 - 188]{235}
    int local32; 		// r28{40}
    int local320;
    int local321;
    int local322;
    int local323;
    int local324;
    int local325;
    int local326;
    int local327;
    int local328;
    int local329;
    int local33; 		// r28{658}
    int local330;
    int local331; 		// m[r28 - 28]{235}
    int local332; 		// m[r28 - 32]{235}
    int local333; 		// m[r28 - 36]{235}
    int local334; 		// m[r28 - 44]{235}
    int local335; 		// m[r28 - 48]{235}
    int local336; 		// m[r28 - 52]{235}
    int local337;
    int local338;
    int local339;
    int local34; 		// r28{684}
    int local340;
    int local341;
    int local342;
    int local343;
    int local344; 		// m[r29 - 5]{235}
    int local345;
    int local346;
    int local347; 		// m[r29 - 40]{235}
    int local348; 		// m[r29 - 16]{235}
    int local349; 		// m[r24]{235}
    int local35; 		// r28{745}
    int local350; 		// m[0x140bc]{235}
    int local351; 		// m[r28]{291}
    int local352; 		// m[r28 + 4]{288}
    int local353; 		// m[r28 + 8]{286}
    int local354; 		// m[r28 + 12]{284}
    int local355; 		// r24{276}
    int local356; 		// r28{270}
    int local357;
    int local358;
    void *local359; 		// m[r28 + 12]{268}
    int local36; 		// r28{732}
    int local360; 		// m[r28 + 16]{264}
    int local361; 		// m[r28 + 20]{261}
    int local362; 		// m[r28 + 24]{259}
    int local363; 		// m[r28 + 28]{253}
    int local364; 		// m[r28 + 32]{248}
    int local365; 		// m[r29 - 40]{241}
    int local366; 		// m[r29 - 148]{255}
    int local367; 		// m[r29 - 152]{266}
    int local368; 		// m[r29 - 156]{263}
    int local369;
    int local37; 		// r28{712}
    int local370; 		// %pc{269}
    int local371; 		// global27{235}
    void *local372; 		// %pc{235}
    int local373; 		// r2{144}
    int local374; 		// r9{144}
    int local375; 		// r10{144}
    int local376; 		// r24{223}
    int local377; 		// r24{194}
    int local378; 		// r31{144}
    int local379; 		// m[r24 + 8]{144}
    int local38; 		// r29{467}
    int local380; 		// m[r28 + 4]{144}
    int local381; 		// m[r28 + 8]{144}
    int local382;
    int local383; 		// m[r28 + 16]{144}
    int local384; 		// m[r28 + 20]{144}
    int local385; 		// m[r28 + 24]{144}
    int local386; 		// m[r28 + 28]{144}
    int local387; 		// m[r28 + 32]{144}
    int local388; 		// m[r28 + 12]{144}
    int local389;
    int local39; 		// r29{293}
    int local390; 		// m[r29 + 12]{144}
    int local391; 		// m[r30 + 56]{144}
    int local392; 		// m[r30 + 64]{144}
    int local393; 		// m[r30 + 68]{144}
    int local394; 		// m[r30 + 72]{144}
    int local395; 		// m[r30 + 112]{144}
    int local396;
    int local397; 		// m[r28 - 9]{144}
    int local398;
    int local399;
    int local4; 		// m[r28 - 16]{485}
    int local40; 		// r29{235}
    int local400;
    int local401;
    int local402;
    int local403; 		// m[r28 - 80]{144}
    int local404; 		// m[r28 - 168]{144}
    int local405; 		// m[r28 - 172]{144}
    int local406; 		// m[r28 - 176]{144}
    int local407; 		// m[r28 - 180]{144}
    int local408; 		// m[r28 - 184]{144}
    int local409; 		// m[r28 - 188]{144}
    int local41; 		// r29{144}
    int local410;
    int local411;
    int local412;
    int local413;
    int local414;
    int local415;
    int local416;
    int local417;
    int local418;
    int local419;
    int local42; 		// r29{73}
    int local420;
    int local421;
    int local422;
    int local423;
    int local424;
    int local425;
    int local426;
    int local427;
    int local428;
    int local429;
    int local43; 		// r29{318}
    int local430;
    int local431;
    int local432;
    int local433;
    int local434;
    int local435;
    int local436;
    int local437;
    int local438; 		// m[r28 - 36]{144}
    int local439; 		// m[r28 - 40]{144}
    int local44; 		// r29{636}
    int local440; 		// m[r28 - 44]{144}
    int local441; 		// m[r28 - 48]{144}
    int local442; 		// m[r28 - 52]{144}
    int local443;
    int local444;
    int local445;
    int local446;
    int local447;
    int local448;
    int local449;
    int local45; 		// r29{659}
    int local450;
    int local451;
    int local452;
    int local453;
    int local454;
    int local455; 		// m[r28 - 28]{144}
    int local456; 		// m[r28 - 32]{144}
    int local457;
    int local458;
    int local459; 		// m[r28 - 4]{144}
    int local46; 		// r29{613}
    int local460; 		// m[r28 - 8]{144}
    int local461; 		// m[r28 - 12]{144}
    int local462; 		// m[r28 - 16]{144}
    int local463; 		// m[r28 - 20]{144}
    int local464; 		// m[r28 - 24]{144}
    int local465;
    int local466; 		// m[r29 - 5]{144}
    int local467;
    int local468;
    int local469; 		// m[r29 - 40]{144}
    int local47; 		// r30{614}
    int local470;
    int local471;
    int local472;
    int local473; 		// m[r29 - 24]{770}
    int local474; 		// m[r29 - 32]{771}
    int local475; 		// m[r29 - 4]{144}
    int local476; 		// m[r29 - 12]{144}
    int local477;
    int local478; 		// m[r29 - 16]{144}
    int local479; 		// m[r29 - 28]{144}
    int local48; 		// m[r24 + 8]{318}
    int local480; 		// m[r29 - 108]{144}
    int local481; 		// m[r29 - 112]{144}
    int local482; 		// m[r29 - 116]{144}
    int local483; 		// m[r29 - 120]{144}
    int local484; 		// m[r29 - 124]{144}
    int local485; 		// m[r29 - 128]{144}
    int local486; 		// m[r29 - 136]{144}
    int local487; 		// m[r29 - 140]{144}
    int local488; 		// m[r29 - 144]{144}
    int local489; 		// m[r29 - 148]{144}
    int local49; 		// m[r28 + 4]{773}
    int local490; 		// m[r29 - 152]{144}
    int local491; 		// m[r29 - 156]{144}
    int local492; 		// m[r24]{144}
    int local493;
    int local494; 		// m[r28]{144}
    int local495; 		// m[0x140bc]{144}
    int local496; 		// m[r28 - 24]{233}
    int local497; 		// m[r28 - 20]{230}
    int local498; 		// m[r28 - 16]{228}
    int local499; 		// m[r28 - 12]{226}
    int local5; 		// m[r28 - 12]{483}
    int local50; 		// m[r28 + 8]{774}
    int local500; 		// r24{222}
    int local501; 		// r28{222}
    int local502; 		// m[r28 - 12]{220}
    int local503; 		// m[r28 - 8]{217}
    int local504; 		// m[r28 - 4]{215}
    int local505; 		// m[r28]{213}
    int local506; 		// r24{212}
    int local507; 		// r28{212}
    int local508; 		// m[r28]{210}
    int local509; 		// m[r28 + 4]{207}
    int local51;
    int local510; 		// m[r28 + 8]{205}
    int local511; 		// m[r28 + 12]{200}
    int local512; 		// m[r29 - 24]{198}
    int local513; 		// m[r29 - 32]{199}
    int local514; 		// m[r29 - 24]{144}
    int local515; 		// m[r29 - 32]{144}
    int local516; 		// r28{194}
    void *local517; 		// m[r28 + 12]{192}
    void *local518; 		// %pc{144}
    int local519; 		// m[r29 - 108]{190}
    int local52; 		// m[r28 + 16]{776}
    int local520; 		// m[r29 - 116]{189}
    int local521; 		// m[r29 - 124]{188}
    int local522; 		// m[r29 - 136]{187}
    int local523; 		// m[r29 - 140]{186}
    int local524; 		// m[r29 - 144]{185}
    int local525; 		// m[r28 + 16]{183}
    int local526; 		// m[r29 - 152]{182}
    int local527; 		// m[r28 + 20]{180}
    int local528; 		// m[r28 + 24]{178}
    int local529; 		// m[r29 - 112]{174}
    int local53; 		// m[r28 + 20]{777}
    int local530; 		// m[r28 + 28]{172}
    int local531; 		// m[r28 + 32]{167}
    int local532; 		// m[r29 - 120]{166}
    int local533; 		// m[r29 - 148]{161}
    int local534; 		// m[r29 - 128]{159}
    int local535; 		// m[r29 - 156]{158}
    int local536; 		// m[r28 + 32]{154}
    int local537; 		// m[r28 + 32]{148}
    int local538; 		// r2{73}
    int local539; 		// r9{73}
    int local54; 		// m[r28 + 24]{778}
    int local540; 		// r10{73}
    int local541; 		// r24{131}
    int local542; 		// r24{102}
    int local543; 		// r25{130}
    int local544; 		// r31{73}
    int local545; 		// m[r24 + 8]{73}
    int local546;
    int local547;
    int local548;
    int local549;
    int local55; 		// m[r28 + 28]{779}
    int local550;
    int local551;
    int local552;
    int local553;
    int local554; 		// m[r28 + 4]{73}
    int local555; 		// m[r28 + 8]{73}
    int local556; 		// m[r28 + 12]{73}
    int local557; 		// m[r28 + 16]{73}
    int local558; 		// m[r28 + 20]{73}
    int local559; 		// m[r28 + 24]{73}
    int local56; 		// m[r28 + 32]{780}
    int local560; 		// m[r28 + 28]{73}
    int local561; 		// m[r28 + 32]{73}
    int local562;
    int local563; 		// m[r29 + 12]{73}
    int local564; 		// m[r30 + 56]{73}
    int local565; 		// m[r30 + 64]{73}
    int local566; 		// m[r30 + 68]{73}
    int local567; 		// m[r30 + 72]{73}
    int local568; 		// m[r30 + 112]{73}
    int local569;
    int local57; 		// m[r28 + 4]{781}
    int local570; 		// m[r28 - 9]{73}
    int local571;
    int local572;
    int local573;
    int local574;
    int local575;
    int local576; 		// m[r28 - 80]{73}
    int local577; 		// m[r28 - 168]{73}
    int local578; 		// m[r28 - 172]{73}
    int local579; 		// m[r28 - 176]{73}
    int local58; 		// m[r28 + 8]{782}
    int local580; 		// m[r28 - 180]{73}
    int local581; 		// m[r28 - 184]{73}
    int local582; 		// m[r28 - 188]{73}
    int local583;
    int local584;
    int local585;
    int local586;
    int local587;
    int local588;
    int local589;
    int local59; 		// m[r28 + 12]{235}
    int local590;
    int local591;
    int local592;
    int local593;
    int local594;
    int local595;
    int local596;
    int local597;
    int local598;
    int local599;
    int local6; 		// m[r28 - 8]{481}
    int local60; 		// m[r28 + 16]{784}
    int local600;
    int local601;
    int local602;
    int local603;
    int local604;
    int local605;
    int local606; 		// m[r28 - 36]{73}
    int local607; 		// m[r28 - 40]{73}
    int local608; 		// m[r28 - 44]{73}
    int local609; 		// m[r28 - 48]{73}
    int local61; 		// m[r28 + 20]{785}
    int local610; 		// m[r28 - 52]{73}
    int local611;
    int local612;
    int local613;
    int local614;
    int local615;
    int local616;
    int local617;
    int local618;
    int local619;
    int local62; 		// m[r28 + 24]{786}
    int local620;
    int local621;
    int local622;
    int local623; 		// m[r28 - 28]{73}
    int local624; 		// m[r28 - 32]{73}
    int local625;
    int local626;
    int local627; 		// m[r28 - 4]{73}
    int local628; 		// m[r28 - 8]{73}
    int local629; 		// m[r28 - 12]{73}
    int local63; 		// m[r28 + 28]{787}
    int local630; 		// m[r28 - 16]{73}
    int local631; 		// m[r28 - 20]{73}
    int local632; 		// m[r28 - 24]{73}
    int local633;
    int local634; 		// m[r29 - 5]{73}
    int local635; 		// m[r29 - 4]{73}
    int local636;
    int local637; 		// m[r29 - 40]{73}
    int local638;
    int local639;
    int local64; 		// m[r28 + 32]{788}
    int local640;
    int local641; 		// m[r29 - 24]{73}
    int local642; 		// m[r29 - 32]{73}
    int local643;
    int local644;
    int local645;
    int local646;
    int local647;
    int local648;
    int local649;
    int local65;
    int local650;
    int local651;
    int local652;
    int local653;
    int local654;
    int local655;
    int local656; 		// m[r29 - 16]{73}
    int local657; 		// m[r29 - 28]{73}
    int local658; 		// m[r29 - 108]{73}
    int local659; 		// m[r29 - 112]{73}
    int local66; 		// m[r29 + 12]{318}
    int local660; 		// m[r29 - 116]{73}
    int local661; 		// m[r29 - 120]{73}
    int local662; 		// m[r29 - 124]{73}
    int local663; 		// m[r29 - 128]{73}
    int local664; 		// m[r29 - 136]{73}
    int local665; 		// m[r29 - 140]{73}
    int local666; 		// m[r29 - 144]{73}
    int local667; 		// m[r29 - 148]{73}
    int local668; 		// m[r29 - 152]{73}
    int local669; 		// m[r29 - 156]{73}
    int local67; 		// m[r30 + 56]{318}
    int local670; 		// m[r24]{73}
    int local671;
    int local672; 		// m[r28]{73}
    int local673; 		// m[r31]{73}
    int local674; 		// m[0x140c0]{73}
    int local675; 		// m[0x14168]{73}
    int local676; 		// m[r28 - 52]{142}
    int local677; 		// m[r28 - 48]{138}
    int local678; 		// m[r28 - 44]{136}
    int local679; 		// m[r28 - 40]{134}
    int local68; 		// m[r30 + 64]{318}
    int local680; 		// r24{130}
    int local681; 		// r28{130}
    int local682; 		// m[r28 - 40]{128}
    int local683; 		// m[r28 - 36]{125}
    int local684; 		// m[r28 - 32]{123}
    int local685; 		// m[r28 - 28]{121}
    int local686; 		// r24{120}
    int local687; 		// r25{120}
    int local688; 		// r28{120}
    int local689; 		// m[r28 - 28]{118}
    int local69; 		// m[r30 + 68]{318}
    int local690; 		// m[r28 - 24]{115}
    int local691; 		// m[r28 - 20]{113}
    int local692; 		// m[r28 - 16]{108}
    int local693; 		// r28{102}
    int local694; 		// r30{74}
    int local695; 		// r31{103}
    int local696; 		// m[r28 - 4]{93}
    int local697; 		// m[r28 - 8]{95}
    int local698; 		// m[r28 - 12]{97}
    void *local699; 		// m[r28 - 16]{100}
    int local7; 		// m[r28 - 4]{479}
    int local70; 		// m[r30 + 72]{318}
    int local700;
    int local701;
    int local702;
    int local703;
    int local704;
    int local705;
    int local706;
    int local707;
    int local708;
    int local709; 		// m[r29 - 4]{769}
    int local71; 		// m[r30 + 112]{318}
    int local710; 		// m[r29 - 12]{104}
    int local711; 		// global27{73}
    int local712; 		// %pc{101}
    int local713; 		// r25{102}
    void *local714; 		// %pc{73}
    int local715; 		// m[r29 - 4]{92}
    int local716; 		// r24{80}
    int local717; 		// m[r29 - 4]{88}
    int local718; 		// r24{75}
    int local719; 		// r2{62}
    int local72;
    int local720; 		// r9{62}
    int local721; 		// r10{62}
    int local722; 		// r29{62}
    int local723; 		// r30{62}
    int local724; 		// r31{62}
    int local725; 		// m[r24 + 8]{62}
    int local726;
    int local727;
    int local728;
    int local729;
    int local73; 		// m[r28 - 9]{797}
    int local730;
    int local731;
    int local732;
    int local733;
    int local734; 		// m[r28 + 4]{62}
    int local735; 		// m[r28 + 8]{62}
    int local736; 		// m[r28 + 12]{62}
    int local737; 		// m[r28 + 16]{62}
    int local738; 		// m[r28 + 20]{62}
    int local739; 		// m[r28 + 24]{62}
    int local74; 		// m[r28 - 20]{798}
    int local740; 		// m[r28 + 28]{62}
    int local741; 		// m[r28 + 32]{62}
    int local742;
    int local743; 		// m[r29 + 12]{62}
    int local744; 		// m[r30 + 56]{62}
    int local745; 		// m[r30 + 64]{62}
    int local746; 		// m[r30 + 68]{62}
    int local747; 		// m[r30 + 72]{62}
    int local748; 		// m[r30 + 112]{62}
    int local749;
    int local75; 		// m[r28 - 24]{799}
    int local750; 		// m[r28 - 9]{62}
    int local751;
    int local752;
    int local753;
    int local754;
    int local755;
    int local756; 		// m[r28 - 80]{62}
    int local757; 		// m[r28 - 168]{62}
    int local758; 		// m[r28 - 172]{62}
    int local759; 		// m[r28 - 176]{62}
    int local76; 		// m[r28 - 28]{800}
    int local760; 		// m[r28 - 180]{62}
    int local761; 		// m[r28 - 184]{62}
    int local762; 		// m[r28 - 188]{62}
    int local763;
    int local764;
    int local765;
    int local766;
    int local767;
    int local768;
    int local769;
    int local77; 		// m[r28 - 32]{801}
    int local770;
    int local771;
    int local772;
    int local773;
    int local774;
    int local775;
    int local776;
    int local777;
    int local778;
    int local779;
    int local78; 		// m[r28 - 36]{802}
    int local780;
    int local781;
    int local782;
    int local783;
    int local784;
    int local785;
    int local786;
    int local787;
    int local788;
    int local789;
    int local79; 		// m[r28 - 80]{803}
    int local790;
    int local791;
    int local792;
    int local793;
    int local794;
    int local795;
    int local796; 		// m[r28 - 36]{62}
    int local797; 		// m[r28 - 40]{62}
    int local798; 		// m[r28 - 44]{62}
    int local799; 		// m[r28 - 48]{62}
    int local8; 		// m[r29 - 4]{1120}
    int local80; 		// m[r28 - 168]{804}
    int local800; 		// m[r28 - 52]{62}
    int local801;
    int local802;
    int local803;
    int local804;
    int local805;
    int local806;
    int local807;
    int local808;
    int local809;
    int local81; 		// m[r28 - 172]{805}
    int local810;
    int local811;
    int local812;
    int local813; 		// m[r28 - 28]{62}
    int local814; 		// m[r28 - 32]{62}
    int local815;
    int local816;
    int local817; 		// m[r28 - 4]{62}
    int local818; 		// m[r28 - 8]{62}
    int local819; 		// m[r28 - 12]{62}
    int local82; 		// m[r28 - 176]{806}
    int local820; 		// m[r28 - 16]{62}
    int local821; 		// m[r28 - 20]{62}
    int local822; 		// m[r28 - 24]{62}
    int local823;
    int local824; 		// m[r29 - 5]{62}
    int local825;
    int local826;
    int local827; 		// m[r29 - 40]{62}
    int local828;
    int local829;
    int local83; 		// m[r28 - 180]{807}
    int local830;
    int local831; 		// m[r29 - 24]{62}
    int local832; 		// m[r29 - 32]{62}
    int local833;
    int local834;
    int local835;
    int local836;
    int local837;
    int local838;
    int local839;
    int local84; 		// m[r28 - 184]{808}
    int local840;
    int local841;
    int local842;
    int local843;
    int local844;
    int local845; 		// m[r29 - 4]{62}
    int local846; 		// m[r29 - 12]{62}
    int local847;
    int local848; 		// m[r29 - 16]{62}
    int local849; 		// m[r29 - 28]{62}
    int local85; 		// m[r28 - 188]{809}
    int local850; 		// m[r29 - 108]{62}
    int local851; 		// m[r29 - 112]{62}
    int local852; 		// m[r29 - 116]{62}
    int local853; 		// m[r29 - 120]{62}
    int local854; 		// m[r29 - 124]{62}
    int local855; 		// m[r29 - 128]{62}
    int local856; 		// m[r29 - 136]{62}
    int local857; 		// m[r29 - 140]{62}
    int local858; 		// m[r29 - 144]{62}
    int local859; 		// m[r29 - 148]{62}
    int local86; 		// m[r28 - 4]{810}
    int local860; 		// m[r29 - 152]{62}
    int local861; 		// m[r29 - 156]{62}
    int local862; 		// m[r24]{62}
    int local863;
    int local864; 		// m[r28]{62}
    int local865; 		// m[r31]{62}
    void *local866; 		// %pc{62}
    void *local867; 		// m[r28 - 12]{71}
    int local868; 		// m[r28 - 8]{68}
    int local869; 		// m[r28 - 4]{63}
    int local87; 		// m[r28 - 8]{811}
    int local870; 		// r2{51}
    int local871; 		// r9{51}
    int local872; 		// r10{51}
    int local873; 		// r29{51}
    int local874; 		// r30{51}
    int local875; 		// r31{51}
    int local876; 		// m[r24 + 8]{51}
    int local877;
    int local878;
    int local879;
    int local88;
    int local880;
    int local881;
    int local882;
    int local883;
    int local884;
    int local885; 		// m[r28 + 4]{51}
    int local886; 		// m[r28 + 8]{51}
    int local887; 		// m[r28 + 12]{51}
    int local888; 		// m[r28 + 16]{51}
    int local889; 		// m[r28 + 20]{51}
    int local89; 		// m[r28 - 16]{813}
    int local890; 		// m[r28 + 24]{51}
    int local891; 		// m[r28 + 28]{51}
    int local892; 		// m[r28 + 32]{51}
    int local893;
    int local894; 		// m[r29 + 12]{51}
    int local895; 		// m[r30 + 56]{51}
    int local896; 		// m[r30 + 64]{51}
    int local897; 		// m[r30 + 68]{51}
    int local898; 		// m[r30 + 72]{51}
    int local899; 		// m[r30 + 112]{51}
    int local9; 		// m[r29 - 4]{689}
    int local90; 		// m[r28 - 20]{814}
    int local900;
    int local901; 		// m[r28 - 9]{51}
    int local902;
    int local903;
    int local904;
    int local905;
    int local906;
    int local907; 		// m[r28 - 80]{51}
    int local908; 		// m[r28 - 168]{51}
    int local909; 		// m[r28 - 172]{51}
    int local91; 		// m[r28 - 24]{815}
    int local910; 		// m[r28 - 176]{51}
    int local911; 		// m[r28 - 180]{51}
    int local912; 		// m[r28 - 184]{51}
    int local913; 		// m[r28 - 188]{51}
    int local914;
    int local915;
    int local916;
    int local917;
    int local918;
    int local919;
    int local92; 		// m[r28 - 4]{816}
    int local920;
    int local921;
    int local922;
    int local923;
    int local924;
    int local925;
    int local926;
    int local927;
    int local928;
    int local929;
    int local93; 		// m[r28 - 8]{817}
    int local930;
    int local931;
    int local932;
    int local933;
    int local934;
    int local935;
    int local936;
    int local937;
    int local938;
    int local939;
    int local94; 		// m[r28 - 12]{818}
    int local940;
    int local941;
    int local942;
    int local943;
    int local944;
    int local945;
    int local946;
    int local947; 		// m[r28 - 36]{51}
    int local948; 		// m[r28 - 40]{51}
    int local949; 		// m[r28 - 44]{51}
    int local95; 		// m[r28 - 20]{820}
    int local950; 		// m[r28 - 48]{51}
    int local951; 		// m[r28 - 52]{51}
    int local952;
    int local953;
    int local954;
    int local955;
    int local956;
    int local957;
    int local958;
    int local959;
    int local96; 		// m[r28 - 24]{821}
    int local960;
    int local961;
    int local962;
    int local963;
    int local964; 		// m[r28 - 28]{51}
    int local965; 		// m[r28 - 32]{51}
    int local966;
    int local967;
    int local968; 		// m[r28 - 4]{51}
    int local969; 		// m[r28 - 8]{51}
    int local97; 		// m[r28 - 32]{823}
    int local970; 		// m[r28 - 12]{51}
    int local971; 		// m[r28 - 16]{51}
    int local972; 		// m[r28 - 20]{51}
    int local973; 		// m[r28 - 24]{51}
    int local974;
    int local975; 		// m[r29 - 5]{51}
    int local976;
    int local977;
    int local978; 		// m[r29 - 40]{51}
    int local979;
    int local98; 		// m[r28 - 36]{824}
    int local980;
    int local981;
    int local982; 		// m[r29 - 24]{51}
    int local983; 		// m[r29 - 32]{51}
    int local984;
    int local985;
    int local986;
    int local987;
    int local988;
    int local989;
    int local99; 		// m[r28 - 40]{235}
    int local990;
    int local991;
    int local992;
    int local993;
    int local994;
    int local995;
    int local996; 		// m[r29 - 4]{51}
    int local997; 		// m[r29 - 12]{51}
    int local998;
    int local999; 		// m[r29 - 16]{51}

    local1191 = local1327;
    local1190 = local1325;
    local1189 = local1328;
    local1188 = local1329;
    local1187 = 0x18f7a;
    local1186 = local1326 - 52;
    local1185 = 0;
    local1184 = 0;
    local1183 = 1;
    local1182 = 0;
    local1181 = 0;
    local1180 = 0;
    local1179 = 0;
    (*RtlInitUnicodeString)(pc, local1326 - 52, 0x18f7a, local1329, local1328, local1325, 1, 0, 0, 0, 0, 0, 0, local1327, (unsigned short) local1326 - 52, (unsigned char) local1326 - 52, 0, local1326 - 52, 0, local1326 - 4, RtlInitUnicodeString, 1, LOGICALFLAGS32(1), LOGICALFLAGS32(1));
    local1175 = 0x18f1e;
    local1174 = local1026 - 56;
    local1173 = local1170;
    (*local1027)(local1066, local1065, local1064, local1063, local1062, local1061, local1060, local1085, local1104, local1084, local1103, local1083, local1102, local1101, local1082, local1059, local1081, local1100, local1058, local1080, local1099, local1118, local1057, local1117, local1079, local1098, local1056, local1097, local1072, local1078, local1116, local1126, local1055, local1071, local1077, local1096, local1115, local1125, local1076, local1114, local1095, local1070, local1108, local1124, local1170, local1069, local1075, local1088, local1091, local1094, local1107, local1113, local1123, local1054, local1026 - 56, local1068, local1074, local1087, local1090, local1093, local1106, local1110, local1112, local1120, local1122, 0x18f1e, local1089, local1086, local1073, local1053, local1067, local1092, local1105, local1109, local1111, local1119, local1121, local1030, local1038, local1031, local1039, local1040, local1032, local1033, local1041, local1034, local1042, local1035, local1043, local1036, local1044, local1037, local1045, (unsigned short) local1026 - 56, local1023, (unsigned char) local1026 - 56, local1024, local1025, local1321, local1026 - 56, local1323, local1324, local1325, local1026, local1027, local1028, local1029, local1046, local1047, local1048, local1049, local1050, local1051, local1052, local1127, local1128, local1129, local1130, local1131, local1132, local1133, local1134, local1135, local1136, local1137, local1138, local1139, local1140, local1141, local1142, local1143, local1144, local1145, local1146, local1147, local1148, local1149, local1150, local1151, local1152, local1153, local1154, local1155, local1156, local1157, local1158, local1159, local1160, local1161, local1162, local1163, local1164, local1165, local1166, local1167, local1168, local1169, <all>, local1171, local1172, FZF);
    local1022 = 0x18efc;
    local1021 = local873 - 64;
    local1020 = local1017;
    (*local874)(local913, local912, local911, local910, local909, local908, local907, local932, local951, local931, local950, local930, local949, local948, local929, local906, local928, local947, local905, local927, local946, local965, local904, local964, local926, local945, local903, local944, local919, local925, local963, local973, local902, local918, local924, local943, local962, local972, local923, local961, local942, local917, local955, local971, local938, local1017, local916, local922, local935, local941, local954, local960, local970, local901, local937, local873 - 64, local915, local921, local934, local940, local953, local957, local959, local967, local969, local936, 0x18efc, local933, local920, local900, local914, local939, local952, local956, local958, local966, local968, local877, local885, local878, local886, local887, local879, local880, local888, local881, local889, local882, local890, local883, local891, local884, local892, (unsigned short) local873 - 64, local870, (unsigned char) local873 - 64, local871, local872, local1321, local873 - 64, local1323, local1324, local1325, local873, local874, local875, local876, local893, local894, local895, local896, local897, local898, local899, local974, local975, local976, local977, local978, local979, local980, local981, local982, local983, local984, local985, local986, local987, local988, local989, local990, local991, local992, local993, local994, local995, local996, local997, local998, local999, local1000, local1001, local1002, local1003, local1004, local1005, local1006, local1007, local1008, local1009, local1010, local1011, local1012, local1013, local1014, local1015, local1016, <all>, local1018, local1019, FZF);
    local869 = 0x18eea;
    local868 = local722 - 72;
    local867 = local866;
    (*local723)(local762, local761, local760, local759, local758, local757, local756, local781, local800, local780, local799, local779, local798, local797, local778, local755, local777, local796, local754, local776, local795, local814, local753, local813, local775, local794, local752, local793, local768, local774, local812, local822, local751, local767, local773, local792, local811, local821, local772, local810, local791, local766, local804, local820, local787, local784, local866, local765, local771, local790, local803, local809, local819, local750, local786, local783, local722 - 72, local764, local770, local789, local802, local806, local808, local816, local818, local785, local782, 0x18eea, local769, local749, local763, local788, local801, local805, local807, local815, local817, local726, local734, local727, local735, local736, local728, local729, local737, local730, local738, local731, local739, local732, local740, local733, local741, (unsigned short) local722 - 72, local719, (unsigned char) local722 - 72, local720, local721, local1321, local722 - 72, local1323, local1324, local1325, local722, local723, local724, local725, local742, local743, local744, local745, local746, local747, local748, local823, local824, local825, local826, local827, local828, local829, local830, local831, local832, local833, local834, local835, local836, local837, local838, local839, local840, local841, local842, local843, local844, local845, local846, local847, local848, local849, local850, local851, local852, local853, local854, local855, local856, local857, local858, local859, local860, local861, local862, local863, local864, local865, <all>, flags, NF, FZF);
    local1299 = local538;
    local1300 = local539;
    local1301 = local540;
    local1303 = local42;
    local1306 = local711;
    local1308 = local633;
    local694 = *(int*)(local42 + 12);
    local718 = *(unsigned short*)*(int*)(local42 + 12);
    local1323 = local718 + *(unsigned short*)(local42 - 48) + 2;
    local716 = *(unsigned short*)(local42 - 56);
    local717 = local1323;
    local1193 = local717;
    local1304 = local694;
    if ((unsigned)local1323 < (unsigned)(local716 + 2)) {
        local715 = local716 + 2;
        local1193 = local715;
    }
    local709 = local1193;
    local696 = 0x706f6c46;
    local697 = local1323;
    local698 = local544;
    local699 = local714;
    local712 = local675;
    local542 = ExAllocatePoolWithTag(local544, local1323, 0x706f6c46);
    local1302 = local693;
    local1307 = local712;
    local695 = local542;
    local710 = local542;
    local1305 = local695;
    if (local542 != local1325) {
        local692 = 84;
        local691 = local1325;
        local690 = local42 - 160;
        local689 = local675;
        __imp_memset(local42 - 160, local1325, 84);
        local685 = local1323;
        local684 = local1325;
        local683 = local542;
        local682 = local675 - 0x76ac;
        local543 = __imp_memset(local542, local1325, local1323); /* Warning: also results in local1324 */
        local541 = *(unsigned short*)*(int*)(local42 + 12);
        local679 = local541;
        local678 = *(int*)(*(int*)(local42 + 12) + 4);
        local677 = local542;
        local676 = local675 - 0xed62;
        (*local674)(local582, local581, local580, local579, local578, local577, local576, local675 - 0xed62, local610, local542, local609, *(int*)(*(int*)(local42 + 12) + 4), local608, local541, local607, local542, local575, local606, local1325, local574, local605, local624, local1323, local573, local623, local604, local42 - 160, local572, local603, local588, local622, local632, local1325, local571, local587, local602, local621, local631, 84, local620, local601, local586, local614, local630, local597, local594, local591, local544, local585, local600, local613, local619, local629, local570, local596, local593, local590, local1323, local584, local599, local612, local616, local618, local626, local628, local595, local592, local589, local569, local583, local598, local611, local615, local617, local625, local627, local546, local554, local547, local555, local556, local548, local549, local557, local550, local558, local551, local559, local552, local560, local553, local561, (unsigned short) local541, local538, (unsigned char) local541, local539, local540, local1321, local541, local543, local1324, local1325, local42, *(int*)(local42 + 12), local674, local545, local562, local563, local564, local565, local566, local567, local568, local633, local634, local635, local636, local637, local638, local639, local640, local641, local642, local643, local644, local645, local646, local647, local648, local649, local650, local651, local652, local653, local654, local1323, local542, local655, local656, local657, local658, local659, local660, local661, local662, local663, local664, local665, local666, local667, local668, local669, local670, local671, local672, local673, <all>, SUBFLAGS32(local542, local1325, local542 - local1325), (unsigned)local542 < (unsigned)local1325, FZF);
        local1194 = local514;
        local1195 = local515;
        local537 = 32;
        local536 = 4;
        local535 = 32;
        local534 = 32;
        local533 = local41 - 24;
        local532 = local41 - 32;
        local531 = local1325;
        local530 = local1325;
        local529 = local41 - 20;
        local528 = local41 - 160;
        local527 = *(int*)(local41 - 12);
        local526 = 0x18ed0;
        local525 = 0x80000000;
        local524 = 4;
        local523 = local41 - 20;
        local522 = 4;
        local521 = 0x18eba;
        local520 = 4;
        local519 = 4;
        local517 = local518;
        local377 = RtlQueryRegistryValues(0x80000000, *(int*)(local41 - 12), local41 - 160, local1325, local1325);
        if (local377 < 0) {
            local512 = local1325;
            local513 = local1325;
            local1194 = local512;
            local1195 = local513;
        }
        local473 = local1194;
        local474 = local1195;
        local511 = 84;
        local510 = local1325;
        local509 = local41 - 160;
        local508 = local495;
        __imp_memset(local41 - 160, local1325, 84);
        local505 = *(int*)(local41 - 4);
        local504 = local1325;
        local503 = *(int*)(local41 - 12);
        local502 = local495 - 0x7748;
        local1323 = __imp_memset(*(int*)(local41 - 12), local1325, *(int*)(local41 - 4)); /* Warning: also results in local1324 */
        local376 = *(unsigned short*)(local41 - 56);
        local499 = local376;
        local498 = *(int*)(local41 - 52);
        local497 = *(int*)(local41 - 12);
        local496 = local495 - 0xee9c;
        (*local378)(local409, local408, local407, local406, local405, local404, local403, local421, local442, local420, local441, local419, local440, local439, local418, local402, local438, local417, local401, local437, local456, local416, local400, local455, local436, local415, local495 - 0xee9c, local399, local454, local464, local414, *(int*)(local41 - 12), local398, local435, local453, local463, local413, *(int*)(local41 - 52), local452, local434, local446, local462, local430, local427, local424, local412, local376, local433, local445, local451, local461, local397, local429, local426, local423, local411, *(int*)(local41 - 12), local432, local444, local448, local450, local458, local460, local428, local425, local422, local410, local1325, local396, local431, local443, local447, local449, local457, local459, local41 - 160, local380, local1325, local381, local388, local382, 0x80000000, local383, *(int*)(local41 - 12), local384, local41 - 160, local385, local1325, local386, local1325, local387, (unsigned short) local376, local373, (unsigned char) local376, local374, local375, local1321, local376, local1323, local1324, local1325, local41, 4, local378, local379, local389, local390, local391, local392, local393, local394, local395, local465, local466, local467, local468, local469, local470, local471, local472, local473, local474, 4, local41 - 20, 4, local41 - 32, 0x18eba, 32, 4, local41 - 20, 4, local41 - 24, 0x18ed0, 32, local475, local476, local477, local478, local479, local480, local481, local482, local483, local484, local485, local486, local487, local488, local489, local490, local491, local492, local493, local494, *(int*)local1176, <all>, LOGICALFLAGS32(local377), LOGICALFLAGS32(local377), FZF);
        local1198 = local40;
        local1199 = local291;
        local1201 = local357;
        local1202 = local358;
        local1209 = local293;
        local1210 = local294;
        local1211 = local59;
        local1212 = local295;
        local1213 = local296;
        local1214 = local297;
        local1215 = local298;
        local1216 = local299;
        local1217 = local72;
        local1218 = local307;
        local1219 = local308;
        local1220 = local309;
        local1221 = local310;
        local1222 = local311;
        local1223 = local312;
        local1224 = local313;
        local1225 = local314;
        local1226 = local315;
        local1227 = local316;
        local1228 = local317;
        local1229 = local318;
        local1230 = local319;
        local1231 = local320;
        local1232 = local321;
        local1233 = local88;
        local1234 = local322;
        local1235 = local323;
        local1236 = local324;
        local1237 = local325;
        local1238 = local326;
        local1239 = local327;
        local1240 = local328;
        local1241 = local329;
        local1242 = local330;
        local1243 = local331;
        local1244 = local332;
        local1245 = local333;
        local1246 = local99;
        local1247 = local334;
        local1248 = local335;
        local1249 = local336;
        local1250 = local103;
        local1251 = local337;
        local1252 = local338;
        local1253 = local106;
        local1254 = local339;
        local1255 = local340;
        local1256 = local109;
        local1257 = local341;
        local1258 = local342;
        local1263 = local126;
        local1264 = local127;
        local1265 = local128;
        local1266 = local129;
        local1267 = local130;
        local1268 = local131;
        local1269 = local132;
        local1270 = local133;
        local1271 = local134;
        local1272 = local135;
        local1273 = local136;
        local1274 = local137;
        local1275 = local138;
        local1276 = local139;
        local1277 = local140;
        local1278 = local141;
        local1279 = local369;
        local1280 = local144;
        local1281 = local287;
        local1282 = local288;
        local1283 = local289;
        local1285 = local40;
        local1286 = local291;
        local1287 = local371;
        local1289 = local343;
        local365 = 0;
        local1176 = local40 + ( (FZF == 0) ? 4 : -4) - 40;
        *(int*)local1176 = 0;
        local364 = local1325;
        local363 = local1325;
        local366 = local40 - 40;
        local362 = local40 - 160;
        local361 = *(int*)(local40 - 12);
        local368 = 36;
        local360 = local1325;
        local367 = 0x18ea4;
        local359 = local372;
        local370 = local350;
        local290 = RtlQueryRegistryValues(local1325, *(int*)(local40 - 12), local40 - 160, local1325, local1325);
        local1197 = local356;
        local1200 = local370;
        local1203 = local359;
        local1204 = local360;
        local1205 = local361;
        local1206 = local362;
        local1207 = local363;
        local1208 = local364;
        local1259 = local365;
        local1260 = local366;
        local1261 = local367;
        local1262 = local368;
        local1284 = local356;
        local1288 = local370;
        if (local290 < 0) {
L32:
            local1316 = local1281;
            local1319 = local1282;
            local1320 = local1283;
            local1326 = local1284;
            local44 = local1285;
            local1328 = local1286;
            global27 = local1287;
            local24 = local1289;
            *(int*)(local44 - 16) = local1325;
            local1290 = local1316;
            local1291 = local1319;
            local1292 = local1320;
            local1293 = local1326;
            local1294 = local44;
            local1295 = local1328;
            local1296 = global27;
            local1298 = local24;
        } else {
            local355 = local290 >> 16 & 0xffff | ((unsigned char) local290);
            local1329 = *(int*)0x14044;
            local1196 = local355;
            if (local347 != (unsigned char) local290) {
L35:
                local147 = local1316;
                local148 = local1319;
                local149 = local1320;
                local26 = local1196;
                local146 = local1197;
                local46 = local1198;
                local47 = local1199;
                local194 = global27;
                local145 = local1200;
                FZF = 0;
                local150 = *(int*)(local1322 + 8);
                local49 = local1201;
                local50 = local1202;
                local151 = local1203;
                local52 = local1204;
                local53 = local1205;
                local54 = local1206;
                local55 = local1207;
                local56 = local1208;
                local57 = local1209;
                local58 = local1210;
                local152 = local1211;
                local60 = local1212;
                local61 = local1213;
                local62 = local1214;
                local63 = local1215;
                local64 = local1216;
                local153 = *(int*)(local195 + 12);
                local154 = *(int*)(local38 + 12);
                local155 = *(int*)(local197 + 56);
                local156 = *(int*)(local197 + 64);
                local157 = *(int*)(local197 + 68);
                local158 = *(int*)(local197 + 72);
                local159 = *(int*)(local197 + 112);
                local160 = local1217;
                local73 = local1218;
                local74 = local1219;
                local75 = local1220;
                local76 = local1221;
                local77 = local1222;
                local78 = local1223;
                local79 = local1224;
                local80 = local1225;
                local81 = local1226;
                local82 = local1227;
                local83 = local1228;
                local84 = local1229;
                local85 = local1230;
                local86 = local1231;
                local87 = local1232;
                local161 = local1233;
                local89 = local1234;
                local90 = local1235;
                local91 = local1236;
                local92 = local1237;
                local93 = local1238;
                local94 = local1239;
                local162 = local1240;
                local95 = local1241;
                local96 = local1242;
                local163 = local1243;
                local97 = local1244;
                local98 = local1245;
                local164 = local1246;
                local100 = local1247;
                local101 = local1248;
                local102 = local1249;
                local165 = local1250;
                local104 = local1251;
                local105 = local1252;
                local166 = local1253;
                local107 = local1254;
                local108 = local1255;
                local167 = local1256;
                local110 = local1257;
                local111 = local1258;
                local168 = *(int*)(local195 - 4);
                local169 = *(int*)(local195 - 5);
                local170 = *(int*)(local38 - 4);
                local171 = *(int*)(local39 - 16);
                local125 = local1259;
                local172 = local1260;
                local173 = local1261;
                local174 = local1262;
                local175 = local1263;
                local176 = local1264;
                local177 = local1265;
                local178 = local1266;
                local179 = local1267;
                local180 = local1268;
                local181 = local1269;
                local182 = local1270;
                local183 = local1271;
                local184 = local1272;
                local185 = local1273;
                local186 = local1274;
                local187 = local1275;
                local188 = local1276;
                local189 = local1277;
                local190 = local1278;
                local191 = *(int*)(local43 - 16);
                local192 = *(short*)local1322;
                local143 = local1279;
                local193 = local1280;
                local1281 = local147;
                local1282 = local148;
                local1283 = local149;
                local1284 = local146;
                local1285 = local46;
                local1286 = local47;
                local1287 = local194;
                local1288 = local145;
                local1289 = local168;
                if (*(int*)(local46 - 40) != (unsigned char) local26) {
                    goto L32;
                } else {
                    *(int*)(local146 - 4) = ((unsigned char) local26);
                    *(int*)(local146 - 8) = *(int*)(local46 - 68);
                    *(int*)(local146 - 12) = *(int*)(local46 - 36);
                    *(int*)(local146 - 16) = local145;
                    (*local1329)(local85, local84, local83, local82, local81, local80, local79, local102, *(int*)(local33 - 52), local101, *(int*)(local33 - 48), local100, *(int*)(local33 - 44), local99, local98, local78, *(int*)(local33 - 36), local97, local77, *(int*)(local33 - 32), *(int*)(local35 - 32), local76, *(int*)(local35 - 28), *(int*)(local33 - 28), local96, local91, local75, local116, *(int*)(local35 - 24), *(int*)(local37 - 24), local95, local90, local74, local115, *(int*)(local35 - 20), local121, local89, *(int*)(local35 - 16), *(int*)(local33 - 16), local145, local120, local111, local108, local105, local94, local88, local114, *(int*)(local46 - 36), *(int*)(local35 - 12), local119, local73, local110, local107, local104, local93, local87, local113, *(int*)(local46 - 68), *(int*)(local34 - 8), *(int*)(local35 - 8), *(int*)(local36 - 8), local118, local109, local106, local103, local92, local86, local72, local112, ((unsigned char) local26), *(int*)(local34 - 4), *(int*)(local35 - 4), *(int*)(local36 - 4), local117, local57, local49, local58, local50, local59, local51, local60, local52, local61, local53, local62, local54, local63, local55, local64, local56, (unsigned short) ((unsigned char) local26), local1316, (unsigned char) ((unsigned char) local26), local1319, local1320, local1321, ((unsigned char) local26), local1323, local1324, local1325, local46, local47, local1329, *(int*)(local1322 + 8), *(int*)(local195 + 12), *(int*)(local38 + 12), *(int*)(local197 + 56), *(int*)(local197 + 64), *(int*)(local197 + 68), *(int*)(local197 + 72), *(int*)(local197 + 112), *(int*)(local195 - 4), *(int*)(local195 - 5), *(int*)(local38 - 4), *(int*)(local39 - 16), local125, local40 - 40, 0x18ea4, 36, local126, local127, local128, local129, local130, local131, local132, local133, local134, local135, local136, local137, local138, local139, local140, local141, *(int*)(local43 - 16), *(int*)(local44 - 16), *(int*)(local45 - 28), *(int*)(local45 - 108), *(int*)(local45 - 112), *(int*)(local45 - 116), *(int*)(local45 - 120), *(int*)(local45 - 124), *(int*)(local45 - 128), *(int*)(local45 - 136), *(int*)(local45 - 140), *(int*)(local45 - 144), *(int*)(local45 - 148), *(int*)(local45 - 152), *(int*)(local45 - 156), *(short*)local1322, local143, local144, 0, <all>, SUBFLAGS16(*(int*)(local46 - 40), (unsigned char) local26, *(int*)(local46 - 40) - (unsigned char) local26), (unsigned)*(int*)(local46 - 40) < (unsigned)(unsigned char) local26, 0);
                    local1281 = local1316;
                    local1282 = local1319;
                    local1283 = local1320;
                    local1284 = local1326;
                    local1285 = local43;
                    local1286 = local1328;
                    local1287 = local198;
                    local1288 = local1178;
                    local1289 = local25;
                    local1290 = local1316;
                    local1291 = local1319;
                    local1292 = local1320;
                    local1293 = local1326;
                    local1294 = local43;
                    local1295 = local1328;
                    local1296 = local198;
                    local1297 = local1178;
                    local1298 = local25;
                    local1323 = *(unsigned short*)(local43 - 72);
                    *(int*)(local43 - 16) = 1;
                    if (local1322 != local1323) {
                        goto L32;
                    }
                }
            } else {
                local354 = ((unsigned char) local290);
                local353 = *(int*)(local40 - 60);
                local352 = *(int*)(local40 - 36);
                local351 = local350;
                (**(int*)0x14044)(local319, local318, local317, local316, local315, local314, local313, local336, *(int*)(local33 - 52), local335, *(int*)(local33 - 48), local334, *(int*)(local33 - 44), local99, *(int*)(local33 - 40), local333, local312, *(int*)(local33 - 36), local332, local311, *(int*)(local33 - 32), *(int*)(local35 - 32), local331, local310, *(int*)(local35 - 28), *(int*)(local33 - 28), local330, local324, local309, local116, *(int*)(local35 - 24), *(int*)(local37 - 24), local329, local323, local308, local115, *(int*)(local35 - 20), local121, local328, local322, *(int*)(local35 - 16), *(int*)(local146 - 16), local120, local342, local340, local338, local327, local88, local114, *(int*)(local146 - 12), *(int*)(local35 - 12), local119, local307, local341, local339, local337, local326, local321, local113, *(int*)(local146 - 8), *(int*)(local34 - 8), *(int*)(local35 - 8), *(int*)(local36 - 8), local118, local109, local106, local103, local320, local72, local325, local112, *(int*)(local146 - 4), *(int*)(local34 - 4), *(int*)(local35 - 4), *(int*)(local36 - 4), local117, local293, *(int*)(local40 - 36), local294, *(int*)(local40 - 60), local51, local295, local1325, local296, *(int*)(local40 - 12), local297, local40 - 160, local298, local1325, local299, local1325, (unsigned short) ((unsigned char) local290), local287, (unsigned char) ((unsigned char) local290), local288, local289, local1321, ((unsigned char) local290), local1323, local1324, local1325, local40, local291, *(int*)0x14044, local292, local300, local301, local302, local303, local304, local305, local306, local343, local344, local345, local346, 0, local40 - 40, 0x18ea4, 36, local126, local127, local128, local129, local130, local131, local132, local133, local134, local135, local136, local137, local138, local139, local140, local141, local348, *(int*)(local44 - 16), *(int*)(local45 - 28), *(int*)(local45 - 108), *(int*)(local45 - 112), *(int*)(local45 - 116), *(int*)(local45 - 120), *(int*)(local45 - 124), *(int*)(local45 - 128), *(int*)(local45 - 136), *(int*)(local45 - 140), *(int*)(local45 - 144), *(int*)(local45 - 148), *(int*)(local45 - 152), *(int*)(local45 - 156), local349, local350, local144, 0, <all>, SUBFLAGS16(local347, (unsigned char) local290, local347 - (unsigned char) local290), (unsigned)local347 < (unsigned)(unsigned char) local290, FZF);
                local1196 = local200;
                local1197 = local201;
                local1198 = local39;
                local1199 = local202;
                local1200 = local283;
                local1201 = local203;
                local1202 = local204;
                local1203 = local205;
                local1204 = local206;
                local1205 = local207;
                local1206 = local208;
                local1207 = local209;
                local1208 = local210;
                local1209 = local211;
                local1210 = local212;
                local1211 = local213;
                local1212 = local214;
                local1213 = local215;
                local1214 = local216;
                local1215 = local217;
                local1216 = local218;
                local1217 = local219;
                local1218 = local220;
                local1219 = local221;
                local1220 = local222;
                local1221 = local223;
                local1222 = local224;
                local1223 = local225;
                local1224 = local226;
                local1225 = local227;
                local1226 = local228;
                local1227 = local229;
                local1228 = local230;
                local1229 = local231;
                local1230 = local232;
                local1231 = local233;
                local1232 = local234;
                local1233 = local235;
                local1234 = local236;
                local1235 = local237;
                local1236 = local238;
                local1237 = local239;
                local1238 = local240;
                local1239 = local241;
                local1240 = local242;
                local1241 = local243;
                local1242 = local244;
                local1243 = local245;
                local1244 = local246;
                local1245 = local247;
                local1246 = local248;
                local1247 = local249;
                local1248 = local250;
                local1249 = local251;
                local1250 = local252;
                local1251 = local253;
                local1252 = local254;
                local1253 = local255;
                local1254 = local256;
                local1255 = local257;
                local1256 = local258;
                local1257 = local259;
                local1258 = local260;
                local1259 = local261;
                local1260 = local262;
                local1261 = local263;
                local1262 = local264;
                local1263 = local265;
                local1264 = local266;
                local1265 = local267;
                local1266 = local268;
                local1267 = local269;
                local1268 = local270;
                local1269 = local271;
                local1270 = local272;
                local1271 = local273;
                local1272 = local274;
                local1273 = local275;
                local1274 = local276;
                local1275 = local277;
                local1276 = local278;
                local1277 = local279;
                local1278 = local280;
                local1279 = local281;
                local1280 = local282;
                local1290 = local284;
                local1291 = local285;
                local1292 = local286;
                local1293 = local201;
                local1294 = local39;
                local1295 = local202;
                local1296 = global27;
                local1297 = local283;
                local1298 = local199;
                local1323 = *(unsigned short*)(local39 - 64);
                if (local200 != local1323) {
                    goto L35;
                } else {
                    *(int*)(local39 - 16) = 1;
                }
            }
        }
        local1316 = local1290;
        local1319 = local1291;
        local1320 = local1292;
        local33 = local1293;
        local45 = local1294;
        local1328 = local1295;
        global27 = local1296;
        local11 = local1298;
        local23 = 84;
        local22 = local1325;
        local21 = local45 - 160;
        __imp_memset(*(int*)(local33 - 12), *(int*)(local33 - 8), *(int*)(local33 - 4));
        local1299 = local1316;
        local1300 = local1319;
        local1301 = local1320;
        local1303 = local45;
        local1304 = local1328;
        local1306 = global27;
        local1308 = local11;
        local1329 = *(int*)(local45 + 12);
        local1322 = *(unsigned short*)*(int*)(local45 + 12);
        local1323 = *(unsigned short*)(local45 - 48);
        *(int*)(local33 - 16) = local1322 + local1323 + 2;
        local19 = local1325;
        local18 = *(int*)(local45 - 12);
        __imp_memset(*(int*)(local33 - 24), *(int*)(local33 - 20), local1322 + local1323 + 2);
        local1305 = local1329;
        local1322 = *(unsigned short*)*(int*)(local45 + 12);
        *(int*)(local33 - 28) = local1322;
        *(int*)(local33 - 32) = *(int*)(*(int*)(local45 + 12) + 4);
        *(int*)(local33 - 36) = *(int*)(local45 - 12);
        memmove(*(int*)(local45 - 12), *(int*)(*(int*)(local45 + 12) + 4), local1322);
        local15 = *(unsigned short*)(local45 - 48);
        *(int*)(local33 - 40) = local15;
        local1322 = *(unsigned short*)*(int*)(local45 + 12);
        *(int*)(local33 - 44) = *(int*)(local45 - 44);
        local1322 += *(int*)(local45 - 12);
        *(int*)(local33 - 48) = local1322;
        *(int*)(local33 - 52) = *(int*)0x140c0;
        memmove(local1322, *(int*)(local45 - 44), local15);
        *(int*)(local33 - 4) = 32;
        *(int*)(local45 - 156) = 32;
        *(int*)(local45 - 128) = 32;
        *(int*)(local45 - 148) = local45 - 28;
        *(int*)(local45 - 120) = local45 - 16;
        *(int*)(local45 - 152) = 0x18e84;
        *(int*)(local45 - 144) = local1328;
        *(int*)(local45 - 140) = local45 - 20;
        *(int*)(local45 - 136) = local1328;
        *(int*)(local45 - 124) = 0x18e74;
        *(int*)(local45 - 116) = local1328;
        local1322 = local45 - 76;
        if (*(int*)(local45 - 16) == local1325) {
            local1322 = local45 - 20;
        }
        *(int*)(local33 - 4) = local1325;
        *(int*)(local33 - 8) = local1325;
        *(int*)(local45 - 112) = local1322;
        *(int*)(local33 - 12) = local45 - 160;
        *(int*)(local33 - 16) = *(int*)(local45 - 12);
        *(int*)(local45 - 108) = local1328;
        *(int*)(local33 - 20) = 0x80000000;
        *(int*)(local33 - 24) = *(int*)0x140c0;
        local1322 = RtlQueryRegistryValues(0x80000000, *(int*)(local45 - 12), local45 - 160, local1325, local1325);
        if (local1322 < 0) {
            *(int*)(local45 - 28) = local1325;
        }
        *(int*)(local33 - 24) = *(int*)(local45 - 12);
        *(int*)(local33 - 28) = *(int*)0x140bc;
        ExFreePool(*(int*)(local45 - 12));
        local1302 = local1326;
    }
    local1316 = local1299;
    local1319 = local1300;
    local1320 = local1301;
    local34 = local1302;
    local1327 = local1303;
    local1328 = local1304;
    local1329 = local1305;
    global27 = local1306;
    local8 = local1308;
    if (*(int*)(local1327 - 24) != local1325) {
        __imp_DbgBreakPoint();
    }
    local1315 = (unsigned short) local1327 - 4;
    *(int*)(local34 - 4) = local1327 - 4;
    local1322 = proc3(local1325, local1328, local1329, <all>); /* Warning: also results in local1323, local1324, local1325, local38 */
    local1309 = local38;
    local1311 = local38;
    local1311 = local38;
    local1329 = local9;
    *(int*)(local38 + 12) = local1322;
    if (local1322 >= local1325) {
        *(int*)(local38 + 12) = 0xc000000e;
        *(char*)(local38 - 4) = local1321;
        if ((unsigned)*(int*)(local9 + 8) > (unsigned)local1321) {
            local1328 = *(int*)(local38 + 8);
            local1310 = local1328;
            do {
                local37 = local1326;
                local1327 = local1309;
                local1328 = local1310;
                local7 = *(int*)(local1327 - 16);
                local6 = *(int*)(local1327 - 28);
                local5 = local1328;
                local4 = *(int*)(local1327 - 4);
                local3 = local1329;
                local1322 = proc4(*(int*)(local37 - 20), *(int*)(local37 - 16), *(int*)(local37 - 12), *(int*)(local37 - 8), *(int*)(local37 - 4), local1317, local1319, local1320, local1327, <all>, FZF); /* Warning: also results in local197, local1316, local1319, local1320, local1321, local1323, local1324, local1325, local195, local1329, FZF */
                local1309 = local195;
                local1310 = local197;
                local1311 = local195;
                local1311 = local195;
                *(int*)(local195 + 12) = local1322;
                if (local1322 >= local1325) {
                    *(char*)(local195 - 5) = 1;
                }
                local1192 = local196 + 1;
                local1315 = local1315 >> 8 & 0xff | (local1192);
            } while ((unsigned)local1192 < (unsigned)*(int*)(local1329 + 8));
            if (local2 != local1321) {
                *(int*)(local197 + 56) = 0x16000;
                *(int*)(local197 + 64) = 0x16000;
                *(int*)(local195 + 12) = local1325;
                *(int*)(local197 + 68) = 0x16022;
                *(int*)(local197 + 72) = 0x16022;
                *(int*)(local197 + 112) = 0x16c7c;
            }
        }
    }
    local36 = local1326;
    local1327 = local1311;
    local1312 = local36;
    if (local1329 != local1325) {
        *(int*)(local36 - 4) = local1329;
        ExFreePool(local1329);
        local1312 = local1326;
    }
    local35 = local1312;
    local1313 = local35;
    if (*(int*)(local1327 + 12) < local1325) {
L1:
        local1326 = local1313;
        local1322 = *(int*)(local1327 + 12);
        local1318 = (unsigned char) *(int*)(local1327 + 12);
        local1315 = (unsigned short) *(int*)(local1327 + 12);
        local1314 = local1326;
    } else {
        *(int*)(local35 - 4) = 0x706f6c46;
        *(int*)(local35 - 8) = 32;
        *(int*)(local35 - 12) = local1325;
        local1322 = ExAllocatePoolWithTag(local1325, 32, 0x706f6c46);
        local1314 = local1;
        global27 = local1322;
        if (local1322 != local1325) {
            *(short*)local1322 = 1;
            *(int*)(local1322 + 8) = local1325;
            *(int*)(local35 - 16) = local1325;
            *(int*)(local35 - 20) = 1;
            *(int*)(local35 - 24) = local1322 + 12;
            *(int*)(local35 - 28) = *(int*)0x14168;
            KeInitializeEvent(local1322 + 12, 1, local1325);
            *(int*)(local35 - 28) = 0x18a88;
            *(int*)(local35 - 32) = *(int*)0x140a4;
            MmPageEntireDriver();
            local1313 = local1326;
            goto L1;
        } else {
            local1322 = 0xc000009a;
            local1318 = 154;
            local1315 = 154;
        }
    }
    local1326 = local1314;
    return local1322;
}

// address: 0x11476
__imp_memset(int param1, int param2, int param3) {
    int local0; 		// r24
    int local1; 		// r25
    int local2; 		// r26
    int local3; 		// r28

    local0 = memset(param1, param2, param3);
    return local0; /* WARNING: Also returning: local1, local2 */
}

// address: 0x1147c
void __imp_DbgBreakPoint() {
    DbgBreakPoint();
    return;
}

// address: 0x18524
proc3(int param1, int param2, int param3, int param4) {
    int local0; 		// r29{126}
    int local1; 		// r24{22}
    int local10; 		// m[r24 + 60]{111}
    int local11; 		// m[r29 + 8]{126}
    int local12; 		// m[r29 + 8]{111}
    int local13;
    int local14;
    int local15;
    int local16;
    int local17; 		// m[r28 - 4]{111}
    int local18; 		// m[r28 - 8]{111}
    int local19; 		// m[r28 - 12]{111}
    int local2; 		// r28{111}
    int local20; 		// m[r28 - 20]{111}
    int local21; 		// m[r28 - 24]{111}
    int local22; 		// m[r28 - 28]{111}
    int local23;
    int local24; 		// m[r29 - 4]{111}
    int local25; 		// m[r29 - 28]{111}
    int local26; 		// m[r29 - 32]{111}
    int local27; 		// m[r29 - 36]{111}
    int local28; 		// m[r30]{111}
    int local29; 		// m[m[r29 + 8]]{111}
    int local3; 		// r28{8}
    void *local30; 		// %pc{111}
    void *local31; 		// m[r28 - 4]{124}
    int local32; 		// r24{152}
    int local33; 		// m[r24 + 60]{236}
    int local34; 		// m[r29 + 8]{191}
    int local35; 		// m[r29 - 36]{193}
    void *local36; 		// %pc{126}
    int local37; 		// %pc{158}
    int local38; 		// m[r28 - 4]{109}
    int local39; 		// m[r29 + 8]{61}
    int local4; 		// r28{155}
    int local40; 		// r24{97}
    int local41; 		// r28{84}
    int local42; 		// r24{147}
    int local43; 		// r28{37}
    int local44; 		// r28{22}
    int local45; 		// r24{84}
    int local46; 		// m[r24 + 60]{49}
    int local47; 		// local33{236}
    int local48; 		// local32{152}
    int local49; 		// local4{155}
    int local5; 		// r28{181}
    int local50; 		// local34{191}
    int local51; 		// r28{168}
    int local52; 		// local8{169}
    int local53; 		// r29{182}
    void *local54; 		// %pc{187}
    int local55; 		// r24
    int local56; 		// r25
    int local57; 		// r26
    int local58; 		// r28
    int local6; 		// r29{111}
    int local7; 		// r29{8}
    int local8; 		// r29{169}
    int local9; 		// r30{111}

    local50 = *(int*)(local7 + 8);
    local47 = *(int*)(local1 + 60);
    *(int*)(local58 - 4) = 20;
    *(int*)(local58 - 8) = 0x141d8;
    local3 = proc5(0x141d8, 20, param1, param2, param3); /* Warning: also results in local7 */
    local52 = local7;
    local53 = local7;
    *(int*)(local7 - 4) = 0;
    *(int*)(local3 - 4) = 0x706f6c46;
    *(int*)(local3 - 8) = 592;
    *(int*)(local3 - 12) = 1;
    local1 = ExAllocatePoolWithTag(1, 592, 0x706f6c46);
    local51 = local44;
    *(int*)*(int*)(local7 + 8) = local1;
    if (local1 != 0) {
        *(int*)(local3 - 16) = 592;
        *(int*)(local3 - 20) = 0;
        *(int*)(local3 - 24) = local1;
        *(int*)(local3 - 28) = ExAllocatePoolWithTag;
        local55 = __imp_memset(local1, 0, 592); /* Warning: also results in local56, local57 */
        local58 = local3 - 12;
        *(int*)(local7 - 28) = 0;
        local49 = local58;
        for(;;) {
            local42 = local55;
            local33 = local47;
            local48 = local42;
            local55 = 0;
            local56 = local1;
            local46 = *(int*)(local1 + 60) | -1;
            *(int*)(local7 - 28) = 1;
            local47 = local46;
        }
    }
    local58 = local51;
    local8 = local52;
    *(int*)(local8 - 4) = *(int*)(local8 - 4) | -1;
    local55 = 0xc000009a;
    local53 = local8;
    local5 = local58;
    ebp = local53;
    local56 = proc6(*(int*)(local5 + 8), ebp, *(int*)(ebp - 16), *(int*)ebp); /* Warning: also results in param1, ebp */
    return local55; /* WARNING: Also returning: local56, local57, param1, ebp */
}

// address: 0x1880c
proc4(int param3, int param2, int param4, int param6, int param7, int param5, int param11, int param8, int param1, int param9, int param10) {
    int local0; 		// m[r29 + 23]{311}
    int local1; 		// m[r28 - 24]{329}
    int local10; 		// r30{281}
    int local100; 		// m[r24 + 220]{281}
    int local101; 		// m[r24 + 224]{281}
    int local102; 		// m[r24 + 238]{281}
    int local103; 		// m[r24 + 239]{281}
    int local104; 		// m[r24 + 240]{281}
    int local105; 		// m[r24 + 243]{281}
    int local106; 		// m[r24 + 245]{281}
    int local107; 		// m[r24 + 246]{281}
    int local108; 		// m[r24 + 248]{281}
    int local109;
    int local11; 		// m[r24 + 4]{299}
    int local110;
    int local111; 		// m[r29 + 23]{281}
    int local112; 		// m[r29 + 24]{281}
    int local113; 		// m[r30 + 56]{281}
    int local114; 		// m[r30 + 148]{281}
    int local115;
    int local116;
    int local117; 		// m[r28 - 284]{281}
    int local118; 		// m[r28 - 288]{281}
    int local119; 		// m[r28 - 292]{281}
    int local12; 		// m[r24 + 8]{299}
    int local120; 		// m[r28 - 296]{281}
    int local121; 		// m[r28 - 300]{281}
    int local122; 		// m[r28 - 304]{281}
    int local123; 		// m[r28 - 308]{281}
    int local124; 		// m[r28 - 312]{281}
    int local125; 		// m[r28 - 316]{281}
    int local126; 		// m[r28 - 320]{281}
    int local127; 		// m[r28 - 324]{281}
    int local128; 		// m[r28 - 328]{281}
    int local129; 		// m[r28 - 332]{281}
    int local13; 		// m[r24 + 12]{299}
    int local130; 		// m[r28 - 336]{281}
    int local131; 		// m[r28 - 340]{281}
    int local132; 		// m[r28 - 344]{281}
    int local133; 		// m[r28 - 348]{281}
    int local134; 		// m[r28 - 352]{281}
    int local135; 		// m[r28 - 356]{281}
    int local136; 		// m[r28 - 360]{281}
    int local137; 		// m[r28 - 364]{281}
    int local138; 		// m[r28 - 368]{281}
    int local139; 		// m[r28 - 372]{281}
    int local14; 		// m[r24 + 116]{299}
    int local140; 		// m[r28 - 376]{281}
    int local141; 		// m[r28 - 380]{281}
    int local142; 		// m[r28 - 384]{281}
    int local143; 		// m[r28 - 388]{281}
    int local144; 		// m[r28 - 392]{281}
    int local145; 		// m[r28 - 396]{281}
    int local146; 		// m[r28 - 400]{281}
    int local147; 		// m[r28 - 404]{281}
    int local148; 		// m[r28 - 408]{281}
    int local149; 		// m[r28 - 416]{281}
    int local15; 		// m[r24 + 124]{299}
    int local150; 		// m[r28 - 420]{281}
    int local151; 		// m[r28 - 424]{281}
    int local152;
    int local153;
    int local154;
    int local155;
    int local156;
    int local157;
    int local158;
    int local159;
    int local16; 		// m[r24 + 168]{299}
    int local160; 		// m[r28 - 12]{281}
    int local161; 		// m[r28 - 16]{281}
    int local162; 		// m[r28 - 20]{281}
    int local163; 		// m[r28 - 24]{281}
    int local164; 		// m[r28 - 28]{281}
    int local165; 		// m[r28 - 4]{281}
    int local166; 		// m[r28 - 8]{281}
    int local167;
    int local168; 		// m[r24]{281}
    void *local169; 		// %pc{281}
    int local17; 		// m[r24 + 176]{299}
    void *local170; 		// m[r28 - 16]{297}
    int local171; 		// m[r28 - 12]{294}
    int local172; 		// m[r28 - 8]{290}
    int local173; 		// m[r30 + 16]{289}
    int local174; 		// m[r30 + 20]{288}
    int local175; 		// m[r28 - 4]{286}
    int local176; 		// m[r30 + 148]{282}
    char local177; 		// r8{192}
    char local178; 		// r8{147}
    char local179; 		// r8{198}
    int local18; 		// m[r24 + 180]{299}
    int local180; 		// r8{175}
    int local181; 		// r24{189}
    int local182; 		// r24{112}
    int local183; 		// r24{99}
    int local184; 		// r24{144}
    int local185; 		// r24{141}
    int local186; 		// r24{138}
    int local187; 		// r24{204}
    int local188; 		// r24{195}
    int local189; 		// r24{178}
    int local19; 		// m[r24 + 188]{299}
    int local190; 		// r26{210}
    int local191; 		// r29{334}
    int local192; 		// r30{17}
    int local193; 		// r31{58}
    int local194; 		// m[r24 + 4]{149}
    int local195; 		// m[r24 + 12]{151}
    int local196; 		// m[r28 - 356]{208}
    int local197; 		// m[r28 - 364]{213}
    int local198; 		// m[r28 - 376]{221}
    int local199; 		// m[r28 - 424]{279}
    int local2; 		// r24{43}
    int local20; 		// m[r24 + 200]{299}
    int local200; 		// m[r24 + 124]{277}
    int local201; 		// m[r28 - 420]{275}
    int local202; 		// m[r24 + 116]{272}
    int local203; 		// m[r28 - 416]{270}
    int local204; 		// m[r28 - 412]{268}
    int local205; 		// r24{259}
    int local206; 		// r28{259}
    char local207[0]; 		// m[r28 - 412]{257}
    int local208; 		// m[r28 - 408]{254}
    int local209; 		// r24{251}
    int local21; 		// m[r24 + 212]{299}
    int local210; 		// r28{251}
    char local211[0]; 		// m[r28 - 408]{249}
    int local212; 		// m[r28 - 404]{246}
    int local213; 		// m[r28 - 400]{242}
    int local214; 		// m[r28 - 396]{240}
    int local215; 		// r9{216}
    int local216; 		// r28{234}
    int local217; 		// r29{4}
    int local218; 		// r30{44}
    int local219; 		// r31{235}
    int local22; 		// m[r24 + 216]{299}
    int local220; 		// m[r24 + 8]{163}
    int local221; 		// m[r24 + 116]{311}
    int local222; 		// m[r24 + 124]{311}
    int local223; 		// m[r24 + 168]{143}
    int local224; 		// m[r24 + 176]{132}
    int local225; 		// m[r24 + 180]{140}
    int local226; 		// m[r24 + 188]{113}
    int local227; 		// m[r24 + 200]{146}
    int local228; 		// m[r24 + 212]{180}
    int local229; 		// m[r24 + 216]{188}
    int local23; 		// m[r24 + 220]{299}
    int local230; 		// m[r24 + 220]{191}
    int local231; 		// m[r24 + 224]{197}
    char local232; 		// m[r24 + 238]{202}
    char local233; 		// m[r24 + 239]{194}
    char local234; 		// m[r24 + 240]{200}
    int local235; 		// m[r24 + 243]{174}
    char local236; 		// m[r24 + 245]{238}
    int local237; 		// m[r24 + 246]{177}
    char local238; 		// m[r24 + 248]{155}
    int local239; 		// m[r29 + 24]{311}
    int local24; 		// m[r24 + 224]{299}
    int local240; 		// m[r29 + 23]{299}
    int local241; 		// m[r29 + 24]{299}
    int local242; 		// m[r30 + 56]{299}
    int local243; 		// m[r30 + 16]{311}
    int local244; 		// m[r30 + 20]{311}
    int local245; 		// m[r30 + 148]{311}
    int local246; 		// m[r28 - 4]{2}
    int local247; 		// m[r28 - 8]{100}
    int local248; 		// m[r28 - 284]{24}
    int local249; 		// m[r28 - 288]{26}
    int local25; 		// m[r24 + 238]{299}
    int local250; 		// m[r28 - 292]{28}
    int local251; 		// m[r28 - 296]{30}
    int local252; 		// m[r28 - 300]{33}
    int local253; 		// m[r28 - 304]{38}
    int local254; 		// m[r28 - 308]{76}
    int local255; 		// m[r28 - 312]{80}
    int local256; 		// m[r28 - 316]{86}
    int local257; 		// m[r28 - 320]{90}
    int local258; 		// m[r28 - 324]{94}
    int local259; 		// m[r28 - 328]{103}
    int local26; 		// m[r24 + 239]{299}
    int local260; 		// m[r28 - 332]{107}
    int local261; 		// m[r28 - 336]{116}
    int local262; 		// m[r28 - 340]{153}
    int local263; 		// m[r28 - 344]{156}
    int local264; 		// m[r28 - 348]{160}
    int local265; 		// m[r28 - 352]{206}
    int local266; 		// m[r28 - 360]{211}
    int local267; 		// m[r28 - 368]{217}
    int local268; 		// m[r28 - 372]{219}
    int local269; 		// m[r28 - 380]{223}
    int local27; 		// m[r24 + 240]{299}
    int local270; 		// m[r28 - 384]{225}
    int local271; 		// m[r28 - 388]{227}
    int local272; 		// m[r28 - 392]{229}
    char local273[0]; 		// m[r28 - 396]{232}
    int local274; 		// m[r28 - 400]{311}
    int local275; 		// m[r28 - 404]{311}
    int local276; 		// m[r28 - 408]{311}
    int local277; 		// m[r28 - 412]{311}
    int local278; 		// m[r28 - 416]{311}
    int local279; 		// m[r28 - 420]{311}
    int local28; 		// m[r24 + 243]{299}
    int local280; 		// m[r28 - 424]{311}
    int local281;
    int local282;
    int local283;
    int local284;
    int local285; 		// m[r28 - 4]{311}
    int local286; 		// m[r28 - 8]{311}
    int local287; 		// m[r28 - 12]{311}
    int local288; 		// m[r28 - 16]{311}
    int local289; 		// m[r24]{162}
    int local29; 		// m[r24 + 245]{299}
    char local290[0]; 		// %pc{233}
    int local291; 		// r24{234}
    int local292; 		// r26{203}
    char local293; 		// m[r24 + 245]{201}
    int local294; 		// m[r24 + 216]{185}
    int local295; 		// r24{167}
    int local296; 		// r28{167}
    char local297[0]; 		// m[r28 - 352]{165}
    int local298; 		// m[r24 + 12]{311}
    int local299; 		// m[r24 + 4]{311}
    int local3; 		// r28{281}
    int local30; 		// m[r24 + 246]{299}
    int local300; 		// r28{121}
    char local301[0]; 		// m[r28 - 340]{119}
    int local302; 		// r24{121}
    int local303; 		// r28{112}
    char local304[0]; 		// m[r28 - 336]{110}
    int local305; 		// r28{99}
    char local306[0]; 		// m[r28 - 328]{97}
    int local307; 		// r24{85}
    int local308; 		// r28{85}
    int local309; 		// m[r28 - 316]{83}
    int local31; 		// m[r24 + 248]{299}
    int local310; 		// r24{70}
    int local311; 		// r28{70}
    int local312; 		// m[r28 - 332]{68}
    int local313; 		// m[r28 - 328]{65}
    int local314; 		// m[r28 - 324]{63}
    int local315; 		// m[r28 - 320]{59}
    int local316; 		// r24{57}
    int local317; 		// r28{57}
    int local318; 		// m[r28 - 320]{55}
    int local319; 		// m[r28 - 316]{52}
    int local32;
    int local320; 		// m[r28 - 312]{50}
    int local321; 		// m[r28 - 308]{48}
    int local322; 		// r28{43}
    int local323; 		// m[r24 + 188]{311}
    int local324;
    int local325; 		// m[r28 - 308]{41}
    int local326; 		// m[r28 - 312]{311}
    int local327; 		// m[r28 - 316]{311}
    int local328; 		// m[r28 - 320]{311}
    int local329; 		// m[r28 - 324]{311}
    int local33;
    int local330; 		// m[r28 - 328]{311}
    int local331; 		// m[r28 - 332]{311}
    int local332; 		// m[r28 - 336]{311}
    int local333; 		// m[r28 - 340]{311}
    void *local334; 		// %pc{311}
    int local335; 		// r24{17}
    int local336; 		// r28{17}
    int local337; 		// m[r28 - 296]{15}
    int local338; 		// m[r28 - 292]{12}
    int local339; 		// m[r28 - 288]{10}
    int local34; 		// m[r30 + 16]{299}
    int local340; 		// m[r28 - 284]{8}
    int local341; 		// m[r29 + 24]{348}
    int local342; 		// m[r24]{344}
    int local343; 		// r28{394}
    int local344; 		// r29{409}
    void *local345; 		// %pc{414}
    int local346; 		// r29{432}
    void *local347; 		// %pc{437}
    int local348; 		// r9{443}
    int local349; 		// local6{450}
    int local35; 		// m[r30 + 20]{299}
    int local350; 		// r29{451}
    int local351; 		// r30{452}
    int local352; 		// r31{453}
    char local353[0]; 		// %pc{457}
    int local354; 		// r29{491}
    int local355; 		// r29{511}
    int local356; 		// r30{512}
    char local357; 		// r2
    char local358; 		// r8
    char local359; 		// r11
    int local36; 		// m[r30 + 148]{299}
    char local360; 		// r24
    char local361; 		// r25
    char local362; 		// r26
    char local363; 		// r27
    char local364; 		// r28
    char local365; 		// r30
    char local366; 		// r31
    int local37;
    int local38;
    int local39; 		// m[r28 - 284]{299}
    int local4; 		// r28{431}
    int local40; 		// m[r28 - 288]{299}
    int local41; 		// m[r28 - 292]{299}
    int local42; 		// m[r28 - 296]{299}
    int local43; 		// m[r28 - 300]{299}
    int local44; 		// m[r28 - 304]{299}
    int local45; 		// m[r28 - 308]{299}
    int local46; 		// m[r28 - 312]{299}
    int local47; 		// m[r28 - 316]{299}
    int local48; 		// m[r28 - 320]{299}
    int local49; 		// m[r28 - 324]{299}
    int local5; 		// r28{408}
    int local50; 		// m[r28 - 328]{299}
    int local51; 		// m[r28 - 332]{299}
    int local52; 		// m[r28 - 336]{299}
    int local53; 		// m[r28 - 340]{299}
    int local54; 		// m[r28 - 344]{299}
    int local55; 		// m[r28 - 348]{299}
    int local56; 		// m[r28 - 356]{299}
    int local57; 		// m[r28 - 360]{299}
    int local58; 		// m[r28 - 364]{299}
    int local59; 		// m[r28 - 368]{299}
    int local6; 		// r28{450}
    int local60; 		// m[r28 - 372]{299}
    int local61; 		// m[r28 - 376]{299}
    int local62; 		// m[r28 - 380]{299}
    int local63; 		// m[r28 - 384]{299}
    int local64; 		// m[r28 - 388]{299}
    int local65; 		// m[r28 - 392]{299}
    int local66; 		// m[r28 - 396]{299}
    int local67; 		// m[r28 - 400]{299}
    int local68; 		// m[r28 - 404]{299}
    int local69; 		// m[r28 - 408]{299}
    int local7; 		// r29{311}
    int local70; 		// m[r28 - 412]{299}
    int local71; 		// m[r28 - 416]{299}
    int local72; 		// m[r28 - 420]{299}
    int local73; 		// m[r28 - 424]{299}
    int local74; 		// m[r28 - 4]{299}
    int local75; 		// m[r28 - 8]{299}
    int local76; 		// m[r28 - 12]{299}
    int local77; 		// m[r28 - 16]{299}
    int local78; 		// m[r28 - 24]{299}
    int local79;
    int local8; 		// r29{299}
    int local80; 		// m[r24]{299}
    void *local81; 		// %pc{299}
    void *local82; 		// m[r28 - 16]{309}
    int local83; 		// r28{299}
    int local84; 		// m[r28 - 12]{306}
    int local85; 		// m[r28 - 8]{302}
    int local86; 		// m[r28 - 4]{300}
    int local87; 		// r29{281}
    int local88; 		// m[r24 + 4]{281}
    int local89; 		// m[r24 + 8]{281}
    int local9; 		// r30{299}
    int local90; 		// m[r24 + 12]{281}
    int local91; 		// m[r24 + 116]{281}
    int local92; 		// m[r24 + 124]{281}
    int local93; 		// m[r24 + 168]{281}
    int local94; 		// m[r24 + 176]{281}
    int local95; 		// m[r24 + 180]{281}
    int local96; 		// m[r24 + 188]{281}
    int local97; 		// m[r24 + 200]{281}
    int local98; 		// m[r24 + 212]{281}
    int local99; 		// m[r24 + 216]{281}

    local246 = param1;
    local217 = local364 - 4;
    local340 = param2;
    local339 = param3;
    local338 = param4;
    local192 = proc7(param4, param3, param2, param5); /* Warning: also results in local357, local358, local359, local361, local362, local363, local366 */
    local350 = local217;
    local354 = local217;
    local355 = local217;
    local356 = local192;
    if (local358 != 0) {
        local248 = local363;
        local249 = local192;
        local250 = local366;
        local251 = 0x706f6c46;
        local252 = 256;
        local253 = 0;
        local2 = ExAllocatePoolWithTag(0, 256, 0x706f6c46);
        local343 = local322;
        local218 = local2;
        local351 = local218;
        if (local2 == 0) {
L2:
            local364 = local343;
            local360 = 0xc000009a;
        } else {
            local321 = 256;
            local320 = 0;
            local319 = local2;
            local318 = ExAllocatePoolWithTag;
            __imp_memset(local2, 0, 256);
            local193 = *(unsigned char*)(local364 + 8);
            local315 = local193;
            local314 = 0x18e54;
            local313 = local364 - 280;
            local312 = ExAllocatePoolWithTag - 0x73d8;
            sprintf(local364 - 280, "\Device\FloppyControllerEvent%d", local193);
            local254 = local364 - 280;
            local255 = local364 - 24;
            local309 = sprintf;
            RtlInitString();
            local256 = 1;
            local257 = local364 - 24;
            local258 = local364 - 16;
            local306 = RtlInitString;
            RtlAnsiStringToUnicodeString();
            local247 = local183;
            local259 = local2 + 184;
            local260 = local364 - 16;
            local304 = RtlAnsiStringToUnicodeString;
            IoCreateSynchronizationEvent();
            local226 = local182;
            local261 = local364 - 16;
            local301 = IoCreateSynchronizationEvent;
            RtlFreeUnicodeString();
            local343 = local300;
            if (local183 >= 0) {
                local224 = param4;
                local186 = *(int*)(local193 * 192 + param3 + 28);
                local225 = local186;
                local185 = *(int*)(local193 * 192 + param3 + 32);
                local223 = local185;
                local184 = *(int*)(local193 * 192 + param3 + 40);
                local227 = local184;
                local178 = *(int*)(local193 * 192 + param3 + 88);
                local194 = *(int*)(local2 + 4) | -1;
                local195 = *(int*)(local2 + 12) | -1;
                local262 = local2;
                local238 = local178;
                local263 = 0x113c8;
                local264 = local2 + 60;
                local289 = 0xfd9da600;
                local220 = 0xfffe7960;
                local297 = RtlFreeUnicodeString;
                KeInitializeDpc(local2 + 60, 0x113c8, &local289);
                local358 =  (param6 == 0) ? 1 : 0;
                local235 = local358;
                local180 =  (param7 != 0) ? 1 : 0;
                local237 = local180;
                local189 = *(int*)(local193 * 192 + param3 + 84);
                local228 = local189;
                param11 = *(int*)(local193 * 192 + param3 + 76);
                local294 = param11;
                param11 = *(int*)(local193 * 192 + param3 + 76);
                local229 = param11;
                local181 = *(int*)(local193 * 192 + param3 + 68);
                local230 = local181;
                local177 = *(int*)(local193 * 192 + param3 + 78);
                local233 = local177;
                local188 = *(int*)(local193 * 192 + param3 + 72);
                local231 = local188;
                local179 = *(int*)(local193 * 192 + param3 + 77);
                local234 = local179;
                local293 = 1;
                local232 = 1;
                local292 = *(unsigned char*)(local193 * 192 + param3 + 77);
                local187 = *(unsigned char*)(local193 * 192 + param3 + 76);
                local265 = local292;
                local196 = *(int*)(local193 * 192 + param3 + 72);
                local190 = *(unsigned char*)(local193 * 192 + param3 + 78);
                local266 = local190;
                local197 = *(int*)(local193 * 192 + param3 + 68);
                local215 = (unsigned char) local2 + 152;
                local267 = local187;
                local268 = local187;
                local198 = *(int*)(local193 * 192 + param3 + 84);
                local269 = 0;
                local270 = local2;
                local271 = 0x1114a;
                local272 = local2 + 152;
                local273 = KeInitializeDpc;
                local290 = IoConnectInterrupt;
                local291 = IoConnectInterrupt(local2 + 152, 0x1114a, &local289, 0, local198, local187, local187, local197, local190, local196, local292);
                local348 = local215;
                local349 = local216;
                local353 = local290;
                local219 = local291;
                local236 = 0;
                local352 = local219;
                if (local291 < 0) {
L4:
                    param11 = local348;
                    local6 = local349;
                    param1 = local350;
                    local365 = local351;
                    local366 = local352;
                    *(int*)(local6 - 4) = local365;
                    ExFreePool(local365);
                } else {
                    local214 = 0x7fffffff;
                    local213 = 0;
                    local212 = local2 + 92;
                    local211 = IoConnectInterrupt;
                    KeInitializeSemaphore(local2 + 92, 0, 0x7fffffff);
                    local208 = local2 + 112;
                    local207 = KeInitializeSemaphore;
                    KeInitializeSpinLock(local2 + 112);
                    local204 = 0;
                    local203 = 1;
                    local202 = 1;
                    local201 = local2 + 128;
                    local200 = 0;
                    local199 = KeInitializeSpinLock;
                    (*KeInitializeEvent)(KeInitializeSpinLock, local2 + 128, 1, 0, local2 + 112, local2 + 92, 0, 0x7fffffff, local2 + 152, 0x1114a, local2, 0, local198, local187, local187, local197, local190, local196, local2 + 60, 0x113c8, local2, local364 - 16, local364 - 16, local2 + 184, local364 - 16, local193, 1, local364 - 24, 256, 0, 256, 0x706f6c46, local366, local192, local183, param1, local357, (unsigned char) local2 + 128, (unsigned char) local2 + 152, 0, local2 + 128, local361, local362, 0, local364 - 4, local2, KeInitializeEvent, local194, 0xfffe7960, local195, 1, 0, local185, param4, local186, local182, local184, local189, param11, local181, local188, 1, local177, local179, local358, 0, local180, local178, 0xfd9da600, LOGICALFLAGS32(1), LOGICALFLAGS32(1));
                    local176 = local114 | -1;
                    local175 = local363;
                    local174 = local10 + 16;
                    local173 = local10 + 16;
                    local172 = 1;
                    local171 = local10 + 24;
                    local170 = local169;
                    (*local366)(local151, local150, local149, local148, local147, local146, local145, local144, local143, local142, local141, local140, local139, local138, local137, local136, local135, local134, local133, local132, local131, local130, local129, local128, local127, local126, local125, local124, local123, local122, local121, local120, local119, local118, local117, local164, local163, local162, local155, local169, local161, local154, local10 + 24, local160, local153, 1, local116, local157, local159, local166, local152, local363, local115, local156, local158, local165, local357, (unsigned char) local10 + 24, param11, param8, local359, local10 + 24, local361, local362, local363, local87, local10, local366, local88, local89, local90, local91, local92, local93, local94, local95, local96, local97, local98, local99, local100, local101, local102, local103, local104, local105, local106, local107, local108, local109, local110, local111, local112, local113, local10 + 16, local10 + 16, local114 | -1, local167, local168, param9, LOGICALFLAGS32(local114 | -1), LOGICALFLAGS32(local114 | -1), param10);
                    local86 = local363;
                    local85 = local363;
                    local84 = local9 + 40;
                    local82 = local81;
                    (*local366)(local73, local72, local71, local70, local69, local68, local67, local66, local65, local64, local63, local62, local61, local60, local59, local58, local57, local56, local55, local54, local53, local52, local51, local50, local49, local48, local47, local46, local45, local44, local43, local42, local41, local40, local39, *(int*)(local5 - 28), local78, *(int*)(local5 - 20), local77, local81, *(int*)(local5 - 16), local76, local9 + 40, *(int*)(local5 - 12), local75, local363, local38, *(int*)(local4 - 8), *(int*)(local5 - 8), *(int*)(local6 - 8), local74, local363, local37, *(int*)(local4 - 4), *(int*)(local5 - 4), *(int*)(local6 - 4), local357, (unsigned char) local9 + 40, param11, param8, local359, local9 + 40, local361, local362, local363, local8, local9, local366, local11, local12, local13, local14, local15, local16, local17, local18, local19, local20, local21, local22, local23, local24, local25, local26, local27, local28, local29, local30, local31, local32, local33, local240, local241, local242, local34, local35, local36, local79, local80, param9, flags, NF, param10);
                    local344 = local7;
                    local345 = local334;
                    local346 = local7;
                    local347 = local334;
                    *(int*)(local365 + 56) = local363;
                    local366 = 0xc000000e;
                    *(char*)(local7 + 23) = local359;
                    *(char*)(local7 + 24) = local359;
                    if ((unsigned)*(int*)(local365 + 248) > (unsigned)local359) {
                        do {
                            local5 = local364;
                            param1 = local344;
                            *(int*)(local5 - 4) = *(int*)(param1 + 16);
                            *(int*)(local5 - 8) = *(int*)(param1 + 24);
                            *(int*)(local5 - 12) = *(int*)(param1 + 24);
                            *(int*)(local5 - 16) = *(int*)(param1 + 12);
                            *(int*)(local5 - 20) = local365;
                            local1 = *(int*)(param1 + 8);
                            local360 = proc8(*(int*)(local5 - 24), local363, param1, local366); /* Warning: also results in local365, param11, param8, local359, local363, local191, param10 */
                            local344 = local191;
                            local346 = local191;
                            local346 = local191;
                            local366 = local360;
                            if (local360 >= local363) {
                                local360 = *(int*)*(int*)(local191 + 8);
                                local342 = *(char*)local360 + 1;
                                *(char*)(local191 + 23) = 1;
                            }
                            local341 = local239 + 1;
                        } while ((unsigned)local341 < (unsigned)*(int*)(local365 + 248));
                        if (local0 != local359) {
                            local366 = 0;
                        }
                    }
                    local4 = local364;
                    param1 = local346;
                    *(int*)(local4 - 4) = *(int*)(local365 + 152);
                    IoDisconnectInterrupt();
                    local348 = param11;
                    local349 = local364;
                    local350 = param1;
                    local351 = local365;
                    local352 = local366;
                    if (local366 < local363) {
                        goto L4;
                    }
                }
                local360 = local366;
                local354 = param1;
            } else {
                goto L2;
            }
        }
        param1 = local354;
        local366 = *(char*)local364;
        local365 = param3;
        local363 = param2;
        local359 = (unsigned char) param2;
        local355 = param1;
        local356 = local365;
    } else {
        local360 = 0xc000009a;
    }
    param1 = local355;
    local365 = local356;
    return local360; /* WARNING: Also returning: local365, local357, param11, param8, local359, local361, local362, local363, *(int*)param1, local366, param10 */
}

// address: 0x11000
proc5(int param5, int param1, int param2, int param3, int param4) {
    int local0; 		// r28

    *(int*)(local0 - 4) = 0x11470;
    *(int*)(local0 - 8) = *(int*)0;
    *(int*)0 = local0 - 8;
    *(int*)(local0 - param1 - 12) = param2;
    *(int*)(local0 - param1 - 16) = param3;
    *(int*)(local0 - param1 - 20) = param4;
    *(int*)(local0 - 16) = local0 - param1 - 20;
    *(int*)(local0 - param1 - 24) = *(int*)local0;
    *(int*)local0 = param5;
    return local0 + 8;
}

// address: 0x11039
proc6(int param3, int param2, int param1, int param4) {
    int local2; 		// r28

    *(int*)0 = param1;
    return *(int*)local2; /* WARNING: Also returning: param3, param4 */
}

// address: 0x18000
proc7(int param4, int param2, int param1, int param3) {
    int local1; 		// m[r28 - 8]
    int local20; 		// r26{277}
    int local21; 		// r26{271}
    int local22; 		// r24{262}
    int local23; 		// r24{62}
    int local24; 		// r26{175}
    int local25; 		// r26{151}
    int local26; 		// r26{264}
    int local27; 		// r26{81}
    int local30; 		// r26{62}
    int local31; 		// r28{62}
    int local32; 		// r25{249}
    int local33; 		// r26{250}
    int local34; 		// r26{256}
    int local35; 		// local26{264}
    int local36; 		// local21{271}
    int local37; 		// r24{276}
    int local38; 		// local20{277}
    int local39; 		// r26{296}
    int local40; 		// r28{297}
    char local41; 		// r2
    char local42; 		// r8
    char local44; 		// r24
    char local45; 		// r25
    char local46; 		// r26
    char local48; 		// r28
    char local49; 		// r30
    char local50; 		// r31

    local49 = *(unsigned char*)(local48 + 12);
    local46 = 0;
    local41 = 0;
    local1 = 0;
    local44 = param2 + 80;
    local45 = local49 + 1;
    do {
        local32 = local45;
        local33 = local46;
        local34 = local33;
        if (*(char*)local44 != 0) {
            local46 = local33 + 1;
            local41 = (unsigned short) (local33 + 1) * 80;
            local1++;
            local34 = local46;
        }
        local46 = local34;
        local44 += 192;
        local45 = local32 - 1;
    } while (local32 - 1 != 0);
    local41 = (unsigned short) local46 + 4;
    local23 = ExAllocatePoolWithTag(1, local46 + 4, 0x706f6c46);
    local39 = local30;
    local40 = local31;
    local50 = local23;
    if (local23 != 0) {
        local27 = __imp_memset(local23, 0, local46 + 4);
        local35 = local27;
        *(int*)local23 = local1;
        local44 = local23 + 4;
        local42 = (unsigned char) local23 + 4;
        if (local1 != 0) {
            local45 = param2 + 64;
            do {
                local22 = local44;
                local26 = local35;
                local37 = local22;
                local38 = local26;
                if (*(int*)(local45 + 16) != 0) {
                    *(int*)local22 = *(char*)local45;
                    *(int*)(local22 + 4) = *(int*)(local45 - 20);
                    *(int*)(local22 + 12) = 4;
                    *(char*)(local22 + 17) = 3;
                    *(char*)(local22 + 16) = 1;
                    *(short*)(local22 + 18) = *(int*)(local45 - 40);
                    *(int*)(local22 + 20) = *(int*)(local45 - 48);
                    *(int*)(local22 + 24) = *(int*)(local45 - 44);
                    *(int*)(local22 + 28) = 6;
                    *(char*)(local22 + 33) = 3;
                    *(char*)(local22 + 32) = 1;
                    *(short*)(local22 + 34) = *(int*)(local45 - 40);
                    *(int*)(local22 + 36) = *(int*)(local45 - 48) + 7;
                    *(int*)(local22 + 40) = *(int*)(local45 - 44) + ADDFLAGS32(*(int*)(local45 - 48), 7, *(int*)(local45 - 48) + 7);
                    local25 = 1;
                    local41 = 1;
                    *(int*)(local22 + 44) = 1;
                    *(char*)(local22 + 48) = 4;
                    *(char*)(local22 + 49) = 3;
                    *(short*)(local22 + 50) = param3;
                    *(int*)(local22 + 52) = *(int*)(local45 - 8);
                    *(char*)(local22 + 64) = 2;
                    *(int*)(local22 + 68) = *(int*)(local45 - 16);
                    *(int*)(local22 + 72) = *(int*)(local45 - 12);
                    *(char*)(local22 + 65) = 3;
                    local36 = local25;
                    if (*(int*)(local45 + 4) != 1) {
                        local24 = 0;
                        local41 = 0;
                        local36 = local24;
                    }
                    local21 = local36;
                    local50 = local23;
                    *(short*)(local22 + 66) = local41;
                    local44 = local22 + 80;
                    local42 = (unsigned char) local22 + 80;
                    local1 = local1 - 1;
                    local37 = local44;
                    local38 = local21;
                }
                local44 = local37;
                local20 = local38;
                local45 += 192;
                local35 = local20;
            } while (local1 != 0);
        }
        local49 = local49 * 192 + param2 + 80;
        IoReportResourceUsage(0, param4, local50, local46 + 4, 0, 0, 0, 0, local49);
        local42 =  (*(char*)local49 == 0) ? 1 : 0;
        *(char*)local49 = local42;
        ExFreePool(local50);
        local39 = local46;
        local40 = local48;
    } else {
        local42 = 0;
    }
    local46 = local39;
    local48 = local40;
    return param4; /* WARNING: Also returning: local41, local42, (unsigned char) param2, local45, local46, param2, *(char*)local48 */
}

// address: 0x18620
proc8(int param4, int param2, int param1, int param3) {
    int local0; 		// r28{268}
    char local1; 		// r9{248}
    int local10; 		// r28{113}
    int local100;
    int local101;
    int local102;
    int local103; 		// m[r28 - 28]{113}
    int local104; 		// m[r28 - 32]{113}
    int local105; 		// m[r28 - 36]{113}
    int local106; 		// m[r28 - 44]{113}
    int local107; 		// m[r28 - 48]{113}
    int local108; 		// m[r28 - 52]{113}
    int local109; 		// m[r28 - 56]{113}
    int local11; 		// r28{389}
    int local110; 		// m[r28 - 60]{113}
    int local111; 		// m[r28 - 64]{113}
    int local112; 		// m[r28 - 68]{113}
    int local113;
    int local114;
    int local115; 		// m[r28 - 12]{113}
    int local116; 		// m[r28 - 16]{113}
    int local117; 		// m[r28 - 20]{113}
    int local118; 		// m[r28 - 24]{113}
    int local119;
    int local12; 		// r29{309}
    int local120;
    int local121; 		// m[r28 - 4]{113}
    int local122; 		// m[r28 - 8]{113}
    int local123; 		// m[r24]{113}
    int local124;
    int local125; 		// m[r28]{113}
    int local126; 		// m[r30]{113}
    int local127; 		// m[r31]{113}
    int local128; 		// m[r28 - 12]{170}
    int local129; 		// m[r28 - 8]{167}
    int local13; 		// r29{180}
    int local130; 		// r24{163}
    int local131; 		// r28{163}
    int local132; 		// m[r28 - 8]{161}
    int local133; 		// m[r28 - 4]{158}
    int local134; 		// m[r28]{148}
    int local135; 		// m[r29 + 8]{143}
    int local136; 		// r28{142}
    int local137; 		// m[r28]{140}
    int local138; 		// m[r28 + 4]{137}
    int local139; 		// m[r28 + 8]{133}
    int local14; 		// r29{172}
    int local140; 		// m[r28 + 12]{129}
    int local141; 		// r24{128}
    int local142; 		// r28{128}
    void *local143; 		// m[r28 + 12]{126}
    void *local144; 		// %pc{113}
    int local145; 		// m[r28 + 16]{123}
    int local146; 		// m[r28 + 20]{119}
    int local147; 		// r24{84}
    int local148; 		// r24{89}
    int local149; 		// r27{29}
    int local15; 		// r29{113}
    int local150; 		// r30{29}
    int local151; 		// r30{94}
    int local152; 		// m[r24 + 4]{29}
    int local153; 		// m[r24 + 8]{29}
    int local154; 		// m[r24 + 20]{29}
    int local155; 		// m[r24 + 28]{29}
    int local156; 		// m[r24 + 29]{29}
    int local157; 		// m[r24 + 30]{29}
    int local158; 		// m[r27 + 241]{29}
    int local159; 		// m[r28 + 4]{29}
    int local16; 		// r30{172}
    int local160; 		// m[r28 + 8]{29}
    int local161; 		// m[r28 + 12]{29}
    int local162; 		// m[r28 + 16]{29}
    int local163; 		// m[r28 + 20]{29}
    int local164;
    int local165; 		// m[r29 + 27]{29}
    int local166; 		// m[r29 + 8]{29}
    int local167; 		// m[m[r29 + 12] + 238]{29}
    int local168; 		// m[m[r29 + 12] + 245]{29}
    int local169; 		// m[m[r29 + 12] + 247]{29}
    int local17; 		// r31{348}
    int local170; 		// m[m[r29 - 4]{180} + 28]{29}
    int local171; 		// m[m[r29 - 4]{180} + 92]{29}
    int local172;
    int local173;
    int local174; 		// m[r28 - 556]{29}
    int local175; 		// m[r28 - 560]{29}
    int local176; 		// m[r28 - 564]{29}
    int local177; 		// m[r28 - 568]{29}
    int local178; 		// m[r28 - 572]{29}
    int local179; 		// m[r28 - 576]{29}
    int local18; 		// m[r24 + 20]{172}
    int local180;
    int local181;
    int local182; 		// m[r28 - 16]{29}
    int local183; 		// m[r28 - 20]{29}
    int local184; 		// m[r28 - 24]{29}
    int local185;
    int local186;
    int local187;
    int local188; 		// m[r28 - 12]{29}
    int local189; 		// m[r28 - 4]{29}
    int local19; 		// m[r27 + 241]{172}
    int local190; 		// m[r28 - 8]{29}
    int local191; 		// m[r24]{29}
    int local192;
    int local193; 		// m[r28]{29}
    int local194; 		// m[r30]{29}
    int local195; 		// m[r31]{29}
    int local196; 		// m[r28 - 68]{111}
    int local197; 		// m[r28 - 64]{108}
    int local198; 		// m[r28 - 60]{106}
    int local199; 		// m[r28 - 56]{104}
    int local2; 		// r25{226}
    int local20;
    int local200; 		// m[r28 - 52]{102}
    int local201; 		// m[r28 - 48]{98}
    int local202; 		// m[r28 - 44]{96}
    int local203; 		// m[r28 - 40]{91}
    int local204; 		// r28{84}
    int local205; 		// m[r28 + 4]{39}
    int local206; 		// m[r28 + 8]{35}
    int local207; 		// m[r29 + 8]{85}
    int local208; 		// m[r28 - 4]{49}
    int local209; 		// m[r28 - 8]{53}
    int local21;
    int local210; 		// m[r28 - 12]{65}
    int local211; 		// m[r28 - 16]{67}
    int local212; 		// m[r28 - 20]{69}
    int local213; 		// m[r28 - 24]{71}
    int local214; 		// m[r28 - 28]{75}
    int local215; 		// m[r28 - 32]{77}
    int local216; 		// m[r28 - 36]{79}
    int local217; 		// m[r28 - 40]{82}
    int local218; 		// m[r28 - 44]{29}
    int local219; 		// m[r28 - 48]{29}
    int local22; 		// m[r28 + 4]{172}
    int local220; 		// m[r28 - 52]{29}
    int local221; 		// m[r28 - 56]{29}
    int local222; 		// m[r28 - 60]{29}
    int local223; 		// m[r28 - 64]{29}
    int local224; 		// m[r28 - 68]{29}
    int local225;
    int local226;
    int local227; 		// m[r28]{45}
    int local228; 		// %pc{83}
    int local229; 		// m[0x14070]{29}
    int local23; 		// m[r28 + 8]{172}
    int local230; 		// r28{58}
    int local231; 		// m[r29 + 8]{59}
    int local232; 		// m[r28 - 12]{56}
    int local233;
    int local234;
    int local235;
    int local236; 		// m[r28 - 28]{29}
    int local237; 		// m[r28 - 32]{29}
    int local238; 		// m[r28 - 36]{29}
    int local239; 		// m[r28 - 40]{29}
    int local24; 		// m[r28 + 12]{172}
    int local240; 		// %pc{57}
    int local241; 		// r24{58}
    int local242; 		// m[0x14074]{29}
    int local243; 		// r24{44}
    int local244; 		// r28{44}
    void *local245; 		// m[r28]{42}
    void *local246; 		// %pc{29}
    int local247; 		// r24{16}
    int local248; 		// r27{309}
    void *local249; 		// %pc{180}
    int local25; 		// m[r28 + 16]{172}
    int local250; 		// m[r28 - 576]{27}
    int local251; 		// m[r28 - 572]{24}
    int local252; 		// m[r28 - 568]{22}
    int local253; 		// m[r28 - 564]{18}
    int local254; 		// m[r28 - 560]{13}
    int local255; 		// m[r28 - 556]{10}
    int local256; 		// m[r28 - 8]{8}
    int local257; 		// m[r28 - 4]{2}
    int local258; 		// r25{273}
    int local259; 		// local4{346}
    int local26; 		// m[r28 + 20]{172}
    int local260; 		// local3{350}
    int local261; 		// r31{352}
    int local262; 		// r25{355}
    int local263; 		// r28{371}
    int local264; 		// r29{372}
    int local265; 		// local11{389}
    int local266; 		// r30{391}
    int local267; 		// %pc{396}
    int local268; 		// r28{407}
    int local269; 		// r8
    int local27;
    int local270; 		// r9
    int local271; 		// r10
    int local272; 		// r11
    int local273; 		// r24
    int local274; 		// r25
    int local275; 		// r26
    int local276; 		// r28
    int local277; 		// r30
    int local28;
    int local29; 		// m[r29 + 27]{172}
    int local3; 		// r25{350}
    int local30; 		// m[r29 + 8]{172}
    int local31; 		// m[m[r29 + 12] + 247]{172}
    int local32; 		// m[m[r29 - 4]{180} + 28]{172}
    int local33; 		// m[m[r29 - 4]{180} + 92]{172}
    int local34;
    int local35;
    int local36; 		// m[r28 - 556]{172}
    int local37; 		// m[r28 - 560]{172}
    int local38; 		// m[r28 - 564]{172}
    int local39; 		// m[r28 - 568]{172}
    int local4; 		// r25{346}
    int local40; 		// m[r28 - 572]{172}
    int local41; 		// m[r28 - 576]{172}
    int local42;
    int local43;
    int local44;
    int local45; 		// m[r28 - 16]{172}
    int local46;
    int local47;
    int local48; 		// m[r28 - 28]{172}
    int local49; 		// m[r28 - 36]{172}
    int local5; 		// r25{266}
    int local50; 		// m[r28 - 40]{172}
    int local51; 		// m[r28 - 44]{172}
    int local52; 		// m[r28 - 48]{172}
    int local53; 		// m[r28 - 52]{172}
    int local54; 		// m[r28 - 56]{172}
    int local55; 		// m[r28 - 60]{172}
    int local56; 		// m[r28 - 64]{172}
    int local57; 		// m[r28 - 68]{172}
    int local58; 		// m[r28 - 20]{172}
    int local59; 		// m[r28 - 24]{172}
    int local6; 		// r28{196}
    int local60; 		// m[r28 - 4]{172}
    int local61; 		// m[r28 - 8]{172}
    int local62; 		// m[r28 - 12]{172}
    int local63;
    int local64; 		// m[r28]{172}
    int local65; 		// m[r30]{172}
    void *local66; 		// %pc{172}
    void *local67; 		// m[r28 - 8]{178}
    int local68; 		// r28{172}
    int local69; 		// m[r28 - 4]{175}
    int local7; 		// r27{172}
    int local70; 		// r24{142}
    int local71; 		// r30{113}
    int local72; 		// m[r24 + 4]{113}
    int local73; 		// m[r24 + 8]{113}
    int local74; 		// m[r24 + 20]{113}
    int local75; 		// m[r24 + 28]{113}
    int local76; 		// m[r24 + 29]{113}
    int local77; 		// m[r24 + 30]{113}
    int local78; 		// m[r27 + 241]{113}
    int local79; 		// m[r28 + 4]{113}
    int local8; 		// r28{29}
    int local80; 		// m[r28 + 8]{113}
    int local81; 		// m[r28 + 12]{113}
    int local82;
    int local83; 		// m[r29 + 8]{113}
    int local84; 		// m[r29 + 27]{113}
    int local85; 		// m[m[r29 + 12] + 238]{113}
    int local86; 		// m[m[r29 + 12] + 245]{113}
    int local87; 		// m[m[r29 + 12] + 247]{113}
    int local88; 		// m[m[r29 - 4]{180} + 28]{113}
    int local89; 		// m[m[r29 - 4]{180} + 92]{113}
    int local9; 		// r28{180}
    int local90;
    int local91;
    int local92; 		// m[r28 - 556]{113}
    int local93; 		// m[r28 - 560]{113}
    int local94; 		// m[r28 - 564]{113}
    int local95; 		// m[r28 - 568]{113}
    int local96; 		// m[r28 - 572]{113}
    int local97; 		// m[r28 - 576]{113}
    int local98;
    int local99;

    local257 = param1;
    local256 = 0;
    local255 = param2;
    local254 = param3;
    local247 = *(int*)param4;
    local253 = *(int*)local247;
    local252 = 0x18e42;
    local251 = local276 - 296;
    (*sprintf)(pc, local276 - 296, 0x18e42, *(int*)local247, param3, param2, 0, param1, (unsigned char) local276 - 296, local276 - 296, sprintf, local276 - 4, param4, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
    local266 = local150;
    local266 = local150;
    local206 = param1 - 292;
    local205 = param1 - 28;
    local245 = local246;
    RtlInitString();
    local227 = 1;
    local208 = param1 - 28;
    local209 = param1 - 12;
    local232 = local242;
    local240 = local229;
    RtlAnsiStringToUnicodeString();
    local265 = local230;
    local267 = local240;
    local231 = local241;
    if (local241 < 0) {
L2:
        local11 = local265;
        local277 = local266;
        local268 = local11;
        if (*(int*)(param1 - 4) != 0) {
            *(int*)(local11 - 4) = *(int*)(param1 - 4);
            IoDeleteDevice(*(int*)(param1 - 4));
            local268 = local276;
        }
    } else {
        local210 = param1 - 4;
        local211 = 0;
        local212 = 5;
        local213 = 7;
        local214 = param1 - 12;
        local215 = 88;
        local216 = *(int*)(param1 + 28);
        local217 = local229;
        local228 = *(int*)0x1406c;
        local147 = IoCreateDevice(*(int*)(param1 + 28), 88, param1 - 12, 7, 5, 0, param1 - 4);
        local265 = local204;
        local267 = local228;
        local207 = local147;
        if (local147 < 0) {
            goto L2;
        } else {
            local148 = *(unsigned char*)(param1 + 20);
            local203 = local150;
            local151 = *(unsigned char*)(param1 + 16) * 192;
            local202 = local148;
            local201 = *(int*)(local151 + param3 + 60);
            local200 = *(int*)(local151 + param3 + 44);
            local199 = 0x18e32;
            local198 = 0x18e1a;
            local197 = param1 - 548;
            local196 = *(int*)0x1406c;
            (*local149)(local179, local178, local177, local176, local175, local174, *(int*)0x1406c, param1 - 548, 0x18e1a, 0x18e32, *(int*)(local151 + param3 + 44), *(int*)(local151 + param3 + 60), local148, local150, *(int*)(param1 + 28), param1 - 12, 7, local184, 5, local183, 0, local182, param1 - 4, local181, local188, param1 - 12, local173, local187, local186, local190, local185, local180, param1 - 28, local172, local189, param1 - 28, local159, param1 - 292, local160, local161, local162, local163, (unsigned char) param1 - 548, local270, local271, local272, param1 - 548, local274, local275, local149, param1, local151, param3, local152, local153, local154, local155, local156, local157, local158, local147, local164, local165, local166, local167, local168, local169, local170, local171, local191, local192, local193, local194, local195, <all>, IMULTFLAGS32(local151), IMULTFLAGS32(local151), FZF);
            local264 = local15;
            local146 = local15 - 548;
            local145 = local15 - 36;
            local143 = local144;
            RtlInitString();
            local140 = 1;
            local139 = local15 - 36;
            local138 = local15 - 20;
            local137 = *(int*)0x14074;
            RtlAnsiStringToUnicodeString();
            local135 = local70;
            local134 = local15 - 12;
            if (local70 >= 0) {
                local133 = local15 - 20;
                local132 = *(int*)0x14070;
                IoCreateSymbolicLink(local15 - 20, local15 - 12);
                local129 = local15 - 12;
                local128 = *(int*)0x14064;
                (**(int*)0x14068)(local97, local96, local95, local94, local93, local92, local112, local111, local110, local109, local108, local107, local106, local105, local104, local103, local102, local118, local101, local117, local100, local116, *(int*)0x14064, local115, local99, local91, local15 - 12, local114, local120, local122, local15 - 20, local119, local113, local98, local90, local121, local15 - 20, local79, local15 - 36, local80, local81, local15 - 36, local15 - 548, (unsigned char) local15 - 12, local270, local271, local272, local15 - 12, local274, local275, *(int*)0x14068, local15, local71, param3, local72, local73, local74, local75, local76, local77, local78, local82, local83, local84, local70, local85, local86, local87, local88, local89, local123, local124, local125, local126, local127, <all>, LOGICALFLAGS32(local70), LOGICALFLAGS32(local70), FZF);
                local69 = local14 - 20;
                local67 = local66;
                (*local7)(local41, local40, local39, local38, local37, local36, local57, local56, local55, local54, local53, local52, local51, local50, local49, local48, local47, local59, local46, local58, local45, *(int*)(local9 - 16), local62, local44, *(int*)(local9 - 12), local61, local66, local43, local35, *(int*)(local9 - 8), *(int*)(local11 - 8), local60, *(int*)(local9 - 4), local42, local34, local14 - 20, *(int*)(local11 - 4), local22, local20, local23, local21, local24, local25, local26, (unsigned char) local14 - 20, local270, local271, local272, local14 - 20, local274, local275, local7, local14, local16, param3, *(int*)(local273 + 4), *(int*)(local273 + 8), local18, *(int*)(local273 + 28), *(int*)(local273 + 29), *(int*)(local273 + 30), local19, local27, local28, local29, local30, *(int*)(*(int*)(local13 + 12) + 238), *(int*)(*(int*)(local13 + 12) + 245), local31, local32, local33, *(int*)local273, local63, local64, local65, *(int*)local17, <all>, flags, NF, FZF);
                local264 = local13;
                *(int*)(local9 - 4) = *(int*)(local13 - 4);
                *(int*)(local9 - 8) = 0x11330;
                local273 = *(int*)(local13 - 4) + 116;
                *(int*)(local9 - 12) = local273;
                *(int*)(local9 - 16) = local249;
                KeInitializeDpc(local273, 0x11330, *(int*)(local13 - 4));
                *(int*)(*(int*)(local13 - 4) + 28) = *(int*)(*(int*)(local13 - 4) + 28) | 16;
                if ((unsigned)*(int*)(*(int*)(local13 - 4) + 92) < 1) {
                    *(int*)(*(int*)(local13 - 4) + 92) = 1;
                }
                local273 = *(int*)(*(int*)(local13 - 4) + 40);
                *(int*)(local273 + 4) = *(int*)(local13 + 12);
                *(int*)local273 = *(int*)(local13 - 4);
                *(char*)(local273 + 28) = *(int*)(local13 + 24);
                local2 = *(unsigned char*)(local13 + 24);
                *(char*)(local273 + 30) = 0;
                *(int*)(local9 - 16) = 7;
                local271 = (16 << local2 | *(int*)(local13 + 24));
                *(char*)(local273 + 29) = local271 | 12;
                local271 = (unsigned char) local2;
                local1 = *(int*)(local2 + local277 + param3 + 89);
                *(int*)(local273 + 20) = *(int*)(local273 + 20) | -1;
                *(char*)(local273 + 8) = local1;
                local277 = local2 * 28 + local277 + param3 + 96;
                param3 = local273 + 32;
                local5 = 7;
                local270 = 7;
                local0 = local9 - 12;
                local259 = local5;
                local263 = local0;
                local4 = local259;
                local17 = param3;
                local260 = local4;
                local261 = local17;
                while (local4 != 0) {
                    *(int*)local17 = *(int*)local277;
                    local277 +=  (FZF == 0) ? 4 : -4;
                    param3 = local17 + ( (FZF == 0) ? 4 : -4);
                    local258 = local4 - 1;
                    local270 = (unsigned char) local4 - 1;
                    local259 = local258;
                    local260 = local258;
                    local261 = param3;
                    local4 = local259;
                    local17 = param3;
                    local260 = local4;
                    local261 = local17;
                }
                local3 = local260;
                param3 = local261;
                local262 = local3;
                if (local1 == 4) {
                    *(char*)(local13 + 27) = 1;
                    local274 = local2;
                    local270 = (unsigned char) local2;
                    local271 = 1 << local2;
                    *(char*)(*(int*)(local13 + 12) + 247) = *(int*)(*(int*)(local13 + 12) + 247) | 1 << local2;
                    local262 = local274;
                }
                local274 = local262;
                if (*(int*)(local13 + 20) == 0) {
L5:
                    *(int*)(local9 - 16) = *(int*)(local13 - 4);
                    *(int*)(local9 - 20) = *(int*)(local13 + 12);
                    *(char*)(*(int*)(local13 + 12) + 245) = 1;
                    *(char*)(*(int*)(local13 + 12) + 238) = 1;
                    *(int*)(local9 - 24) = *(int*)0x14060;
                    local273 = proc9(*(int*)(local13 + 12), local274, *(int*)(local13 + 12), local13, *(int*)(local13 + 12) + 245, param3); /* Warning: also results in local277, local272, local248, local12 */
                    local263 = local276;
                    local264 = local12;
                    *(int*)(local12 + 8) = local273;
                    local269 =  (local273 < 0) ? 1 : 0;
                    *(int*)local277 = 0;
                    *(char*)(local248 + 241) = local269;
                } else {
                    if (local1 == 4) {
                        goto L5;
                    } else {
                        if (*(int*)(*(int*)(local13 + 12) + 241) != 0) {
                            goto L5;
                        }
                    }
                }
            } else {
                *(int*)(local10 - 4) = *(int*)0x14070;
                RtlFreeUnicodeString();
                local263 = local276;
            }
            local276 = local263;
            param1 = local264;
            local277 = *(int*)local276;
            local276 += 4;
            local265 = local276;
            local266 = local277;
            local268 = local276;
            if (*(int*)(param1 + 8) < 0) {
                goto L2;
            }
        }
    }
    local276 = local268;
    return *(int*)(param1 + 8); /* WARNING: Also returning: local277, local270, local271, local272, param4, *(int*)param1, FZF */
}

// address: 0x16aa0
proc9(int param6, int param2, int param3, int param1, int param4, int param5) {
    int local0; 		// m[r28 - 4]{300}
    char local1; 		// r11{392}
    int local10; 		// r28{92}
    int local100; 		// m[r28 - 5]{167}
    int local101;
    int local102;
    int local103;
    int local104;
    int local105;
    int local106; 		// m[r28 - 28]{167}
    int local107; 		// m[r28 - 32]{167}
    int local108; 		// m[r28 - 36]{167}
    int local109;
    int local11; 		// r28{57}
    int local110;
    int local111;
    int local112;
    int local113;
    int local114;
    int local115;
    int local116;
    int local117;
    int local118;
    int local119;
    int local12; 		// r28{49}
    int local120;
    int local121;
    int local122;
    int local123;
    int local124;
    int local125;
    int local126;
    int local127;
    int local128;
    int local129;
    int local13; 		// r28{307}
    int local130;
    int local131;
    int local132;
    int local133;
    int local134;
    int local135;
    int local136;
    int local137;
    int local138; 		// m[r28 - 16]{167}
    int local139; 		// m[r28 - 20]{167}
    int local14; 		// r28{275}
    int local140; 		// m[r28 - 24]{167}
    int local141;
    int local142;
    int local143;
    int local144;
    int local145;
    int local146;
    int local147;
    int local148;
    int local149;
    int local15; 		// r28{208}
    int local150; 		// m[r28 - 4]{167}
    int local151; 		// m[r28 - 8]{167}
    int local152; 		// m[r28 - 12]{167}
    int local153; 		// m[r29 - 1]{167}
    void *local154; 		// %pc{167}
    void *local155; 		// m[r28 - 8]{171}
    int local156; 		// m[r28 - 4]{168}
    int local157; 		// r24{138}
    int local158;
    int local159;
    int local16; 		// r28{411}
    int local160;
    int local161;
    int local162; 		// m[r30 + 172]{137}
    int local163; 		// m[r30 + 238]{137}
    int local164; 		// m[r30 + 242]{137}
    int local165; 		// m[r30 + 249]{137}
    int local166; 		// m[r30 + 241]{137}
    int local167; 		// m[r30 + 228]{137}
    int local168; 		// m[r30 + 229]{137}
    int local169; 		// m[r30 + 230]{137}
    int local17; 		// r28{349}
    int local170; 		// m[m[r28 + 4] + 249]{137}
    int local171;
    int local172; 		// m[r28 - 5]{137}
    int local173;
    int local174;
    int local175;
    int local176;
    int local177;
    int local178; 		// m[r28 - 28]{137}
    int local179; 		// m[r28 - 32]{137}
    int local18; 		// r28{435}
    int local180; 		// m[r28 - 36]{137}
    int local181;
    int local182;
    int local183;
    int local184;
    int local185;
    int local186;
    int local187;
    int local188;
    int local189;
    int local19; 		// r28{397}
    int local190;
    int local191;
    int local192;
    int local193;
    int local194;
    int local195;
    int local196;
    int local197;
    int local198;
    int local199;
    int local2; 		// %pc{274}
    int local20; 		// r29{137}
    int local200;
    int local201;
    int local202;
    int local203;
    int local204;
    int local205;
    int local206;
    int local207;
    int local208;
    int local209;
    int local21; 		// r30{137}
    int local210; 		// m[r28 - 16]{137}
    int local211; 		// m[r28 - 20]{137}
    int local212; 		// m[r28 - 24]{137}
    int local213;
    int local214;
    int local215;
    int local216;
    int local217;
    int local218;
    int local219;
    int local22; 		// r30{57}
    int local220;
    int local221;
    int local222; 		// m[r28 - 4]{137}
    int local223; 		// m[r28 - 8]{137}
    int local224; 		// m[r28 - 12]{137}
    int local225; 		// m[r29 - 1]{137}
    void *local226; 		// %pc{137}
    void *local227; 		// m[r28 - 12]{165}
    int local228; 		// m[r28 - 8]{162}
    int local229; 		// m[r28 - 4]{150}
    int local23; 		// r30{367}
    int local230; 		// m[r30 + 249]{149}
    int local231; 		// m[r29 - 1]{141}
    int local232;
    int local233; 		// r29{128}
    int local234; 		// r29{350}
    int local235; 		// r30{128}
    int local236; 		// r30{92}
    int local237; 		// m[r30 + 172]{459}
    int local238; 		// m[r30 + 238]{460}
    int local239; 		// m[r30 + 242]{461}
    int local24; 		// r30{351}
    int local240; 		// m[r30 + 249]{462}
    int local241; 		// m[r30 + 249]{463}
    int local242; 		// m[r30 + 172]{92}
    int local243; 		// m[r30 + 238]{92}
    int local244; 		// m[r30 + 242]{92}
    int local245; 		// m[r30 + 249]{92}
    int local246; 		// m[r30 + 241]{92}
    int local247; 		// m[m[r28 + 4] + 249]{92}
    int local248;
    int local249; 		// m[r28 - 5]{469}
    int local25; 		// m[r30 + 249]{187}
    int local250; 		// m[r28 - 8]{470}
    int local251; 		// m[r28 - 12]{471}
    int local252; 		// m[r28 - 16]{472}
    int local253; 		// m[r28 - 20]{473}
    int local254; 		// m[r28 - 24]{474}
    int local255; 		// m[r28 - 28]{475}
    int local256; 		// m[r28 - 32]{476}
    int local257; 		// m[r28 - 36]{477}
    int local258; 		// m[r28 - 4]{478}
    int local259; 		// m[r28 - 8]{479}
    int local26;
    int local260; 		// m[r28 - 12]{480}
    int local261; 		// m[r28 - 16]{481}
    int local262; 		// m[r28 - 4]{482}
    int local263; 		// m[r28 - 8]{483}
    int local264; 		// m[r28 - 4]{484}
    int local265; 		// m[r28 - 8]{485}
    int local266; 		// m[r28 - 12]{486}
    int local267; 		// m[r28 - 8]{490}
    int local268; 		// m[r28 - 12]{491}
    int local269; 		// m[r28 - 16]{492}
    int local27; 		// m[r30 + 172]{173}
    int local270; 		// m[r28 - 20]{493}
    void *local271; 		// m[r28 - 24]{494}
    int local272; 		// m[r28 - 4]{495}
    int local273;
    int local274; 		// m[r28 - 12]{497}
    int local275; 		// m[r28 - 16]{498}
    int local276;
    int local277; 		// m[r28 - 8]{500}
    int local278; 		// m[r28 - 4]{501}
    int local279; 		// m[r28 - 8]{502}
    int local28; 		// m[r30 + 238]{173}
    int local280; 		// m[r28 - 12]{503}
    int local281; 		// m[r28 - 4]{504}
    int local282; 		// m[r28 - 8]{505}
    int local283; 		// m[r28 - 12]{506}
    int local284; 		// m[r28 - 4]{507}
    int local285; 		// m[r28 - 8]{508}
    int local286; 		// m[r28 - 12]{509}
    int local287; 		// m[r28 - 16]{510}
    int local288; 		// m[r28 - 20]{511}
    int local289; 		// m[r28 - 24]{512}
    int local29; 		// m[r30 + 242]{173}
    int local290;
    int local291;
    int local292;
    int local293;
    int local294;
    int local295;
    int local296; 		// m[r28 - 4]{92}
    int local297; 		// m[r28 - 8]{92}
    int local298; 		// m[r28 - 12]{92}
    int local299; 		// m[r29 - 1]{513}
    int local3; 		// m[r28 - 8]{270}
    int local30; 		// m[r30 + 249]{173}
    int local300; 		// %pc{356}
    int local301; 		// m[r28 - 8]{135}
    int local302; 		// m[r28 - 4]{132}
    int local303; 		// m[r28 - 8]{173}
    int local304; 		// %pc{127}
    int local305; 		// m[r28 - 12]{126}
    char local306; 		// m[r30 + 230]{124}
    char local307; 		// m[r30 + 229]{123}
    int local308; 		// m[r28 - 8]{121}
    char local309; 		// m[r30 + 228]{120}
    int local31; 		// m[m[r28 + 4] + 249]{173}
    int local310; 		// m[r28 - 4]{118}
    int local311; 		// m[r30 + 172]{464}
    int local312; 		// m[r30 + 238]{465}
    int local313; 		// m[r30 + 242]{466}
    int local314; 		// m[r30 + 249]{467}
    int local315; 		// m[m[r28 + 4] + 249]{639}
    int local316; 		// m[r28 - 4]{468}
    int local317; 		// m[r28 - 4]{487}
    int local318; 		// m[r28 - 8]{488}
    int local319; 		// m[r28 - 4]{489}
    int local32;
    int local320; 		// m[r28 - 8]{496}
    int local321; 		// m[r28 - 4]{499}
    int local322; 		// r28{111}
    int local323; 		// r29{92}
    int local324;
    int local325;
    int local326;
    int local327;
    int local328;
    int local329; 		// m[r28 - 5]{92}
    int local33; 		// m[r28 - 5]{173}
    int local330;
    int local331;
    int local332;
    int local333;
    int local334;
    int local335; 		// m[r28 - 28]{92}
    int local336; 		// m[r28 - 32]{92}
    int local337; 		// m[r28 - 36]{92}
    int local338;
    int local339;
    int local34;
    int local340;
    int local341;
    int local342;
    int local343;
    int local344;
    int local345;
    int local346;
    int local347;
    int local348;
    int local349; 		// m[r28 - 4]{93}
    int local35;
    int local350; 		// m[r28 - 8]{98}
    int local351; 		// m[r28 - 12]{100}
    int local352; 		// m[r28 - 16]{102}
    int local353; 		// m[r28 - 20]{106}
    void *local354; 		// m[r28 - 24]{109}
    int local355;
    int local356;
    int local357;
    int local358;
    int local359;
    int local36;
    int local360;
    int local361;
    int local362;
    int local363;
    int local364;
    int local365;
    int local366;
    int local367;
    int local368; 		// m[r28 - 16]{92}
    int local369; 		// m[r28 - 20]{92}
    int local37;
    int local370; 		// m[r28 - 24]{92}
    int local371; 		// m[r29 - 1]{92}
    int local372; 		// %pc{110}
    int local373; 		// m[0x140e8]{92}
    void *local374; 		// %pc{92}
    int local375; 		// r24{73}
    int local376; 		// r29{57}
    int local377; 		// m[r30 + 172]{57}
    int local378; 		// m[r30 + 238]{57}
    int local379; 		// m[r30 + 242]{57}
    int local38;
    int local380;
    int local381;
    int local382; 		// m[r30 + 249]{71}
    int local383; 		// m[r30 + 241]{57}
    int local384; 		// m[r30 + 228]{57}
    int local385; 		// m[r30 + 229]{57}
    int local386; 		// m[r30 + 230]{57}
    int local387; 		// m[m[r28 + 4] + 249]{57}
    int local388;
    int local389; 		// m[r28 - 5]{57}
    int local39; 		// m[r28 - 28]{173}
    int local390;
    int local391;
    int local392;
    int local393;
    int local394;
    int local395; 		// m[r28 - 28]{57}
    int local396; 		// m[r28 - 32]{57}
    int local397; 		// m[r28 - 36]{57}
    int local398;
    int local399;
    int local4; 		// m[r28 - 4]{266}
    int local40; 		// m[r28 - 32]{173}
    int local400;
    int local401;
    int local402;
    int local403;
    int local404;
    int local405;
    int local406;
    int local407;
    int local408;
    int local409;
    int local41; 		// m[r28 - 36]{173}
    int local410;
    int local411;
    int local412;
    int local413;
    int local414;
    int local415;
    int local416;
    int local417;
    int local418;
    int local419;
    int local42;
    int local420;
    int local421;
    int local422;
    int local423;
    int local424;
    int local425;
    int local426; 		// m[r28 - 16]{57}
    int local427; 		// m[r28 - 20]{57}
    int local428; 		// m[r28 - 24]{57}
    int local429;
    int local43;
    int local430;
    int local431;
    int local432;
    int local433;
    int local434;
    int local435;
    int local436;
    int local437;
    int local438; 		// m[r28 - 4]{57}
    int local439; 		// m[r28 - 8]{57}
    int local44;
    int local440; 		// m[r28 - 12]{57}
    int local441; 		// m[r29 - 1]{57}
    int local442; 		// m[0x140e4]{57}
    int local443; 		// m[r28 - 16]{90}
    int local444; 		// m[r28 - 12]{87}
    int local445; 		// m[r28 - 8]{75}
    int local446; 		// m[r30 + 249]{57}
    int local447; 		// r28{70}
    void *local448; 		// m[r28 - 8]{68}
    void *local449; 		// %pc{57}
    int local45;
    char local450; 		// m[r30 + 242]{66}
    char local451; 		// m[r30 + 238]{65}
    int local452; 		// m[r28 - 4]{63}
    int local453; 		// m[r30 + 172]{60}
    int local454; 		// r29{49}
    int local455; 		// r30{49}
    int local456;
    int local457;
    int local458;
    int local459;
    int local46;
    int local460;
    int local461; 		// m[r30 + 172]{49}
    int local462; 		// m[r30 + 238]{49}
    int local463; 		// m[r30 + 242]{49}
    int local464; 		// m[r30 + 249]{49}
    int local465; 		// m[r30 + 241]{49}
    int local466; 		// m[r30 + 228]{49}
    int local467; 		// m[r30 + 229]{49}
    int local468; 		// m[r30 + 230]{49}
    int local469; 		// m[m[r28 + 4] + 249]{49}
    int local47;
    int local470;
    int local471; 		// m[r28 - 5]{49}
    int local472;
    int local473;
    int local474;
    int local475;
    int local476;
    int local477; 		// m[r28 - 28]{49}
    int local478; 		// m[r28 - 32]{49}
    int local479; 		// m[r28 - 36]{49}
    int local48;
    int local480;
    int local481;
    int local482;
    int local483;
    int local484;
    int local485;
    int local486;
    int local487;
    int local488;
    int local489;
    int local49;
    int local490;
    int local491;
    int local492;
    int local493;
    int local494;
    int local495;
    int local496;
    int local497;
    int local498;
    int local499;
    int local5; 		// m[r28 - 4]{255}
    int local50;
    int local500;
    int local501;
    int local502;
    int local503;
    int local504;
    int local505;
    int local506;
    int local507;
    int local508;
    int local509;
    int local51;
    int local510; 		// m[r28 - 16]{49}
    int local511; 		// m[r28 - 20]{49}
    int local512; 		// m[r28 - 24]{49}
    int local513;
    int local514;
    int local515;
    int local516;
    int local517;
    int local518;
    int local519;
    int local52;
    int local520;
    int local521;
    int local522; 		// m[r28 - 4]{49}
    int local523; 		// m[r28 - 8]{49}
    int local524; 		// m[r28 - 12]{49}
    int local525; 		// m[r29 - 1]{49}
    void *local526; 		// %pc{49}
    int local527; 		// %flags{49}
    int local528; 		// %CF{49}
    void *local529; 		// m[r28 - 8]{55}
    int local53; 		// m[r28 - 20]{173}
    int local530; 		// m[r28 - 4]{52}
    int local531; 		// r24{11}
    int local532; 		// r24{34}
    int local533; 		// r30{173}
    void *local534; 		// %pc{208}
    int local535; 		// m[r28 - 36]{47}
    int local536; 		// m[r28 - 32]{44}
    int local537; 		// m[r28 - 28]{32}
    char local538; 		// m[r28 - 5]{31}
    int local539; 		// m[m[r28 + 4] + 249]{30}
    int local54; 		// m[r28 - 24]{173}
    int local540; 		// m[r28 - 24]{27}
    int local541; 		// m[r28 - 12]{18}
    int local542; 		// m[r28 - 20]{15}
    int local543; 		// m[r28 - 16]{13}
    int local544; 		// m[r28 - 12]{7}
    int local545; 		// m[r28 - 8]{5}
    int local546; 		// m[r28 - 4]{2}
    int local547; 		// r28{227}
    int local548; 		// r29{208}
    int local549; 		// r30{208}
    int local55;
    int local550; 		// m[r28 - 4]{209}
    int local551; 		// m[r28 - 8]{214}
    int local552; 		// m[r28 - 12]{216}
    int local553; 		// m[r28 - 16]{218}
    int local554; 		// m[r28 - 20]{222}
    void *local555; 		// m[r28 - 24]{225}
    int local556; 		// %pc{226}
    int local557; 		// r29{173}
    int local558; 		// r29{167}
    int local559; 		// local17{349}
    int local56;
    int local560; 		// local234{350}
    int local561; 		// local24{351}
    int local562; 		// local300{356}
    int local563; 		// local237{459}
    char local564; 		// local238{460}
    char local565; 		// local239{461}
    int local566; 		// local240{462}
    int local567; 		// local241{463}
    int local568; 		// local311{464}
    char local569; 		// local312{465}
    int local57;
    char local570; 		// local313{466}
    int local571; 		// local314{467}
    int local572; 		// local316{468}
    char local573; 		// local249{469}
    int local574; 		// local250{470}
    int local575; 		// local251{471}
    int local576; 		// local252{472}
    int local577; 		// local253{473}
    int local578; 		// local254{474}
    int local579; 		// local255{475}
    int local58; 		// m[r28 - 16]{173}
    int local580; 		// local256{476}
    int local581; 		// local257{477}
    int local582; 		// local258{478}
    void *local583; 		// local259{479}
    int local584; 		// local260{480}
    int local585; 		// local261{481}
    int local586; 		// local262{482}
    void *local587; 		// local263{483}
    int local588; 		// local264{484}
    int local589; 		// local265{485}
    int local59;
    void *local590; 		// local266{486}
    int local591; 		// local317{487}
    int local592; 		// local318{488}
    int local593; 		// local319{489}
    int local594; 		// local267{490}
    int local595; 		// local268{491}
    int local596; 		// local269{492}
    int local597; 		// local270{493}
    void *local598; 		// local271{494}
    int local599; 		// local272{495}
    int local6; 		// r24{189}
    int local60;
    void *local600; 		// local320{496}
    int local601; 		// local274{497}
    int local602; 		// local275{498}
    int local603; 		// local321{499}
    void *local604; 		// local277{500}
    int local605; 		// local278{501}
    int local606; 		// local279{502}
    int local607; 		// local280{503}
    int local608; 		// local281{504}
    int local609; 		// local282{505}
    int local61;
    int local610; 		// local283{506}
    int local611; 		// local284{507}
    int local612; 		// local285{508}
    int local613; 		// local286{509}
    int local614; 		// local287{510}
    int local615; 		// local288{511}
    void *local616; 		// local289{512}
    int local617; 		// local299{513}
    int local618; 		// local315{639}
    int local619; 		// r28{365}
    int local62;
    int local620; 		// r29{366}
    int local621; 		// local23{367}
    int local622; 		// %pc{372}
    int local623; 		// r28{381}
    int local624; 		// r29{382}
    int local625; 		// r30{383}
    int local626; 		// %pc{388}
    int local627; 		// local16{411}
    int local628; 		// r28{421}
    int local629; 		// %pc{426}
    int local63;
    int local630; 		// local18{435}
    int local631; 		// r28{450}
    int local632; 		// r8
    int local633; 		// r11
    int local634; 		// r24
    int local635; 		// r26
    int local636; 		// r28
    int local64;
    int local65;
    int local66; 		// m[r28 - 12]{173}
    int local67;
    int local68;
    int local69;
    int local7; 		// r28{167}
    int local70; 		// m[r28 - 4]{173}
    int local71; 		// m[r29 - 1]{173}
    int local72; 		// m[r28 - 16]{206}
    int local73; 		// r28{173}
    int local74; 		// m[r28 - 12]{203}
    int local75; 		// m[r28 - 8]{191}
    int local76;
    int local77; 		// r28{186}
    void *local78; 		// m[r28 - 8]{184}
    void *local79; 		// %pc{173}
    int local8; 		// r28{137}
    char local80; 		// m[r30 + 242]{182}
    int local81; 		// m[r28 - 4]{180}
    char local82; 		// m[r30 + 238]{179}
    int local83; 		// m[r30 + 172]{176}
    int local84; 		// r30{167}
    int local85;
    int local86;
    int local87;
    int local88;
    int local89;
    int local9; 		// r28{128}
    int local90; 		// m[r30 + 172]{167}
    int local91; 		// m[r30 + 238]{167}
    int local92; 		// m[r30 + 242]{167}
    int local93; 		// m[r30 + 249]{167}
    int local94; 		// m[r30 + 241]{167}
    int local95; 		// m[r30 + 228]{167}
    int local96; 		// m[r30 + 229]{167}
    int local97; 		// m[r30 + 230]{167}
    int local98; 		// m[m[r28 + 4] + 249]{167}
    int local99;

    local546 = param1;
    local545 = param2;
    local544 = param2;
    local531 = *(int*)(*(int*)(local636 + 8) + 40);
    local543 = param3;
    local542 = param4;
    local541 = local531;
    local634 = *(unsigned char*)(param6 + 249);
    local632 = (unsigned char) local634 & 0xfffffffb | 8;
    local540 = param5;
    local539 = local632;
    local538 = 0;
    local537 = (local634 >> 8 & 0xffffff | ((unsigned char) local634 & 0xfffffffb)) >> 8 & 0xffffff | (local632);
    local532 = *(int*)(param6 + 180);
    local536 = local532 + 2;
    (*WRITE_PORT_UCHAR)(pc, local532 + 2, (local634 >> 8 & 0xffffff | ((unsigned char) local634 & 0xfffffffb)) >> 8 & 0xffffff | (local632), param5, param4, param3, local531, param2, 0, param1, (unsigned char) local532 + 2, local532 + 2, local636 - 4, param6, WRITE_PORT_UCHAR, local632, LOGICALFLAGS32(local532 + 2), LOGICALFLAGS32(local532 + 2));
    local530 = 10;
    local529 = local526;
    (**(int*)0x14028)(local479, local478, local477, local476, local496, local512, local475, local495, local511, local474, local483, local494, local500, local510, local473, local482, local488, local493, local499, local503, local506, local509, local515, local518, local521, local524, local526, local472, local481, local498, local485, local487, local490, local492, local502, local505, local508, local514, local517, local520, local523, local471, local507, local504, local501, 10, local497, local491, local489, local486, local484, local480, local470, local513, local516, local519, local522, local632, (unsigned char) *(int*)0x14028, local634, param2, local635, *(int*)0x14028, local454, local455, param5, local456, local457, local458, local459, local460, local461, local462, local463, local464, local465, local466, local467, local468, local469, local525, <all>, local527, local528);
    local453 = *(int*)(local376 + 12);
    local452 = local22 + 24;
    local451 = 1;
    local450 = 0;
    local448 = local449;
    KeResetEvent(local22 + 24);
    local382 = local446 | 4;
    local375 = (local382);
    local445 = local375;
    local634 = *(int*)(local22 + 180) + 1;
    local444 = local634 + 1;
    local443 = local442;
    (*param5)(local397, local396, local395, local394, local414, local428, local393, local413, local427, local442, local392, local401, local412, local426, local634 + 1, local391, local400, local406, local411, local419, local422, local425, local431, local434, local437, local440, local416, local375, local390, local399, local403, local405, local408, local410, local418, local421, local424, local430, local433, local436, local439, local389, local423, local420, local417, local415, local22 + 24, local409, local407, local404, local402, local398, local388, local429, local432, local435, local438, (unsigned char) local634 + 1, local633, local634 + 1, param2, local635, param3, local376, local22, param5, local377, local378, local379, local380, local381, *(int*)(local376 + 12), 1, 0, local382, local383, local384, local385, local386, local387, local441, <all>, LOGICALFLAGS32(local634 + 1), LOGICALFLAGS32(local634 + 1));
    local560 = local323;
    local561 = local236;
    local563 = local324;
    local564 = local325;
    local565 = local326;
    local566 = local327;
    local567 = local328;
    local568 = local242;
    local569 = local243;
    local570 = local244;
    local571 = local245;
    local572 = local248;
    local573 = local329;
    local574 = local330;
    local575 = local331;
    local576 = local332;
    local577 = local333;
    local578 = local334;
    local579 = local335;
    local580 = local336;
    local581 = local337;
    local582 = local338;
    local583 = local339;
    local584 = local340;
    local585 = local341;
    local586 = local342;
    local587 = local343;
    local588 = local344;
    local589 = local345;
    local590 = local346;
    local591 = local347;
    local592 = local348;
    local599 = local355;
    local600 = local273;
    local601 = local356;
    local602 = local357;
    local603 = local276;
    local604 = local358;
    local605 = local359;
    local606 = local360;
    local607 = local361;
    local608 = local362;
    local609 = local363;
    local610 = local364;
    local611 = local365;
    local612 = local366;
    local613 = local367;
    local614 = local368;
    local615 = local369;
    local616 = local370;
    local617 = local371;
    local618 = local247;
    local624 = local323;
    local625 = local236;
    local349 = local236;
    local350 = 0;
    local351 = 0;
    local352 = 0;
    local632 = (unsigned char) local236 + 24;
    local353 = local236 + 24;
    local354 = local374;
    local372 = local373;
    local634 = KeWaitForSingleObject(local236 + 24, 0, 0, 0, local236);
    local559 = local322;
    local562 = local372;
    local593 = local349;
    local594 = local350;
    local595 = local351;
    local596 = local352;
    local597 = local353;
    local598 = local354;
    local623 = local322;
    local626 = local372;
    if (local634 == 258) {
        do {
            local17 = local559;
            local234 = local560;
            local24 = local561;
            local300 = local562;
            local237 = local563;
            local238 = local564;
            local239 = local565;
            local240 = local566;
            local241 = local567;
            local311 = local568;
            local312 = local569;
            local313 = local570;
            local314 = local571;
            local316 = local572;
            local249 = local573;
            local250 = local574;
            local251 = local575;
            local252 = local576;
            local253 = local577;
            local254 = local578;
            local255 = local579;
            local256 = local580;
            local257 = local581;
            local258 = local582;
            local259 = local583;
            local260 = local584;
            local261 = local585;
            local262 = local586;
            local263 = local587;
            local264 = local588;
            local265 = local589;
            local266 = local590;
            local317 = local591;
            local318 = local592;
            local319 = local593;
            local267 = local594;
            local268 = local595;
            local269 = local596;
            local270 = local597;
            local271 = local598;
            local272 = local599;
            local320 = local600;
            local274 = local601;
            local275 = local602;
            local321 = local603;
            local277 = local604;
            local278 = local605;
            local279 = local606;
            local280 = local607;
            local281 = local608;
            local282 = local609;
            local283 = local610;
            local284 = local611;
            local285 = local612;
            local286 = local613;
            local287 = local614;
            local288 = local615;
            local289 = local616;
            local299 = local617;
            local315 = local618;
            local619 = local17;
            local620 = local234;
            local621 = local24;
            local622 = local300;
            if ((unsigned)*(int*)(local234 - 1) >= 1) {
                goto L16;
            }
            local310 = *(int*)(local234 - 8);
            local309 = 0;
            local308 = 19;
            local307 = 15;
            local306 = 0;
            local305 = local300;
            local304 = local300 - 0x8de;
            local634 = proc10(*(int*)(local17 - 8), param2, local635, param3, local234, local24, param5); /* Warning: also results in local235, local632, local633, param2, local635, param3, local9, local233, param5 */
            local619 = local9;
            local620 = local233;
            local621 = local235;
            local622 = local304;
            if (local634 < 0) {
                local634 = 258;
                local632 = 2;
                goto L16;
            }
            local302 = 500;
            local301 = local300 - 0x8de;
            (*param3)(local257, local256, local255, local289, local271, local254, local288, local270, local253, local287, local275, local269, local261, local252, local286, local283, local280, local274, local268, local266, local260, local251, local292, local300, local295, local298, local285, local282, local279, local277, local273, local267, local300 - 0x8de, local265, local263, local259, local250, local291, 19, local294, local297, local249, local284, local281, local278, local276, local272, local236, 500, local264, local262, local258, local248, local290, *(int*)(local234 - 8), local293, local296, local632, local633, local634, param2, local635, param3, local233, local235, param5, local237, local238, local239, local240, local241, local242, local243, local244, local245, local246, 0, 15, 0, local247, local299, <all>, LOGICALFLAGS32(local634), LOGICALFLAGS32(local634));
            local157 = (local232);
            local231 = local225 + 1;
            local632 = (unsigned char) local157 & 0xfffffffb | 8;
            local230 = local632;
            local229 = (local157 >> 8 & 0xffffff | ((unsigned char) local157 & 0xfffffffb)) >> 8 & 0xffffff | (local632);
            local634 = *(int*)(local21 + 180) + 1;
            local228 = local634 + 1;
            local227 = local226;
            (*param5)(local180, local179, local178, local212, local194, local177, local211, local193, local176, local210, local198, local192, local184, local175, local209, local206, local203, local197, local191, local226, local183, local174, local215, local218, local221, local224, local208, local205, local202, local200, local196, local190, local188, local634 + 1, local186, local182, local173, local214, local217, local220, local223, local172, local207, local204, local201, local199, local195, local189, local187, (local157 >> 8 & 0xffffff | ((unsigned char) local157 & 0xfffffffb)) >> 8 & 0xffffff | (local632), local185, local181, local171, local213, local216, local219, local222, (unsigned char) local634 + 1, local633, local634 + 1, param2, local635, param3, local20, local21, param5, local158, local159, local160, local161, local632, local162, local163, local164, local165, local166, local167, local168, local169, local170, local225 + 1, <all>, LOGICALFLAGS32(local634 + 1), LOGICALFLAGS32(local634 + 1));
            local156 = 10;
            local155 = local154;
            (*param3)(local108, local107, local106, local140, local123, local105, local139, local122, local104, local138, local126, local121, local112, local103, local137, local134, local131, local125, local120, local115, local111, local102, local143, local146, local149, local152, local136, local133, local130, local128, local124, local119, local117, local114, local154, local110, local101, local142, local145, local148, local151, local100, local135, local132, local129, local127, local118, local116, local113, 10, local109, local99, local141, local144, local147, local150, local632, local633, local634, param2, local635, param3, local558, local84, param5, local85, local86, local87, local88, local89, local90, local91, local92, local93, local94, local95, local96, local97, local98, local153, <all>, flags, NF);
            local83 = *(int*)(local557 + 12);
            local82 = 1;
            local81 = local533 + 24;
            local80 = 0;
            local78 = local79;
            KeResetEvent(local533 + 24);
            local25 = local76 | 4;
            local6 = (local25);
            local75 = local6;
            local634 = *(int*)(local533 + 180) + 1;
            local74 = local634 + 1;
            local72 = *(int*)0x140e4;
            (*param5)(local41, local40, local39, *(int*)(local15 - 24), local54, local38, *(int*)(local15 - 20), local53, local37, *(int*)(local15 - 16), local58, local52, *(int*)0x140e4, local36, *(int*)(local15 - 12), local66, local63, local57, local51, local46, local634 + 1, local35, *(int*)(local16 - 12), *(int*)(local17 - 12), *(int*)(local18 - 12), *(int*)(local19 - 12), *(int*)(local15 - 8), local65, local62, local60, local56, local50, local48, local45, local43, local6, local34, local68, local303, *(int*)(local18 - 8), *(int*)(local19 - 8), local33, *(int*)(local15 - 4), local64, local61, local59, local55, local49, local47, local44, local42, local533 + 24, local32, local67, *(int*)(local17 - 4), local69, local70, (unsigned char) local634 + 1, local633, local634 + 1, param2, local635, param3, local557, local533, param5, *(int*)(local557 + 12), 1, 0, local25, local26, local27, local28, local29, local30, *(int*)(local23 + 241), *(int*)(local24 + 228), *(int*)(local24 + 229), *(int*)(local24 + 230), local31, local71, <all>, LOGICALFLAGS32(local634 + 1), LOGICALFLAGS32(local634 + 1));
            local560 = local548;
            local561 = local549;
            local563 = *(int*)(local533 + 172);
            local564 = *(int*)(local533 + 238);
            local565 = *(int*)(local533 + 242);
            local566 = *(int*)(local533 + 249);
            local567 = *(int*)(local21 + 249);
            local568 = *(int*)(local22 + 172);
            local569 = *(int*)(local22 + 238);
            local570 = *(int*)(local22 + 242);
            local571 = *(int*)(local22 + 249);
            local572 = *(int*)(local636 - 4);
            local573 = *(int*)(local636 - 5);
            local574 = *(int*)(local636 - 8);
            local575 = *(int*)(local636 - 12);
            local576 = *(int*)(local636 - 16);
            local577 = *(int*)(local636 - 20);
            local578 = *(int*)(local636 - 24);
            local579 = *(int*)(local636 - 28);
            local580 = *(int*)(local636 - 32);
            local581 = *(int*)(local636 - 36);
            local582 = *(int*)(local73 - 4);
            local583 = *(int*)(local73 - 8);
            local584 = *(int*)(local73 - 12);
            local585 = *(int*)(local73 - 16);
            local586 = *(int*)(local7 - 4);
            local587 = *(int*)(local7 - 8);
            local588 = *(int*)(local8 - 4);
            local589 = *(int*)(local8 - 8);
            local590 = *(int*)(local8 - 12);
            local591 = *(int*)(local9 - 4);
            local592 = *(int*)(local9 - 8);
            local593 = *(int*)(local10 - 4);
            local594 = *(int*)(local10 - 8);
            local595 = *(int*)(local10 - 12);
            local596 = *(int*)(local10 - 16);
            local597 = *(int*)(local10 - 20);
            local598 = *(int*)(local10 - 24);
            local599 = *(int*)(local11 - 4);
            local600 = *(int*)(local11 - 8);
            local601 = *(int*)(local11 - 12);
            local602 = *(int*)(local11 - 16);
            local603 = *(int*)(local12 - 4);
            local604 = *(int*)(local12 - 8);
            local605 = *(int*)(local13 - 4);
            local606 = *(int*)(local13 - 8);
            local607 = *(int*)(local13 - 12);
            local608 = *(int*)(local14 - 4);
            local609 = *(int*)(local14 - 8);
            local610 = *(int*)(local14 - 12);
            local617 = *(int*)(local20 - 1);
            local618 = *(int*)(*(int*)(local636 + 4) + 249);
            local620 = local548;
            local621 = local549;
            local550 = local549;
            local551 = 0;
            local552 = 0;
            local553 = 0;
            local632 = (unsigned char) local549 + 24;
            local554 = local549 + 24;
            local555 = local534;
            local556 = *(int*)0x140e8;
            local634 = KeWaitForSingleObject(local549 + 24, 0, 0, 0, local549);
            local559 = local547;
            local562 = local556;
            local611 = local550;
            local612 = local551;
            local613 = local552;
            local614 = local553;
            local615 = local554;
            local616 = local555;
            local619 = local547;
            local622 = local556;
        } while (local634 == 258);
L16:
        local636 = local619;
        param1 = local620;
        local23 = local621;
        local623 = local636;
        local623 = local636;
        local624 = param1;
        local624 = param1;
        local625 = local23;
        local625 = local23;
        if (local634 == 258) {
            local634 = 0xc00000b5;
            local632 = 181;
            *(char*)(local23 + 241) = 1;
        }
    }
    local636 = local623;
    param1 = local624;
    param4 = local625;
    local630 = local636;
    local631 = local636;
    if (local634 >= 0) {
        local633 = 0;
        param3 = param3 >> 8 & 0xffffff | (0);
        if ((unsigned)*(int*)(param4 + 248) > (unsigned)0) {
            do {
                local1 = local633;
                local19 = local636;
                local627 = local19;
                local630 = local19;
                if (local634 < 0) {
                    goto L4;
                }
                if (local1 != 0) {
                    local5 = param4;
                    *(int*)(local19 - 8) = 8;
                    local634 = proc11(*(int*)(local19 - 4), param2, local635, param3, param1, param4, param5, <all>); /* Warning: also results in param4, local632, param2, local635, param3, param1, param5 */
                    local627 = local636;
                }
                local16 = local627;
                local628 = local16;
                if (local634 >= 0) {
                    local4 = param4;
                    local3 = param1 + 15;
                    local634 = proc12(*(int*)(local16 - 8), *(int*)(local16 - 4), param2, local635, param3, param1, param4, param5, <all>); /* Warning: also results in param4, local632, param2, local635, param3, local14, param1, param5 */
                    local628 = local14;
                    local629 = local2;
                    if (local634 >= 0) {
                        *(int*)(local14 - 4) = param4;
                        *(int*)(local14 - 8) = param1 + 15;
                        local634 = proc12(param1 + 15, param4, param2, local635, param3, param1, param4, param5, <all>); /* Warning: also results in param4, local632, param2, local635, param3, param1, param5 */
                        local628 = local636;
                    }
                }
                local636 = local628;
                local633 = local1 + 1;
                param3 = param3 >> 8 & 0xffffff | (local1 + 1);
                local630 = local636;
            } while ((unsigned)(local1 + 1) < (unsigned)*(int*)(param4 + 248));
        }
L4:
        local18 = local630;
        local631 = local18;
        if (*(int*)(param4 + 247) != 0) {
            local0 = param4;
            *(int*)(local18 - 8) = 18;
            local634 = proc11(*(int*)(local18 - 4), param2, local635, param3, param1, param4, param4 + 247, <all>); /* Warning: also results in param4, param2, local635, param3, local13, param1, param5 */
            local631 = local13;
            if (local634 >= 0) {
                local632 = (*(int*)param5 | -32) * 4;
                *(int*)(local13 - 4) = param4;
                *(int*)(local13 - 8) = (local632);
                local634 = proc11(param4, param2, local635, param3, param1, param4, param5, <all>); /* Warning: also results in param1 */
                local631 = local636;
            }
        }
    }
    local636 = local631;
    return local634; /* WARNING: Also returning: param6, (unsigned char) *(int*)(local636 + 8), *(int*)(local636 + 8), *(int*)param1 */
}

// address: 0x1627e
proc10(int param4, int param6, int param7, int param2, int param1, int param3, int param5) {
    int local0; 		// m[r28 - 8]{155}
    int local1; 		// m[r28 - 4]{152}
    int local10; 		// m[r28 - 4]{39}
    int local11; 		// r28{38}
    int local12; 		// r28{19}
    int local13; 		// local9{189}
    int local14; 		// r11{249}
    int local15; 		// r8
    int local16; 		// r11
    int local17; 		// r24
    int local18; 		// r28
    int local2; 		// r11{234}
    int local3; 		// m[r28 - 8]{126}
    int local4; 		// m[r28 - 4]{122}
    int local5; 		// m[r29 + 8]{109}
    int local6; 		// m[r29 + 8]{105}
    int local7; 		// r11{195}
    int local8; 		// m[r28 - 4]{64}
    int local9; 		// r28{189}

    *(int*)(local18 - 4) = param1;
    *(int*)(local18 - 8) = param2;
    *(int*)(local18 - 12) = param3;
    param3 = *(unsigned char*)(local18 + 4);
    *(int*)(local18 - 16) = param5;
    local12 = local18 - 16;
    param5 = *(int*)(*(int*)(local18 + 8) + 4);
    local13 = local12;
    if (global9[((param3 & 0x1f) * 5)] != 0) {
        local17 = *(int*)*(int*)(local18 + 8);
        *(int*)(param5 + 172) = local17;
        *(char*)(param5 + 238) = 1;
        local15 =  (global10[((param3 & 0x1f) * 5)] != 0) ? 1 : 0;
        *(char*)(param5 + 242) = local15;
        *(int*)(local18 - 20) = param5 + 24;
        KeResetEvent(param5 + 24);
        local13 = local11;
    }
    local9 = local13;
    local10 = param5;
    *(int*)(local9 - 8) = param4;
    local17 = proc11(*(int*)(local9 - 4), param6, param7, param2, local18 - 4, (param3 & 0x1f) * 5, param5, <all>); /* Warning: also results in param3, param6, param7, param2, param1, param5 */
    *(int*)(param1 + 8) = local17;
    if (local17 < 0) {
        local16 = *(int*)(param1 + 11);
        param2 = param2 >> 8 & 0xffffff | *(unsigned char*)(param1 + 11);
        local14 = local16;
L7:
        local16 = local14;
        if (local16 == 1) {
            if (global15[param3] == 0) {
                local1 = param5;
                local0 = param5 + 228;
                local17 = proc12(*(int*)(local18 - 8), *(int*)(local18 - 4), param6, param7, param2, param1, param5 + 228, param5, <all>); /* Warning: also results in param3, param6, param7, param1, param5 */
                if (local17 < 0) {
                    *(int*)(param1 + 8) = local17;
                } else {
                    if (*(int*)param3 != -128) {
                        *(int*)(param1 + 8) = 0xc0000168;
                        *(char*)(param5 + 241) = local16;
                    }
                }
            }
        }
    } else {
        local16 = 0;
        param2 = param2 >> 8 & 0xffffff | (0);
        if ((unsigned)global12[param3] <= (unsigned)0) {
L20:
            local14 = local16;
            local14 = local16;
            if (*(int*)(param1 + 8) < 0) {
                goto L7;
            } else {
                if (global9[param3] != 0) {
                    *(int*)(local18 - 4) = param5;
                    *(int*)(local18 - 8) = 0;
                    *(int*)(local18 - 12) = 0;
                    *(int*)(local18 - 16) = 0;
                    *(int*)(local18 - 20) = param5 + 24;
                    local17 = KeWaitForSingleObject(param5 + 24, 0, 0, 0, param5);
                    local6 = local17;
                    if (local17 == 258) {
                        local5 = 0xc00000a3;
                        *(char*)(param5 + 241) = 1;
                    }
                }
                if (*(int*)(param1 + 8) < 0) {
                    goto L7;
                } else {
                    local16 = global10[param3];
                    param2 = param2 >> 8 & 0xffffff | (global10[param3]);
                    local2 = local16;
                    local14 = local2;
                    local14 = local2;
                    while ((unsigned)local2 < (unsigned)global14[param3]) {
                        if (*(int*)(param1 + 8) < 0) {
                            goto L7;
                        }
                        local4 = param5;
                        local17 = (local2) + param5 + 228;
                        local3 = local17;
                        local17 = proc12(*(int*)(local18 - 8), *(int*)(local18 - 4), param6, param7, param2, param1, param3, param5, <all>); /* Warning: also results in param3, param6, param7, param2, param1, param5 */
                        *(int*)(param1 + 8) = local17;
                        local16 = local2 + 1;
                        param2 = param2 >> 8 & 0xffffff | (local2 + 1);
                        local2 = local16;
                        local14 = local2;
                        local14 = local2;
                    }
                    if (*(int*)(param1 + 8) < 0) {
                        goto L7;
                    }
                }
            }
        } else {
            do {
                local7 = local16;
                local14 = local7;
                if (*(int*)(param1 + 8) < 0) {
                    goto L7;
                }
                local17 = *(unsigned char*)((local7) + param5 + 228);
                local8 = param5;
                *(int*)(local18 - 8) = local17;
                local17 = proc11(*(int*)(local18 - 4), param6, param7, param2, param1, param3, param5, <all>); /* Warning: also results in param3, param6, param7, param2, param1, param5 */
                local16 = local7 + 1;
                param2 = param2 >> 8 & 0xffffff | (local7 + 1);
                *(int*)(param1 + 8) = local17;
            } while ((unsigned)(local7 + 1) < (unsigned)global12[param3]);
            goto L20;
        }
    }
    return *(int*)(param1 + 8); /* WARNING: Also returning: param4, (unsigned char) *(int*)(param1 + 8), (unsigned char) *(int*)(local18 + 8), param6, param7, *(int*)(local18 + 8), *(int*)(local18 + 12), *(int*)local18 */
}

// address: 0x16082
proc11(int param5, int param2, int param7, int param3, int param1, int param4, int param6, int param8) {
    int local0; 		// r28{32}
    int local1; 		// r28{189}
    int local10;
    int local100; 		// m[r28 - 5]{52}
    int local101;
    int local102;
    int local103; 		// m[r28 - 16]{52}
    int local104; 		// m[r28 - 20]{52}
    int local105; 		// m[r28 - 24]{52}
    int local106;
    int local107;
    int local108;
    int local109; 		// m[r28 - 4]{52}
    int local11;
    int local110; 		// m[r28 - 8]{52}
    int local111; 		// m[r28 - 12]{52}
    int local112; 		// m[r29 - 1]{52}
    char local113; 		// m[r29 - 1]{53}
    void *local114; 		// %pc{52}
    int local115;
    int local116;
    int local117; 		// m[r28 - 12]{32}
    int local118; 		// m[r28 - 16]{32}
    int local119; 		// m[r28 - 20]{32}
    int local12; 		// m[r28 - 16]{104}
    int local120;
    int local121; 		// m[r29 - 8]{32}
    void *local122; 		// m[r28 - 12]{50}
    int local123; 		// m[r28 - 8]{47}
    int local124; 		// m[r28 - 4]{41}
    int local125; 		// r29{124}
    int local126; 		// r29{157}
    int local127; 		// r30{158}
    char local128; 		// m[r28 - 5]{260}
    int local129; 		// m[r28 - 8]{261}
    int local13; 		// m[r28 - 20]{104}
    int local130; 		// m[r28 - 12]{262}
    int local131; 		// m[r28 - 16]{263}
    int local132; 		// m[r28 - 20]{264}
    int local133; 		// m[r28 - 24]{265}
    int local134; 		// m[r28 - 4]{266}
    int local135; 		// m[r28 - 8]{267}
    void *local136; 		// m[r28 - 12]{268}
    int local137; 		// m[r28 - 4]{269}
    int local138; 		// m[r28 - 8]{270}
    void *local139; 		// m[r28 - 12]{271}
    int local14; 		// m[r28 - 24]{104}
    char local140; 		// m[r29 - 1]{272}
    char local141; 		// m[r29 - 1]{273}
    int local142; 		// %pc{163}
    int local143; 		// m[r28 - 8]{30}
    int local144; 		// m[r28 - 4]{27}
    int local145; 		// r28{18}
    int local146; 		// r29{4}
    int local147; 		// r30{16}
    int local148; 		// m[r28 - 4]{2}
    char local149; 		// m[r28 - 5]{20}
    int local15; 		// m[r28 - 4]{104}
    int local150; 		// m[r28 - 8]{5}
    int local151; 		// m[r28 - 12]{9}
    int local152; 		// m[r28 - 16]{11}
    int local153; 		// m[r28 - 20]{14}
    int local154; 		// m[r28 - 24]{17}
    int local155;
    int local156;
    int local157;
    int local158; 		// m[r28 - 4]{124}
    int local159; 		// m[r28 - 8]{124}
    int local16; 		// m[r28 - 8]{104}
    int local160; 		// m[r28 - 12]{124}
    int local161;
    int local162; 		// m[r29 - 1]{124}
    void *local163; 		// %pc{124}
    int local164; 		// m[r28 - 12]{7}
    int local165; 		// r28{204}
    int local166; 		// r29{205}
    int local167; 		// r30{206}
    int local168; 		// m[r28 - 4]{304}
    int local169; 		// m[r28 - 5]{305}
    int local17; 		// m[r28 - 12]{104}
    int local170; 		// m[r28 - 8]{306}
    int local171; 		// m[r28 - 12]{307}
    int local172; 		// m[r28 - 16]{308}
    int local173; 		// m[r28 - 20]{309}
    int local174; 		// m[r28 - 24]{310}
    int local175; 		// m[r28 - 4]{311}
    int local176; 		// m[r28 - 8]{312}
    int local177; 		// m[r28 - 12]{313}
    int local178; 		// m[r28 - 4]{314}
    int local179; 		// m[r28 - 8]{315}
    int local18; 		// m[r29 - 1]{104}
    int local180; 		// m[r28 - 12]{316}
    char local181; 		// m[r29 - 1]{317}
    int local182; 		// m[r29 - 1]{318}
    void *local183; 		// %pc{211}
    int local184; 		// r30{104}
    int local185; 		// r28{124}
    int local186; 		// r30{124}
    int local187;
    int local188; 		// m[r28 - 5]{124}
    int local189;
    void *local19; 		// %pc{104}
    int local190;
    int local191; 		// m[r28 - 16]{124}
    int local192; 		// m[r28 - 20]{124}
    int local193; 		// m[r28 - 24]{124}
    char local194; 		// m[r29 - 1]{125}
    int local195; 		// local2{156}
    int local196; 		// local126{157}
    int local197; 		// local127{158}
    int local198; 		// local142{163}
    int local199; 		// local128{260}
    int local2; 		// r28{156}
    void *local20; 		// m[r28 - 12]{122}
    int local200; 		// local129{261}
    int local201; 		// local130{262}
    int local202; 		// local131{263}
    int local203; 		// local132{264}
    int local204; 		// local133{265}
    int local205; 		// local134{266}
    int local206; 		// local135{267}
    int local207; 		// local136{268}
    int local208; 		// local137{269}
    void *local209; 		// local138{270}
    int local21; 		// r28{104}
    int local210; 		// local139{271}
    int local211; 		// local140{272}
    char local212; 		// local141{273}
    int local213; 		// local57{171}
    int local214; 		// local6{172}
    int local215; 		// local58{173}
    int local216; 		// local74{178}
    int local217; 		// local59{274}
    int local218; 		// local60{275}
    int local219; 		// local61{276}
    int local22; 		// m[r28 - 8]{119}
    int local220; 		// local62{277}
    int local221; 		// local63{278}
    int local222; 		// local64{279}
    int local223; 		// local65{280}
    int local224; 		// local66{281}
    int local225; 		// local67{282}
    int local226; 		// local68{283}
    int local227; 		// local69{284}
    void *local228; 		// local70{285}
    int local229; 		// local71{286}
    int local23; 		// m[r28 - 4]{113}
    int local230; 		// local72{287}
    char local231; 		// local73{288}
    int local232; 		// local1{189}
    int local233; 		// local5{190}
    int local234; 		// local27{191}
    void *local235; 		// local52{196}
    int local236; 		// local56{289}
    int local237; 		// local30{290}
    int local238; 		// local31{291}
    int local239; 		// local32{292}
    int local24;
    int local240; 		// local33{293}
    int local241; 		// local34{294}
    int local242; 		// local35{295}
    int local243; 		// local36{296}
    int local244; 		// local37{297}
    int local245; 		// local38{298}
    int local246; 		// local39{299}
    int local247; 		// local40{300}
    int local248; 		// local41{301}
    char local249; 		// local44{302}
    int local25;
    int local250; 		// local45{303}
    int local251; 		// local165{204}
    int local252; 		// local166{205}
    int local253; 		// local167{206}
    void *local254; 		// local183{211}
    int local255; 		// local168{304}
    int local256; 		// local169{305}
    int local257; 		// local170{306}
    int local258; 		// local171{307}
    int local259; 		// local172{308}
    int local26;
    int local260; 		// local173{309}
    int local261; 		// local174{310}
    int local262; 		// local175{311}
    int local263; 		// local176{312}
    int local264; 		// local177{313}
    int local265; 		// local178{314}
    int local266; 		// local179{315}
    int local267; 		// local180{316}
    char local268; 		// local181{317}
    int local269; 		// local182{318}
    int local27; 		// r30{191}
    int local270; 		// r28{219}
    int local271; 		// r29{220}
    int local272; 		// local7{221}
    int local273; 		// r28{234}
    int local274; 		// r29{235}
    char local275; 		// r8
    char local276; 		// r24
    char local277; 		// r28
    int local28; 		// m[r30 + 241]{32}
    int local29;
    int local3; 		// r29{104}
    int local30; 		// m[r28 - 5]{290}
    int local31; 		// m[r28 - 8]{291}
    int local32; 		// m[r28 - 12]{292}
    int local33; 		// m[r28 - 16]{293}
    int local34; 		// m[r28 - 20]{294}
    int local35; 		// m[r28 - 24]{295}
    int local36; 		// m[r28 - 4]{296}
    int local37; 		// m[r28 - 8]{297}
    int local38; 		// m[r28 - 12]{298}
    int local39; 		// m[r28 - 4]{299}
    int local4; 		// r29{52}
    void *local40; 		// m[r28 - 8]{300}
    int local41; 		// m[r28 - 12]{301}
    int local42; 		// m[r28 - 4]{32}
    int local43; 		// m[r28 - 8]{32}
    int local44; 		// m[r29 - 1]{302}
    char local45; 		// m[r29 - 1]{303}
    int local46; 		// m[r29 - 8]{193}
    int local47; 		// m[r28 - 20]{102}
    int local48; 		// m[r28 - 16]{99}
    int local49; 		// m[r29 - 8]{93}
    int local5; 		// r29{190}
    int local50; 		// r28{89}
    int local51; 		// m[r28 - 16]{87}
    int local52; 		// %pc{196}
    int local53; 		// m[r28 - 12]{84}
    int local54; 		// m[r28 - 8]{82}
    int local55; 		// m[r28 - 4]{80}
    int local56; 		// m[r28 - 4]{289}
    int local57; 		// r28{171}
    int local58; 		// r30{173}
    int local59; 		// m[r28 - 4]{274}
    int local6; 		// r29{172}
    int local60; 		// m[r28 - 5]{275}
    int local61; 		// m[r28 - 8]{276}
    int local62; 		// m[r28 - 12]{277}
    int local63; 		// m[r28 - 16]{278}
    int local64; 		// m[r28 - 20]{279}
    int local65; 		// m[r28 - 24]{280}
    int local66; 		// m[r28 - 4]{281}
    int local67; 		// m[r28 - 8]{282}
    int local68; 		// m[r28 - 12]{283}
    int local69; 		// m[r28 - 4]{284}
    int local7; 		// r30{221}
    void *local70; 		// m[r28 - 8]{285}
    int local71; 		// m[r28 - 12]{286}
    int local72; 		// m[r29 - 1]{287}
    char local73; 		// m[r29 - 1]{288}
    int local74; 		// %pc{178}
    int local75; 		// m[r29 - 8]{70}
    int local76; 		// m[r29 - 8]{62}
    int local77; 		// m[r29 - 8]{175}
    int local78; 		// r28{60}
    int local79; 		// r29{32}
    int local8;
    int local80; 		// r30{32}
    int local81; 		// m[r28 - 5]{32}
    int local82;
    int local83;
    int local84;
    int local85;
    int local86; 		// m[r28 - 24]{32}
    int local87;
    int local88;
    int local89;
    int local9; 		// m[r28 - 5]{104}
    int local90; 		// m[r28 - 4]{55}
    void *local91; 		// m[r28 - 8]{58}
    int local92;
    int local93;
    int local94; 		// m[r29 - 1]{32}
    int local95; 		// %pc{59}
    void *local96; 		// %pc{32}
    int local97; 		// r28{52}
    int local98; 		// r30{52}
    int local99;

    local212 = *(int*)(local4 - 1);
    local211 = *(int*)(local125 - 1);
    local210 = *(int*)(local0 - 12);
    local209 = *(int*)(local0 - 8);
    local208 = *(int*)(local0 - 4);
    local207 = *(int*)(local21 - 12);
    local206 = *(int*)(local21 - 8);
    local205 = *(int*)(local21 - 4);
    local148 = param1;
    local146 = local277 - 4;
    local150 = param2;
    local164 = param2;
    local151 = 0;
    local152 = param3;
    param3 = WRITE_PORT_UCHAR;
    local153 = param4;
    local147 = param5;
    local154 = param6;
    local145 = local277 - 24;
    param6 = READ_PORT_UCHAR;
    local149 = 0;
    local195 = local145;
    local196 = local146;
    local197 = local147;
    local199 = local149;
    local200 = local150;
    local201 = local151;
    local202 = local152;
    local203 = local153;
    local204 = local154;
    do {
        local2 = local195;
        local126 = local196;
        local127 = local197;
        local142 = local198;
        local128 = local199;
        local129 = local200;
        local130 = local201;
        local131 = local202;
        local132 = local203;
        local133 = local204;
        local134 = local205;
        local135 = local206;
        local136 = local207;
        local137 = local208;
        local138 = local209;
        local139 = local210;
        local140 = local211;
        local141 = local212;
        local144 = *(int*)(local127 + 180) + 4;
        local143 = local142;
        (*param6)(local133, local132, local131, local130, local136, local139, local142, local129, local135, local138, local128, *(int*)(local127 + 180) + 4, param1, local134, local137, (unsigned char) *(int*)(local127 + 180) + 4, *(int*)(local127 + 180) + 4, param2, param7, param3, local126, local127, param6, local140, local141, param8, ADDFLAGS32(*(int*)(local127 + 180), 4, *(int*)(local127 + 180) + 4), ADDFLAGS32(*(int*)(local127 + 180), 4, *(int*)(local127 + 180) + 4));
        local214 = local79;
        local215 = local80;
        local217 = local29;
        local218 = local81;
        local219 = local82;
        local220 = local83;
        local221 = local84;
        local222 = local85;
        local223 = local86;
        local224 = local87;
        local225 = local88;
        local226 = local89;
        local229 = local92;
        local230 = local93;
        local231 = local94;
        if ((local275 & 0xffffffc0) != -128) {
            local90 = 1;
            local91 = local96;
            local95 = *(int*)0x14028;
            KeStallExecutionProcessor(1);
            local213 = local78;
            local216 = local95;
            local227 = local90;
            local228 = local91;
        } else {
            local124 = *(int*)(local79 + 8);
            local276 = *(int*)(local80 + 180) + 5;
            local123 = local276;
            local122 = local96;
            (*param3)(local86, local119, local85, local118, local84, local117, local83, local89, local96, local43, local116, local82, local88, local276, local81, local42, local115, local29, local87, *(int*)(local79 + 8), (unsigned char) local276, local276, param2, param7, param3, local79, local80, param6, local28, local93, local94, local120, local121, param8, ADDFLAGS32(*(int*)(local80 + 180), 5, local276), ADDFLAGS32(*(int*)(local80 + 180), 5, local276));
            local213 = local97;
            local214 = local4;
            local215 = local98;
            local216 = local114;
            local217 = local99;
            local218 = local100;
            local219 = local101;
            local220 = local102;
            local221 = local103;
            local222 = local104;
            local223 = local105;
            local224 = local106;
            local225 = local107;
            local226 = local108;
            local227 = local109;
            local228 = local110;
            local229 = local111;
            local230 = local112;
            local113 = 1;
            local231 = local113;
        }
        local57 = local213;
        local6 = local214;
        local58 = local215;
        local74 = local216;
        local59 = local217;
        local60 = local218;
        local61 = local219;
        local62 = local220;
        local63 = local221;
        local64 = local222;
        local65 = local223;
        local66 = local224;
        local67 = local225;
        local68 = local226;
        local69 = local227;
        local70 = local228;
        local71 = local229;
        local72 = local230;
        local73 = local231;
        local76 = local77 + 1;
        local195 = local57;
        local196 = local6;
        local197 = local58;
        local198 = local74;
        local199 = local60;
        local200 = local61;
        local201 = local62;
        local202 = local63;
        local203 = local64;
        local204 = local65;
        local205 = local66;
        local206 = local67;
        local207 = local68;
        local208 = local69;
        local209 = local70;
        local210 = local71;
        local211 = local72;
        local212 = local73;
        local232 = local57;
        local233 = local6;
        local234 = local58;
        local235 = local74;
        local236 = local59;
        local237 = local60;
        local238 = local61;
        local239 = local62;
        local240 = local63;
        local241 = local64;
        local242 = local65;
        local243 = local66;
        local244 = local67;
        local245 = local68;
        local246 = local69;
        local247 = local70;
        local248 = local71;
        local249 = local72;
        local250 = local73;
        local273 = local57;
        local274 = local6;
        if (*(int*)(local6 - 1) != 0) {
            break;
        }
    } while ((unsigned)local76 < 500);
    local75 = 0;
    if (*(int*)(local6 - 1) != 0) {
L1:
        local277 = local273;
        param1 = local274;
        local276 = 0;
        local275 = 0;
    } else {
        do {
            local1 = local232;
            local5 = local233;
            local27 = local234;
            local52 = local235;
            local56 = local236;
            local30 = local237;
            local31 = local238;
            local32 = local239;
            local33 = local240;
            local34 = local241;
            local35 = local242;
            local36 = local243;
            local37 = local244;
            local38 = local245;
            local39 = local246;
            local40 = local247;
            local41 = local248;
            local44 = local249;
            local45 = local250;
            local270 = local1;
            local271 = local5;
            local272 = local27;
            if ((unsigned)local46 >= 5) {
                goto L3;
            }
            local55 = local27 + 8;
            local54 = 0;
            local53 = 0;
            local51 = local52;
            KeDelayExecutionThread(0, 0, local27 + 8);
            local49 = local46 + 1;
            local48 = *(int*)(local27 + 180) + 4;
            local47 = *(int*)0x140ec;
            (*param6)(local35, *(int*)0x140ec, local34, local33, *(int*)(local27 + 180) + 4, 0, local32, local38, local41, local43, 0, local31, local37, local40, local30, local42, local27 + 8, local29, local36, local39, (unsigned char) *(int*)(local27 + 180) + 4, *(int*)(local27 + 180) + 4, param2, param7, param3, local5, local27, param6, local28, local44, local45, local46 + 1, 0, param8, ADDFLAGS32(*(int*)(local27 + 180), 4, *(int*)(local27 + 180) + 4), ADDFLAGS32(*(int*)(local27 + 180), 4, *(int*)(local27 + 180) + 4));
            local251 = local21;
            local252 = local3;
            local253 = local184;
            local254 = local19;
            local255 = local8;
            local256 = local9;
            local257 = local10;
            local258 = local11;
            local259 = local12;
            local260 = local13;
            local261 = local14;
            local262 = local24;
            local263 = local25;
            local264 = local26;
            local265 = local15;
            local266 = local16;
            local267 = local17;
            local268 = local161;
            local269 = local18;
            if ((local275 & 0xffffffc0) == -128) {
                local23 = *(int*)(local3 + 8);
                local276 = *(int*)(local184 + 180) + 5;
                local22 = local276;
                local20 = local19;
                (*param3)(local14, *(int*)(local1 - 20), local13, local12, *(int*)(local1 - 16), *(int*)(local1 - 12), local11, local19, local17, *(int*)(local2 - 8), *(int*)(local1 - 8), local10, local276, local16, local9, *(int*)(local2 - 4), *(int*)(local1 - 4), local8, *(int*)(local3 + 8), local15, (unsigned char) local276, local276, param2, param7, param3, local3, local184, param6, *(int*)(local7 + 241), local161, local18, *(int*)(local5 - 8), *(int*)(local6 - 8), param8, ADDFLAGS32(*(int*)(local184 + 180), 5, local276), ADDFLAGS32(*(int*)(local184 + 180), 5, local276));
                local251 = local185;
                local252 = local125;
                local253 = local186;
                local254 = local163;
                local255 = local187;
                local256 = local188;
                local257 = local189;
                local258 = local190;
                local259 = local191;
                local260 = local192;
                local261 = local193;
                local262 = local155;
                local263 = local156;
                local264 = local157;
                local265 = local158;
                local266 = local159;
                local267 = local160;
                local269 = local162;
                local194 = 1;
                local268 = local194;
            }
            local165 = local251;
            local166 = local252;
            local167 = local253;
            local183 = local254;
            local168 = local255;
            local169 = local256;
            local170 = local257;
            local171 = local258;
            local172 = local259;
            local173 = local260;
            local174 = local261;
            local175 = local262;
            local176 = local263;
            local177 = local264;
            local178 = local265;
            local179 = local266;
            local180 = local267;
            local181 = local268;
            local182 = local269;
            local232 = local165;
            local233 = local166;
            local234 = local167;
            local235 = local183;
            local236 = local168;
            local237 = local169;
            local238 = local170;
            local239 = local171;
            local240 = local172;
            local241 = local173;
            local242 = local174;
            local243 = local175;
            local244 = local176;
            local245 = local177;
            local246 = local178;
            local247 = local179;
            local248 = local180;
            local249 = local181;
            local250 = local182;
            local270 = local165;
            local271 = local166;
            local272 = local167;
        } while (*(int*)(local166 - 1) == 0);
L3:
        local277 = local270;
        param1 = local271;
        local7 = local272;
        local273 = local277;
        local274 = param1;
        if (*(int*)(param1 - 1) == 0) {
            *(char*)(local7 + 241) = 1;
            local276 = 0xc00000a3;
            local275 = 163;
        } else {
            goto L1;
        }
    }
    return local276; /* WARNING: Also returning: *(int*)(local277 + 4), local275, param2, param7, param5, *(int*)param1, *(char*)local277 */
}

// address: 0x1614e
proc12(int param4, int param7, int param2, int param8, int param3, int param1, int param5, int param6, int param9) {
    int local0; 		// r27{103}
    int local1; 		// r27{50}
    int local10;
    int local100; 		// r28{50}
    int local101; 		// r31{50}
    int local102;
    int local103; 		// m[r28 - 5]{50}
    int local104;
    int local105; 		// m[r28 - 12]{50}
    int local106; 		// m[r28 - 16]{50}
    int local107; 		// m[r28 - 20]{50}
    int local108; 		// m[r28 - 24]{50}
    int local109;
    int local11; 		// m[r28 - 5]{103}
    int local110;
    int local111; 		// m[r28 - 4]{50}
    int local112; 		// m[r28 - 8]{50}
    int local113; 		// m[r29 - 1]{50}
    char local114; 		// m[r29 - 1]{52}
    int local115; 		// m[r27]{50}
    int local116; 		// m[r27]{51}
    void *local117; 		// %pc{50}
    int local118;
    int local119;
    int local12;
    int local120; 		// m[r28 - 12]{32}
    int local121; 		// m[r28 - 16]{32}
    int local122; 		// m[r28 - 20]{32}
    int local123;
    int local124; 		// m[r29 - 8]{32}
    void *local125; 		// m[r28 - 8]{48}
    int local126; 		// m[r28 - 4]{45}
    int local127; 		// r27{153}
    int local128; 		// r29{121}
    int local129; 		// r29{155}
    int local13; 		// m[r28 - 12]{103}
    int local130; 		// r31{157}
    char local131; 		// m[r28 - 5]{258}
    int local132; 		// m[r28 - 8]{259}
    int local133; 		// m[r28 - 12]{260}
    int local134; 		// m[r28 - 16]{261}
    int local135; 		// m[r28 - 20]{262}
    int local136; 		// m[r28 - 24]{263}
    int local137; 		// m[r28 - 4]{264}
    void *local138; 		// m[r28 - 8]{265}
    int local139; 		// m[r28 - 4]{266}
    int local14; 		// m[r28 - 16]{103}
    void *local140; 		// m[r28 - 8]{267}
    char local141; 		// m[r29 - 1]{268}
    char local142; 		// m[r29 - 1]{269}
    int local143; 		// m[r27]{270}
    int local144; 		// m[r27]{271}
    int local145; 		// %pc{161}
    int local146; 		// m[r28 - 8]{30}
    int local147; 		// m[r28 - 4]{27}
    int local148; 		// r27{13}
    int local149; 		// r28{18}
    int local15; 		// m[r28 - 20]{103}
    int local150; 		// r29{4}
    int local151; 		// r31{19}
    int local152; 		// m[r28 - 4]{2}
    char local153; 		// m[r28 - 5]{20}
    int local154; 		// m[r28 - 8]{5}
    int local155; 		// m[r28 - 12]{9}
    int local156; 		// m[r28 - 16]{11}
    int local157; 		// m[r28 - 20]{14}
    int local158; 		// m[r28 - 24]{17}
    int local159;
    int local16; 		// m[r28 - 24]{103}
    int local160;
    int local161; 		// m[r28 - 4]{121}
    int local162; 		// m[r28 - 8]{121}
    int local163;
    int local164; 		// m[r29 - 1]{121}
    int local165;
    int local166; 		// m[r27]{121}
    void *local167; 		// %pc{121}
    int local168; 		// r27{121}
    int local169; 		// m[r28 - 12]{7}
    int local17; 		// m[r28 - 8]{103}
    int local170; 		// r27{201}
    int local171; 		// r28{202}
    int local172; 		// r29{203}
    int local173; 		// r31{205}
    int local174; 		// m[r28 - 4]{302}
    int local175; 		// m[r28 - 5]{303}
    int local176; 		// m[r28 - 8]{304}
    int local177; 		// m[r28 - 12]{305}
    int local178; 		// m[r28 - 16]{306}
    int local179; 		// m[r28 - 20]{307}
    int local18; 		// m[r29 - 1]{103}
    int local180; 		// m[r28 - 24]{308}
    int local181; 		// m[r28 - 4]{309}
    int local182; 		// m[r28 - 8]{310}
    int local183; 		// m[r28 - 4]{311}
    int local184; 		// m[r28 - 8]{312}
    char local185; 		// m[r29 - 1]{313}
    int local186; 		// m[r29 - 1]{314}
    int local187; 		// m[r27]{315}
    int local188; 		// m[r27]{316}
    void *local189; 		// %pc{209}
    int local19; 		// m[r27]{103}
    int local190; 		// r31{103}
    int local191; 		// r28{121}
    int local192; 		// r31{121}
    int local193;
    int local194; 		// m[r28 - 5]{121}
    int local195;
    int local196; 		// m[r28 - 12]{121}
    int local197; 		// m[r28 - 16]{121}
    int local198; 		// m[r28 - 20]{121}
    int local199; 		// m[r28 - 24]{121}
    int local2; 		// r28{32}
    void *local20; 		// %pc{103}
    char local200; 		// m[r29 - 1]{123}
    int local201; 		// m[r27]{122}
    int local202; 		// local127{153}
    int local203; 		// local4{154}
    int local204; 		// local129{155}
    int local205; 		// local130{157}
    int local206; 		// local145{161}
    int local207; 		// local131{258}
    int local208; 		// local132{259}
    int local209; 		// local133{260}
    void *local21; 		// m[r28 - 8]{119}
    int local210; 		// local134{261}
    int local211; 		// local135{262}
    int local212; 		// local136{263}
    int local213; 		// local137{264}
    int local214; 		// local138{265}
    int local215; 		// local139{266}
    void *local216; 		// local140{267}
    int local217; 		// local141{268}
    char local218; 		// local142{269}
    int local219; 		// local143{270}
    int local22; 		// r28{103}
    int local220; 		// local144{271}
    int local221; 		// local58{168}
    int local222; 		// local59{169}
    int local223; 		// local8{170}
    int local224; 		// local60{172}
    int local225; 		// local76{176}
    int local226; 		// local61{272}
    int local227; 		// local62{273}
    int local228; 		// local63{274}
    int local229; 		// local64{275}
    int local23; 		// m[r28 - 4]{116}
    int local230; 		// local65{276}
    int local231; 		// local66{277}
    int local232; 		// local67{278}
    int local233; 		// local68{279}
    int local234; 		// local69{280}
    int local235; 		// local70{281}
    void *local236; 		// local71{282}
    int local237; 		// local72{283}
    char local238; 		// local73{284}
    int local239; 		// local74{285}
    int local24;
    int local240; 		// local75{286}
    int local241; 		// local27{186}
    int local242; 		// local3{187}
    int local243; 		// local7{188}
    int local244; 		// local28{190}
    void *local245; 		// local52{194}
    int local246; 		// local56{287}
    int local247; 		// local31{288}
    int local248; 		// local32{289}
    int local249; 		// local33{290}
    int local25;
    int local250; 		// local34{291}
    int local251; 		// local35{292}
    int local252; 		// local36{293}
    int local253; 		// local37{294}
    int local254; 		// local38{295}
    int local255; 		// local57{296}
    int local256; 		// local39{297}
    char local257; 		// local42{298}
    int local258; 		// local43{299}
    int local259; 		// local45{300}
    int local26; 		// m[r28 - 4]{103}
    int local260; 		// local46{301}
    int local261; 		// local170{201}
    int local262; 		// local171{202}
    int local263; 		// local172{203}
    int local264; 		// local173{205}
    void *local265; 		// local189{209}
    int local266; 		// local174{302}
    int local267; 		// local175{303}
    int local268; 		// local176{304}
    int local269; 		// local177{305}
    int local27; 		// r27{186}
    int local270; 		// local178{306}
    int local271; 		// local179{307}
    int local272; 		// local180{308}
    int local273; 		// local181{309}
    int local274; 		// local182{310}
    int local275; 		// local183{311}
    int local276; 		// local184{312}
    char local277; 		// local185{313}
    int local278; 		// local186{314}
    int local279; 		// local187{315}
    int local28; 		// r31{190}
    int local280; 		// local188{316}
    int local281; 		// r28{217}
    int local282; 		// r29{218}
    int local283; 		// local9{220}
    int local284; 		// r28{232}
    int local285; 		// r29{233}
    char local286; 		// r8
    char local287; 		// r24
    char local288; 		// r28
    int local29; 		// m[r31 + 241]{32}
    int local3; 		// r28{187}
    int local30;
    int local31; 		// m[r28 - 5]{288}
    int local32; 		// m[r28 - 8]{289}
    int local33; 		// m[r28 - 12]{290}
    int local34; 		// m[r28 - 16]{291}
    int local35; 		// m[r28 - 20]{292}
    int local36; 		// m[r28 - 24]{293}
    int local37; 		// m[r28 - 4]{294}
    int local38; 		// m[r28 - 8]{295}
    void *local39; 		// m[r28 - 8]{297}
    int local4; 		// r28{154}
    int local40; 		// m[r28 - 4]{32}
    int local41; 		// m[r28 - 8]{32}
    int local42; 		// m[r29 - 1]{298}
    char local43; 		// m[r29 - 1]{299}
    int local44; 		// m[r29 - 8]{191}
    int local45; 		// m[r27]{300}
    int local46; 		// m[r27]{301}
    int local47; 		// m[r28 - 20]{101}
    int local48; 		// m[r28 - 16]{98}
    int local49; 		// m[r29 - 8]{92}
    int local5; 		// r29{103}
    int local50; 		// r28{88}
    int local51; 		// m[r28 - 16]{86}
    int local52; 		// %pc{194}
    int local53; 		// m[r28 - 12]{83}
    int local54; 		// m[r28 - 8]{81}
    int local55; 		// m[r28 - 4]{79}
    int local56; 		// m[r28 - 4]{287}
    int local57; 		// m[r28 - 4]{296}
    int local58; 		// r27{168}
    int local59; 		// r28{169}
    int local6; 		// r29{50}
    int local60; 		// r31{172}
    int local61; 		// m[r28 - 4]{272}
    int local62; 		// m[r28 - 5]{273}
    int local63; 		// m[r28 - 8]{274}
    int local64; 		// m[r28 - 12]{275}
    int local65; 		// m[r28 - 16]{276}
    int local66; 		// m[r28 - 20]{277}
    int local67; 		// m[r28 - 24]{278}
    int local68; 		// m[r28 - 4]{279}
    int local69; 		// m[r28 - 8]{280}
    int local7; 		// r29{188}
    int local70; 		// m[r28 - 4]{281}
    void *local71; 		// m[r28 - 8]{282}
    int local72; 		// m[r29 - 1]{283}
    char local73; 		// m[r29 - 1]{284}
    int local74; 		// m[r27]{285}
    int local75; 		// m[r27]{286}
    int local76; 		// %pc{176}
    int local77; 		// m[r29 - 8]{69}
    int local78; 		// m[r29 - 8]{61}
    int local79; 		// m[r29 - 8]{173}
    int local8; 		// r29{170}
    int local80; 		// r27{32}
    int local81; 		// r28{59}
    int local82; 		// r29{32}
    int local83; 		// r31{32}
    int local84; 		// m[r28 - 5]{32}
    int local85;
    int local86;
    int local87;
    int local88;
    int local89; 		// m[r28 - 24]{32}
    int local9; 		// r31{220}
    int local90;
    int local91;
    int local92; 		// m[r28 - 4]{54}
    void *local93; 		// m[r28 - 8]{57}
    int local94;
    int local95; 		// m[r29 - 1]{32}
    int local96;
    int local97; 		// m[r27]{32}
    int local98; 		// %pc{58}
    void *local99; 		// %pc{32}

    local220 = *(int*)local1;
    local219 = *(int*)local168;
    local218 = *(int*)(local6 - 1);
    local217 = *(int*)(local128 - 1);
    local216 = *(int*)(local2 - 8);
    local215 = *(int*)(local2 - 4);
    local214 = *(int*)(local22 - 8);
    local213 = *(int*)(local22 - 4);
    local152 = param1;
    local150 = local288 - 4;
    local154 = param2;
    local169 = param2;
    local155 = 0;
    local156 = param3;
    local148 = param4;
    local157 = param5;
    param5 = READ_PORT_UCHAR;
    local158 = param6;
    local149 = local288 - 24;
    local151 = param7;
    local153 = 0;
    local202 = local148;
    local203 = local149;
    local204 = local150;
    local205 = local151;
    local207 = local153;
    local208 = local154;
    local209 = local155;
    local210 = local156;
    local211 = local157;
    local212 = local158;
    do {
        local127 = local202;
        local4 = local203;
        local129 = local204;
        local130 = local205;
        local145 = local206;
        local131 = local207;
        local132 = local208;
        local133 = local209;
        local134 = local210;
        local135 = local211;
        local136 = local212;
        local137 = local213;
        local138 = local214;
        local139 = local215;
        local140 = local216;
        local141 = local217;
        local142 = local218;
        local143 = local219;
        local144 = local220;
        local147 = *(int*)(local130 + 180) + 4;
        local146 = local145;
        (*param5)(local136, local135, local134, local133, local145, local132, local138, local140, local131, *(int*)(local130 + 180) + 4, param1, local137, local139, (unsigned char) *(int*)(local130 + 180) + 4, *(int*)(local130 + 180) + 4, param2, param8, local127, local129, param5, local130, local141, local142, local143, local144, param9, ADDFLAGS32(*(int*)(local130 + 180), 4, *(int*)(local130 + 180) + 4), ADDFLAGS32(*(int*)(local130 + 180), 4, *(int*)(local130 + 180) + 4));
        local221 = local80;
        local223 = local82;
        local224 = local83;
        local226 = local30;
        local227 = local84;
        local228 = local85;
        local229 = local86;
        local230 = local87;
        local231 = local88;
        local232 = local89;
        local233 = local90;
        local234 = local91;
        local237 = local94;
        local238 = local95;
        local239 = local96;
        local240 = local97;
        if ((local286 & 0xffffffc0) != -64) {
            local92 = 1;
            local93 = local99;
            local98 = *(int*)0x14028;
            KeStallExecutionProcessor(1);
            local222 = local81;
            local225 = local98;
            local235 = local92;
            local236 = local93;
        } else {
            local287 = *(int*)(local83 + 180) + 5;
            local126 = local287;
            local125 = local99;
            (*param5)(local89, local122, local88, local121, local87, local120, local86, local41, local119, local85, local91, local99, local84, local40, local118, local30, local90, (unsigned char) local287, local287, param2, param8, local80, local82, param5, local83, local29, local94, local95, local123, local124, local96, local97, param9, ADDFLAGS32(*(int*)(local83 + 180), 5, local287), ADDFLAGS32(*(int*)(local83 + 180), 5, local287));
            local221 = local1;
            local222 = local100;
            local223 = local6;
            local224 = local101;
            local225 = local117;
            local226 = local102;
            local227 = local103;
            local228 = local104;
            local229 = local105;
            local230 = local106;
            local231 = local107;
            local232 = local108;
            local233 = local109;
            local234 = local110;
            local235 = local111;
            local236 = local112;
            local237 = local113;
            local239 = local115;
            local116 = local286;
            local114 = 1;
            local238 = local114;
            local240 = local116;
        }
        local58 = local221;
        local59 = local222;
        local8 = local223;
        local60 = local224;
        local76 = local225;
        local61 = local226;
        local62 = local227;
        local63 = local228;
        local64 = local229;
        local65 = local230;
        local66 = local231;
        local67 = local232;
        local68 = local233;
        local69 = local234;
        local70 = local235;
        local71 = local236;
        local72 = local237;
        local73 = local238;
        local74 = local239;
        local75 = local240;
        local78 = local79 + 1;
        local202 = local58;
        local203 = local59;
        local204 = local8;
        local205 = local60;
        local206 = local76;
        local207 = local62;
        local208 = local63;
        local209 = local64;
        local210 = local65;
        local211 = local66;
        local212 = local67;
        local213 = local68;
        local214 = local69;
        local215 = local70;
        local216 = local71;
        local217 = local72;
        local218 = local73;
        local219 = local74;
        local220 = local75;
        local241 = local58;
        local242 = local59;
        local243 = local8;
        local244 = local60;
        local245 = local76;
        local246 = local61;
        local247 = local62;
        local248 = local63;
        local249 = local64;
        local250 = local65;
        local251 = local66;
        local252 = local67;
        local253 = local68;
        local254 = local69;
        local255 = local70;
        local256 = local71;
        local257 = local72;
        local258 = local73;
        local259 = local74;
        local260 = local75;
        local284 = local59;
        local285 = local8;
        if (*(int*)(local8 - 1) != 0) {
            break;
        }
    } while ((unsigned)local78 < 500);
    local77 = 0;
    if (*(int*)(local8 - 1) != 0) {
L1:
        local288 = local284;
        param1 = local285;
        local287 = 0;
        local286 = 0;
    } else {
        do {
            local27 = local241;
            local3 = local242;
            local7 = local243;
            local28 = local244;
            local52 = local245;
            local56 = local246;
            local31 = local247;
            local32 = local248;
            local33 = local249;
            local34 = local250;
            local35 = local251;
            local36 = local252;
            local37 = local253;
            local38 = local254;
            local57 = local255;
            local39 = local256;
            local42 = local257;
            local43 = local258;
            local45 = local259;
            local46 = local260;
            local281 = local3;
            local282 = local7;
            local283 = local28;
            if ((unsigned)local44 >= 5) {
                goto L3;
            }
            local55 = local28 + 8;
            local54 = 0;
            local53 = 0;
            local51 = local52;
            KeDelayExecutionThread(0, 0, local28 + 8);
            local49 = local44 + 1;
            local48 = *(int*)(local28 + 180) + 4;
            local47 = *(int*)0x140ec;
            (*param5)(local36, *(int*)0x140ec, local35, local34, *(int*)(local28 + 180) + 4, 0, local33, local41, 0, local32, local38, local39, local31, local40, local28 + 8, local30, local37, (unsigned char) *(int*)(local28 + 180) + 4, *(int*)(local28 + 180) + 4, param2, param8, local27, local7, param5, local28, local29, local42, local43, local44 + 1, 0, local45, local46, param9, ADDFLAGS32(*(int*)(local28 + 180), 4, *(int*)(local28 + 180) + 4), ADDFLAGS32(*(int*)(local28 + 180), 4, *(int*)(local28 + 180) + 4));
            local261 = local0;
            local262 = local22;
            local263 = local5;
            local264 = local190;
            local265 = local20;
            local266 = local10;
            local267 = local11;
            local268 = local12;
            local269 = local13;
            local270 = local14;
            local271 = local15;
            local272 = local16;
            local273 = local24;
            local274 = local25;
            local275 = local26;
            local276 = local17;
            local277 = local163;
            local278 = local18;
            local279 = local165;
            local280 = local19;
            if ((local286 & 0xffffffc0) == -64) {
                local287 = *(int*)(local190 + 180) + 5;
                local23 = local287;
                local21 = local20;
                (*param5)(local16, *(int*)(local3 - 20), local15, local14, *(int*)(local3 - 16), *(int*)(local3 - 12), local13, *(int*)(local4 - 8), *(int*)(local3 - 8), local12, local20, local17, local11, *(int*)(local4 - 4), *(int*)(local3 - 4), local10, local287, (unsigned char) local287, local287, param2, param8, local0, local5, param5, local190, *(int*)(local9 + 241), local163, local18, *(int*)(local7 - 8), *(int*)(local8 - 8), local165, local19, param9, ADDFLAGS32(*(int*)(local190 + 180), 5, local287), ADDFLAGS32(*(int*)(local190 + 180), 5, local287));
                local261 = local168;
                local262 = local191;
                local263 = local128;
                local264 = local192;
                local265 = local167;
                local266 = local193;
                local267 = local194;
                local268 = local195;
                local269 = local196;
                local270 = local197;
                local271 = local198;
                local272 = local199;
                local273 = local159;
                local274 = local160;
                local275 = local161;
                local276 = local162;
                local278 = local164;
                local280 = local166;
                local201 = local286;
                local200 = 1;
                local277 = local200;
                local279 = local201;
            }
            local170 = local261;
            local171 = local262;
            local172 = local263;
            local173 = local264;
            local189 = local265;
            local174 = local266;
            local175 = local267;
            local176 = local268;
            local177 = local269;
            local178 = local270;
            local179 = local271;
            local180 = local272;
            local181 = local273;
            local182 = local274;
            local183 = local275;
            local184 = local276;
            local185 = local277;
            local186 = local278;
            local187 = local279;
            local188 = local280;
            local241 = local170;
            local242 = local171;
            local243 = local172;
            local244 = local173;
            local245 = local189;
            local246 = local174;
            local247 = local175;
            local248 = local176;
            local249 = local177;
            local250 = local178;
            local251 = local179;
            local252 = local180;
            local253 = local181;
            local254 = local182;
            local255 = local183;
            local256 = local184;
            local257 = local185;
            local258 = local186;
            local259 = local187;
            local260 = local188;
            local281 = local171;
            local282 = local172;
            local283 = local173;
        } while (*(int*)(local172 - 1) == 0);
L3:
        local288 = local281;
        param1 = local282;
        local9 = local283;
        local284 = local288;
        local285 = param1;
        if (*(int*)(param1 - 1) == 0) {
            *(char*)(local9 + 241) = 1;
            local287 = 0xc00000a3;
            local286 = 163;
        } else {
            goto L1;
        }
    }
    return local287; /* WARNING: Also returning: param4, local286, param2, param8, param7, *(int*)param1, *(char*)local288 */
}

