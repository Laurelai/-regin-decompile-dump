void ExAllocatePoolWithTag;
char memset[0] = "\xffffff80\xffffffac";
char IoGetDeviceObjectPointer[0] = "\b\xffffffad";
char ObfDereferenceObject[0] = "\xfffffff0\xffffffac";
char KeInitializeEvent[0] = "\xffffffc2\xffffffac";
char IofCallDriver[0] = "V\xffffffab";
char IoBuildDeviceIoControlRequest[0] = "\xffffffa2\xffffffac";
char KeWaitForSingleObject[0] = "\xffffff8a\xffffffac";
char IoAllocateErrorLogEntry[0] = "\xffffffb0\xffffffab";
char KeInitializeSpinLock[0] = "6\xffffffad";
char IoCreateDevice[0] = "N\xffffffad";
char IoDeleteDevice[0] = "$\xffffffad";
char IoWriteErrorLogEntry[0] = "\xffffff98\xffffffab";
char ExFreePool[0] = "\xfffffff4\xffffffab";
char RtlQueryRegistryValues[0] = "\x1a\xffffffac";
char KfReleaseSpinLock[0] = "\xffffffc4\xffffffad";
char KfAcquireSpinLock[0] = "\xffffffd8\xffffffad";

__imp_memset(int param1, int param2, int param3);
proc2(int param1, int param3, int param4);
proc3(int param5, int param2, int param1, int param3, int param4);
proc4(int param7, int param8, int param6, int param5, int param10, int param9, int param3, int param2, int param4, int param1);
proc5(int param3, int param1, int param2, int param4);
proc6(int param5, int param1, int param2, int param3, int param4);
proc7(int param6, int param3, int param4, int param2, int param1, int param5);
proc8();
proc9(int param1, int param2);

// address: 0x1a4a0
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
    int local0; 		// r24{634}
    int local1; 		// r25{857}
    int local10; 		// r28{179}
    int local100; 		// m[r28 - 16]{1779}
    int local1000; 		// m[r28 - 4]{1329}
    int local1001; 		// m[r28 - 8]{1330}
    int local1002; 		// m[r28 - 12]{1331}
    int local1003; 		// m[r28 - 4]{1332}
    int local1004; 		// m[r28 - 8]{1333}
    int local1005; 		// m[r28 - 12]{1334}
    int local1006; 		// m[r28 - 16]{1335}
    int local1007; 		// m[r28 - 4]{1336}
    int local1008; 		// m[r28 - 8]{1337}
    int local1009; 		// m[r28 - 12]{1338}
    int local101; 		// m[r28 - 4]{1780}
    int local1010; 		// m[r28 - 16]{1339}
    int local1011; 		// m[r28 - 4]{1340}
    int local1012; 		// m[r28 - 8]{1341}
    int local1013; 		// m[r28 - 12]{1342}
    int local1014; 		// m[r28 - 16]{1343}
    int local1015; 		// m[r28 - 4]{1344}
    int local1016; 		// m[r28 - 8]{1345}
    int local1017; 		// m[r28 - 12]{1346}
    int local1018; 		// m[r28 - 16]{1347}
    int local1019; 		// m[r28 - 4]{1348}
    int local102; 		// m[r28 - 8]{1781}
    int local1020; 		// m[r28 - 8]{1349}
    int local1021; 		// m[r28 - 12]{1350}
    int local1022; 		// m[r28 - 8]{1352}
    int local1023; 		// m[r28 - 12]{1353}
    int local1024; 		// m[r28 - 16]{1354}
    int local1025; 		// m[r28 - 20]{1355}
    int local1026; 		// m[r28 - 24]{1356}
    int local1027; 		// m[r28 - 28]{1357}
    int local1028; 		// m[r28 - 8]{1359}
    int local1029; 		// m[r28 - 12]{1360}
    int local103; 		// m[r28 - 12]{1782}
    int local1030; 		// m[r28 - 16]{1361}
    int local1031; 		// m[r28 - 20]{1362}
    int local1032; 		// m[r28 - 24]{1363}
    void *local1033; 		// m[r28 - 28]{1364}
    int local1034; 		// m[r28 - 4]{1365}
    int local1035; 		// m[r28 - 8]{1366}
    int local1036; 		// m[r28 - 12]{1367}
    int local1037; 		// m[r28 - 4]{1368}
    int local1038; 		// m[r28 - 8]{1369}
    int local1039; 		// m[r28 - 12]{1370}
    int local104; 		// m[r28 - 16]{1783}
    int local1040; 		// m[r28 - 4]{1372}
    int local1041; 		// m[r28 - 8]{1373}
    int local1042; 		// m[r28 - 12]{1374}
    int local1043; 		// m[r29 - 24]{1375}
    int local1044; 		// m[r29 - 26]{1376}
    int local1045; 		// m[r29 - 80]{1377}
    int local1046; 		// m[r29 - 52]{1378}
    int local1047; 		// m[r29 - 16]{1379}
    int local1048; 		// m[r29 - 18]{1380}
    int local1049; 		// m[r29 - 40]{1381}
    int local105; 		// m[r28 - 4]{1784}
    int local1050; 		// m[r29 - 42]{1382}
    int local1051; 		// m[r29 - 34]{1384}
    int local1052; 		// m[r29 - 36]{1385}
    int local1053; 		// m[r29 - 8]{1386}
    int local1054; 		// m[r29 - 4]{1387}
    int local1055; 		// m[r29 - 12]{1388}
    int local1056; 		// m[r29 - 72]{1389}
    int local1057; 		// %pc{799}
    int local1058; 		// m[r28 - 8]{588}
    int local1059; 		// m[r28 - 4]{585}
    int local106; 		// m[r28 - 8]{1785}
    int local1060; 		// m[r28 - 4]{1285}
    int local1061; 		// m[r28 - 0x4a4]{1304}
    int local1062; 		// m[r28 - 0x4b0]{1307}
    int local1063; 		// m[r28 - 4]{1315}
    int local1064; 		// m[r28 - 4]{1324}
    int local1065; 		// m[r28 - 4]{1351}
    int local1066; 		// m[r28 - 4]{1358}
    int local1067; 		// m[r28 - 16]{1371}
    int local1068; 		// m[r29 - 32]{1383}
    int local1069; 		// r24{576}
    int local107; 		// m[r28 - 12]{1786}
    int local1070; 		// r25{772}
    int local1071; 		// r28{775}
    int local1072; 		// m[r29 + 12]{1172}
    int local1073; 		// m[r29 + 12]{1173}
    int local1074; 		// m[r29 + 12]{1174}
    int local1075; 		// m[r29 + 12]{1175}
    int local1076; 		// m[r28 - 4]{1176}
    int local1077; 		// m[r28 - 12]{1177}
    int local1078; 		// m[r28 - 16]{1178}
    int local1079; 		// m[r28 - 22]{1179}
    int local108; 		// m[r28 - 8]{1788}
    int local1080; 		// m[r28 - 30]{1180}
    int local1081; 		// m[r28 - 38]{1181}
    int local1082; 		// m[r28 - 46]{1182}
    int local1083; 		// m[r28 - 52]{1183}
    int local1084; 		// m[r28 - 54]{1184}
    int local1085; 		// m[r28 - 56]{1185}
    int local1086; 		// m[r28 - 60]{1186}
    int local1087; 		// m[r28 - 62]{1187}
    int local1088; 		// m[r28 - 64]{1188}
    int local1089; 		// m[r28 - 0x48c]{1189}
    int local109; 		// m[r28 - 12]{1789}
    int local1090; 		// m[r28 - 0x490]{1190}
    int local1091; 		// m[r28 - 0x494]{1191}
    int local1092; 		// m[r28 - 0x498]{1192}
    int local1093; 		// m[r28 - 0x49c]{1193}
    int local1094; 		// m[r28 - 0x4a0]{1194}
    int local1095; 		// m[r28 - 0x4a4]{1195}
    int local1096; 		// m[r28 - 0x4a8]{1196}
    int local1097; 		// m[r28 - 0x4ac]{1197}
    int local1098; 		// m[r28 - 0x4b0]{1198}
    int local1099; 		// m[r28 - 0x4b4]{1199}
    int local11; 		// r28{164}
    int local110; 		// m[r28 - 16]{1790}
    int local1100; 		// m[r28 - 0x4b8]{1200}
    int local1101; 		// m[r28 - 0x4bc]{1201}
    int local1102; 		// m[r28 - 4]{1202}
    int local1103; 		// m[r28 - 8]{1203}
    int local1104; 		// m[r28 - 12]{1204}
    int local1105; 		// m[r28 - 16]{1205}
    int local1106; 		// m[r28 - 4]{1206}
    int local1107; 		// m[r28 - 8]{1207}
    int local1108; 		// m[r28 - 12]{1208}
    int local1109; 		// m[r28 - 16]{1209}
    int local111; 		// m[r28 - 20]{1791}
    int local1110; 		// m[r28 - 20]{1210}
    int local1111; 		// m[r28 - 24]{1211}
    int local1112; 		// m[r28 - 4]{1212}
    int local1113; 		// m[r28 - 8]{1213}
    int local1114; 		// m[r28 - 12]{1214}
    int local1115; 		// m[r28 - 4]{1215}
    int local1116; 		// m[r28 - 8]{1216}
    int local1117; 		// m[r28 - 12]{1217}
    int local1118; 		// m[r28 - 16]{1218}
    int local1119; 		// m[r28 - 20]{1219}
    int local112; 		// m[r28 - 24]{1792}
    int local1120; 		// m[r28 - 4]{1220}
    int local1121; 		// m[r28 - 8]{1221}
    int local1122; 		// m[r28 - 12]{1222}
    int local1123; 		// m[r28 - 4]{1223}
    int local1124; 		// m[r28 - 8]{1224}
    int local1125; 		// m[r28 - 12]{1225}
    int local1126; 		// m[r28 - 16]{1226}
    int local1127; 		// m[r28 - 4]{1227}
    int local1128; 		// m[r28 - 8]{1228}
    int local1129; 		// m[r28 - 12]{1229}
    int local113; 		// m[r28 - 28]{1793}
    int local1130; 		// m[r28 - 16]{1230}
    int local1131; 		// m[r28 - 4]{1231}
    int local1132; 		// m[r28 - 8]{1232}
    int local1133; 		// m[r28 - 12]{1233}
    int local1134; 		// m[r28 - 16]{1234}
    int local1135; 		// m[r28 - 4]{1235}
    int local1136; 		// m[r28 - 8]{1236}
    int local1137; 		// m[r28 - 12]{1237}
    int local1138; 		// m[r28 - 16]{1238}
    int local1139; 		// m[r28 - 4]{1239}
    int local114; 		// m[r28 - 8]{1795}
    int local1140; 		// m[r28 - 8]{1240}
    int local1141; 		// m[r28 - 12]{1241}
    int local1142; 		// m[r28 - 4]{1242}
    int local1143; 		// m[r28 - 8]{1243}
    int local1144; 		// m[r28 - 12]{1244}
    int local1145; 		// m[r28 - 16]{1245}
    int local1146; 		// m[r28 - 20]{1246}
    int local1147; 		// m[r28 - 24]{1247}
    int local1148; 		// m[r28 - 28]{1248}
    int local1149; 		// m[r28 - 4]{1249}
    int local115; 		// m[r28 - 12]{1796}
    int local1150; 		// m[r28 - 8]{1250}
    int local1151; 		// m[r28 - 12]{1251}
    int local1152; 		// m[r28 - 16]{1252}
    int local1153; 		// m[r28 - 20]{1253}
    int local1154; 		// m[r28 - 24]{1254}
    void *local1155; 		// m[r28 - 28]{1255}
    int local1156; 		// m[r28 - 4]{1256}
    int local1157; 		// m[r28 - 8]{1257}
    int local1158; 		// m[r28 - 12]{1258}
    int local1159; 		// m[r28 - 4]{1259}
    int local116; 		// m[r28 - 16]{1797}
    int local1160; 		// m[r28 - 8]{1260}
    int local1161; 		// m[r28 - 12]{1261}
    int local1162; 		// m[r28 - 16]{1262}
    int local1163; 		// m[r28 - 4]{1263}
    int local1164; 		// m[r28 - 8]{1264}
    int local1165; 		// m[r28 - 12]{1265}
    int local1166; 		// m[r29 - 24]{1266}
    int local1167; 		// m[r29 - 26]{1267}
    int local1168; 		// m[r29 - 80]{1268}
    int local1169; 		// m[r29 - 52]{1269}
    int local117; 		// m[r28 - 20]{1798}
    int local1170; 		// m[r29 - 16]{1270}
    int local1171; 		// m[r29 - 18]{1271}
    int local1172; 		// m[r29 - 40]{1272}
    int local1173; 		// m[r29 - 42]{1273}
    int local1174; 		// m[r29 - 32]{1274}
    int local1175; 		// m[r29 - 34]{1275}
    int local1176; 		// m[r29 - 36]{1276}
    int local1177; 		// m[r29 - 8]{1277}
    int local1178; 		// m[r29 - 4]{1278}
    int local1179; 		// m[r29 - 12]{1279}
    int local118; 		// m[r28 - 24]{1799}
    int local1180; 		// m[r29 - 72]{1280}
    int local1181; 		// %pc{782}
    int local1182; 		// m[r29 - 4]{574}
    int local1183; 		// m[r29 - 4]{779}
    int local1184; 		// r24{757}
    int local1185; 		// r25{758}
    int local1186; 		// r28{761}
    int local1187;
    int local1188;
    int local1189; 		// m[r29 + 12]{1163}
    int local119; 		// m[r28 - 28]{1800}
    int local1190;
    int local1191;
    int local1192;
    int local1193;
    int local1194; 		// m[r28 - 22]{466}
    int local1195; 		// m[r28 - 30]{466}
    int local1196; 		// m[r28 - 38]{466}
    int local1197; 		// m[r28 - 46]{466}
    int local1198; 		// m[r28 - 52]{466}
    int local1199; 		// m[r28 - 54]{466}
    int local12; 		// r28{105}
    int local120; 		// m[r28 - 4]{1801}
    int local1200; 		// m[r28 - 56]{466}
    int local1201; 		// m[r28 - 60]{466}
    int local1202; 		// m[r28 - 62]{466}
    int local1203; 		// m[r28 - 64]{466}
    int local1204; 		// m[r28 - 0x48c]{466}
    int local1205; 		// m[r28 - 0x490]{466}
    int local1206; 		// m[r28 - 0x494]{466}
    int local1207; 		// m[r28 - 0x498]{466}
    int local1208; 		// m[r28 - 0x49c]{466}
    int local1209; 		// m[r28 - 0x4a0]{466}
    int local121; 		// m[r28 - 8]{1802}
    int local1210; 		// m[r28 - 0x4a4]{466}
    int local1211; 		// m[r28 - 0x4a8]{466}
    int local1212; 		// m[r28 - 0x4ac]{466}
    int local1213; 		// m[r28 - 0x4b0]{466}
    int local1214; 		// m[r28 - 0x4b4]{466}
    int local1215; 		// m[r28 - 0x4b8]{466}
    int local1216; 		// m[r28 - 0x4bc]{466}
    int local1217;
    int local1218;
    int local1219;
    int local122; 		// m[r28 - 12]{1803}
    int local1220;
    int local1221;
    int local1222;
    int local1223;
    int local1224;
    int local1225;
    int local1226;
    int local1227;
    int local1228;
    int local1229;
    int local123; 		// m[r28 - 4]{1804}
    int local1230;
    int local1231;
    int local1232;
    int local1233;
    int local1234;
    int local1235;
    int local1236;
    int local1237;
    int local1238;
    int local1239;
    int local124; 		// m[r28 - 8]{1805}
    int local1240;
    int local1241;
    int local1242;
    int local1243;
    int local1244;
    int local1245;
    int local1246;
    int local1247;
    int local1248;
    int local1249;
    int local125; 		// m[r28 - 12]{1806}
    int local1250;
    int local1251;
    int local1252;
    int local1253;
    int local1254;
    int local1255;
    int local1256;
    int local1257;
    int local1258;
    int local1259;
    int local126; 		// m[r28 - 4]{1808}
    int local1260;
    int local1261;
    int local1262;
    int local1263;
    int local1264; 		// m[r28 - 4]{1164}
    int local1265; 		// m[r28 - 8]{1165}
    int local1266; 		// m[r28 - 12]{1166}
    int local1267; 		// m[r28 - 16]{1167}
    int local1268; 		// m[r28 - 20]{1168}
    int local1269; 		// m[r28 - 24]{1169}
    int local127; 		// m[r28 - 8]{1809}
    void *local1270; 		// m[r28 - 28]{1170}
    int local1271;
    int local1272;
    int local1273;
    int local1274;
    int local1275;
    int local1276;
    int local1277; 		// m[r28 - 16]{466}
    int local1278; 		// m[r28 - 4]{466}
    int local1279; 		// m[r28 - 8]{466}
    int local128; 		// m[r28 - 12]{1810}
    int local1280; 		// m[r28 - 12]{466}
    int local1281; 		// m[r29 - 24]{466}
    int local1282; 		// m[r29 - 26]{466}
    int local1283; 		// m[r29 - 80]{466}
    int local1284; 		// m[r29 - 52]{466}
    int local1285; 		// m[r29 - 16]{466}
    int local1286; 		// m[r29 - 18]{466}
    int local1287; 		// m[r29 - 40]{466}
    int local1288; 		// m[r29 - 42]{466}
    int local1289; 		// m[r29 - 32]{466}
    int local129; 		// m[r29 - 24]{1811}
    int local1290; 		// m[r29 - 34]{466}
    int local1291; 		// m[r29 - 36]{466}
    int local1292; 		// m[r29 - 8]{1171}
    int local1293; 		// m[r29 - 4]{466}
    int local1294;
    int local1295; 		// m[r29 - 72]{466}
    int local1296; 		// %pc{765}
    int local1297; 		// r25{747}
    int local1298; 		// r28{749}
    int local1299; 		// %pc{752}
    int local13; 		// r28{466}
    int local130; 		// m[r29 - 26]{1812}
    int local1300; 		// m[r29 - 28]{567}
    int local1301; 		// m[r29 - 28]{466}
    int local1302; 		// m[r29 - 20]{564}
    int local1303; 		// r25{554}
    int local1304; 		// r28{554}
    int local1305; 		// %pc{553}
    int local1306; 		// r24{554}
    int local1307; 		// m[r29 + 12]{557}
    int local1308; 		// m[r28 - 28]{552}
    int local1309; 		// %pc{739}
    int local131; 		// m[r29 - 80]{1813}
    int local1310; 		// m[r28 - 24]{549}
    int local1311; 		// m[r28 - 20]{547}
    int local1312; 		// m[r28 - 16]{545}
    int local1313; 		// m[r28 - 12]{543}
    int local1314; 		// m[r28 - 8]{541}
    int local1315; 		// m[r28 - 4]{539}
    int local1316; 		// r24{529}
    int local1317; 		// r25{515}
    int local1318; 		// r28{515}
    int local1319; 		// %pc{514}
    int local132; 		// m[r29 - 52]{1814}
    int local1320; 		// m[r29 - 12]{521}
    int local1321; 		// m[r29 - 12]{466}
    int local1322; 		// r24{515}
    int local1323; 		// m[r29 + 12]{518}
    int local1324; 		// m[r28 - 4]{105}
    int local1325; 		// m[r28 - 8]{105}
    int local1326; 		// m[r28 - 12]{105}
    int local1327; 		// m[r28 - 16]{513}
    int local1328; 		// m[r28 - 12]{510}
    int local1329; 		// m[r28 - 8]{508}
    int local133; 		// m[r29 - 16]{1815}
    int local1330; 		// m[r28 - 4]{504}
    int local1331; 		// r24{730}
    int local1332; 		// r25{731}
    int local1333; 		// m[r29 + 12]{466}
    int local1334; 		// r24{499}
    int local1335; 		// r25{499}
    int local1336; 		// r28{499}
    int local1337; 		// m[r29 + 12]{500}
    int local1338; 		// m[r28 - 4]{475}
    int local1339; 		// m[r28 - 8]{479}
    int local134; 		// m[r29 - 18]{1816}
    int local1340; 		// m[r28 - 12]{483}
    int local1341; 		// m[r28 - 16]{487}
    int local1342; 		// m[r28 - 20]{491}
    int local1343; 		// m[r28 - 24]{493}
    void *local1344; 		// m[r28 - 28]{497}
    int local1345; 		// m[r29 - 8]{495}
    int local1346; 		// %pc{498}
    void *local1347; 		// %pc{466}
    int local1348; 		// r24{466}
    int local1349; 		// r25{466}
    int local135; 		// m[r29 - 40]{1817}
    int local1350;
    int local1351;
    int local1352;
    int local1353;
    int local1354;
    int local1355; 		// m[r28 - 20]{466}
    int local1356; 		// m[r28 - 24]{466}
    int local1357; 		// m[r28 - 28]{466}
    int local1358; 		// m[r29 - 8]{466}
    int local1359; 		// r25{454}
    int local136; 		// m[r29 - 42]{1818}
    int local1360; 		// r29{454}
    int local1361; 		// m[r25 + 48]{454}
    int local1362; 		// m[r25 + 56]{454}
    int local1363; 		// m[r25 + 64]{454}
    int local1364; 		// m[r25 + 68]{454}
    int local1365; 		// m[r25 + 92]{454}
    int local1366; 		// m[r25 + 112]{454}
    int local1367; 		// m[r25 + 128]{454}
    int local1368;
    int local1369;
    int local137; 		// m[r29 - 34]{1820}
    int local1370;
    int local1371;
    int local1372;
    int local1373;
    int local1374;
    int local1375; 		// m[r29 + 12]{454}
    int local1376; 		// m[m[r29 + 8] + 48]{454}
    int local1377; 		// m[m[r29 + 8] + 56]{454}
    int local1378; 		// m[m[r29 + 8] + 64]{454}
    int local1379; 		// m[m[r29 + 8] + 68]{454}
    int local138; 		// m[r29 - 36]{1821}
    int local1380; 		// m[m[r29 + 8] + 92]{454}
    int local1381; 		// m[m[r29 + 8] + 112]{454}
    int local1382; 		// m[m[r29 + 8] + 128]{454}
    int local1383;
    int local1384;
    int local1385;
    int local1386; 		// m[r28 - 22]{454}
    int local1387; 		// m[r28 - 30]{454}
    int local1388; 		// m[r28 - 38]{454}
    int local1389; 		// m[r28 - 46]{454}
    int local139; 		// m[r29 - 8]{1822}
    int local1390; 		// m[r28 - 52]{454}
    int local1391; 		// m[r28 - 54]{454}
    int local1392; 		// m[r28 - 56]{454}
    int local1393; 		// m[r28 - 60]{454}
    int local1394; 		// m[r28 - 62]{454}
    int local1395; 		// m[r28 - 64]{454}
    int local1396; 		// m[r28 - 0x48c]{454}
    int local1397; 		// m[r28 - 0x490]{454}
    int local1398; 		// m[r28 - 0x494]{454}
    int local1399; 		// m[r28 - 0x498]{454}
    int local14; 		// r28{454}
    int local140; 		// m[r29 - 4]{1823}
    int local1400; 		// m[r28 - 0x49c]{454}
    int local1401; 		// m[r28 - 0x4a0]{454}
    int local1402; 		// m[r28 - 0x4a4]{454}
    int local1403; 		// m[r28 - 0x4a8]{454}
    int local1404; 		// m[r28 - 0x4ac]{454}
    int local1405; 		// m[r28 - 0x4b0]{454}
    int local1406; 		// m[r28 - 0x4b4]{454}
    int local1407; 		// m[r28 - 0x4b8]{454}
    int local1408; 		// m[r28 - 0x4bc]{454}
    int local1409;
    int local141; 		// m[r29 - 12]{1824}
    int local1410;
    int local1411;
    int local1412;
    int local1413;
    int local1414;
    int local1415;
    int local1416;
    int local1417;
    int local1418;
    int local1419;
    int local142; 		// m[r29 - 72]{1825}
    int local1420;
    int local1421;
    int local1422;
    int local1423;
    int local1424;
    int local1425;
    int local1426;
    int local1427;
    int local1428;
    int local1429;
    void *local143; 		// %pc{867}
    int local1430;
    int local1431;
    int local1432;
    int local1433;
    int local1434;
    int local1435;
    int local1436;
    int local1437;
    int local1438;
    int local1439;
    int local144; 		// r28{860}
    int local1440;
    int local1441;
    int local1442;
    int local1443;
    int local1444;
    int local1445;
    int local1446;
    int local1447;
    int local1448;
    int local1449;
    int local145; 		// m[r28 - 4]{1721}
    int local1450;
    int local1451;
    int local1452;
    int local1453;
    int local1454;
    int local1455;
    int local1456;
    int local1457;
    int local1458;
    int local1459;
    int local146; 		// m[r28 - 0x4a4]{1740}
    int local1460;
    int local1461;
    int local1462;
    int local1463;
    int local1464;
    int local1465;
    int local1466;
    int local1467;
    int local1468;
    int local1469;
    int local147; 		// m[r28 - 0x4b0]{1743}
    int local1470;
    int local1471;
    int local1472;
    int local1473;
    int local1474;
    int local1475;
    int local1476;
    int local1477;
    int local1478;
    int local1479;
    int local148; 		// m[r28 - 4]{1751}
    int local1480;
    int local1481; 		// m[r28 - 28]{454}
    int local1482;
    int local1483;
    int local1484; 		// m[r28 - 12]{454}
    int local1485; 		// m[r28 - 16]{454}
    int local1486; 		// m[r28 - 20]{454}
    int local1487; 		// m[r28 - 24]{454}
    int local1488; 		// m[r28 - 4]{454}
    int local1489; 		// m[r28 - 8]{454}
    int local149; 		// m[r28 - 4]{1760}
    int local1490; 		// m[r29 - 24]{454}
    int local1491; 		// m[r29 - 26]{454}
    int local1492; 		// m[r29 - 80]{454}
    int local1493; 		// m[r29 - 52]{454}
    int local1494; 		// m[r29 - 16]{454}
    int local1495; 		// m[r29 - 18]{454}
    int local1496; 		// m[r29 - 40]{454}
    int local1497; 		// m[r29 - 42]{454}
    int local1498; 		// m[r29 - 32]{454}
    int local1499; 		// m[r29 - 34]{454}
    int local15; 		// r28{396}
    int local150; 		// m[r28 - 4]{1787}
    int local1500; 		// m[r29 - 36]{454}
    int local1501; 		// m[r29 - 8]{454}
    int local1502;
    int local1503;
    int local1504; 		// m[r29 - 72]{454}
    int local1505; 		// m[r29 - 12]{454}
    int local1506; 		// m[r29 - 20]{454}
    int local1507; 		// m[r29 - 28]{454}
    int local1508; 		// m[r29 - 4]{454}
    void *local1509; 		// %pc{454}
    int local151; 		// m[r28 - 4]{1794}
    void *local1510; 		// m[r28 - 12]{464}
    int local1511; 		// m[r28 - 8]{461}
    int local1512; 		// m[r28 - 4]{457}
    int local1513; 		// r24{438}
    int local1514; 		// r24{414}
    int local1515; 		// r25{438}
    int local1516; 		// r31{718}
    int local1517; 		// m[r25 + 48]{414}
    int local1518; 		// m[r25 + 56]{414}
    int local1519; 		// m[r25 + 64]{414}
    int local152; 		// m[r28 - 16]{1807}
    int local1520; 		// m[r25 + 68]{414}
    int local1521; 		// m[r25 + 92]{414}
    int local1522; 		// m[r25 + 112]{414}
    int local1523; 		// m[r25 + 128]{414}
    int local1524;
    int local1525;
    int local1526; 		// m[r29 + 12]{1056}
    int local1527; 		// m[r29 + 12]{1057}
    int local1528;
    int local1529;
    int local153; 		// m[r29 - 32]{1819}
    int local1530; 		// m[r29 + 12]{414}
    int local1531; 		// m[m[r29 + 8] + 48]{414}
    int local1532; 		// m[m[r29 + 8] + 56]{414}
    int local1533; 		// m[m[r29 + 8] + 64]{414}
    int local1534; 		// m[m[r29 + 8] + 68]{414}
    int local1535; 		// m[m[r29 + 8] + 92]{414}
    int local1536; 		// m[m[r29 + 8] + 112]{414}
    int local1537; 		// m[m[r29 + 8] + 128]{414}
    int local1538;
    int local1539; 		// m[r28 - 12]{1059}
    int local154; 		// r25{617}
    int local1540; 		// m[r28 - 16]{1060}
    int local1541; 		// m[r28 - 22]{1061}
    int local1542; 		// m[r28 - 30]{1062}
    int local1543; 		// m[r28 - 38]{1063}
    int local1544; 		// m[r28 - 46]{1064}
    int local1545; 		// m[r28 - 52]{1065}
    int local1546; 		// m[r28 - 54]{1066}
    int local1547; 		// m[r28 - 56]{1067}
    int local1548; 		// m[r28 - 60]{1068}
    int local1549; 		// m[r28 - 62]{1069}
    int local155; 		// r28{617}
    int local1550; 		// m[r28 - 64]{1070}
    int local1551; 		// m[r28 - 0x48c]{1071}
    int local1552; 		// m[r28 - 0x490]{1072}
    int local1553; 		// m[r28 - 0x494]{1073}
    int local1554; 		// m[r28 - 0x498]{1074}
    int local1555; 		// m[r28 - 0x49c]{1075}
    int local1556; 		// m[r28 - 0x4a0]{1076}
    int local1557; 		// m[r28 - 0x4a4]{1077}
    int local1558; 		// m[r28 - 0x4a8]{1078}
    int local1559; 		// m[r28 - 0x4ac]{1079}
    int local156; 		// r29{617}
    int local1560; 		// m[r28 - 0x4b0]{1080}
    int local1561; 		// m[r28 - 0x4b4]{1081}
    int local1562; 		// m[r28 - 0x4b8]{1082}
    int local1563; 		// m[r28 - 0x4bc]{1083}
    int local1564;
    int local1565; 		// m[r28 - 8]{1085}
    int local1566; 		// m[r28 - 12]{1086}
    int local1567; 		// m[r28 - 16]{1087}
    int local1568; 		// m[r28 - 4]{1088}
    int local1569; 		// m[r28 - 8]{1089}
    int local157;
    int local1570;
    int local1571; 		// m[r28 - 16]{1091}
    int local1572; 		// m[r28 - 20]{1092}
    int local1573; 		// m[r28 - 24]{1093}
    int local1574;
    int local1575; 		// m[r28 - 8]{1095}
    int local1576; 		// m[r28 - 12]{1096}
    int local1577; 		// m[r28 - 8]{1098}
    int local1578;
    int local1579; 		// m[r28 - 16]{1100}
    int local158;
    int local1580; 		// m[r28 - 20]{1101}
    int local1581;
    int local1582; 		// m[r28 - 8]{1103}
    int local1583; 		// m[r28 - 12]{1104}
    int local1584;
    int local1585; 		// m[r28 - 8]{1106}
    int local1586; 		// m[r28 - 12]{1107}
    int local1587; 		// m[r28 - 16]{1108}
    int local1588;
    int local1589; 		// m[r28 - 8]{1110}
    int local159;
    int local1590; 		// m[r28 - 12]{1111}
    int local1591; 		// m[r28 - 16]{1112}
    int local1592;
    int local1593; 		// m[r28 - 8]{1114}
    int local1594; 		// m[r28 - 12]{1115}
    int local1595; 		// m[r28 - 16]{1116}
    int local1596;
    int local1597; 		// m[r28 - 8]{1118}
    int local1598; 		// m[r28 - 12]{1119}
    int local1599; 		// m[r28 - 16]{1120}
    int local16; 		// r28{386}
    int local160; 		// m[r29 + 12]{617}
    int local1600;
    int local1601; 		// m[r28 - 8]{1122}
    int local1602; 		// m[r28 - 12]{1123}
    int local1603; 		// m[r28 - 8]{1125}
    int local1604; 		// m[r28 - 12]{1126}
    int local1605;
    int local1606; 		// m[r28 - 20]{1128}
    int local1607; 		// m[r28 - 24]{1129}
    int local1608; 		// m[r28 - 28]{1130}
    int local1609; 		// m[r28 - 4]{1131}
    int local161;
    int local1610; 		// m[r28 - 8]{1132}
    int local1611; 		// m[r28 - 12]{1133}
    int local1612; 		// m[r28 - 16]{1134}
    int local1613; 		// m[r28 - 20]{1135}
    int local1614; 		// m[r28 - 24]{1136}
    int local1615; 		// m[r28 - 28]{1137}
    int local1616; 		// m[r28 - 4]{1138}
    int local1617; 		// m[r28 - 8]{1139}
    int local1618; 		// m[r28 - 12]{1140}
    int local1619; 		// m[r28 - 4]{1141}
    int local162;
    int local1620; 		// m[r28 - 8]{1142}
    int local1621; 		// m[r28 - 12]{1143}
    int local1622; 		// m[r28 - 16]{1144}
    int local1623;
    int local1624; 		// m[r28 - 8]{1146}
    int local1625; 		// m[r28 - 12]{1147}
    int local1626;
    int local1627;
    int local1628;
    int local1629;
    int local163;
    int local1630;
    int local1631;
    int local1632;
    int local1633;
    int local1634;
    int local1635;
    int local1636;
    int local1637;
    int local1638; 		// m[r28 - 12]{414}
    int local1639;
    int local164; 		// m[r28 - 22]{617}
    int local1640; 		// m[r28 - 20]{414}
    int local1641; 		// m[r28 - 24]{414}
    int local1642; 		// m[r28 - 28]{414}
    int local1643; 		// m[r28 - 16]{414}
    int local1644; 		// m[r28 - 4]{414}
    int local1645; 		// m[r28 - 8]{414}
    int local1646; 		// m[r29 - 24]{414}
    int local1647; 		// m[r29 - 26]{414}
    int local1648; 		// m[r29 - 80]{414}
    int local1649; 		// m[r29 - 52]{414}
    int local165; 		// m[r28 - 30]{617}
    int local1650; 		// m[r29 - 16]{414}
    int local1651; 		// m[r29 - 18]{414}
    int local1652; 		// m[r29 - 40]{414}
    int local1653; 		// m[r29 - 42]{414}
    int local1654; 		// m[r29 - 32]{414}
    int local1655; 		// m[r29 - 34]{414}
    int local1656; 		// m[r29 - 36]{414}
    int local1657; 		// m[r29 - 8]{1159}
    int local1658; 		// m[r29 - 12]{414}
    int local1659; 		// m[r29 - 20]{414}
    int local166; 		// m[r28 - 38]{617}
    int local1660; 		// m[r29 - 28]{414}
    int local1661; 		// m[r29 - 4]{414}
    int local1662; 		// m[r28 - 24]{452}
    int local1663; 		// m[r28 - 20]{449}
    int local1664; 		// m[r28 - 16]{445}
    int local1665; 		// r28{438}
    int local1666; 		// m[r29 + 12]{1054}
    int local1667; 		// m[r29 + 12]{1055}
    int local1668; 		// m[r28 - 4]{1058}
    int local1669; 		// m[r28 - 4]{1084}
    int local167; 		// m[r28 - 46]{617}
    int local1670; 		// m[r28 - 12]{1090}
    int local1671; 		// m[r28 - 4]{1094}
    int local1672; 		// m[r28 - 4]{1097}
    int local1673; 		// m[r28 - 12]{1099}
    int local1674; 		// m[r28 - 4]{1102}
    int local1675; 		// m[r28 - 4]{1105}
    int local1676; 		// m[r28 - 4]{1109}
    int local1677; 		// m[r28 - 4]{1113}
    int local1678; 		// m[r28 - 4]{1117}
    int local1679; 		// m[r28 - 4]{1121}
    int local168; 		// m[r28 - 52]{617}
    int local1680; 		// m[r28 - 4]{1124}
    int local1681; 		// m[r28 - 16]{1127}
    int local1682; 		// m[r28 - 4]{1145}
    int local1683; 		// m[r29 - 24]{1148}
    int local1684; 		// m[r29 - 26]{1149}
    int local1685; 		// m[r29 - 80]{1150}
    int local1686; 		// m[r29 - 52]{1151}
    int local1687; 		// m[r29 - 16]{1152}
    int local1688; 		// m[r29 - 18]{1153}
    int local1689; 		// m[r29 - 40]{1154}
    int local169; 		// m[r28 - 54]{617}
    int local1690; 		// m[r29 - 42]{1155}
    int local1691; 		// m[r29 - 32]{1156}
    int local1692; 		// m[r29 - 34]{1157}
    int local1693; 		// m[r29 - 36]{1158}
    int local1694; 		// m[r29 - 4]{1160}
    int local1695; 		// m[r29 - 12]{1161}
    int local1696; 		// m[r29 - 72]{1162}
    int local1697; 		// tmph{721}
    int local1698; 		// %pc{437}
    int local1699; 		// m[r29 + 12]{441}
    int local17; 		// r28{883}
    int local170; 		// m[r28 - 56]{617}
    void *local1700; 		// m[r28 - 16]{436}
    void *local1701; 		// %pc{722}
    int local1702; 		// m[r28 - 12]{433}
    int local1703; 		// m[r28 - 8]{431}
    int local1704; 		// m[r28 - 4]{429}
    int local1705; 		// r28{414}
    int local1706;
    int local1707;
    int local1708;
    int local1709;
    int local171; 		// m[r28 - 60]{617}
    int local1710; 		// m[r28 - 22]{414}
    int local1711; 		// m[r28 - 30]{414}
    int local1712; 		// m[r28 - 38]{414}
    int local1713; 		// m[r28 - 46]{414}
    int local1714; 		// m[r28 - 52]{414}
    int local1715; 		// m[r28 - 54]{414}
    int local1716; 		// m[r28 - 56]{414}
    int local1717; 		// m[r28 - 60]{414}
    int local1718; 		// m[r28 - 62]{414}
    int local1719; 		// m[r28 - 64]{414}
    int local172; 		// m[r28 - 62]{617}
    int local1720; 		// m[r28 - 0x48c]{414}
    int local1721; 		// m[r28 - 0x490]{414}
    int local1722; 		// m[r28 - 0x494]{414}
    int local1723; 		// m[r28 - 0x498]{414}
    int local1724; 		// m[r28 - 0x49c]{414}
    int local1725; 		// m[r28 - 0x4a0]{414}
    int local1726; 		// m[r28 - 0x4a4]{414}
    int local1727; 		// m[r28 - 0x4a8]{414}
    int local1728; 		// m[r28 - 0x4ac]{414}
    int local1729; 		// m[r28 - 0x4b0]{414}
    int local173; 		// m[r28 - 64]{617}
    int local1730; 		// m[r28 - 0x4b4]{414}
    int local1731; 		// m[r28 - 0x4b8]{414}
    int local1732; 		// m[r28 - 0x4bc]{414}
    int local1733;
    int local1734;
    int local1735;
    int local1736;
    int local1737;
    int local1738;
    int local1739;
    int local174; 		// m[r28 - 0x48c]{617}
    int local1740;
    int local1741;
    int local1742;
    int local1743;
    int local1744;
    int local1745;
    int local1746;
    int local1747;
    int local1748;
    int local1749;
    int local175; 		// m[r28 - 0x490]{617}
    int local1750;
    int local1751;
    int local1752;
    int local1753;
    int local1754;
    int local1755;
    int local1756;
    int local1757;
    int local1758;
    int local1759;
    int local176; 		// m[r28 - 0x494]{617}
    int local1760;
    int local1761;
    int local1762;
    int local1763;
    int local1764;
    int local1765;
    int local1766;
    int local1767;
    int local1768;
    int local1769;
    int local177; 		// m[r28 - 0x498]{617}
    int local1770;
    int local1771;
    int local1772;
    int local1773;
    int local1774;
    int local1775;
    int local1776;
    int local1777;
    int local1778;
    int local1779;
    int local178; 		// m[r28 - 0x49c]{617}
    int local1780;
    int local1781;
    int local1782;
    int local1783;
    int local1784;
    int local1785; 		// m[r29 - 8]{414}
    int local1786; 		// m[r29 - 4]{422}
    int local1787; 		// m[r29 - 12]{421}
    int local1788; 		// m[r29 - 72]{415}
    int local1789; 		// tmph{414}
    int local179; 		// m[r28 - 0x4a0]{617}
    void *local1790; 		// %pc{414}
    int local1791; 		// r25{414}
    int local1792; 		// m[r29 + 12]{419}
    int local1793;
    int local1794;
    int local1795; 		// r24{402}
    int local1796; 		// r25{396}
    int local1797; 		// r29{396}
    int local1798; 		// m[r25 + 48]{396}
    int local1799; 		// m[r25 + 56]{396}
    int local18; 		// r28{843}
    int local180; 		// m[r28 - 0x4a4]{617}
    int local1800; 		// m[r25 + 64]{396}
    int local1801; 		// m[r25 + 68]{396}
    int local1802; 		// m[r25 + 92]{396}
    int local1803; 		// m[r25 + 112]{396}
    int local1804; 		// m[r25 + 128]{396}
    int local1805;
    int local1806;
    int local1807;
    int local1808;
    int local1809;
    int local181; 		// m[r28 - 0x4a8]{617}
    int local1810;
    int local1811;
    int local1812; 		// m[r29 + 12]{396}
    int local1813; 		// m[m[r29 + 8] + 48]{396}
    int local1814; 		// m[m[r29 + 8] + 56]{396}
    int local1815; 		// m[m[r29 + 8] + 64]{396}
    int local1816; 		// m[m[r29 + 8] + 68]{396}
    int local1817; 		// m[m[r29 + 8] + 92]{396}
    int local1818; 		// m[m[r29 + 8] + 112]{396}
    int local1819; 		// m[m[r29 + 8] + 128]{396}
    int local182; 		// m[r28 - 0x4ac]{617}
    int local1820;
    int local1821;
    int local1822;
    int local1823; 		// m[r28 - 22]{396}
    int local1824; 		// m[r28 - 30]{396}
    int local1825; 		// m[r28 - 38]{396}
    int local1826; 		// m[r28 - 46]{396}
    int local1827; 		// m[r28 - 52]{396}
    int local1828; 		// m[r28 - 54]{396}
    int local1829; 		// m[r28 - 56]{396}
    int local183; 		// m[r28 - 0x4b0]{617}
    int local1830; 		// m[r28 - 60]{396}
    int local1831; 		// m[r28 - 62]{396}
    int local1832; 		// m[r28 - 64]{396}
    int local1833; 		// m[r28 - 0x48c]{396}
    int local1834; 		// m[r28 - 0x490]{396}
    int local1835; 		// m[r28 - 0x494]{396}
    int local1836; 		// m[r28 - 0x498]{396}
    int local1837; 		// m[r28 - 0x49c]{396}
    int local1838; 		// m[r28 - 0x4a0]{396}
    int local1839; 		// m[r28 - 0x4a4]{396}
    int local184; 		// m[r28 - 0x4b4]{617}
    int local1840; 		// m[r28 - 0x4a8]{396}
    int local1841; 		// m[r28 - 0x4ac]{396}
    int local1842; 		// m[r28 - 0x4b0]{396}
    int local1843; 		// m[r28 - 0x4b4]{396}
    int local1844; 		// m[r28 - 0x4b8]{396}
    int local1845; 		// m[r28 - 0x4bc]{396}
    int local1846;
    int local1847;
    int local1848;
    int local1849;
    int local185; 		// m[r28 - 0x4b8]{617}
    int local1850;
    int local1851;
    int local1852;
    int local1853;
    int local1854;
    int local1855;
    int local1856;
    int local1857;
    int local1858;
    int local1859;
    int local186; 		// m[r28 - 0x4bc]{617}
    int local1860;
    int local1861;
    int local1862;
    int local1863;
    int local1864;
    int local1865;
    int local1866;
    int local1867;
    int local1868;
    int local1869;
    int local187;
    int local1870;
    int local1871;
    int local1872;
    int local1873;
    int local1874;
    int local1875;
    int local1876;
    int local1877;
    int local1878;
    int local1879;
    int local188;
    int local1880;
    int local1881;
    int local1882;
    int local1883;
    int local1884;
    int local1885;
    int local1886;
    int local1887;
    int local1888;
    int local1889;
    int local189;
    int local1890;
    int local1891;
    int local1892;
    int local1893;
    int local1894;
    int local1895;
    int local1896;
    int local1897;
    int local1898;
    int local1899;
    int local19; 		// r28{826}
    int local190;
    int local1900;
    int local1901;
    int local1902;
    int local1903;
    int local1904;
    int local1905;
    int local1906;
    int local1907;
    int local1908;
    int local1909;
    int local191;
    int local1910;
    int local1911;
    int local1912;
    int local1913;
    int local1914;
    int local1915;
    int local1916;
    int local1917;
    int local1918;
    int local1919; 		// m[r28 - 28]{396}
    int local192;
    int local1920;
    int local1921;
    int local1922; 		// m[r28 - 12]{396}
    int local1923; 		// m[r28 - 16]{396}
    int local1924; 		// m[r28 - 20]{396}
    int local1925; 		// m[r28 - 24]{396}
    int local1926; 		// m[r28 - 4]{396}
    int local1927; 		// m[r28 - 8]{396}
    int local1928; 		// m[r29 - 24]{396}
    int local1929; 		// m[r29 - 26]{396}
    int local193;
    int local1930; 		// m[r29 - 80]{396}
    int local1931; 		// m[r29 - 52]{396}
    int local1932; 		// m[r29 - 16]{396}
    int local1933; 		// m[r29 - 18]{396}
    int local1934; 		// m[r29 - 40]{396}
    int local1935; 		// m[r29 - 42]{396}
    int local1936; 		// m[r29 - 32]{396}
    int local1937; 		// m[r29 - 34]{396}
    int local1938; 		// m[r29 - 36]{396}
    int local1939; 		// m[r29 - 8]{396}
    int local194;
    int local1940;
    int local1941;
    int local1942; 		// m[r29 - 72]{396}
    int local1943; 		// m[r29 - 12]{396}
    int local1944; 		// m[r29 - 20]{396}
    int local1945; 		// m[r29 - 28]{396}
    int local1946; 		// m[r29 - 4]{396}
    void *local1947; 		// %pc{396}
    void *local1948; 		// m[r28 - 16]{412}
    int local1949; 		// m[r28 - 12]{409}
    int local195;
    int local1950; 		// m[r28 - 8]{405}
    int local1951; 		// m[r28 - 4]{399}
    int local1952; 		// r25{386}
    int local1953; 		// r29{386}
    int local1954; 		// m[r25 + 48]{386}
    int local1955; 		// m[r25 + 56]{386}
    int local1956; 		// m[r25 + 64]{386}
    int local1957; 		// m[r25 + 68]{386}
    int local1958; 		// m[r25 + 92]{386}
    int local1959; 		// m[r25 + 112]{386}
    int local196;
    int local1960; 		// m[r25 + 128]{386}
    int local1961;
    int local1962;
    int local1963;
    int local1964;
    int local1965;
    int local1966;
    int local1967;
    int local1968; 		// m[r29 + 12]{386}
    int local1969; 		// m[m[r29 + 8] + 48]{386}
    int local197;
    int local1970; 		// m[m[r29 + 8] + 56]{386}
    int local1971; 		// m[m[r29 + 8] + 64]{386}
    int local1972; 		// m[m[r29 + 8] + 68]{386}
    int local1973; 		// m[m[r29 + 8] + 92]{386}
    int local1974; 		// m[m[r29 + 8] + 112]{386}
    int local1975; 		// m[m[r29 + 8] + 128]{386}
    int local1976;
    int local1977;
    int local1978;
    int local1979; 		// m[r28 - 22]{386}
    int local198;
    int local1980; 		// m[r28 - 30]{386}
    int local1981; 		// m[r28 - 38]{386}
    int local1982; 		// m[r28 - 46]{386}
    int local1983; 		// m[r28 - 52]{386}
    int local1984; 		// m[r28 - 54]{386}
    int local1985; 		// m[r28 - 56]{386}
    int local1986; 		// m[r28 - 60]{386}
    int local1987; 		// m[r28 - 62]{386}
    int local1988; 		// m[r28 - 64]{386}
    int local1989; 		// m[r28 - 0x48c]{386}
    int local199;
    int local1990; 		// m[r28 - 0x490]{386}
    int local1991; 		// m[r28 - 0x494]{386}
    int local1992; 		// m[r28 - 0x498]{386}
    int local1993; 		// m[r28 - 0x49c]{386}
    int local1994; 		// m[r28 - 0x4a0]{386}
    int local1995; 		// m[r28 - 0x4a4]{386}
    int local1996; 		// m[r28 - 0x4a8]{386}
    int local1997; 		// m[r28 - 0x4ac]{386}
    int local1998; 		// m[r28 - 0x4b0]{386}
    int local1999; 		// m[r28 - 0x4b4]{386}
    int local2; 		// r28{358}
    int local20; 		// r28{809}
    int local200;
    int local2000; 		// m[r28 - 0x4b8]{386}
    int local2001; 		// m[r28 - 0x4bc]{386}
    int local2002;
    int local2003;
    int local2004;
    int local2005;
    int local2006;
    int local2007;
    int local2008;
    int local2009;
    int local201;
    int local2010;
    int local2011;
    int local2012;
    int local2013;
    int local2014;
    int local2015;
    int local2016;
    int local2017;
    int local2018;
    int local2019;
    int local202;
    int local2020;
    int local2021;
    int local2022;
    int local2023;
    int local2024;
    int local2025;
    int local2026;
    int local2027;
    int local2028;
    int local2029;
    int local203;
    int local2030;
    int local2031;
    int local2032;
    int local2033;
    int local2034;
    int local2035;
    int local2036;
    int local2037;
    int local2038;
    int local2039;
    int local204;
    int local2040;
    int local2041;
    int local2042;
    int local2043;
    int local2044;
    int local2045;
    int local2046;
    int local2047;
    int local2048;
    int local2049;
    int local205;
    int local2050;
    int local2051;
    int local2052;
    int local2053;
    int local2054;
    int local2055;
    int local2056;
    int local2057;
    int local2058;
    int local2059;
    int local206;
    int local2060;
    int local2061;
    int local2062;
    int local2063;
    int local2064;
    int local2065;
    int local2066;
    int local2067;
    int local2068;
    int local2069;
    int local207;
    int local2070;
    int local2071;
    int local2072;
    int local2073;
    int local2074;
    int local2075; 		// m[r28 - 28]{386}
    int local2076;
    int local2077;
    int local2078; 		// m[r28 - 12]{386}
    int local2079; 		// m[r28 - 16]{386}
    int local208;
    int local2080; 		// m[r28 - 20]{386}
    int local2081; 		// m[r28 - 24]{386}
    int local2082; 		// m[r28 - 4]{386}
    int local2083; 		// m[r28 - 8]{386}
    int local2084; 		// m[r29 - 24]{386}
    int local2085; 		// m[r29 - 26]{386}
    int local2086; 		// m[r29 - 80]{386}
    int local2087; 		// m[r29 - 52]{386}
    int local2088; 		// m[r29 - 16]{386}
    int local2089; 		// m[r29 - 18]{386}
    int local209;
    int local2090; 		// m[r29 - 40]{386}
    int local2091; 		// m[r29 - 42]{386}
    int local2092; 		// m[r29 - 32]{386}
    int local2093; 		// m[r29 - 34]{386}
    int local2094; 		// m[r29 - 36]{386}
    int local2095; 		// m[r29 - 8]{386}
    int local2096;
    int local2097;
    int local2098; 		// m[r29 - 72]{386}
    int local2099; 		// m[r29 - 12]{386}
    int local21; 		// r28{734}
    int local210;
    int local2100; 		// m[r29 - 20]{386}
    int local2101; 		// m[r29 - 28]{386}
    int local2102; 		// m[r29 - 4]{386}
    void *local2103; 		// %pc{386}
    int local2104; 		// %flags{386}
    int local2105; 		// %CF{386}
    void *local2106; 		// m[r28 - 12]{394}
    int local2107; 		// m[r28 - 8]{391}
    int local2108; 		// m[r28 - 4]{387}
    int local2109; 		// r24{358}
    int local211;
    int local2110; 		// r25{373}
    int local2111; 		// m[r25 + 48]{358}
    int local2112; 		// m[r25 + 56]{358}
    int local2113; 		// m[r25 + 64]{358}
    int local2114; 		// m[r25 + 68]{358}
    int local2115; 		// m[r25 + 92]{358}
    int local2116; 		// m[r25 + 112]{358}
    int local2117; 		// m[r25 + 128]{358}
    int local2118;
    int local2119;
    int local212;
    int local2120;
    int local2121;
    int local2122;
    int local2123;
    int local2124;
    int local2125; 		// m[r29 + 12]{358}
    int local2126; 		// m[m[r29 + 8] + 48]{358}
    int local2127; 		// m[m[r29 + 8] + 56]{358}
    int local2128; 		// m[m[r29 + 8] + 64]{358}
    int local2129; 		// m[m[r29 + 8] + 68]{358}
    int local213;
    int local2130; 		// m[m[r29 + 8] + 92]{358}
    int local2131; 		// m[m[r29 + 8] + 112]{358}
    int local2132; 		// m[m[r29 + 8] + 128]{358}
    int local2133;
    int local2134;
    int local2135;
    int local2136; 		// m[r28 - 22]{358}
    int local2137; 		// m[r28 - 30]{358}
    int local2138; 		// m[r28 - 38]{358}
    int local2139; 		// m[r28 - 46]{358}
    int local214;
    int local2140; 		// m[r28 - 52]{358}
    int local2141; 		// m[r28 - 54]{358}
    int local2142; 		// m[r28 - 56]{358}
    int local2143; 		// m[r28 - 60]{358}
    int local2144; 		// m[r28 - 62]{358}
    int local2145; 		// m[r28 - 64]{358}
    int local2146; 		// m[r28 - 0x48c]{358}
    int local2147; 		// m[r28 - 0x490]{358}
    int local2148; 		// m[r28 - 0x494]{358}
    int local2149; 		// m[r28 - 0x498]{358}
    int local215;
    int local2150; 		// m[r28 - 0x49c]{358}
    int local2151; 		// m[r28 - 0x4a0]{358}
    int local2152; 		// m[r28 - 0x4a4]{358}
    int local2153; 		// m[r28 - 0x4a8]{358}
    int local2154; 		// m[r28 - 0x4ac]{358}
    int local2155; 		// m[r28 - 0x4b0]{358}
    int local2156; 		// m[r28 - 0x4b4]{358}
    int local2157; 		// m[r28 - 0x4b8]{358}
    int local2158; 		// m[r28 - 0x4bc]{358}
    int local2159;
    int local216;
    int local2160;
    int local2161;
    int local2162;
    int local2163;
    int local2164;
    int local2165;
    int local2166;
    int local2167;
    int local2168;
    int local2169;
    int local217;
    int local2170;
    int local2171;
    int local2172;
    int local2173;
    int local2174;
    int local2175;
    int local2176;
    int local2177;
    int local2178;
    int local2179;
    int local218;
    int local2180;
    int local2181;
    int local2182;
    int local2183;
    int local2184;
    int local2185;
    int local2186;
    int local2187;
    int local2188;
    int local2189;
    int local219;
    int local2190;
    int local2191;
    int local2192;
    int local2193;
    int local2194;
    int local2195;
    int local2196;
    int local2197;
    int local2198;
    int local2199;
    int local22; 		// r28{715}
    int local220;
    int local2200;
    int local2201;
    int local2202;
    int local2203;
    int local2204;
    int local2205;
    int local2206;
    int local2207;
    int local2208;
    int local2209;
    int local221;
    int local2210;
    int local2211;
    int local2212;
    int local2213;
    int local2214;
    int local2215;
    int local2216;
    int local2217;
    int local2218;
    int local2219;
    int local222;
    int local2220;
    int local2221;
    int local2222;
    int local2223;
    int local2224;
    int local2225;
    int local2226;
    int local2227;
    int local2228;
    int local2229;
    int local223;
    int local2230;
    int local2231; 		// m[r28 - 28]{358}
    int local2232;
    int local2233;
    int local2234; 		// m[r28 - 12]{358}
    int local2235; 		// m[r28 - 16]{358}
    int local2236; 		// m[r28 - 20]{358}
    int local2237; 		// m[r28 - 24]{358}
    int local2238; 		// m[r28 - 4]{358}
    int local2239; 		// m[r28 - 8]{358}
    int local224;
    int local2240; 		// m[r29 - 26]{358}
    int local2241; 		// m[r29 - 80]{358}
    int local2242; 		// m[r29 - 52]{358}
    int local2243; 		// m[r29 - 16]{358}
    int local2244; 		// m[r29 - 18]{358}
    int local2245; 		// m[r29 - 40]{358}
    int local2246; 		// m[r29 - 42]{358}
    int local2247; 		// m[r29 - 32]{358}
    int local2248; 		// m[r29 - 34]{358}
    int local2249; 		// m[r29 - 36]{358}
    int local225;
    int local2250; 		// m[r29 - 8]{358}
    int local2251;
    int local2252;
    int local2253; 		// m[r29 - 72]{358}
    int local2254; 		// m[r29 - 12]{358}
    int local2255; 		// m[r29 - 20]{358}
    int local2256; 		// m[r29 - 28]{358}
    int local2257; 		// m[r29 - 4]{358}
    void *local2258; 		// %pc{358}
    int local2259; 		// m[r28 - 12]{384}
    int local226;
    int local2260; 		// m[r28 - 8]{381}
    int local2261; 		// m[r28 - 4]{377}
    int local2262; 		// r24{373}
    int local2263; 		// r28{373}
    void *local2264; 		// m[r28 - 16]{371}
    int local2265; 		// m[r28 - 12]{368}
    int local2266; 		// m[r28 - 8]{366}
    int local2267; 		// m[r28 - 4]{364}
    int local2268; 		// r25{358}
    int local2269;
    int local227;
    int local2270;
    int local2271;
    int local2272;
    int local2273;
    int local2274;
    int local2275;
    int local2276;
    int local2277; 		// m[r29 - 24]{359}
    int local2278; 		// r29{307}
    int local2279; 		// m[r25 + 48]{307}
    int local228;
    int local2280; 		// m[r25 + 56]{307}
    int local2281; 		// m[r25 + 64]{307}
    int local2282; 		// m[r25 + 68]{307}
    int local2283; 		// m[r25 + 92]{307}
    int local2284; 		// m[r25 + 112]{307}
    int local2285; 		// m[r25 + 128]{307}
    int local2286;
    int local2287;
    int local2288;
    int local2289;
    int local229;
    int local2290;
    int local2291;
    int local2292; 		// m[r29 + 12]{307}
    int local2293; 		// m[m[r29 + 8] + 48]{307}
    int local2294; 		// m[m[r29 + 8] + 56]{307}
    int local2295; 		// m[m[r29 + 8] + 64]{307}
    int local2296; 		// m[m[r29 + 8] + 68]{307}
    int local2297; 		// m[m[r29 + 8] + 92]{307}
    int local2298; 		// m[m[r29 + 8] + 112]{307}
    int local2299; 		// m[m[r29 + 8] + 128]{307}
    int local23; 		// r28{792}
    int local230;
    int local2300;
    int local2301;
    int local2302;
    int local2303; 		// m[r28 - 22]{307}
    int local2304; 		// m[r28 - 30]{307}
    int local2305; 		// m[r28 - 38]{307}
    int local2306; 		// m[r28 - 46]{307}
    int local2307; 		// m[r28 - 52]{307}
    int local2308; 		// m[r28 - 54]{307}
    int local2309; 		// m[r28 - 56]{307}
    int local231;
    int local2310; 		// m[r28 - 60]{307}
    int local2311; 		// m[r28 - 62]{307}
    int local2312; 		// m[r28 - 64]{307}
    int local2313; 		// m[r28 - 0x48c]{307}
    int local2314; 		// m[r28 - 0x490]{307}
    int local2315; 		// m[r28 - 0x494]{307}
    int local2316; 		// m[r28 - 0x498]{307}
    int local2317; 		// m[r28 - 0x49c]{307}
    int local2318; 		// m[r28 - 0x4a0]{307}
    int local2319; 		// m[r28 - 0x4a4]{307}
    int local232;
    int local2320; 		// m[r28 - 0x4a8]{307}
    int local2321; 		// m[r28 - 0x4ac]{307}
    int local2322; 		// m[r28 - 0x4b0]{307}
    int local2323; 		// m[r28 - 0x4b4]{307}
    int local2324; 		// m[r28 - 0x4b8]{307}
    int local2325; 		// m[r28 - 0x4bc]{307}
    int local2326;
    int local2327;
    int local2328;
    int local2329;
    int local233;
    int local2330;
    int local2331;
    int local2332;
    int local2333;
    int local2334;
    int local2335;
    int local2336;
    int local2337;
    int local2338;
    int local2339;
    int local234;
    int local2340;
    int local2341;
    int local2342;
    int local2343;
    int local2344;
    int local2345;
    int local2346;
    int local2347;
    int local2348;
    int local2349;
    int local235;
    int local2350;
    int local2351;
    int local2352;
    int local2353;
    int local2354;
    int local2355;
    int local2356;
    int local2357;
    int local2358;
    int local2359;
    int local236;
    int local2360;
    int local2361;
    int local2362;
    int local2363;
    int local2364;
    int local2365;
    int local2366;
    int local2367;
    int local2368;
    int local2369;
    int local237;
    int local2370;
    int local2371;
    int local2372;
    int local2373;
    int local2374;
    int local2375;
    int local2376;
    int local2377;
    int local2378;
    int local2379;
    int local238; 		// m[r28 - 20]{617}
    int local2380;
    int local2381;
    int local2382;
    int local2383;
    int local2384;
    int local2385;
    int local2386;
    int local2387;
    int local2388;
    int local2389;
    int local239; 		// m[r28 - 24]{617}
    int local2390;
    int local2391;
    int local2392;
    int local2393;
    int local2394; 		// m[r28 - 28]{307}
    int local2395;
    int local2396;
    int local2397; 		// m[r28 - 12]{307}
    int local2398; 		// m[r28 - 16]{307}
    int local2399; 		// m[r28 - 20]{307}
    int local24; 		// r29{319}
    int local240; 		// m[r28 - 28]{617}
    int local2400; 		// m[r28 - 24]{307}
    int local2401; 		// m[r28 - 4]{307}
    int local2402; 		// m[r28 - 8]{307}
    int local2403; 		// m[r29 - 24]{307}
    int local2404; 		// m[r29 - 80]{1053}
    int local2405; 		// m[r29 - 52]{307}
    int local2406; 		// m[r29 - 16]{307}
    int local2407; 		// m[r29 - 18]{307}
    int local2408; 		// m[r29 - 40]{307}
    int local2409; 		// m[r29 - 42]{307}
    int local241;
    int local2410; 		// m[r29 - 32]{307}
    int local2411; 		// m[r29 - 34]{307}
    int local2412; 		// m[r29 - 36]{307}
    int local2413; 		// m[r29 - 8]{307}
    int local2414;
    int local2415;
    int local2416; 		// m[r29 - 72]{307}
    int local2417; 		// m[r29 - 12]{307}
    int local2418; 		// m[r29 - 20]{307}
    int local2419; 		// m[r29 - 28]{307}
    int local242;
    int local2420; 		// m[r29 - 4]{307}
    void *local2421; 		// %pc{307}
    int local2422; 		// m[r28 - 24]{356}
    int local2423; 		// m[r28 - 20]{353}
    int local2424; 		// m[r28 - 16]{351}
    int local2425; 		// m[r28 - 12]{349}
    int local2426; 		// m[r29 - 26]{346}
    int local2427; 		// r24{340}
    int local2428; 		// r25{340}
    int local2429; 		// r28{340}
    int local243;
    int local2430; 		// m[r28 - 12]{338}
    int local2431; 		// m[r28 - 8]{335}
    int local2432; 		// m[r28 - 4]{331}
    int local2433; 		// m[r29 + 12]{329}
    int local2434; 		// m[r29 - 80]{328}
    int local2435; 		// m[r29 - 80]{307}
    int local2436; 		// r24{319}
    int local2437; 		// r25{319}
    void *local2438; 		// m[r28 - 12]{317}
    int local2439; 		// m[r28 - 8]{314}
    int local244;
    int local2440; 		// m[r28 - 4]{310}
    int local2441; 		// r25{292}
    int local2442; 		// m[r25 + 48]{280}
    int local2443; 		// m[r25 + 56]{280}
    int local2444; 		// m[r25 + 64]{280}
    int local2445; 		// m[r25 + 68]{280}
    int local2446; 		// m[r25 + 92]{280}
    int local2447; 		// m[r25 + 112]{280}
    int local2448; 		// m[r25 + 128]{280}
    int local2449;
    int local245;
    int local2450;
    int local2451;
    int local2452;
    int local2453;
    int local2454;
    int local2455;
    int local2456; 		// m[r29 + 12]{280}
    int local2457; 		// m[m[r29 + 8] + 48]{280}
    int local2458; 		// m[m[r29 + 8] + 56]{280}
    int local2459; 		// m[m[r29 + 8] + 64]{280}
    int local246;
    int local2460; 		// m[m[r29 + 8] + 68]{280}
    int local2461; 		// m[m[r29 + 8] + 92]{280}
    int local2462; 		// m[m[r29 + 8] + 112]{280}
    int local2463; 		// m[m[r29 + 8] + 128]{280}
    int local2464;
    int local2465;
    int local2466;
    int local2467; 		// m[r28 - 22]{280}
    int local2468; 		// m[r28 - 30]{280}
    int local2469; 		// m[r28 - 38]{280}
    int local247; 		// m[r28 - 16]{617}
    int local2470; 		// m[r28 - 46]{280}
    int local2471; 		// m[r28 - 52]{280}
    int local2472; 		// m[r28 - 54]{280}
    int local2473; 		// m[r28 - 56]{280}
    int local2474; 		// m[r28 - 60]{280}
    int local2475; 		// m[r28 - 62]{280}
    int local2476; 		// m[r28 - 64]{280}
    int local2477; 		// m[r28 - 0x48c]{280}
    int local2478; 		// m[r28 - 0x490]{280}
    int local2479; 		// m[r28 - 0x494]{280}
    int local248; 		// m[r28 - 4]{617}
    int local2480; 		// m[r28 - 0x498]{280}
    int local2481; 		// m[r28 - 0x49c]{280}
    int local2482; 		// m[r28 - 0x4a0]{280}
    int local2483; 		// m[r28 - 0x4a4]{280}
    int local2484; 		// m[r28 - 0x4a8]{280}
    int local2485; 		// m[r28 - 0x4ac]{280}
    int local2486; 		// m[r28 - 0x4b0]{280}
    int local2487; 		// m[r28 - 0x4b4]{280}
    int local2488; 		// m[r28 - 0x4b8]{280}
    int local2489; 		// m[r28 - 0x4bc]{280}
    int local249; 		// m[r28 - 8]{617}
    int local2490;
    int local2491;
    int local2492;
    int local2493;
    int local2494;
    int local2495;
    int local2496;
    int local2497;
    int local2498;
    int local2499;
    int local25; 		// r29{280}
    int local250; 		// m[r28 - 12]{617}
    int local2500;
    int local2501;
    int local2502;
    int local2503;
    int local2504;
    int local2505;
    int local2506;
    int local2507;
    int local2508;
    int local2509;
    int local251; 		// m[r29 - 24]{617}
    int local2510;
    int local2511;
    int local2512;
    int local2513;
    int local2514;
    int local2515;
    int local2516;
    int local2517;
    int local2518;
    int local2519;
    int local252; 		// m[r29 - 26]{617}
    int local2520;
    int local2521;
    int local2522;
    int local2523;
    int local2524;
    int local2525;
    int local2526;
    int local2527;
    int local2528;
    int local2529;
    int local253; 		// m[r29 - 80]{617}
    int local2530;
    int local2531;
    int local2532;
    int local2533;
    int local2534;
    int local2535;
    int local2536;
    int local2537;
    int local2538;
    int local2539;
    int local254; 		// m[r29 - 52]{617}
    int local2540;
    int local2541;
    int local2542;
    int local2543;
    int local2544;
    int local2545;
    int local2546;
    int local2547;
    int local2548;
    int local2549;
    int local255; 		// m[r29 - 16]{617}
    int local2550;
    int local2551;
    int local2552;
    int local2553;
    int local2554;
    int local2555;
    int local2556;
    int local2557;
    int local2558;
    int local2559;
    int local256; 		// m[r29 - 18]{617}
    int local2560;
    int local2561;
    int local2562; 		// m[r28 - 28]{280}
    int local2563;
    int local2564;
    int local2565; 		// m[r28 - 12]{280}
    int local2566; 		// m[r28 - 16]{280}
    int local2567; 		// m[r28 - 20]{280}
    int local2568; 		// m[r28 - 24]{280}
    int local2569; 		// m[r28 - 4]{280}
    int local257; 		// m[r29 - 40]{617}
    int local2570; 		// m[r28 - 8]{280}
    int local2571; 		// m[r29 - 24]{280}
    int local2572; 		// m[r29 - 26]{280}
    int local2573; 		// m[r29 - 80]{280}
    int local2574; 		// m[r29 - 52]{280}
    int local2575; 		// m[r29 - 16]{280}
    int local2576; 		// m[r29 - 18]{280}
    int local2577; 		// m[r29 - 40]{280}
    int local2578; 		// m[r29 - 42]{280}
    int local2579; 		// m[r29 - 32]{280}
    int local258; 		// m[r29 - 42]{617}
    int local2580; 		// m[r29 - 34]{280}
    int local2581; 		// m[r29 - 36]{280}
    int local2582; 		// m[r29 - 8]{280}
    int local2583;
    int local2584;
    int local2585; 		// m[r29 - 72]{280}
    int local2586; 		// m[r29 - 12]{280}
    int local2587; 		// m[r29 - 20]{280}
    int local2588; 		// m[r29 - 28]{280}
    int local2589; 		// m[r29 - 4]{280}
    int local259; 		// m[r29 - 32]{617}
    int local2590; 		// m[r28 - 20]{305}
    int local2591; 		// m[r28 - 16]{302}
    int local2592; 		// m[r28 - 12]{298}
    int local2593; 		// m[r29 - 52]{296}
    int local2594; 		// r24{292}
    int local2595; 		// r28{292}
    void *local2596; 		// m[r28 - 12]{290}
    void *local2597; 		// %pc{280}
    int local2598; 		// m[r28 - 8]{287}
    int local2599; 		// m[r28 - 4]{283}
    int local26; 		// r29{241}
    int local260; 		// m[r29 - 34]{617}
    int local2600; 		// r25{270}
    int local2601; 		// r29{270}
    int local2602; 		// m[r25 + 48]{270}
    int local2603; 		// m[r25 + 56]{270}
    int local2604; 		// m[r25 + 64]{270}
    int local2605; 		// m[r25 + 68]{270}
    int local2606; 		// m[r25 + 92]{270}
    int local2607; 		// m[r25 + 112]{270}
    int local2608; 		// m[r25 + 128]{270}
    int local2609;
    int local261; 		// m[r29 - 36]{617}
    int local2610;
    int local2611;
    int local2612;
    int local2613;
    int local2614;
    int local2615;
    int local2616; 		// m[r29 + 12]{270}
    int local2617; 		// m[m[r29 + 8] + 48]{270}
    int local2618; 		// m[m[r29 + 8] + 56]{270}
    int local2619; 		// m[m[r29 + 8] + 64]{270}
    int local262; 		// m[r29 - 8]{617}
    int local2620; 		// m[m[r29 + 8] + 68]{270}
    int local2621; 		// m[m[r29 + 8] + 92]{270}
    int local2622; 		// m[m[r29 + 8] + 112]{270}
    int local2623; 		// m[m[r29 + 8] + 128]{270}
    int local2624;
    int local2625;
    int local2626;
    int local2627; 		// m[r28 - 22]{270}
    int local2628; 		// m[r28 - 30]{270}
    int local2629; 		// m[r28 - 38]{270}
    int local263; 		// m[r29 - 4]{617}
    int local2630; 		// m[r28 - 46]{270}
    int local2631; 		// m[r28 - 52]{270}
    int local2632; 		// m[r28 - 54]{270}
    int local2633; 		// m[r28 - 56]{270}
    int local2634; 		// m[r28 - 60]{270}
    int local2635; 		// m[r28 - 62]{270}
    int local2636; 		// m[r28 - 64]{270}
    int local2637; 		// m[r28 - 0x48c]{270}
    int local2638; 		// m[r28 - 0x490]{270}
    int local2639; 		// m[r28 - 0x494]{270}
    int local264; 		// m[r29 - 12]{617}
    int local2640; 		// m[r28 - 0x498]{270}
    int local2641; 		// m[r28 - 0x49c]{270}
    int local2642; 		// m[r28 - 0x4a0]{270}
    int local2643; 		// m[r28 - 0x4a4]{270}
    int local2644; 		// m[r28 - 0x4a8]{270}
    int local2645; 		// m[r28 - 0x4ac]{270}
    int local2646; 		// m[r28 - 0x4b0]{270}
    int local2647; 		// m[r28 - 0x4b4]{270}
    int local2648; 		// m[r28 - 0x4b8]{270}
    int local2649; 		// m[r28 - 0x4bc]{270}
    int local265; 		// m[r29 - 72]{617}
    int local2650;
    int local2651;
    int local2652;
    int local2653;
    int local2654;
    int local2655;
    int local2656;
    int local2657;
    int local2658;
    int local2659;
    void *local266; 		// %pc{617}
    int local2660;
    int local2661;
    int local2662;
    int local2663;
    int local2664;
    int local2665;
    int local2666;
    int local2667;
    int local2668;
    int local2669;
    int local267; 		// r24{839}
    int local2670;
    int local2671;
    int local2672;
    int local2673;
    int local2674;
    int local2675;
    int local2676;
    int local2677;
    int local2678;
    int local2679;
    int local268; 		// r25{840}
    int local2680;
    int local2681;
    int local2682;
    int local2683;
    int local2684;
    int local2685;
    int local2686;
    int local2687;
    int local2688;
    int local2689;
    int local269; 		// r29{844}
    int local2690;
    int local2691;
    int local2692;
    int local2693;
    int local2694;
    int local2695;
    int local2696;
    int local2697;
    int local2698;
    int local2699;
    int local27; 		// r29{223}
    int local270; 		// m[r29 + 12]{1608}
    int local2700;
    int local2701;
    int local2702;
    int local2703;
    int local2704;
    int local2705;
    int local2706;
    int local2707;
    int local2708;
    int local2709;
    int local271; 		// m[r29 + 12]{1609}
    int local2710;
    int local2711;
    int local2712;
    int local2713;
    int local2714;
    int local2715;
    int local2716;
    int local2717;
    int local2718;
    int local2719;
    int local272; 		// m[r29 + 12]{1610}
    int local2720;
    int local2721;
    int local2722;
    int local2723; 		// m[r28 - 28]{270}
    int local2724;
    int local2725;
    int local2726; 		// m[r28 - 12]{270}
    int local2727; 		// m[r28 - 16]{270}
    int local2728; 		// m[r28 - 20]{270}
    int local2729; 		// m[r28 - 24]{270}
    int local273; 		// m[r29 + 12]{1611}
    int local2730; 		// m[r28 - 4]{270}
    int local2731; 		// m[r28 - 8]{270}
    int local2732; 		// m[r29 - 24]{270}
    int local2733; 		// m[r29 - 26]{270}
    int local2734; 		// m[r29 - 80]{270}
    int local2735; 		// m[r29 - 52]{270}
    int local2736; 		// m[r29 - 16]{270}
    int local2737; 		// m[r29 - 18]{270}
    int local2738; 		// m[r29 - 40]{270}
    int local2739; 		// m[r29 - 42]{270}
    int local274; 		// m[r28 - 12]{1613}
    int local2740; 		// m[r29 - 32]{270}
    int local2741; 		// m[r29 - 34]{270}
    int local2742; 		// m[r29 - 36]{270}
    int local2743; 		// m[r29 - 8]{270}
    int local2744;
    int local2745;
    int local2746; 		// m[r29 - 72]{270}
    int local2747; 		// m[r29 - 12]{270}
    int local2748; 		// m[r29 - 20]{270}
    int local2749; 		// m[r29 - 28]{270}
    int local275; 		// m[r28 - 16]{1614}
    int local2750; 		// m[r29 - 4]{270}
    void *local2751; 		// %pc{270}
    int local2752; 		// %flags{270}
    int local2753; 		// %CF{270}
    void *local2754; 		// m[r28 - 12]{278}
    int local2755; 		// m[r28 - 8]{275}
    int local2756; 		// m[r28 - 4]{271}
    int local2757; 		// r24{241}
    int local2758; 		// r25{256}
    int local2759; 		// m[r25 + 48]{241}
    int local276; 		// m[r28 - 22]{1615}
    int local2760; 		// m[r25 + 56]{241}
    int local2761; 		// m[r25 + 64]{241}
    int local2762; 		// m[r25 + 68]{241}
    int local2763; 		// m[r25 + 92]{241}
    int local2764; 		// m[r25 + 112]{241}
    int local2765; 		// m[r25 + 128]{241}
    int local2766;
    int local2767;
    int local2768;
    int local2769;
    int local277; 		// m[r28 - 30]{1616}
    int local2770;
    int local2771;
    int local2772;
    int local2773; 		// m[r29 + 12]{241}
    int local2774; 		// m[m[r29 + 8] + 48]{241}
    int local2775; 		// m[m[r29 + 8] + 56]{241}
    int local2776; 		// m[m[r29 + 8] + 64]{241}
    int local2777; 		// m[m[r29 + 8] + 68]{241}
    int local2778; 		// m[m[r29 + 8] + 92]{241}
    int local2779; 		// m[m[r29 + 8] + 112]{241}
    int local278; 		// m[r28 - 38]{1617}
    int local2780; 		// m[m[r29 + 8] + 128]{241}
    int local2781;
    int local2782;
    int local2783;
    int local2784; 		// m[r28 - 22]{241}
    int local2785; 		// m[r28 - 30]{241}
    int local2786; 		// m[r28 - 38]{241}
    int local2787; 		// m[r28 - 46]{241}
    int local2788; 		// m[r28 - 52]{241}
    int local2789; 		// m[r28 - 54]{241}
    int local279; 		// m[r28 - 46]{1618}
    int local2790; 		// m[r28 - 56]{241}
    int local2791; 		// m[r28 - 60]{241}
    int local2792; 		// m[r28 - 62]{241}
    int local2793; 		// m[r28 - 64]{241}
    int local2794; 		// m[r28 - 0x48c]{241}
    int local2795; 		// m[r28 - 0x490]{241}
    int local2796; 		// m[r28 - 0x494]{241}
    int local2797; 		// m[r28 - 0x498]{241}
    int local2798; 		// m[r28 - 0x49c]{241}
    int local2799; 		// m[r28 - 0x4a0]{241}
    int local28; 		// r29{195}
    int local280; 		// m[r28 - 52]{1619}
    int local2800; 		// m[r28 - 0x4a4]{241}
    int local2801; 		// m[r28 - 0x4a8]{241}
    int local2802; 		// m[r28 - 0x4ac]{241}
    int local2803; 		// m[r28 - 0x4b0]{241}
    int local2804; 		// m[r28 - 0x4b4]{241}
    int local2805; 		// m[r28 - 0x4b8]{241}
    int local2806; 		// m[r28 - 0x4bc]{241}
    int local2807;
    int local2808;
    int local2809;
    int local281; 		// m[r28 - 54]{1620}
    int local2810;
    int local2811;
    int local2812;
    int local2813;
    int local2814;
    int local2815;
    int local2816;
    int local2817;
    int local2818;
    int local2819;
    int local282; 		// m[r28 - 56]{1621}
    int local2820;
    int local2821;
    int local2822;
    int local2823;
    int local2824;
    int local2825;
    int local2826;
    int local2827;
    int local2828;
    int local2829;
    int local283; 		// m[r28 - 60]{1622}
    int local2830;
    int local2831;
    int local2832;
    int local2833;
    int local2834;
    int local2835;
    int local2836;
    int local2837;
    int local2838;
    int local2839;
    int local284; 		// m[r28 - 62]{1623}
    int local2840;
    int local2841;
    int local2842;
    int local2843;
    int local2844;
    int local2845;
    int local2846;
    int local2847;
    int local2848;
    int local2849;
    int local285; 		// m[r28 - 64]{1624}
    int local2850;
    int local2851;
    int local2852;
    int local2853;
    int local2854;
    int local2855;
    int local2856;
    int local2857;
    int local2858;
    int local2859;
    int local286; 		// m[r28 - 0x48c]{1625}
    int local2860;
    int local2861;
    int local2862;
    int local2863;
    int local2864;
    int local2865;
    int local2866;
    int local2867;
    int local2868;
    int local2869;
    int local287; 		// m[r28 - 0x490]{1626}
    int local2870;
    int local2871;
    int local2872;
    int local2873;
    int local2874;
    int local2875;
    int local2876;
    int local2877;
    int local2878; 		// m[r28 - 28]{241}
    int local2879;
    int local288; 		// m[r28 - 0x494]{1627}
    int local2880;
    int local2881; 		// m[r28 - 12]{241}
    int local2882; 		// m[r28 - 16]{241}
    int local2883; 		// m[r28 - 20]{241}
    int local2884; 		// m[r28 - 24]{241}
    int local2885; 		// m[r28 - 4]{241}
    int local2886; 		// m[r28 - 8]{241}
    int local2887; 		// m[r29 - 24]{241}
    int local2888; 		// m[r29 - 26]{241}
    int local2889; 		// m[r29 - 80]{241}
    int local289; 		// m[r28 - 0x498]{1628}
    int local2890; 		// m[r29 - 52]{241}
    int local2891; 		// m[r29 - 18]{241}
    int local2892; 		// m[r29 - 40]{241}
    int local2893; 		// m[r29 - 42]{241}
    int local2894; 		// m[r29 - 32]{241}
    int local2895; 		// m[r29 - 34]{241}
    int local2896; 		// m[r29 - 36]{241}
    int local2897; 		// m[r29 - 8]{241}
    int local2898;
    int local2899;
    int local29; 		// r29{179}
    int local290; 		// m[r28 - 0x49c]{1629}
    int local2900; 		// m[r29 - 72]{241}
    int local2901; 		// m[r29 - 12]{241}
    int local2902; 		// m[r29 - 20]{241}
    int local2903; 		// m[r29 - 28]{241}
    int local2904; 		// m[r29 - 4]{241}
    void *local2905; 		// %pc{241}
    int local2906; 		// m[r28 - 12]{268}
    int local2907; 		// m[r28 - 8]{265}
    int local2908; 		// m[r28 - 4]{261}
    int local2909; 		// r24{256}
    int local291; 		// m[r28 - 0x4a0]{1630}
    int local2910; 		// r28{256}
    void *local2911; 		// m[r28 - 16]{254}
    int local2912; 		// m[r28 - 12]{251}
    int local2913; 		// m[r28 - 8]{249}
    int local2914; 		// m[r28 - 4]{247}
    int local2915; 		// r25{241}
    int local2916;
    int local2917;
    int local2918;
    int local2919;
    int local292; 		// m[r28 - 0x4a8]{1632}
    int local2920;
    int local2921;
    int local2922;
    int local2923;
    int local2924;
    int local2925; 		// m[r29 - 16]{242}
    int local2926; 		// m[r25 + 48]{223}
    int local2927; 		// m[r25 + 56]{223}
    int local2928; 		// m[r25 + 64]{223}
    int local2929; 		// m[r25 + 68]{223}
    int local293; 		// m[r28 - 0x4ac]{1633}
    int local2930; 		// m[r25 + 92]{223}
    int local2931; 		// m[r25 + 112]{223}
    int local2932; 		// m[r25 + 128]{223}
    int local2933;
    int local2934;
    int local2935;
    int local2936;
    int local2937;
    int local2938;
    int local2939;
    int local294; 		// m[r28 - 0x4b4]{1635}
    int local2940; 		// m[r29 + 12]{223}
    int local2941; 		// m[m[r29 + 8] + 48]{223}
    int local2942; 		// m[m[r29 + 8] + 56]{223}
    int local2943; 		// m[m[r29 + 8] + 64]{223}
    int local2944; 		// m[m[r29 + 8] + 68]{223}
    int local2945; 		// m[m[r29 + 8] + 92]{223}
    int local2946; 		// m[m[r29 + 8] + 112]{223}
    int local2947; 		// m[m[r29 + 8] + 128]{223}
    int local2948;
    int local2949;
    int local295; 		// m[r28 - 0x4b8]{1636}
    int local2950;
    int local2951; 		// m[r28 - 22]{223}
    int local2952; 		// m[r28 - 30]{223}
    int local2953; 		// m[r28 - 38]{223}
    int local2954; 		// m[r28 - 46]{223}
    int local2955; 		// m[r28 - 52]{223}
    int local2956; 		// m[r28 - 54]{223}
    int local2957; 		// m[r28 - 56]{223}
    int local2958; 		// m[r28 - 60]{223}
    int local2959; 		// m[r28 - 62]{223}
    int local296; 		// m[r28 - 0x4bc]{1637}
    int local2960; 		// m[r28 - 64]{223}
    int local2961; 		// m[r28 - 0x48c]{223}
    int local2962; 		// m[r28 - 0x490]{223}
    int local2963; 		// m[r28 - 0x494]{223}
    int local2964; 		// m[r28 - 0x498]{223}
    int local2965; 		// m[r28 - 0x49c]{223}
    int local2966; 		// m[r28 - 0x4a0]{223}
    int local2967; 		// m[r28 - 0x4a4]{223}
    int local2968; 		// m[r28 - 0x4a8]{223}
    int local2969; 		// m[r28 - 0x4ac]{223}
    int local297; 		// m[r28 - 4]{1638}
    int local2970; 		// m[r28 - 0x4b0]{223}
    int local2971; 		// m[r28 - 0x4b4]{223}
    int local2972; 		// m[r28 - 0x4b8]{223}
    int local2973; 		// m[r28 - 0x4bc]{223}
    int local2974;
    int local2975;
    int local2976;
    int local2977;
    int local2978;
    int local2979;
    int local298; 		// m[r28 - 8]{1639}
    int local2980;
    int local2981;
    int local2982;
    int local2983;
    int local2984;
    int local2985;
    int local2986;
    int local2987;
    int local2988;
    int local2989;
    int local299; 		// m[r28 - 12]{1640}
    int local2990;
    int local2991;
    int local2992;
    int local2993;
    int local2994;
    int local2995;
    int local2996;
    int local2997;
    int local2998;
    int local2999;
    int local3; 		// r28{319}
    int local30; 		// r29{164}
    int local300; 		// m[r28 - 16]{1641}
    int local3000;
    int local3001;
    int local3002;
    int local3003;
    int local3004;
    int local3005;
    int local3006;
    int local3007;
    int local3008;
    int local3009;
    int local301; 		// m[r28 - 8]{1643}
    int local3010;
    int local3011;
    int local3012;
    int local3013;
    int local3014;
    int local3015;
    int local3016;
    int local3017;
    int local3018;
    int local3019;
    int local302; 		// m[r28 - 12]{1644}
    int local3020;
    int local3021;
    int local3022;
    int local3023;
    int local3024;
    int local3025;
    int local3026;
    int local3027;
    int local3028;
    int local3029;
    int local303; 		// m[r28 - 16]{1645}
    int local3030;
    int local3031;
    int local3032;
    int local3033;
    int local3034;
    int local3035;
    int local3036;
    int local3037;
    int local3038;
    int local3039;
    int local304; 		// m[r28 - 20]{1646}
    int local3040;
    int local3041;
    int local3042;
    int local3043;
    int local3044;
    int local3045;
    int local3046; 		// m[r28 - 28]{223}
    int local3047;
    int local3048;
    int local3049; 		// m[r28 - 12]{223}
    int local305; 		// m[r28 - 24]{1647}
    int local3050; 		// m[r28 - 16]{223}
    int local3051; 		// m[r28 - 20]{223}
    int local3052; 		// m[r28 - 24]{223}
    int local3053; 		// m[r28 - 4]{223}
    int local3054; 		// m[r28 - 8]{223}
    int local3055; 		// m[r29 - 24]{223}
    int local3056; 		// m[r29 - 26]{223}
    int local3057; 		// m[r29 - 80]{223}
    int local3058; 		// m[r29 - 52]{223}
    int local3059; 		// m[r29 - 16]{223}
    int local306; 		// m[r28 - 4]{1648}
    int local3060; 		// m[r29 - 40]{223}
    int local3061; 		// m[r29 - 42]{223}
    int local3062; 		// m[r29 - 32]{223}
    int local3063; 		// m[r29 - 34]{223}
    int local3064; 		// m[r29 - 36]{223}
    int local3065; 		// m[r29 - 8]{223}
    int local3066;
    int local3067;
    int local3068; 		// m[r29 - 72]{223}
    int local3069; 		// m[r29 - 12]{223}
    int local307; 		// m[r28 - 8]{1649}
    int local3070; 		// m[r29 - 20]{223}
    int local3071; 		// m[r29 - 28]{223}
    int local3072; 		// m[r29 - 4]{223}
    void *local3073; 		// %pc{223}
    int local3074; 		// %flags{223}
    int local3075; 		// %CF{223}
    void *local3076; 		// m[r28 - 16]{239}
    int local3077; 		// m[r28 - 12]{236}
    int local3078; 		// m[r28 - 8]{234}
    int local3079; 		// m[r28 - 4]{232}
    int local308; 		// m[r28 - 12]{1650}
    int local3080; 		// m[r29 - 18]{229}
    int local3081; 		// r24{195}
    int local3082; 		// r25{210}
    int local3083; 		// m[r25 + 48]{195}
    int local3084; 		// m[r25 + 56]{195}
    int local3085; 		// m[r25 + 64]{195}
    int local3086; 		// m[r25 + 68]{195}
    int local3087; 		// m[r25 + 92]{195}
    int local3088; 		// m[r25 + 112]{195}
    int local3089; 		// m[r25 + 128]{195}
    int local309; 		// m[r28 - 8]{1652}
    int local3090;
    int local3091;
    int local3092;
    int local3093;
    int local3094;
    int local3095;
    int local3096;
    int local3097; 		// m[r29 + 12]{195}
    int local3098; 		// m[m[r29 + 8] + 48]{195}
    int local3099; 		// m[m[r29 + 8] + 56]{195}
    int local31; 		// r29{105}
    int local310; 		// m[r28 - 12]{1653}
    int local3100; 		// m[m[r29 + 8] + 64]{195}
    int local3101; 		// m[m[r29 + 8] + 68]{195}
    int local3102; 		// m[m[r29 + 8] + 92]{195}
    int local3103; 		// m[m[r29 + 8] + 112]{195}
    int local3104; 		// m[m[r29 + 8] + 128]{195}
    int local3105;
    int local3106;
    int local3107;
    int local3108; 		// m[r28 - 22]{195}
    int local3109; 		// m[r28 - 30]{195}
    int local311; 		// m[r28 - 16]{1654}
    int local3110; 		// m[r28 - 38]{195}
    int local3111; 		// m[r28 - 46]{195}
    int local3112; 		// m[r28 - 52]{195}
    int local3113; 		// m[r28 - 54]{195}
    int local3114; 		// m[r28 - 56]{195}
    int local3115; 		// m[r28 - 60]{195}
    int local3116; 		// m[r28 - 62]{195}
    int local3117; 		// m[r28 - 64]{195}
    int local3118; 		// m[r28 - 0x48c]{195}
    int local3119; 		// m[r28 - 0x490]{195}
    int local312; 		// m[r28 - 20]{1655}
    int local3120; 		// m[r28 - 0x494]{195}
    int local3121; 		// m[r28 - 0x498]{195}
    int local3122; 		// m[r28 - 0x49c]{195}
    int local3123; 		// m[r28 - 0x4a0]{195}
    int local3124; 		// m[r28 - 0x4a4]{195}
    int local3125; 		// m[r28 - 0x4a8]{195}
    int local3126; 		// m[r28 - 0x4ac]{195}
    int local3127; 		// m[r28 - 0x4b0]{195}
    int local3128; 		// m[r28 - 0x4b4]{195}
    int local3129; 		// m[r28 - 0x4b8]{195}
    int local313; 		// m[r28 - 4]{1656}
    int local3130; 		// m[r28 - 0x4bc]{195}
    int local3131;
    int local3132;
    int local3133;
    int local3134;
    int local3135;
    int local3136;
    int local3137;
    int local3138;
    int local3139;
    int local314; 		// m[r28 - 8]{1657}
    int local3140;
    int local3141;
    int local3142;
    int local3143;
    int local3144;
    int local3145;
    int local3146;
    int local3147;
    int local3148;
    int local3149;
    int local315; 		// m[r28 - 12]{1658}
    int local3150;
    int local3151;
    int local3152;
    int local3153;
    int local3154;
    int local3155;
    int local3156;
    int local3157;
    int local3158;
    int local3159;
    int local316; 		// m[r28 - 4]{1659}
    int local3160;
    int local3161;
    int local3162;
    int local3163;
    int local3164;
    int local3165;
    int local3166;
    int local3167;
    int local3168;
    int local3169;
    int local317; 		// m[r28 - 8]{1660}
    int local3170;
    int local3171;
    int local3172;
    int local3173;
    int local3174;
    int local3175;
    int local3176;
    int local3177;
    int local3178;
    int local3179;
    int local318; 		// m[r28 - 12]{1661}
    int local3180;
    int local3181;
    int local3182;
    int local3183;
    int local3184;
    int local3185;
    int local3186;
    int local3187;
    int local3188;
    int local3189;
    int local319; 		// m[r28 - 16]{1662}
    int local3190;
    int local3191;
    int local3192;
    int local3193;
    int local3194;
    int local3195;
    int local3196;
    int local3197;
    int local3198;
    int local3199;
    int local32; 		// r29{499}
    int local320; 		// m[r28 - 4]{1663}
    int local3200;
    int local3201;
    int local3202;
    int local3203; 		// m[r28 - 28]{195}
    int local3204;
    int local3205;
    int local3206; 		// m[r28 - 12]{195}
    int local3207; 		// m[r28 - 16]{195}
    int local3208; 		// m[r28 - 20]{195}
    int local3209; 		// m[r28 - 24]{195}
    int local321; 		// m[r28 - 8]{1664}
    int local3210; 		// m[r28 - 4]{195}
    int local3211; 		// m[r28 - 8]{195}
    int local3212; 		// m[r29 - 24]{195}
    int local3213; 		// m[r29 - 26]{195}
    int local3214; 		// m[r29 - 80]{195}
    int local3215; 		// m[r29 - 52]{195}
    int local3216; 		// m[r29 - 16]{195}
    int local3217; 		// m[r29 - 18]{195}
    int local3218; 		// m[r29 - 42]{195}
    int local3219; 		// m[r29 - 32]{195}
    int local322; 		// m[r28 - 12]{1665}
    int local3220; 		// m[r29 - 34]{195}
    int local3221; 		// m[r29 - 36]{195}
    int local3222; 		// m[r29 - 8]{195}
    int local3223;
    int local3224;
    int local3225; 		// m[r29 - 72]{195}
    int local3226; 		// m[r29 - 12]{195}
    int local3227; 		// m[r29 - 20]{195}
    int local3228; 		// m[r29 - 28]{195}
    int local3229; 		// m[r29 - 4]{195}
    int local323; 		// m[r28 - 16]{1666}
    void *local3230; 		// %pc{195}
    int local3231; 		// m[r28 - 12]{221}
    int local3232; 		// m[r28 - 8]{218}
    int local3233; 		// m[r28 - 4]{214}
    int local3234; 		// r24{210}
    int local3235; 		// r28{210}
    void *local3236; 		// m[r28 - 16]{208}
    int local3237; 		// m[r28 - 12]{205}
    int local3238; 		// m[r28 - 8]{203}
    int local3239; 		// m[r28 - 4]{201}
    int local324; 		// m[r28 - 4]{1667}
    int local3240; 		// r25{195}
    int local3241;
    int local3242;
    int local3243;
    int local3244;
    int local3245;
    int local3246;
    int local3247;
    int local3248;
    int local3249; 		// m[r29 - 40]{196}
    int local325; 		// m[r28 - 8]{1668}
    int local3250; 		// r25{179}
    int local3251; 		// m[r25 + 48]{179}
    int local3252; 		// m[r25 + 56]{179}
    int local3253; 		// m[r25 + 64]{179}
    int local3254; 		// m[r25 + 68]{179}
    int local3255; 		// m[r25 + 92]{179}
    int local3256; 		// m[r25 + 112]{179}
    int local3257; 		// m[r25 + 128]{179}
    int local3258;
    int local3259;
    int local326; 		// m[r28 - 12]{1669}
    int local3260;
    int local3261;
    int local3262;
    int local3263;
    int local3264;
    int local3265; 		// m[r29 + 12]{179}
    int local3266; 		// m[m[r29 + 8] + 48]{179}
    int local3267; 		// m[m[r29 + 8] + 56]{179}
    int local3268; 		// m[m[r29 + 8] + 64]{179}
    int local3269; 		// m[m[r29 + 8] + 68]{179}
    int local327; 		// m[r28 - 16]{1670}
    int local3270; 		// m[m[r29 + 8] + 92]{179}
    int local3271; 		// m[m[r29 + 8] + 112]{179}
    int local3272; 		// m[m[r29 + 8] + 128]{179}
    int local3273;
    int local3274;
    int local3275;
    int local3276; 		// m[r28 - 22]{179}
    int local3277; 		// m[r28 - 30]{179}
    int local3278; 		// m[r28 - 38]{179}
    int local3279; 		// m[r28 - 46]{179}
    int local328; 		// m[r28 - 4]{1671}
    int local3280; 		// m[r28 - 52]{179}
    int local3281; 		// m[r28 - 54]{179}
    int local3282; 		// m[r28 - 56]{179}
    int local3283; 		// m[r28 - 60]{179}
    int local3284; 		// m[r28 - 62]{179}
    int local3285; 		// m[r28 - 64]{179}
    int local3286; 		// m[r28 - 0x48c]{179}
    int local3287; 		// m[r28 - 0x490]{179}
    int local3288; 		// m[r28 - 0x494]{179}
    int local3289; 		// m[r28 - 0x498]{179}
    int local329; 		// m[r28 - 8]{1672}
    int local3290; 		// m[r28 - 0x49c]{179}
    int local3291; 		// m[r28 - 0x4a0]{179}
    int local3292; 		// m[r28 - 0x4a4]{179}
    int local3293; 		// m[r28 - 0x4a8]{179}
    int local3294; 		// m[r28 - 0x4ac]{179}
    int local3295; 		// m[r28 - 0x4b0]{179}
    int local3296; 		// m[r28 - 0x4b4]{179}
    int local3297; 		// m[r28 - 0x4b8]{179}
    int local3298; 		// m[r28 - 0x4bc]{179}
    int local3299;
    int local33; 		// r29{466}
    int local330; 		// m[r28 - 12]{1673}
    int local3300;
    int local3301;
    int local3302;
    int local3303;
    int local3304;
    int local3305;
    int local3306;
    int local3307;
    int local3308;
    int local3309;
    int local331; 		// m[r28 - 16]{1674}
    int local3310;
    int local3311;
    int local3312;
    int local3313;
    int local3314;
    int local3315;
    int local3316;
    int local3317;
    int local3318;
    int local3319;
    int local332; 		// m[r28 - 4]{1675}
    int local3320;
    int local3321;
    int local3322;
    int local3323;
    int local3324;
    int local3325;
    int local3326;
    int local3327;
    int local3328;
    int local3329;
    int local333; 		// m[r28 - 8]{1676}
    int local3330;
    int local3331;
    int local3332;
    int local3333;
    int local3334;
    int local3335;
    int local3336;
    int local3337;
    int local3338;
    int local3339;
    int local334; 		// m[r28 - 12]{1677}
    int local3340;
    int local3341;
    int local3342;
    int local3343;
    int local3344;
    int local3345;
    int local3346;
    int local3347;
    int local3348;
    int local3349;
    int local335; 		// m[r28 - 8]{1679}
    int local3350;
    int local3351;
    int local3352;
    int local3353;
    int local3354;
    int local3355;
    int local3356;
    int local3357;
    int local3358;
    int local3359;
    int local336; 		// m[r28 - 12]{1680}
    int local3360;
    int local3361;
    int local3362;
    int local3363;
    int local3364;
    int local3365;
    int local3366;
    int local3367;
    int local3368;
    int local3369;
    int local337; 		// m[r28 - 16]{1681}
    int local3370;
    int local3371; 		// m[r28 - 28]{179}
    int local3372;
    int local3373;
    int local3374; 		// m[r28 - 12]{179}
    int local3375; 		// m[r28 - 16]{179}
    int local3376; 		// m[r28 - 20]{179}
    int local3377; 		// m[r28 - 24]{179}
    int local3378; 		// m[r28 - 4]{179}
    int local3379; 		// m[r28 - 8]{179}
    int local338; 		// m[r28 - 20]{1682}
    int local3380; 		// m[r29 - 24]{179}
    int local3381; 		// m[r29 - 26]{179}
    int local3382; 		// m[r29 - 80]{179}
    int local3383; 		// m[r29 - 52]{179}
    int local3384; 		// m[r29 - 16]{179}
    int local3385; 		// m[r29 - 18]{179}
    int local3386; 		// m[r29 - 40]{179}
    int local3387; 		// m[r29 - 32]{179}
    int local3388; 		// m[r29 - 34]{179}
    int local3389; 		// m[r29 - 36]{179}
    int local339; 		// m[r28 - 24]{1683}
    int local3390; 		// m[r29 - 8]{179}
    int local3391;
    int local3392;
    int local3393; 		// m[r29 - 72]{179}
    int local3394; 		// m[r29 - 12]{179}
    int local3395; 		// m[r29 - 20]{179}
    int local3396; 		// m[r29 - 28]{179}
    int local3397; 		// m[r29 - 4]{179}
    void *local3398; 		// %pc{179}
    int local3399; 		// %flags{179}
    int local34; 		// r29{414}
    int local340; 		// m[r28 - 28]{1684}
    int local3400; 		// %CF{179}
    void *local3401; 		// m[r28 - 16]{193}
    short local3402; 		// m[r29 - 42]{191}
    int local3403; 		// m[r28 - 12]{189}
    int local3404; 		// m[r28 - 8]{187}
    int local3405; 		// m[r28 - 4]{185}
    int local3406; 		// m[r28 - 4]{180}
    int local3407; 		// r24{164}
    int local3408; 		// r25{164}
    int local3409;
    int local341; 		// m[r28 - 8]{1686}
    int local3410;
    int local3411; 		// m[r29 + 12]{105}
    int local3412;
    int local3413;
    int local3414; 		// m[r28 - 22]{105}
    int local3415; 		// m[r28 - 30]{105}
    int local3416; 		// m[r28 - 38]{105}
    int local3417; 		// m[r28 - 46]{105}
    int local3418; 		// m[r28 - 52]{105}
    int local3419; 		// m[r28 - 54]{105}
    int local342; 		// m[r28 - 12]{1687}
    int local3420; 		// m[r28 - 56]{105}
    int local3421; 		// m[r28 - 60]{105}
    int local3422; 		// m[r28 - 62]{105}
    int local3423; 		// m[r28 - 64]{105}
    int local3424; 		// m[r28 - 0x48c]{105}
    int local3425; 		// m[r28 - 0x490]{105}
    int local3426; 		// m[r28 - 0x494]{105}
    int local3427; 		// m[r28 - 0x498]{105}
    int local3428; 		// m[r28 - 0x49c]{105}
    int local3429; 		// m[r28 - 0x4a0]{105}
    int local343; 		// m[r28 - 16]{1688}
    int local3430; 		// m[r28 - 0x4a4]{105}
    int local3431; 		// m[r28 - 0x4a8]{105}
    int local3432; 		// m[r28 - 0x4ac]{105}
    int local3433; 		// m[r28 - 0x4b4]{105}
    int local3434; 		// m[r28 - 0x4b8]{105}
    int local3435; 		// m[r28 - 0x4bc]{105}
    int local3436;
    int local3437;
    int local3438;
    int local3439;
    int local344; 		// m[r28 - 20]{1689}
    int local3440;
    int local3441;
    int local3442;
    int local3443;
    int local3444;
    int local3445;
    int local3446;
    int local3447;
    int local3448;
    int local3449;
    int local345; 		// m[r28 - 24]{1690}
    int local3450;
    int local3451;
    int local3452;
    int local3453;
    int local3454;
    int local3455;
    int local3456;
    int local3457;
    int local3458;
    int local3459;
    int local346; 		// m[r28 - 28]{1691}
    int local3460;
    int local3461;
    int local3462;
    int local3463;
    int local3464;
    int local3465;
    int local3466;
    int local3467;
    int local3468;
    int local3469;
    int local347; 		// m[r28 - 4]{1692}
    int local3470;
    int local3471;
    int local3472;
    int local3473;
    int local3474;
    int local3475; 		// m[r28 - 20]{105}
    int local3476; 		// m[r28 - 24]{105}
    int local3477; 		// m[r28 - 28]{105}
    int local3478;
    int local3479;
    int local348; 		// m[r28 - 8]{1693}
    int local3480;
    int local3481;
    int local3482;
    int local3483; 		// m[r28 - 16]{105}
    int local3484;
    int local3485;
    int local3486;
    int local3487; 		// m[r29 - 24]{105}
    int local3488; 		// m[r29 - 26]{105}
    int local3489; 		// m[r29 - 80]{105}
    int local349; 		// m[r28 - 12]{1694}
    int local3490; 		// m[r29 - 52]{105}
    int local3491; 		// m[r29 - 16]{105}
    int local3492; 		// m[r29 - 18]{105}
    int local3493; 		// m[r29 - 40]{105}
    int local3494; 		// m[r29 - 42]{105}
    int local3495; 		// m[r29 - 8]{105}
    int local3496; 		// m[r29 - 4]{105}
    int local3497; 		// m[r29 - 12]{105}
    int local3498; 		// m[r29 - 72]{105}
    int local3499; 		// m[0x17038]{105}
    int local35; 		// r29{918}
    int local350; 		// m[r28 - 4]{1695}
    void *local3500; 		// %pc{105}
    int local3501; 		// m[r28 - 12]{177}
    int local3502; 		// m[r28 - 8]{174}
    int local3503; 		// m[r28 - 4]{170}
    int local3504; 		// r0{164}
    int local3505; 		// r27{164}
    int local3506; 		// m[r29 + 12]{165}
    int local3507;
    int local3508;
    int local3509;
    int local351; 		// m[r28 - 8]{1696}
    int local3510;
    int local3511; 		// m[r28 - 4]{151}
    int local3512; 		// m[r28 - 8]{155}
    int local3513; 		// m[r28 - 12]{159}
    int local3514; 		// m[r28 - 16]{162}
    int local3515; 		// m[r28 - 20]{138}
    int local3516; 		// m[r28 - 24]{140}
    int local3517; 		// m[r28 - 28]{143}
    int local3518;
    int local3519;
    int local352; 		// m[r28 - 12]{1697}
    int local3520; 		// m[r29 - 32]{106}
    int local3521; 		// m[r29 - 34]{121}
    short local3522; 		// m[r29 - 36]{114}
    int local3523; 		// %pc{163}
    int local3524; 		// r24{145}
    int local3525; 		// r25{145}
    int local3526; 		// r28{145}
    int local3527; 		// m[r28 - 16]{136}
    int local3528; 		// r24{133}
    int local3529; 		// r25{133}
    int local353; 		// m[r28 - 4]{1699}
    int local3530; 		// r28{133}
    void *local3531; 		// m[r28 - 16]{131}
    int local3532; 		// m[r28 - 12]{128}
    int local3533; 		// m[r28 - 8]{126}
    int local3534; 		// m[r28 - 4]{124}
    int local3535; 		// r24{689}
    int local3536; 		// r25{690}
    int local3537; 		// r28{693}
    int local3538; 		// m[r29 + 12]{944}
    int local3539; 		// m[r29 + 12]{945}
    int local354; 		// m[r28 - 8]{1700}
    int local3540; 		// m[r29 + 12]{946}
    int local3541; 		// m[r29 + 12]{947}
    int local3542; 		// m[r28 - 4]{948}
    int local3543; 		// m[r28 - 12]{949}
    int local3544; 		// m[r28 - 16]{950}
    int local3545; 		// m[r28 - 22]{951}
    int local3546; 		// m[r28 - 30]{952}
    int local3547; 		// m[r28 - 38]{953}
    int local3548; 		// m[r28 - 46]{954}
    int local3549; 		// m[r28 - 52]{955}
    int local355; 		// m[r28 - 12]{1701}
    int local3550; 		// m[r28 - 54]{956}
    int local3551; 		// m[r28 - 56]{957}
    int local3552; 		// m[r28 - 60]{958}
    int local3553; 		// m[r28 - 62]{959}
    int local3554; 		// m[r28 - 64]{960}
    int local3555; 		// m[r28 - 0x48c]{961}
    int local3556; 		// m[r28 - 0x490]{962}
    int local3557; 		// m[r28 - 0x494]{963}
    int local3558; 		// m[r28 - 0x498]{964}
    int local3559; 		// m[r28 - 0x49c]{965}
    int local356; 		// m[r29 - 24]{1702}
    int local3560; 		// m[r28 - 0x4a0]{966}
    int local3561; 		// m[r28 - 0x4a4]{967}
    int local3562; 		// m[r28 - 0x4a8]{968}
    int local3563; 		// m[r28 - 0x4ac]{969}
    int local3564; 		// m[r28 - 0x4b0]{970}
    int local3565; 		// m[r28 - 0x4b4]{971}
    int local3566; 		// m[r28 - 0x4b8]{972}
    int local3567; 		// m[r28 - 0x4bc]{973}
    int local3568; 		// m[r28 - 4]{974}
    int local3569; 		// m[r28 - 8]{975}
    int local357; 		// m[r29 - 26]{1703}
    int local3570; 		// m[r28 - 12]{976}
    int local3571; 		// m[r28 - 16]{977}
    int local3572; 		// m[r28 - 4]{978}
    int local3573; 		// m[r28 - 8]{979}
    int local3574; 		// m[r28 - 12]{980}
    int local3575; 		// m[r28 - 16]{981}
    int local3576; 		// m[r28 - 20]{982}
    int local3577; 		// m[r28 - 24]{983}
    int local3578; 		// m[r28 - 4]{984}
    int local3579; 		// m[r28 - 8]{985}
    int local358; 		// m[r29 - 80]{1704}
    int local3580; 		// m[r28 - 12]{986}
    int local3581; 		// m[r28 - 4]{987}
    int local3582; 		// m[r28 - 8]{988}
    int local3583; 		// m[r28 - 12]{989}
    int local3584; 		// m[r28 - 16]{990}
    int local3585; 		// m[r28 - 20]{991}
    int local3586; 		// m[r28 - 4]{992}
    int local3587; 		// m[r28 - 8]{993}
    int local3588; 		// m[r28 - 12]{994}
    int local3589; 		// m[r28 - 4]{995}
    int local359; 		// m[r29 - 52]{1705}
    int local3590; 		// m[r28 - 8]{996}
    int local3591; 		// m[r28 - 12]{997}
    int local3592; 		// m[r28 - 16]{998}
    int local3593; 		// m[r28 - 4]{999}
    int local3594; 		// m[r28 - 8]{1000}
    int local3595; 		// m[r28 - 12]{1001}
    int local3596; 		// m[r28 - 16]{1002}
    int local3597; 		// m[r28 - 4]{1003}
    int local3598; 		// m[r28 - 8]{1004}
    int local3599; 		// m[r28 - 12]{1005}
    int local36; 		// r29{861}
    int local360; 		// m[r29 - 16]{1706}
    int local3600; 		// m[r28 - 16]{1006}
    int local3601; 		// m[r28 - 4]{1007}
    int local3602; 		// m[r28 - 8]{1008}
    int local3603; 		// m[r28 - 12]{1009}
    int local3604; 		// m[r28 - 16]{1010}
    int local3605; 		// m[r28 - 4]{1011}
    int local3606; 		// m[r28 - 8]{1012}
    int local3607; 		// m[r28 - 12]{1013}
    int local3608; 		// m[r28 - 4]{1014}
    int local3609; 		// m[r28 - 8]{1015}
    int local361; 		// m[r29 - 18]{1707}
    int local3610; 		// m[r28 - 12]{1016}
    int local3611; 		// m[r28 - 16]{1017}
    int local3612; 		// m[r28 - 20]{1018}
    int local3613; 		// m[r28 - 24]{1019}
    int local3614; 		// m[r28 - 28]{1020}
    int local3615; 		// m[r28 - 4]{1021}
    int local3616; 		// m[r28 - 8]{1022}
    int local3617; 		// m[r28 - 12]{1023}
    int local3618; 		// m[r28 - 16]{1024}
    int local3619; 		// m[r28 - 20]{1025}
    int local362; 		// m[r29 - 40]{1708}
    int local3620; 		// m[r28 - 24]{1026}
    int local3621; 		// m[r28 - 28]{1027}
    int local3622; 		// m[r28 - 4]{1028}
    int local3623; 		// m[r28 - 8]{1029}
    int local3624; 		// m[r28 - 12]{1030}
    int local3625; 		// m[r28 - 4]{1031}
    int local3626; 		// m[r28 - 8]{1032}
    int local3627; 		// m[r28 - 12]{1033}
    int local3628; 		// m[r28 - 16]{1034}
    int local3629; 		// m[r28 - 4]{1035}
    int local363; 		// m[r29 - 42]{1709}
    int local3630; 		// m[r28 - 8]{1036}
    int local3631; 		// m[r28 - 12]{1037}
    int local3632; 		// m[r29 - 24]{1038}
    int local3633; 		// m[r29 - 26]{1039}
    int local3634; 		// m[r29 - 80]{1040}
    int local3635; 		// m[r29 - 52]{1041}
    int local3636; 		// m[r29 - 16]{1042}
    int local3637; 		// m[r29 - 18]{1043}
    int local3638; 		// m[r29 - 40]{1044}
    int local3639; 		// m[r29 - 42]{1045}
    int local364; 		// m[r29 - 34]{1711}
    int local3640; 		// m[r29 - 32]{1046}
    int local3641; 		// m[r29 - 34]{1047}
    int local3642; 		// m[r29 - 36]{1048}
    int local3643; 		// m[r29 - 8]{1049}
    int local3644; 		// m[r29 - 4]{1050}
    int local3645; 		// m[r29 - 12]{1051}
    int local3646; 		// m[r29 - 72]{1052}
    void *local3647; 		// %pc{700}
    int local3648; 		// m[r29 + 12]{110}
    int local3649; 		// r25{105}
    int local365; 		// m[r29 - 36]{1712}
    int local3650;
    int local3651;
    int local3652;
    int local3653;
    int local3654;
    int local3655;
    int local3656;
    int local3657;
    int local3658; 		// m[r29 - 34]{105}
    int local3659; 		// m[r29 - 36]{105}
    int local366; 		// m[r29 - 8]{1713}
    int local3660; 		// r25{71}
    int local3661; 		// r29{358}
    int local3662; 		// m[r28 - 0x4a4]{103}
    int local3663; 		// m[r28 - 0x4a0]{100}
    int local3664; 		// m[r28 - 54]{98}
    int local3665; 		// m[r28 - 0x49c]{96}
    int local3666; 		// m[r28 - 0x498]{90}
    short local3667; 		// m[r28 - 56]{79}
    int local3668; 		// m[r28 - 52]{75}
    int local3669; 		// r28{71}
    int local367; 		// m[r29 - 4]{1714}
    int local3670; 		// m[r28 - 0x4bc]{69}
    int local3671; 		// m[r28 - 0x4b8]{66}
    int local3672; 		// m[r28 - 0x4b4]{64}
    short local3673; 		// m[r28 - 62]{61}
    int local3674; 		// m[r28 - 0x4b0]{59}
    short local3675; 		// m[r28 - 64]{56}
    int local3676; 		// m[r28 - 60]{52}
    int local3677; 		// r25{49}
    int local3678; 		// r28{49}
    int local3679; 		// m[r28 - 0x4b0]{47}
    int local368; 		// m[r29 - 12]{1715}
    int local3680; 		// m[r28 - 0x4ac]{44}
    int local3681; 		// m[r28 - 0x4a8]{42}
    short local3682; 		// m[r28 - 38]{39}
    short local3683; 		// m[r28 - 46]{38}
    short local3684; 		// m[r28 - 30]{37}
    short local3685; 		// m[r28 - 22]{36}
    int local3686; 		// m[r28 - 0x4a4]{34}
    int local3687; 		// r25{29}
    int local3688; 		// r28{29}
    int local3689; 		// m[r28 - 0x4a4]{27}
    int local369; 		// m[r29 - 72]{1716}
    int local3690; 		// m[r28 - 16]{25}
    int local3691; 		// m[r28 - 12]{24}
    int local3692; 		// m[r28 - 0x4a0]{22}
    int local3693; 		// m[r28 - 0x49c]{20}
    int local3694; 		// m[r28 - 0x498]{16}
    int local3695; 		// m[r28 - 0x494]{12}
    int local3696; 		// m[r28 - 0x490]{10}
    int local3697; 		// m[r28 - 0x48c]{8}
    int local3698; 		// m[r28 - 4]{2}
    int local3699; 		// r31{778}
    int local37; 		// r29{716}
    void *local370; 		// %pc{850}
    int local3700; 		// tmph{781}
    int local3701; 		// r31{750}
    int local3702; 		// tmph{566}
    int local3703; 		// r31{763}
    int local3704; 		// r31{515}
    int local3705; 		// r31{559}
    int local3706; 		// r31{737}
    int local3707; 		// r31{466}
    int local3708; 		// r31{499}
    int local3709; 		// r31{454}
    void *local371; 		// m[r28 - 8]{615}
    int local3710; 		// local3535{689}
    int local3711; 		// local3536{690}
    int local3712; 		// local3537{693}
    int local3713; 		// local40{694}
    void *local3714; 		// local3647{700}
    int local3715; 		// local3538{944}
    int local3716; 		// local3539{945}
    int local3717; 		// local3540{946}
    int local3718; 		// local3541{947}
    int local3719; 		// local3542{948}
    int local372; 		// m[r28 - 4]{612}
    int local3720; 		// local3543{949}
    int local3721; 		// local3544{950}
    int local3722; 		// local3545{951}
    int local3723; 		// local3546{952}
    int local3724; 		// local3547{953}
    int local3725; 		// local3548{954}
    int local3726; 		// local3549{955}
    int local3727; 		// local3550{956}
    int local3728; 		// local3551{957}
    int local3729; 		// local3552{958}
    int local373; 		// m[r28 - 4]{1612}
    int local3730; 		// local3553{959}
    int local3731; 		// local3554{960}
    int local3732; 		// local3555{961}
    int local3733; 		// local3556{962}
    int local3734; 		// local3557{963}
    int local3735; 		// local3558{964}
    int local3736; 		// local3559{965}
    int local3737; 		// local3560{966}
    int local3738; 		// local3561{967}
    int local3739; 		// local3562{968}
    int local374; 		// m[r28 - 0x4a4]{1631}
    int local3740; 		// local3563{969}
    int local3741; 		// local3564{970}
    int local3742; 		// local3565{971}
    int local3743; 		// local3566{972}
    int local3744; 		// local3567{973}
    int local3745; 		// local3568{974}
    int local3746; 		// local3569{975}
    int local3747; 		// local3570{976}
    int local3748; 		// local3571{977}
    int local3749; 		// local3572{978}
    int local375; 		// m[r28 - 0x4b0]{1634}
    int local3750; 		// local3573{979}
    int local3751; 		// local3574{980}
    int local3752; 		// local3575{981}
    int local3753; 		// local3576{982}
    int local3754; 		// local3577{983}
    int local3755; 		// local3578{984}
    int local3756; 		// local3579{985}
    int local3757; 		// local3580{986}
    int local3758; 		// local3581{987}
    int local3759; 		// local3582{988}
    int local376; 		// m[r28 - 4]{1642}
    int local3760; 		// local3583{989}
    int local3761; 		// local3584{990}
    int local3762; 		// local3585{991}
    int local3763; 		// local3586{992}
    int local3764; 		// local3587{993}
    int local3765; 		// local3588{994}
    int local3766; 		// local3589{995}
    int local3767; 		// local3590{996}
    int local3768; 		// local3591{997}
    int local3769; 		// local3592{998}
    int local377; 		// m[r28 - 4]{1651}
    int local3770; 		// local3593{999}
    int local3771; 		// local3594{1000}
    int local3772; 		// local3595{1001}
    int local3773; 		// local3596{1002}
    int local3774; 		// local3597{1003}
    int local3775; 		// local3598{1004}
    int local3776; 		// local3599{1005}
    int local3777; 		// local3600{1006}
    int local3778; 		// local3601{1007}
    int local3779; 		// local3602{1008}
    int local378; 		// m[r28 - 4]{1678}
    int local3780; 		// local3603{1009}
    int local3781; 		// local3604{1010}
    int local3782; 		// local3605{1011}
    int local3783; 		// local3606{1012}
    int local3784; 		// local3607{1013}
    int local3785; 		// local3608{1014}
    int local3786; 		// local3609{1015}
    int local3787; 		// local3610{1016}
    int local3788; 		// local3611{1017}
    int local3789; 		// local3612{1018}
    int local379; 		// m[r28 - 4]{1685}
    int local3790; 		// local3613{1019}
    int local3791; 		// local3614{1020}
    int local3792; 		// local3615{1021}
    int local3793; 		// local3616{1022}
    int local3794; 		// local3617{1023}
    int local3795; 		// local3618{1024}
    int local3796; 		// local3619{1025}
    int local3797; 		// local3620{1026}
    int local3798; 		// local3621{1027}
    int local3799; 		// local3622{1028}
    int local38; 		// r29{735}
    int local380; 		// m[r28 - 16]{1698}
    int local3800; 		// local3623{1029}
    int local3801; 		// local3624{1030}
    int local3802; 		// local3625{1031}
    int local3803; 		// local3626{1032}
    int local3804; 		// local3627{1033}
    int local3805; 		// local3628{1034}
    int local3806; 		// local3629{1035}
    int local3807; 		// local3630{1036}
    int local3808; 		// local3631{1037}
    int local3809; 		// local3632{1038}
    int local381; 		// m[r29 - 32]{1710}
    int local3810; 		// local3633{1039}
    int local3811; 		// local3634{1040}
    int local3812; 		// local3635{1041}
    int local3813; 		// local3636{1042}
    int local3814; 		// local3637{1043}
    int local3815; 		// local3638{1044}
    int local3816; 		// local3639{1045}
    int local3817; 		// local3640{1046}
    int local3818; 		// local3641{1047}
    int local3819; 		// local3642{1048}
    int local382; 		// r24{608}
    int local3820; 		// local3643{1049}
    int local3821; 		// local3644{1050}
    int local3822; 		// local3645{1051}
    int local3823; 		// local3646{1052}
    int local3824; 		// local2404{1053}
    int local3825; 		// local22{715}
    int local3826; 		// local37{716}
    int local3827; 		// local1516{718}
    int local3828; 		// local1697{721}
    int local3829; 		// local1701{722}
    int local383; 		// r25{608}
    int local3830; 		// local1666{1054}
    int local3831; 		// local1667{1055}
    int local3832; 		// local1526{1056}
    int local3833; 		// local1527{1057}
    int local3834; 		// local1668{1058}
    int local3835; 		// local1539{1059}
    int local3836; 		// local1540{1060}
    int local3837; 		// local1541{1061}
    int local3838; 		// local1542{1062}
    int local3839; 		// local1543{1063}
    int local384; 		// r28{608}
    int local3840; 		// local1544{1064}
    int local3841; 		// local1545{1065}
    int local3842; 		// local1546{1066}
    int local3843; 		// local1547{1067}
    int local3844; 		// local1548{1068}
    int local3845; 		// local1549{1069}
    int local3846; 		// local1550{1070}
    int local3847; 		// local1551{1071}
    int local3848; 		// local1552{1072}
    int local3849; 		// local1553{1073}
    int local385; 		// r29{608}
    int local3850; 		// local1554{1074}
    int local3851; 		// local1555{1075}
    int local3852; 		// local1556{1076}
    int local3853; 		// local1557{1077}
    int local3854; 		// local1558{1078}
    int local3855; 		// local1559{1079}
    int local3856; 		// local1560{1080}
    int local3857; 		// local1561{1081}
    int local3858; 		// local1562{1082}
    int local3859; 		// local1563{1083}
    int local386;
    int local3860; 		// local1669{1084}
    int local3861; 		// local1565{1085}
    int local3862; 		// local1566{1086}
    int local3863; 		// local1567{1087}
    int local3864; 		// local1568{1088}
    int local3865; 		// local1569{1089}
    int local3866; 		// local1670{1090}
    int local3867; 		// local1571{1091}
    int local3868; 		// local1572{1092}
    int local3869; 		// local1573{1093}
    int local387;
    int local3870; 		// local1671{1094}
    int local3871; 		// local1575{1095}
    int local3872; 		// local1576{1096}
    int local3873; 		// local1672{1097}
    int local3874; 		// local1577{1098}
    int local3875; 		// local1673{1099}
    int local3876; 		// local1579{1100}
    int local3877; 		// local1580{1101}
    int local3878; 		// local1674{1102}
    int local3879; 		// local1582{1103}
    int local388;
    int local3880; 		// local1583{1104}
    int local3881; 		// local1675{1105}
    int local3882; 		// local1585{1106}
    int local3883; 		// local1586{1107}
    int local3884; 		// local1587{1108}
    int local3885; 		// local1676{1109}
    int local3886; 		// local1589{1110}
    int local3887; 		// local1590{1111}
    int local3888; 		// local1591{1112}
    int local3889; 		// local1677{1113}
    int local389; 		// m[r29 + 12]{608}
    int local3890; 		// local1593{1114}
    int local3891; 		// local1594{1115}
    int local3892; 		// local1595{1116}
    int local3893; 		// local1678{1117}
    int local3894; 		// local1597{1118}
    int local3895; 		// local1598{1119}
    int local3896; 		// local1599{1120}
    int local3897; 		// local1679{1121}
    int local3898; 		// local1601{1122}
    int local3899; 		// local1602{1123}
    int local39; 		// r29{776}
    int local390;
    int local3900; 		// local1680{1124}
    int local3901; 		// local1603{1125}
    int local3902; 		// local1604{1126}
    int local3903; 		// local1681{1127}
    int local3904; 		// local1606{1128}
    int local3905; 		// local1607{1129}
    int local3906; 		// local1608{1130}
    int local3907; 		// local1609{1131}
    int local3908; 		// local1610{1132}
    int local3909; 		// local1611{1133}
    int local391;
    int local3910; 		// local1612{1134}
    int local3911; 		// local1613{1135}
    int local3912; 		// local1614{1136}
    void *local3913; 		// local1615{1137}
    int local3914; 		// local1616{1138}
    int local3915; 		// local1617{1139}
    int local3916; 		// local1618{1140}
    int local3917; 		// local1619{1141}
    int local3918; 		// local1620{1142}
    int local3919; 		// local1621{1143}
    int local392;
    int local3920; 		// local1622{1144}
    int local3921; 		// local1682{1145}
    int local3922; 		// local1624{1146}
    int local3923; 		// local1625{1147}
    int local3924; 		// local1683{1148}
    int local3925; 		// local1684{1149}
    int local3926; 		// local1685{1150}
    int local3927; 		// local1686{1151}
    int local3928; 		// local1687{1152}
    int local3929; 		// local1688{1153}
    int local393; 		// m[r28 - 22]{608}
    int local3930; 		// local1689{1154}
    int local3931; 		// local1690{1155}
    int local3932; 		// local1691{1156}
    int local3933; 		// local1692{1157}
    int local3934; 		// local1693{1158}
    int local3935; 		// local1657{1159}
    int local3936; 		// local1694{1160}
    int local3937; 		// local1695{1161}
    int local3938; 		// local1696{1162}
    int local3939; 		// local1331{730}
    int local394; 		// m[r28 - 30]{608}
    int local3940; 		// local1332{731}
    int local3941; 		// local21{734}
    int local3942; 		// local38{735}
    int local3943; 		// local3706{737}
    int local3944; 		// local1309{739}
    int local3945; 		// local1189{1163}
    int local3946; 		// local1264{1164}
    int local3947; 		// local1265{1165}
    int local3948; 		// local1266{1166}
    int local3949; 		// local1267{1167}
    int local395; 		// m[r28 - 38]{608}
    int local3950; 		// local1268{1168}
    int local3951; 		// local1269{1169}
    void *local3952; 		// local1270{1170}
    int local3953; 		// local1292{1171}
    int local3954; 		// local1297{747}
    int local3955; 		// local1298{749}
    int local3956; 		// local3701{750}
    int local3957; 		// local1299{752}
    int local3958; 		// local1184{757}
    int local3959; 		// local1185{758}
    int local396; 		// m[r28 - 46]{608}
    int local3960; 		// local3703{763}
    int local3961; 		// local1296{765}
    int local3962; 		// local1070{772}
    int local3963; 		// local1071{775}
    int local3964; 		// local39{776}
    int local3965; 		// local3699{778}
    int local3966; 		// local3700{781}
    int local3967; 		// local1181{782}
    int local3968; 		// local1072{1172}
    int local3969; 		// local1073{1173}
    int local397; 		// m[r28 - 52]{608}
    int local3970; 		// local1074{1174}
    int local3971; 		// local1075{1175}
    int local3972; 		// local1076{1176}
    int local3973; 		// local1077{1177}
    int local3974; 		// local1078{1178}
    int local3975; 		// local1079{1179}
    int local3976; 		// local1080{1180}
    int local3977; 		// local1081{1181}
    int local3978; 		// local1082{1182}
    int local3979; 		// local1083{1183}
    int local398; 		// m[r28 - 54]{608}
    int local3980; 		// local1084{1184}
    int local3981; 		// local1085{1185}
    int local3982; 		// local1086{1186}
    int local3983; 		// local1087{1187}
    int local3984; 		// local1088{1188}
    int local3985; 		// local1089{1189}
    int local3986; 		// local1090{1190}
    int local3987; 		// local1091{1191}
    int local3988; 		// local1092{1192}
    int local3989; 		// local1093{1193}
    int local399; 		// m[r28 - 56]{608}
    int local3990; 		// local1094{1194}
    int local3991; 		// local1095{1195}
    int local3992; 		// local1096{1196}
    int local3993; 		// local1097{1197}
    int local3994; 		// local1098{1198}
    int local3995; 		// local1099{1199}
    int local3996; 		// local1100{1200}
    int local3997; 		// local1101{1201}
    int local3998; 		// local1102{1202}
    int local3999; 		// local1103{1203}
    int local4; 		// r28{307}
    int local40; 		// r29{694}
    int local400; 		// m[r28 - 60]{608}
    int local4000; 		// local1104{1204}
    int local4001; 		// local1105{1205}
    int local4002; 		// local1106{1206}
    int local4003; 		// local1107{1207}
    int local4004; 		// local1108{1208}
    int local4005; 		// local1109{1209}
    int local4006; 		// local1110{1210}
    int local4007; 		// local1111{1211}
    int local4008; 		// local1112{1212}
    int local4009; 		// local1113{1213}
    int local401; 		// m[r28 - 62]{608}
    int local4010; 		// local1114{1214}
    int local4011; 		// local1115{1215}
    int local4012; 		// local1116{1216}
    int local4013; 		// local1117{1217}
    int local4014; 		// local1118{1218}
    int local4015; 		// local1119{1219}
    int local4016; 		// local1120{1220}
    int local4017; 		// local1121{1221}
    int local4018; 		// local1122{1222}
    int local4019; 		// local1123{1223}
    int local402; 		// m[r28 - 64]{608}
    int local4020; 		// local1124{1224}
    int local4021; 		// local1125{1225}
    int local4022; 		// local1126{1226}
    int local4023; 		// local1127{1227}
    int local4024; 		// local1128{1228}
    int local4025; 		// local1129{1229}
    int local4026; 		// local1130{1230}
    int local4027; 		// local1131{1231}
    int local4028; 		// local1132{1232}
    int local4029; 		// local1133{1233}
    int local403; 		// m[r28 - 0x48c]{608}
    int local4030; 		// local1134{1234}
    int local4031; 		// local1135{1235}
    int local4032; 		// local1136{1236}
    int local4033; 		// local1137{1237}
    int local4034; 		// local1138{1238}
    int local4035; 		// local1139{1239}
    int local4036; 		// local1140{1240}
    int local4037; 		// local1141{1241}
    int local4038; 		// local1142{1242}
    int local4039; 		// local1143{1243}
    int local404; 		// m[r28 - 0x490]{608}
    int local4040; 		// local1144{1244}
    int local4041; 		// local1145{1245}
    int local4042; 		// local1146{1246}
    int local4043; 		// local1147{1247}
    int local4044; 		// local1148{1248}
    int local4045; 		// local1149{1249}
    int local4046; 		// local1150{1250}
    int local4047; 		// local1151{1251}
    int local4048; 		// local1152{1252}
    int local4049; 		// local1153{1253}
    int local405; 		// m[r28 - 0x494]{608}
    int local4050; 		// local1154{1254}
    void *local4051; 		// local1155{1255}
    int local4052; 		// local1156{1256}
    int local4053; 		// local1157{1257}
    int local4054; 		// local1158{1258}
    int local4055; 		// local1159{1259}
    int local4056; 		// local1160{1260}
    int local4057; 		// local1161{1261}
    int local4058; 		// local1162{1262}
    int local4059; 		// local1163{1263}
    int local406; 		// m[r28 - 0x498]{608}
    int local4060; 		// local1164{1264}
    int local4061; 		// local1165{1265}
    int local4062; 		// local1166{1266}
    int local4063; 		// local1167{1267}
    int local4064; 		// local1168{1268}
    int local4065; 		// local1169{1269}
    int local4066; 		// local1170{1270}
    int local4067; 		// local1171{1271}
    int local4068; 		// local1172{1272}
    int local4069; 		// local1173{1273}
    int local407; 		// m[r28 - 0x49c]{608}
    int local4070; 		// local1174{1274}
    int local4071; 		// local1175{1275}
    int local4072; 		// local1176{1276}
    int local4073; 		// local1177{1277}
    int local4074; 		// local1178{1278}
    int local4075; 		// local1179{1279}
    int local4076; 		// local1180{1280}
    int local4077; 		// r0{785}
    int local4078; 		// local954{788}
    int local4079; 		// local955{789}
    int local408; 		// m[r28 - 0x4a0]{608}
    int local4080; 		// r27{791}
    int local4081; 		// local23{792}
    int local4082; 		// local956{793}
    int local4083; 		// r31{795}
    int local4084; 		// local1057{799}
    int local4085; 		// local957{1281}
    int local4086; 		// local958{1282}
    int local4087; 		// local959{1283}
    int local4088; 		// local960{1284}
    int local4089; 		// local1060{1285}
    int local409; 		// m[r28 - 0x4a4]{608}
    int local4090; 		// local961{1286}
    int local4091; 		// local962{1287}
    int local4092; 		// local963{1288}
    int local4093; 		// local964{1289}
    int local4094; 		// local965{1290}
    int local4095; 		// local966{1291}
    int local4096; 		// local967{1292}
    int local4097; 		// local968{1293}
    int local4098; 		// local969{1294}
    int local4099; 		// local970{1295}
    int local41; 		// m[r29 + 12]{1717}
    int local410; 		// m[r28 - 0x4a8]{608}
    int local4100; 		// local971{1296}
    int local4101; 		// local972{1297}
    int local4102; 		// local973{1298}
    int local4103; 		// local974{1299}
    int local4104; 		// local975{1300}
    int local4105; 		// local976{1301}
    int local4106; 		// local977{1302}
    int local4107; 		// local978{1303}
    int local4108; 		// local1061{1304}
    int local4109; 		// local979{1305}
    int local411; 		// m[r28 - 0x4ac]{608}
    int local4110; 		// local980{1306}
    int local4111; 		// local1062{1307}
    int local4112; 		// local981{1308}
    int local4113; 		// local982{1309}
    int local4114; 		// local983{1310}
    int local4115; 		// local984{1311}
    int local4116; 		// local985{1312}
    int local4117; 		// local986{1313}
    int local4118; 		// local987{1314}
    int local4119; 		// local1063{1315}
    int local412; 		// m[r28 - 0x4b0]{608}
    int local4120; 		// local988{1316}
    int local4121; 		// local989{1317}
    int local4122; 		// local990{1318}
    int local4123; 		// local991{1319}
    int local4124; 		// local992{1320}
    int local4125; 		// local993{1321}
    int local4126; 		// local994{1322}
    int local4127; 		// local995{1323}
    int local4128; 		// local1064{1324}
    int local4129; 		// local996{1325}
    int local413; 		// m[r28 - 0x4b4]{608}
    int local4130; 		// local997{1326}
    int local4131; 		// local998{1327}
    int local4132; 		// local999{1328}
    int local4133; 		// local1000{1329}
    int local4134; 		// local1001{1330}
    int local4135; 		// local1002{1331}
    int local4136; 		// local1003{1332}
    int local4137; 		// local1004{1333}
    int local4138; 		// local1005{1334}
    int local4139; 		// local1006{1335}
    int local414; 		// m[r28 - 0x4b8]{608}
    int local4140; 		// local1007{1336}
    int local4141; 		// local1008{1337}
    int local4142; 		// local1009{1338}
    int local4143; 		// local1010{1339}
    int local4144; 		// local1011{1340}
    int local4145; 		// local1012{1341}
    int local4146; 		// local1013{1342}
    int local4147; 		// local1014{1343}
    int local4148; 		// local1015{1344}
    int local4149; 		// local1016{1345}
    int local415; 		// m[r28 - 0x4bc]{608}
    int local4150; 		// local1017{1346}
    int local4151; 		// local1018{1347}
    int local4152; 		// local1019{1348}
    int local4153; 		// local1020{1349}
    int local4154; 		// local1021{1350}
    int local4155; 		// local1065{1351}
    int local4156; 		// local1022{1352}
    int local4157; 		// local1023{1353}
    int local4158; 		// local1024{1354}
    int local4159; 		// local1025{1355}
    int local416;
    int local4160; 		// local1026{1356}
    int local4161; 		// local1027{1357}
    int local4162; 		// local1066{1358}
    int local4163; 		// local1028{1359}
    int local4164; 		// local1029{1360}
    int local4165; 		// local1030{1361}
    int local4166; 		// local1031{1362}
    int local4167; 		// local1032{1363}
    void *local4168; 		// local1033{1364}
    int local4169; 		// local1034{1365}
    int local417;
    int local4170; 		// local1035{1366}
    int local4171; 		// local1036{1367}
    int local4172; 		// local1037{1368}
    int local4173; 		// local1038{1369}
    int local4174; 		// local1039{1370}
    int local4175; 		// local1067{1371}
    int local4176; 		// local1040{1372}
    int local4177; 		// local1041{1373}
    int local4178; 		// local1042{1374}
    int local4179; 		// local1043{1375}
    int local418;
    int local4180; 		// local1044{1376}
    int local4181; 		// local1045{1377}
    int local4182; 		// local1046{1378}
    int local4183; 		// local1047{1379}
    int local4184; 		// local1048{1380}
    int local4185; 		// local1049{1381}
    int local4186; 		// local1050{1382}
    int local4187; 		// local1068{1383}
    int local4188; 		// local1051{1384}
    int local4189; 		// local1052{1385}
    int local419;
    int local4190; 		// local1053{1386}
    int local4191; 		// local1054{1387}
    int local4192; 		// local1055{1388}
    int local4193; 		// local1056{1389}
    int local4194; 		// local725{805}
    int local4195; 		// local726{806}
    int local4196; 		// local20{809}
    int local4197; 		// local727{810}
    void *local4198; 		// local828{816}
    int local4199; 		// local728{1390}
    int local42; 		// m[r29 + 12]{1718}
    int local420;
    int local4200; 		// local729{1391}
    int local4201; 		// local730{1392}
    int local4202; 		// local731{1393}
    int local4203; 		// local831{1394}
    int local4204; 		// local732{1395}
    int local4205; 		// local733{1396}
    int local4206; 		// local734{1397}
    int local4207; 		// local735{1398}
    int local4208; 		// local736{1399}
    int local4209; 		// local737{1400}
    int local421;
    int local4210; 		// local738{1401}
    int local4211; 		// local739{1402}
    int local4212; 		// local740{1403}
    int local4213; 		// local741{1404}
    int local4214; 		// local742{1405}
    int local4215; 		// local743{1406}
    int local4216; 		// local744{1407}
    int local4217; 		// local745{1408}
    int local4218; 		// local746{1409}
    int local4219; 		// local747{1410}
    int local422;
    int local4220; 		// local748{1411}
    int local4221; 		// local749{1412}
    int local4222; 		// local832{1413}
    int local4223; 		// local750{1414}
    int local4224; 		// local751{1415}
    int local4225; 		// local833{1416}
    int local4226; 		// local752{1417}
    int local4227; 		// local753{1418}
    int local4228; 		// local754{1419}
    int local4229; 		// local755{1420}
    int local423;
    int local4230; 		// local756{1421}
    int local4231; 		// local757{1422}
    int local4232; 		// local758{1423}
    int local4233; 		// local834{1424}
    int local4234; 		// local759{1425}
    int local4235; 		// local760{1426}
    int local4236; 		// local761{1427}
    int local4237; 		// local762{1428}
    int local4238; 		// local763{1429}
    int local4239; 		// local764{1430}
    int local424;
    int local4240; 		// local765{1431}
    int local4241; 		// local766{1432}
    int local4242; 		// local835{1433}
    int local4243; 		// local767{1434}
    int local4244; 		// local768{1435}
    int local4245; 		// local769{1436}
    int local4246; 		// local770{1437}
    int local4247; 		// local771{1438}
    int local4248; 		// local772{1439}
    int local4249; 		// local773{1440}
    int local425;
    int local4250; 		// local774{1441}
    int local4251; 		// local775{1442}
    int local4252; 		// local776{1443}
    int local4253; 		// local777{1444}
    int local4254; 		// local778{1445}
    int local4255; 		// local779{1446}
    int local4256; 		// local780{1447}
    int local4257; 		// local781{1448}
    int local4258; 		// local782{1449}
    int local4259; 		// local783{1450}
    int local426;
    int local4260; 		// local784{1451}
    int local4261; 		// local785{1452}
    int local4262; 		// local786{1453}
    int local4263; 		// local787{1454}
    int local4264; 		// local788{1455}
    int local4265; 		// local789{1456}
    int local4266; 		// local790{1457}
    int local4267; 		// local791{1458}
    int local4268; 		// local792{1459}
    int local4269; 		// local836{1460}
    int local427;
    int local4270; 		// local793{1461}
    int local4271; 		// local794{1462}
    int local4272; 		// local795{1463}
    int local4273; 		// local796{1464}
    int local4274; 		// local797{1465}
    int local4275; 		// local798{1466}
    int local4276; 		// local837{1467}
    int local4277; 		// local799{1468}
    int local4278; 		// local800{1469}
    int local4279; 		// local801{1470}
    int local428;
    int local4280; 		// local802{1471}
    int local4281; 		// local803{1472}
    int local4282; 		// local804{1473}
    int local4283; 		// local805{1474}
    int local4284; 		// local806{1475}
    int local4285; 		// local807{1476}
    int local4286; 		// local808{1477}
    int local4287; 		// local809{1478}
    int local4288; 		// local810{1479}
    int local4289; 		// local838{1480}
    int local429;
    int local4290; 		// local811{1481}
    int local4291; 		// local812{1482}
    int local4292; 		// local813{1483}
    int local4293; 		// local814{1484}
    int local4294; 		// local815{1485}
    int local4295; 		// local816{1486}
    int local4296; 		// local817{1487}
    int local4297; 		// local818{1488}
    int local4298; 		// local819{1489}
    int local4299; 		// local820{1490}
    int local43; 		// m[r29 + 12]{1719}
    int local430;
    int local4300; 		// local821{1491}
    int local4301; 		// local839{1492}
    int local4302; 		// local822{1493}
    int local4303; 		// local823{1494}
    int local4304; 		// local824{1495}
    int local4305; 		// local825{1496}
    int local4306; 		// local826{1497}
    int local4307; 		// local827{1498}
    int local4308; 		// local496{822}
    int local4309; 		// local497{823}
    int local431;
    int local4310; 		// local19{826}
    int local4311; 		// local498{827}
    void *local4312; 		// local599{833}
    int local4313; 		// local499{1499}
    int local4314; 		// local500{1500}
    int local4315; 		// local501{1501}
    int local4316; 		// local502{1502}
    int local4317; 		// local602{1503}
    int local4318; 		// local503{1504}
    int local4319; 		// local504{1505}
    int local432;
    int local4320; 		// local505{1506}
    int local4321; 		// local506{1507}
    int local4322; 		// local507{1508}
    int local4323; 		// local508{1509}
    int local4324; 		// local509{1510}
    int local4325; 		// local510{1511}
    int local4326; 		// local511{1512}
    int local4327; 		// local512{1513}
    int local4328; 		// local513{1514}
    int local4329; 		// local514{1515}
    int local433;
    int local4330; 		// local515{1516}
    int local4331; 		// local516{1517}
    int local4332; 		// local517{1518}
    int local4333; 		// local518{1519}
    int local4334; 		// local519{1520}
    int local4335; 		// local520{1521}
    int local4336; 		// local603{1522}
    int local4337; 		// local521{1523}
    int local4338; 		// local522{1524}
    int local4339; 		// local604{1525}
    int local434;
    int local4340; 		// local523{1526}
    int local4341; 		// local524{1527}
    int local4342; 		// local525{1528}
    int local4343; 		// local526{1529}
    int local4344; 		// local527{1530}
    int local4345; 		// local528{1531}
    int local4346; 		// local529{1532}
    int local4347; 		// local605{1533}
    int local4348; 		// local530{1534}
    int local4349; 		// local531{1535}
    int local435;
    int local4350; 		// local532{1536}
    int local4351; 		// local533{1537}
    int local4352; 		// local534{1538}
    int local4353; 		// local535{1539}
    int local4354; 		// local536{1540}
    int local4355; 		// local537{1541}
    int local4356; 		// local606{1542}
    int local4357; 		// local538{1543}
    int local4358; 		// local539{1544}
    int local4359; 		// local540{1545}
    int local436;
    int local4360; 		// local541{1546}
    int local4361; 		// local542{1547}
    int local4362; 		// local543{1548}
    int local4363; 		// local544{1549}
    int local4364; 		// local545{1550}
    int local4365; 		// local546{1551}
    int local4366; 		// local547{1552}
    int local4367; 		// local548{1553}
    int local4368; 		// local549{1554}
    int local4369; 		// local550{1555}
    int local437;
    int local4370; 		// local551{1556}
    int local4371; 		// local552{1557}
    int local4372; 		// local553{1558}
    int local4373; 		// local554{1559}
    int local4374; 		// local555{1560}
    int local4375; 		// local556{1561}
    int local4376; 		// local557{1562}
    int local4377; 		// local558{1563}
    int local4378; 		// local559{1564}
    int local4379; 		// local560{1565}
    int local438;
    int local4380; 		// local561{1566}
    int local4381; 		// local562{1567}
    int local4382; 		// local563{1568}
    int local4383; 		// local607{1569}
    int local4384; 		// local564{1570}
    int local4385; 		// local565{1571}
    int local4386; 		// local566{1572}
    int local4387; 		// local567{1573}
    int local4388; 		// local568{1574}
    int local4389; 		// local569{1575}
    int local439;
    int local4390; 		// local608{1576}
    int local4391; 		// local570{1577}
    int local4392; 		// local571{1578}
    int local4393; 		// local572{1579}
    int local4394; 		// local573{1580}
    int local4395; 		// local574{1581}
    int local4396; 		// local575{1582}
    int local4397; 		// local576{1583}
    int local4398; 		// local577{1584}
    int local4399; 		// local578{1585}
    int local44; 		// m[r29 + 12]{1720}
    int local440;
    int local4400; 		// local579{1586}
    int local4401; 		// local580{1587}
    int local4402; 		// local581{1588}
    int local4403; 		// local609{1589}
    int local4404; 		// local582{1590}
    int local4405; 		// local583{1591}
    int local4406; 		// local584{1592}
    int local4407; 		// local585{1593}
    int local4408; 		// local586{1594}
    int local4409; 		// local587{1595}
    int local441;
    int local4410; 		// local588{1596}
    int local4411; 		// local589{1597}
    int local4412; 		// local590{1598}
    int local4413; 		// local591{1599}
    int local4414; 		// local592{1600}
    int local4415; 		// local610{1601}
    int local4416; 		// local593{1602}
    int local4417; 		// local594{1603}
    int local4418; 		// local595{1604}
    int local4419; 		// local596{1605}
    int local442;
    int local4420; 		// local597{1606}
    int local4421; 		// local598{1607}
    int local4422; 		// local267{839}
    int local4423; 		// local268{840}
    int local4424; 		// local18{843}
    int local4425; 		// local269{844}
    void *local4426; 		// local370{850}
    int local4427; 		// local270{1608}
    int local4428; 		// local271{1609}
    int local4429; 		// local272{1610}
    int local443;
    int local4430; 		// local273{1611}
    int local4431; 		// local373{1612}
    int local4432; 		// local274{1613}
    int local4433; 		// local275{1614}
    int local4434; 		// local276{1615}
    int local4435; 		// local277{1616}
    int local4436; 		// local278{1617}
    int local4437; 		// local279{1618}
    int local4438; 		// local280{1619}
    int local4439; 		// local281{1620}
    int local444;
    int local4440; 		// local282{1621}
    int local4441; 		// local283{1622}
    int local4442; 		// local284{1623}
    int local4443; 		// local285{1624}
    int local4444; 		// local286{1625}
    int local4445; 		// local287{1626}
    int local4446; 		// local288{1627}
    int local4447; 		// local289{1628}
    int local4448; 		// local290{1629}
    int local4449; 		// local291{1630}
    int local445;
    int local4450; 		// local374{1631}
    int local4451; 		// local292{1632}
    int local4452; 		// local293{1633}
    int local4453; 		// local375{1634}
    int local4454; 		// local294{1635}
    int local4455; 		// local295{1636}
    int local4456; 		// local296{1637}
    int local4457; 		// local297{1638}
    int local4458; 		// local298{1639}
    int local4459; 		// local299{1640}
    int local446;
    int local4460; 		// local300{1641}
    int local4461; 		// local376{1642}
    int local4462; 		// local301{1643}
    int local4463; 		// local302{1644}
    int local4464; 		// local303{1645}
    int local4465; 		// local304{1646}
    int local4466; 		// local305{1647}
    int local4467; 		// local306{1648}
    int local4468; 		// local307{1649}
    int local4469; 		// local308{1650}
    int local447;
    int local4470; 		// local377{1651}
    int local4471; 		// local309{1652}
    int local4472; 		// local310{1653}
    int local4473; 		// local311{1654}
    int local4474; 		// local312{1655}
    int local4475; 		// local313{1656}
    int local4476; 		// local314{1657}
    int local4477; 		// local315{1658}
    int local4478; 		// local316{1659}
    int local4479; 		// local317{1660}
    int local448;
    int local4480; 		// local318{1661}
    int local4481; 		// local319{1662}
    int local4482; 		// local320{1663}
    int local4483; 		// local321{1664}
    int local4484; 		// local322{1665}
    int local4485; 		// local323{1666}
    int local4486; 		// local324{1667}
    int local4487; 		// local325{1668}
    int local4488; 		// local326{1669}
    int local4489; 		// local327{1670}
    int local449;
    int local4490; 		// local328{1671}
    int local4491; 		// local329{1672}
    int local4492; 		// local330{1673}
    int local4493; 		// local331{1674}
    int local4494; 		// local332{1675}
    int local4495; 		// local333{1676}
    int local4496; 		// local334{1677}
    int local4497; 		// local378{1678}
    int local4498; 		// local335{1679}
    int local4499; 		// local336{1680}
    int local45;
    int local450;
    int local4500; 		// local337{1681}
    int local4501; 		// local338{1682}
    int local4502; 		// local339{1683}
    int local4503; 		// local340{1684}
    int local4504; 		// local379{1685}
    int local4505; 		// local341{1686}
    int local4506; 		// local342{1687}
    int local4507; 		// local343{1688}
    int local4508; 		// local344{1689}
    int local4509; 		// local345{1690}
    int local451;
    int local4510; 		// local346{1691}
    int local4511; 		// local347{1692}
    int local4512; 		// local348{1693}
    int local4513; 		// local349{1694}
    int local4514; 		// local350{1695}
    int local4515; 		// local351{1696}
    int local4516; 		// local352{1697}
    int local4517; 		// local380{1698}
    int local4518; 		// local353{1699}
    int local4519; 		// local354{1700}
    int local452;
    int local4520; 		// local355{1701}
    int local4521; 		// local356{1702}
    int local4522; 		// local357{1703}
    int local4523; 		// local358{1704}
    int local4524; 		// local359{1705}
    int local4525; 		// local360{1706}
    int local4526; 		// local361{1707}
    int local4527; 		// local362{1708}
    int local4528; 		// local363{1709}
    int local4529; 		// local381{1710}
    int local453;
    int local4530; 		// local364{1711}
    int local4531; 		// local365{1712}
    int local4532; 		// local366{1713}
    int local4533; 		// local367{1714}
    int local4534; 		// local368{1715}
    int local4535; 		// local369{1716}
    int local4536; 		// local1{857}
    int local4537; 		// local144{860}
    int local4538; 		// local36{861}
    void *local4539; 		// local143{867}
    int local454;
    int local4540; 		// local41{1717}
    int local4541; 		// local42{1718}
    int local4542; 		// local43{1719}
    int local4543; 		// local44{1720}
    int local4544; 		// local145{1721}
    int local4545; 		// local46{1722}
    int local4546; 		// local47{1723}
    int local4547; 		// local48{1724}
    int local4548; 		// local49{1725}
    int local4549; 		// local50{1726}
    int local455;
    int local4550; 		// local51{1727}
    int local4551; 		// local52{1728}
    int local4552; 		// local53{1729}
    int local4553; 		// local54{1730}
    int local4554; 		// local55{1731}
    int local4555; 		// local56{1732}
    int local4556; 		// local57{1733}
    int local4557; 		// local58{1734}
    int local4558; 		// local59{1735}
    int local4559; 		// local60{1736}
    int local456;
    int local4560; 		// local61{1737}
    int local4561; 		// local62{1738}
    int local4562; 		// local63{1739}
    int local4563; 		// local146{1740}
    int local4564; 		// local64{1741}
    int local4565; 		// local65{1742}
    int local4566; 		// local147{1743}
    int local4567; 		// local67{1744}
    int local4568; 		// local68{1745}
    int local4569; 		// local69{1746}
    int local457;
    int local4570; 		// local70{1747}
    int local4571; 		// local71{1748}
    int local4572; 		// local72{1749}
    int local4573; 		// local73{1750}
    int local4574; 		// local148{1751}
    int local4575; 		// local74{1752}
    int local4576; 		// local75{1753}
    int local4577; 		// local76{1754}
    int local4578; 		// local77{1755}
    int local4579; 		// local78{1756}
    int local458;
    int local4580; 		// local79{1757}
    int local4581; 		// local80{1758}
    int local4582; 		// local81{1759}
    int local4583; 		// local149{1760}
    int local4584; 		// local82{1761}
    int local4585; 		// local83{1762}
    int local4586; 		// local84{1763}
    int local4587; 		// local85{1764}
    int local4588; 		// local86{1765}
    int local4589; 		// local87{1766}
    int local459;
    int local4590; 		// local88{1767}
    int local4591; 		// local89{1768}
    int local4592; 		// local90{1769}
    int local4593; 		// local91{1770}
    int local4594; 		// local92{1771}
    int local4595; 		// local93{1772}
    int local4596; 		// local94{1773}
    int local4597; 		// local95{1774}
    int local4598; 		// local96{1775}
    int local4599; 		// local97{1776}
    int local46; 		// m[r28 - 12]{1722}
    int local460;
    int local4600; 		// local98{1777}
    int local4601; 		// local99{1778}
    int local4602; 		// local100{1779}
    int local4603; 		// local101{1780}
    int local4604; 		// local102{1781}
    int local4605; 		// local103{1782}
    int local4606; 		// local104{1783}
    int local4607; 		// local105{1784}
    int local4608; 		// local106{1785}
    int local4609; 		// local107{1786}
    int local461;
    int local4610; 		// local150{1787}
    int local4611; 		// local108{1788}
    int local4612; 		// local109{1789}
    int local4613; 		// local110{1790}
    int local4614; 		// local111{1791}
    int local4615; 		// local112{1792}
    int local4616; 		// local113{1793}
    int local4617; 		// local151{1794}
    int local4618; 		// local114{1795}
    int local4619; 		// local115{1796}
    int local462;
    int local4620; 		// local116{1797}
    int local4621; 		// local117{1798}
    int local4622; 		// local118{1799}
    int local4623; 		// local119{1800}
    int local4624; 		// local120{1801}
    int local4625; 		// local121{1802}
    int local4626; 		// local122{1803}
    int local4627; 		// local123{1804}
    int local4628; 		// local124{1805}
    int local4629; 		// local125{1806}
    int local463;
    int local4630; 		// local152{1807}
    int local4631; 		// local126{1808}
    int local4632; 		// local127{1809}
    int local4633; 		// local128{1810}
    int local4634; 		// local129{1811}
    int local4635; 		// local130{1812}
    int local4636; 		// local131{1813}
    int local4637; 		// local132{1814}
    int local4638; 		// local133{1815}
    int local4639; 		// local134{1816}
    int local464;
    int local4640; 		// local135{1817}
    int local4641; 		// local136{1818}
    int local4642; 		// local153{1819}
    int local4643; 		// local137{1820}
    int local4644; 		// local138{1821}
    int local4645; 		// local139{1822}
    int local4646; 		// local140{1823}
    int local4647; 		// local141{1824}
    int local4648; 		// local142{1825}
    int local4649; 		// local17{883}
    int local465;
    int local4650; 		// r29{884}
    void *local4651; 		// %pc{890}
    int local4652; 		// r29{901}
    int local4653; 		// local35{918}
    int local4654; 		// r29{935}
    int local4655; 		// r0
    int local4656; 		// r6
    int local4657; 		// r8
    int local4658; 		// r10
    int local4659; 		// r24
    int local466;
    int local4660; 		// r25
    int local4661; 		// r26
    int local4662; 		// r27
    int local4663; 		// r28
    int local4664; 		// r29
    int local4665; 		// r30
    int local4666; 		// r31
    int local4667; 		// tmp1
    short local4668; 		// tmph
    int local467; 		// m[r28 - 20]{608}
    int local468; 		// m[r28 - 24]{608}
    int local469; 		// m[r28 - 28]{608}
    int local47; 		// m[r28 - 16]{1723}
    int local470;
    int local471;
    int local472;
    int local473;
    int local474;
    int local475;
    int local476; 		// m[r28 - 16]{608}
    int local477; 		// m[r28 - 4]{608}
    int local478; 		// m[r28 - 8]{608}
    int local479; 		// m[r28 - 12]{608}
    int local48; 		// m[r28 - 22]{1724}
    int local480; 		// m[r29 - 24]{608}
    int local481; 		// m[r29 - 26]{608}
    int local482; 		// m[r29 - 80]{608}
    int local483; 		// m[r29 - 52]{608}
    int local484; 		// m[r29 - 16]{608}
    int local485; 		// m[r29 - 18]{608}
    int local486; 		// m[r29 - 40]{608}
    int local487; 		// m[r29 - 42]{608}
    int local488; 		// m[r29 - 32]{608}
    int local489; 		// m[r29 - 34]{608}
    int local49; 		// m[r28 - 30]{1725}
    int local490; 		// m[r29 - 36]{608}
    int local491; 		// m[r29 - 8]{608}
    int local492; 		// m[r29 - 4]{608}
    int local493; 		// m[r29 - 12]{608}
    int local494; 		// m[r29 - 72]{608}
    void *local495; 		// %pc{608}
    int local496; 		// r24{822}
    int local497; 		// r25{823}
    int local498; 		// r29{827}
    int local499; 		// m[r29 + 12]{1499}
    int local5; 		// r28{280}
    int local50; 		// m[r28 - 38]{1726}
    int local500; 		// m[r29 + 12]{1500}
    int local501; 		// m[r29 + 12]{1501}
    int local502; 		// m[r29 + 12]{1502}
    int local503; 		// m[r28 - 12]{1504}
    int local504; 		// m[r28 - 16]{1505}
    int local505; 		// m[r28 - 22]{1506}
    int local506; 		// m[r28 - 30]{1507}
    int local507; 		// m[r28 - 38]{1508}
    int local508; 		// m[r28 - 46]{1509}
    int local509; 		// m[r28 - 52]{1510}
    int local51; 		// m[r28 - 46]{1727}
    int local510; 		// m[r28 - 54]{1511}
    int local511; 		// m[r28 - 56]{1512}
    int local512; 		// m[r28 - 60]{1513}
    int local513; 		// m[r28 - 62]{1514}
    int local514; 		// m[r28 - 64]{1515}
    int local515; 		// m[r28 - 0x48c]{1516}
    int local516; 		// m[r28 - 0x490]{1517}
    int local517; 		// m[r28 - 0x494]{1518}
    int local518; 		// m[r28 - 0x498]{1519}
    int local519; 		// m[r28 - 0x49c]{1520}
    int local52; 		// m[r28 - 52]{1728}
    int local520; 		// m[r28 - 0x4a0]{1521}
    int local521; 		// m[r28 - 0x4a8]{1523}
    int local522; 		// m[r28 - 0x4ac]{1524}
    int local523; 		// m[r28 - 0x4b4]{1526}
    int local524; 		// m[r28 - 0x4b8]{1527}
    int local525; 		// m[r28 - 0x4bc]{1528}
    int local526; 		// m[r28 - 4]{1529}
    int local527; 		// m[r28 - 8]{1530}
    int local528; 		// m[r28 - 12]{1531}
    int local529; 		// m[r28 - 16]{1532}
    int local53; 		// m[r28 - 54]{1729}
    int local530; 		// m[r28 - 8]{1534}
    int local531; 		// m[r28 - 12]{1535}
    int local532; 		// m[r28 - 16]{1536}
    int local533; 		// m[r28 - 20]{1537}
    int local534; 		// m[r28 - 24]{1538}
    int local535; 		// m[r28 - 4]{1539}
    int local536; 		// m[r28 - 8]{1540}
    int local537; 		// m[r28 - 12]{1541}
    int local538; 		// m[r28 - 8]{1543}
    int local539; 		// m[r28 - 12]{1544}
    int local54; 		// m[r28 - 56]{1730}
    int local540; 		// m[r28 - 16]{1545}
    int local541; 		// m[r28 - 20]{1546}
    int local542; 		// m[r28 - 4]{1547}
    int local543; 		// m[r28 - 8]{1548}
    int local544; 		// m[r28 - 12]{1549}
    int local545; 		// m[r28 - 4]{1550}
    int local546; 		// m[r28 - 8]{1551}
    int local547; 		// m[r28 - 12]{1552}
    int local548; 		// m[r28 - 16]{1553}
    int local549; 		// m[r28 - 4]{1554}
    int local55; 		// m[r28 - 60]{1731}
    int local550; 		// m[r28 - 8]{1555}
    int local551; 		// m[r28 - 12]{1556}
    int local552; 		// m[r28 - 16]{1557}
    int local553; 		// m[r28 - 4]{1558}
    int local554; 		// m[r28 - 8]{1559}
    int local555; 		// m[r28 - 12]{1560}
    int local556; 		// m[r28 - 16]{1561}
    int local557; 		// m[r28 - 4]{1562}
    int local558; 		// m[r28 - 8]{1563}
    int local559; 		// m[r28 - 12]{1564}
    int local56; 		// m[r28 - 62]{1732}
    int local560; 		// m[r28 - 16]{1565}
    int local561; 		// m[r28 - 4]{1566}
    int local562; 		// m[r28 - 8]{1567}
    int local563; 		// m[r28 - 12]{1568}
    int local564; 		// m[r28 - 8]{1570}
    int local565; 		// m[r28 - 12]{1571}
    int local566; 		// m[r28 - 16]{1572}
    int local567; 		// m[r28 - 20]{1573}
    int local568; 		// m[r28 - 24]{1574}
    int local569; 		// m[r28 - 28]{1575}
    int local57; 		// m[r28 - 64]{1733}
    int local570; 		// m[r28 - 8]{1577}
    int local571; 		// m[r28 - 12]{1578}
    int local572; 		// m[r28 - 16]{1579}
    int local573; 		// m[r28 - 20]{1580}
    int local574; 		// m[r28 - 24]{1581}
    int local575; 		// m[r28 - 28]{1582}
    int local576; 		// m[r28 - 4]{1583}
    int local577; 		// m[r28 - 8]{1584}
    int local578; 		// m[r28 - 12]{1585}
    int local579; 		// m[r28 - 4]{1586}
    int local58; 		// m[r28 - 0x48c]{1734}
    int local580; 		// m[r28 - 8]{1587}
    int local581; 		// m[r28 - 12]{1588}
    int local582; 		// m[r28 - 4]{1590}
    int local583; 		// m[r28 - 8]{1591}
    int local584; 		// m[r28 - 12]{1592}
    int local585; 		// m[r29 - 24]{1593}
    int local586; 		// m[r29 - 26]{1594}
    int local587; 		// m[r29 - 80]{1595}
    int local588; 		// m[r29 - 52]{1596}
    int local589; 		// m[r29 - 16]{1597}
    int local59; 		// m[r28 - 0x490]{1735}
    int local590; 		// m[r29 - 18]{1598}
    int local591; 		// m[r29 - 40]{1599}
    int local592; 		// m[r29 - 42]{1600}
    int local593; 		// m[r29 - 34]{1602}
    int local594; 		// m[r29 - 36]{1603}
    int local595; 		// m[r29 - 8]{1604}
    int local596; 		// m[r29 - 4]{1605}
    int local597; 		// m[r29 - 12]{1606}
    int local598; 		// m[r29 - 72]{1607}
    void *local599; 		// %pc{833}
    int local6; 		// r28{270}
    int local60; 		// m[r28 - 0x494]{1736}
    void *local600; 		// m[r28 - 8]{606}
    int local601; 		// m[r28 - 4]{603}
    int local602; 		// m[r28 - 4]{1503}
    int local603; 		// m[r28 - 0x4a4]{1522}
    int local604; 		// m[r28 - 0x4b0]{1525}
    int local605; 		// m[r28 - 4]{1533}
    int local606; 		// m[r28 - 4]{1542}
    int local607; 		// m[r28 - 4]{1569}
    int local608; 		// m[r28 - 4]{1576}
    int local609; 		// m[r28 - 16]{1589}
    int local61; 		// m[r28 - 0x498]{1737}
    int local610; 		// m[r29 - 32]{1601}
    int local611; 		// r24{599}
    int local612; 		// r25{599}
    int local613; 		// r28{599}
    int local614; 		// r29{599}
    int local615;
    int local616;
    int local617;
    int local618; 		// m[r29 + 12]{599}
    int local619;
    int local62; 		// m[r28 - 0x49c]{1738}
    int local620;
    int local621;
    int local622; 		// m[r28 - 22]{599}
    int local623; 		// m[r28 - 30]{599}
    int local624; 		// m[r28 - 38]{599}
    int local625; 		// m[r28 - 46]{599}
    int local626; 		// m[r28 - 52]{599}
    int local627; 		// m[r28 - 54]{599}
    int local628; 		// m[r28 - 56]{599}
    int local629; 		// m[r28 - 60]{599}
    int local63; 		// m[r28 - 0x4a0]{1739}
    int local630; 		// m[r28 - 62]{599}
    int local631; 		// m[r28 - 64]{599}
    int local632; 		// m[r28 - 0x48c]{599}
    int local633; 		// m[r28 - 0x490]{599}
    int local634; 		// m[r28 - 0x494]{599}
    int local635; 		// m[r28 - 0x498]{599}
    int local636; 		// m[r28 - 0x49c]{599}
    int local637; 		// m[r28 - 0x4a0]{599}
    int local638; 		// m[r28 - 0x4a4]{599}
    int local639; 		// m[r28 - 0x4a8]{599}
    int local64; 		// m[r28 - 0x4a8]{1741}
    int local640; 		// m[r28 - 0x4ac]{599}
    int local641; 		// m[r28 - 0x4b0]{599}
    int local642; 		// m[r28 - 0x4b4]{599}
    int local643; 		// m[r28 - 0x4b8]{599}
    int local644; 		// m[r28 - 0x4bc]{599}
    int local645;
    int local646;
    int local647;
    int local648;
    int local649;
    int local65; 		// m[r28 - 0x4ac]{1742}
    int local650;
    int local651;
    int local652;
    int local653;
    int local654;
    int local655;
    int local656;
    int local657;
    int local658;
    int local659;
    int local66; 		// m[r28 - 0x4b0]{105}
    int local660;
    int local661;
    int local662;
    int local663;
    int local664;
    int local665;
    int local666;
    int local667;
    int local668;
    int local669;
    int local67; 		// m[r28 - 0x4b4]{1744}
    int local670;
    int local671;
    int local672;
    int local673;
    int local674;
    int local675;
    int local676;
    int local677;
    int local678;
    int local679;
    int local68; 		// m[r28 - 0x4b8]{1745}
    int local680;
    int local681;
    int local682;
    int local683;
    int local684;
    int local685;
    int local686;
    int local687;
    int local688;
    int local689;
    int local69; 		// m[r28 - 0x4bc]{1746}
    int local690;
    int local691;
    int local692;
    int local693;
    int local694;
    int local695;
    int local696; 		// m[r28 - 20]{599}
    int local697; 		// m[r28 - 24]{599}
    int local698; 		// m[r28 - 28]{599}
    int local699;
    int local7; 		// r28{241}
    int local70; 		// m[r28 - 4]{1747}
    int local700;
    int local701;
    int local702;
    int local703;
    int local704;
    int local705; 		// m[r28 - 16]{599}
    int local706; 		// m[r28 - 4]{599}
    int local707; 		// m[r28 - 8]{599}
    int local708; 		// m[r28 - 12]{599}
    int local709; 		// m[r29 - 24]{599}
    int local71; 		// m[r28 - 8]{1748}
    int local710; 		// m[r29 - 26]{599}
    int local711; 		// m[r29 - 80]{599}
    int local712; 		// m[r29 - 52]{599}
    int local713; 		// m[r29 - 16]{599}
    int local714; 		// m[r29 - 18]{599}
    int local715; 		// m[r29 - 40]{599}
    int local716; 		// m[r29 - 42]{599}
    int local717; 		// m[r29 - 32]{599}
    int local718; 		// m[r29 - 34]{599}
    int local719; 		// m[r29 - 36]{599}
    int local72; 		// m[r28 - 12]{1749}
    int local720; 		// m[r29 - 8]{599}
    int local721; 		// m[r29 - 4]{599}
    int local722; 		// m[r29 - 12]{599}
    int local723; 		// m[r29 - 72]{599}
    void *local724; 		// %pc{599}
    int local725; 		// r24{805}
    int local726; 		// r25{806}
    int local727; 		// r29{810}
    int local728; 		// m[r29 + 12]{1390}
    int local729; 		// m[r29 + 12]{1391}
    int local73; 		// m[r28 - 16]{1750}
    int local730; 		// m[r29 + 12]{1392}
    int local731; 		// m[r29 + 12]{1393}
    int local732; 		// m[r28 - 12]{1395}
    int local733; 		// m[r28 - 16]{1396}
    int local734; 		// m[r28 - 22]{1397}
    int local735; 		// m[r28 - 30]{1398}
    int local736; 		// m[r28 - 38]{1399}
    int local737; 		// m[r28 - 46]{1400}
    int local738; 		// m[r28 - 52]{1401}
    int local739; 		// m[r28 - 54]{1402}
    int local74; 		// m[r28 - 8]{1752}
    int local740; 		// m[r28 - 56]{1403}
    int local741; 		// m[r28 - 60]{1404}
    int local742; 		// m[r28 - 62]{1405}
    int local743; 		// m[r28 - 64]{1406}
    int local744; 		// m[r28 - 0x48c]{1407}
    int local745; 		// m[r28 - 0x490]{1408}
    int local746; 		// m[r28 - 0x494]{1409}
    int local747; 		// m[r28 - 0x498]{1410}
    int local748; 		// m[r28 - 0x49c]{1411}
    int local749; 		// m[r28 - 0x4a0]{1412}
    int local75; 		// m[r28 - 12]{1753}
    int local750; 		// m[r28 - 0x4a8]{1414}
    int local751; 		// m[r28 - 0x4ac]{1415}
    int local752; 		// m[r28 - 0x4b4]{1417}
    int local753; 		// m[r28 - 0x4b8]{1418}
    int local754; 		// m[r28 - 0x4bc]{1419}
    int local755; 		// m[r28 - 4]{1420}
    int local756; 		// m[r28 - 8]{1421}
    int local757; 		// m[r28 - 12]{1422}
    int local758; 		// m[r28 - 16]{1423}
    int local759; 		// m[r28 - 8]{1425}
    int local76; 		// m[r28 - 16]{1754}
    int local760; 		// m[r28 - 12]{1426}
    int local761; 		// m[r28 - 16]{1427}
    int local762; 		// m[r28 - 20]{1428}
    int local763; 		// m[r28 - 24]{1429}
    int local764; 		// m[r28 - 4]{1430}
    int local765; 		// m[r28 - 8]{1431}
    int local766; 		// m[r28 - 12]{1432}
    int local767; 		// m[r28 - 8]{1434}
    int local768; 		// m[r28 - 12]{1435}
    int local769; 		// m[r28 - 16]{1436}
    int local77; 		// m[r28 - 20]{1755}
    int local770; 		// m[r28 - 20]{1437}
    int local771; 		// m[r28 - 4]{1438}
    int local772; 		// m[r28 - 8]{1439}
    int local773; 		// m[r28 - 12]{1440}
    int local774; 		// m[r28 - 4]{1441}
    int local775; 		// m[r28 - 8]{1442}
    int local776; 		// m[r28 - 12]{1443}
    int local777; 		// m[r28 - 16]{1444}
    int local778; 		// m[r28 - 4]{1445}
    int local779; 		// m[r28 - 8]{1446}
    int local78; 		// m[r28 - 24]{1756}
    int local780; 		// m[r28 - 12]{1447}
    int local781; 		// m[r28 - 16]{1448}
    int local782; 		// m[r28 - 4]{1449}
    int local783; 		// m[r28 - 8]{1450}
    int local784; 		// m[r28 - 12]{1451}
    int local785; 		// m[r28 - 16]{1452}
    int local786; 		// m[r28 - 4]{1453}
    int local787; 		// m[r28 - 8]{1454}
    int local788; 		// m[r28 - 12]{1455}
    int local789; 		// m[r28 - 16]{1456}
    int local79; 		// m[r28 - 4]{1757}
    int local790; 		// m[r28 - 4]{1457}
    int local791; 		// m[r28 - 8]{1458}
    int local792; 		// m[r28 - 12]{1459}
    int local793; 		// m[r28 - 8]{1461}
    int local794; 		// m[r28 - 12]{1462}
    int local795; 		// m[r28 - 16]{1463}
    int local796; 		// m[r28 - 20]{1464}
    int local797; 		// m[r28 - 24]{1465}
    int local798; 		// m[r28 - 28]{1466}
    int local799; 		// m[r28 - 8]{1468}
    int local8; 		// r28{223}
    int local80; 		// m[r28 - 8]{1758}
    int local800; 		// m[r28 - 12]{1469}
    int local801; 		// m[r28 - 16]{1470}
    int local802; 		// m[r28 - 20]{1471}
    int local803; 		// m[r28 - 24]{1472}
    int local804; 		// m[r28 - 28]{1473}
    int local805; 		// m[r28 - 4]{1474}
    int local806; 		// m[r28 - 8]{1475}
    int local807; 		// m[r28 - 12]{1476}
    int local808; 		// m[r28 - 4]{1477}
    int local809; 		// m[r28 - 8]{1478}
    int local81; 		// m[r28 - 12]{1759}
    int local810; 		// m[r28 - 12]{1479}
    int local811; 		// m[r28 - 4]{1481}
    int local812; 		// m[r28 - 8]{1482}
    int local813; 		// m[r28 - 12]{1483}
    int local814; 		// m[r29 - 24]{1484}
    int local815; 		// m[r29 - 26]{1485}
    int local816; 		// m[r29 - 80]{1486}
    int local817; 		// m[r29 - 52]{1487}
    int local818; 		// m[r29 - 16]{1488}
    int local819; 		// m[r29 - 18]{1489}
    int local82; 		// m[r28 - 8]{1761}
    int local820; 		// m[r29 - 40]{1490}
    int local821; 		// m[r29 - 42]{1491}
    int local822; 		// m[r29 - 34]{1493}
    int local823; 		// m[r29 - 36]{1494}
    int local824; 		// m[r29 - 8]{1495}
    int local825; 		// m[r29 - 4]{1496}
    int local826; 		// m[r29 - 12]{1497}
    int local827; 		// m[r29 - 72]{1498}
    void *local828; 		// %pc{816}
    void *local829; 		// m[r28 - 8]{597}
    int local83; 		// m[r28 - 12]{1762}
    int local830; 		// m[r28 - 4]{594}
    int local831; 		// m[r28 - 4]{1394}
    int local832; 		// m[r28 - 0x4a4]{1413}
    int local833; 		// m[r28 - 0x4b0]{1416}
    int local834; 		// m[r28 - 4]{1424}
    int local835; 		// m[r28 - 4]{1433}
    int local836; 		// m[r28 - 4]{1460}
    int local837; 		// m[r28 - 4]{1467}
    int local838; 		// m[r28 - 16]{1480}
    int local839; 		// m[r29 - 32]{1492}
    int local84; 		// m[r28 - 16]{1763}
    int local840; 		// r24{590}
    int local841; 		// r25{590}
    int local842; 		// r28{590}
    int local843; 		// r29{590}
    int local844;
    int local845;
    int local846;
    int local847; 		// m[r29 + 12]{590}
    int local848;
    int local849;
    int local85; 		// m[r28 - 20]{1764}
    int local850;
    int local851; 		// m[r28 - 22]{590}
    int local852; 		// m[r28 - 30]{590}
    int local853; 		// m[r28 - 38]{590}
    int local854; 		// m[r28 - 46]{590}
    int local855; 		// m[r28 - 52]{590}
    int local856; 		// m[r28 - 54]{590}
    int local857; 		// m[r28 - 56]{590}
    int local858; 		// m[r28 - 60]{590}
    int local859; 		// m[r28 - 62]{590}
    int local86; 		// m[r28 - 4]{1765}
    int local860; 		// m[r28 - 64]{590}
    int local861; 		// m[r28 - 0x48c]{590}
    int local862; 		// m[r28 - 0x490]{590}
    int local863; 		// m[r28 - 0x494]{590}
    int local864; 		// m[r28 - 0x498]{590}
    int local865; 		// m[r28 - 0x49c]{590}
    int local866; 		// m[r28 - 0x4a0]{590}
    int local867; 		// m[r28 - 0x4a4]{590}
    int local868; 		// m[r28 - 0x4a8]{590}
    int local869; 		// m[r28 - 0x4ac]{590}
    int local87; 		// m[r28 - 8]{1766}
    int local870; 		// m[r28 - 0x4b0]{590}
    int local871; 		// m[r28 - 0x4b4]{590}
    int local872; 		// m[r28 - 0x4b8]{590}
    int local873; 		// m[r28 - 0x4bc]{590}
    int local874;
    int local875;
    int local876;
    int local877;
    int local878;
    int local879;
    int local88; 		// m[r28 - 12]{1767}
    int local880;
    int local881;
    int local882;
    int local883;
    int local884;
    int local885;
    int local886;
    int local887;
    int local888;
    int local889;
    int local89; 		// m[r28 - 4]{1768}
    int local890;
    int local891;
    int local892;
    int local893;
    int local894;
    int local895;
    int local896;
    int local897;
    int local898;
    int local899;
    int local9; 		// r28{195}
    int local90; 		// m[r28 - 8]{1769}
    int local900;
    int local901;
    int local902;
    int local903;
    int local904;
    int local905;
    int local906;
    int local907;
    int local908;
    int local909;
    int local91; 		// m[r28 - 12]{1770}
    int local910;
    int local911;
    int local912;
    int local913;
    int local914;
    int local915;
    int local916;
    int local917;
    int local918;
    int local919;
    int local92; 		// m[r28 - 16]{1771}
    int local920;
    int local921;
    int local922;
    int local923;
    int local924;
    int local925; 		// m[r28 - 20]{590}
    int local926; 		// m[r28 - 24]{590}
    int local927; 		// m[r28 - 28]{590}
    int local928;
    int local929;
    int local93; 		// m[r28 - 4]{1772}
    int local930;
    int local931;
    int local932;
    int local933;
    int local934; 		// m[r28 - 16]{590}
    int local935; 		// m[r28 - 4]{590}
    int local936; 		// m[r28 - 8]{590}
    int local937; 		// m[r28 - 12]{590}
    int local938; 		// m[r29 - 24]{590}
    int local939; 		// m[r29 - 26]{590}
    int local94; 		// m[r28 - 8]{1773}
    int local940; 		// m[r29 - 80]{590}
    int local941; 		// m[r29 - 52]{590}
    int local942; 		// m[r29 - 16]{590}
    int local943; 		// m[r29 - 18]{590}
    int local944; 		// m[r29 - 40]{590}
    int local945; 		// m[r29 - 42]{590}
    int local946; 		// m[r29 - 32]{590}
    int local947; 		// m[r29 - 34]{590}
    int local948; 		// m[r29 - 36]{590}
    int local949; 		// m[r29 - 8]{590}
    int local95; 		// m[r28 - 12]{1774}
    int local950; 		// m[r29 - 4]{590}
    int local951; 		// m[r29 - 12]{590}
    int local952; 		// m[r29 - 72]{590}
    void *local953; 		// %pc{590}
    int local954; 		// r24{788}
    int local955; 		// r25{789}
    int local956; 		// r29{793}
    int local957; 		// m[r29 + 12]{1281}
    int local958; 		// m[r29 + 12]{1282}
    int local959; 		// m[r29 + 12]{1283}
    int local96; 		// m[r28 - 16]{1775}
    int local960; 		// m[r29 + 12]{1284}
    int local961; 		// m[r28 - 12]{1286}
    int local962; 		// m[r28 - 16]{1287}
    int local963; 		// m[r28 - 22]{1288}
    int local964; 		// m[r28 - 30]{1289}
    int local965; 		// m[r28 - 38]{1290}
    int local966; 		// m[r28 - 46]{1291}
    int local967; 		// m[r28 - 52]{1292}
    int local968; 		// m[r28 - 54]{1293}
    int local969; 		// m[r28 - 56]{1294}
    int local97; 		// m[r28 - 4]{1776}
    int local970; 		// m[r28 - 60]{1295}
    int local971; 		// m[r28 - 62]{1296}
    int local972; 		// m[r28 - 64]{1297}
    int local973; 		// m[r28 - 0x48c]{1298}
    int local974; 		// m[r28 - 0x490]{1299}
    int local975; 		// m[r28 - 0x494]{1300}
    int local976; 		// m[r28 - 0x498]{1301}
    int local977; 		// m[r28 - 0x49c]{1302}
    int local978; 		// m[r28 - 0x4a0]{1303}
    int local979; 		// m[r28 - 0x4a8]{1305}
    int local98; 		// m[r28 - 8]{1777}
    int local980; 		// m[r28 - 0x4ac]{1306}
    int local981; 		// m[r28 - 0x4b4]{1308}
    int local982; 		// m[r28 - 0x4b8]{1309}
    int local983; 		// m[r28 - 0x4bc]{1310}
    int local984; 		// m[r28 - 4]{1311}
    int local985; 		// m[r28 - 8]{1312}
    int local986; 		// m[r28 - 12]{1313}
    int local987; 		// m[r28 - 16]{1314}
    int local988; 		// m[r28 - 8]{1316}
    int local989; 		// m[r28 - 12]{1317}
    int local99; 		// m[r28 - 12]{1778}
    int local990; 		// m[r28 - 16]{1318}
    int local991; 		// m[r28 - 20]{1319}
    int local992; 		// m[r28 - 24]{1320}
    int local993; 		// m[r28 - 4]{1321}
    int local994; 		// m[r28 - 8]{1322}
    int local995; 		// m[r28 - 12]{1323}
    int local996; 		// m[r28 - 8]{1325}
    int local997; 		// m[r28 - 12]{1326}
    int local998; 		// m[r28 - 16]{1327}
    int local999; 		// m[r28 - 20]{1328}

    local3698 = local4664;
    local3697 = local4662;
    local3696 = local4665;
    local3695 = local4666;
    local3694 = 72;
    local3693 = 0;
    local3692 = local4663 - 136;
    local3691 = 0;
    local3690 = 0;
    __imp_memset(local4663 - 136, 0, 72);
    local3686 = 512;
    local3685 = 0;
    local3684 = 0;
    local3683 = 0;
    local3682 = 0;
    local3681 = 0;
    local3680 = local4663 - 648;
    __imp_memset(local4663 - 648, 0, 512);
    local3676 = local4663 - 648;
    local3675 = 0;
    local3674 = 512;
    local3673 = 512;
    local3672 = 0;
    local3671 = local4663 - 1160;
    local3660 = __imp_memset(local4663 - 1160, 0, 512); /* Warning: also results in local4661 */
    local3668 = local4663 - 1160;
    local3667 = 0;
    local4659 = *(unsigned short*)RegistryPath;
    local3666 = 0x206b6444;
    local3665 = local4659 + 2;
    local3664 = local4656;
    local3663 = 1;
    (*ExAllocatePoolWithTag)(pc - 0x107a3, local4663 - 1160, 0, 512, local4663 - 648, 0, 1, local4659 + 2, 0x206b6444, local4666, local4665, local4662, 0, 512, local4663 - 648, 0, local4656, local4663 - 1160, 0, 0, 0, 0, 0, 0, local4664, (unsigned short) local4659 + 2, local4659 + 2, local3660, local4661, RegistryPath, local4663 - 4, ExAllocatePoolWithTag, 0x206b6444, LOGICALFLAGS32(local4659 + 2), LOGICALFLAGS32(local4659 + 2));
    local3710 = local4659;
    local3711 = local3649;
    local3712 = local12;
    local3713 = local31;
    local3714 = local3500;
    local3715 = local3409;
    local3716 = local3650;
    local3717 = local3410;
    local3718 = local3411;
    local3719 = local45;
    local3720 = local3412;
    local3721 = local3413;
    local3722 = local3414;
    local3723 = local3415;
    local3724 = local3416;
    local3725 = local3417;
    local3726 = local3418;
    local3727 = local3419;
    local3728 = local3420;
    local3729 = local3421;
    local3730 = local3422;
    local3731 = local3423;
    local3732 = local3424;
    local3733 = local3425;
    local3734 = local3426;
    local3735 = local3427;
    local3736 = local3428;
    local3737 = local3429;
    local3738 = local3430;
    local3739 = local3431;
    local3740 = local3432;
    local3741 = local66;
    local3742 = local3433;
    local3743 = local3434;
    local3744 = local3435;
    local3745 = local3436;
    local3746 = local3437;
    local3747 = local3438;
    local3748 = local3439;
    local3749 = local3507;
    local3750 = local3440;
    local3751 = local3441;
    local3752 = local3442;
    local3753 = local3443;
    local3754 = local3444;
    local3755 = local3445;
    local3756 = local3446;
    local3757 = local3447;
    local3758 = local3448;
    local3759 = local3449;
    local3760 = local3450;
    local3761 = local3451;
    local3762 = local3452;
    local3763 = local3453;
    local3764 = local3454;
    local3765 = local3455;
    local3766 = local3456;
    local3767 = local3457;
    local3768 = local3458;
    local3769 = local3459;
    local3770 = local3460;
    local3771 = local3461;
    local3772 = local3462;
    local3773 = local3463;
    local3774 = local3464;
    local3775 = local3465;
    local3776 = local3466;
    local3777 = local3467;
    local3778 = local3468;
    local3779 = local3469;
    local3780 = local3470;
    local3781 = local3471;
    local3782 = local3508;
    local3783 = local3509;
    local3784 = local3510;
    local3785 = local3651;
    local3786 = local3652;
    local3787 = local3653;
    local3788 = local3654;
    local3789 = local3655;
    local3790 = local3656;
    local3791 = local3657;
    local3792 = local3472;
    local3793 = local3518;
    local3794 = local3473;
    local3795 = local3474;
    local3796 = local3475;
    local3797 = local3476;
    local3798 = local3477;
    local3799 = local3478;
    local3800 = local3479;
    local3801 = local3480;
    local3802 = local3519;
    local3803 = local3481;
    local3804 = local3482;
    local3805 = local3483;
    local3806 = local3484;
    local3807 = local3485;
    local3808 = local3486;
    local3809 = local3487;
    local3810 = local3488;
    local3811 = local3489;
    local3812 = local3490;
    local3813 = local3491;
    local3814 = local3492;
    local3815 = local3493;
    local3816 = local3494;
    local3818 = local3658;
    local3819 = local3659;
    local3820 = local3495;
    local3821 = local3496;
    local3822 = local3497;
    local3823 = local3498;
    local4085 = local3409;
    local4087 = local3410;
    local4088 = local3411;
    local4089 = local45;
    local4090 = local3412;
    local4091 = local3413;
    local4092 = local3414;
    local4093 = local3415;
    local4094 = local3416;
    local4095 = local3417;
    local4096 = local3418;
    local4097 = local3419;
    local4098 = local3420;
    local4099 = local3421;
    local4100 = local3422;
    local4101 = local3423;
    local4102 = local3424;
    local4103 = local3425;
    local4104 = local3426;
    local4105 = local3427;
    local4106 = local3428;
    local4107 = local3429;
    local4108 = local3430;
    local4109 = local3431;
    local4110 = local3432;
    local4111 = local66;
    local4112 = local3433;
    local4113 = local3434;
    local4114 = local3435;
    local4115 = local3436;
    local4116 = local3437;
    local4117 = local3438;
    local4118 = local3439;
    local4119 = local3507;
    local4120 = local3440;
    local4121 = local3441;
    local4122 = local3442;
    local4123 = local3443;
    local4124 = local3444;
    local4125 = local3445;
    local4126 = local3446;
    local4127 = local3447;
    local4128 = local3448;
    local4129 = local3449;
    local4130 = local3450;
    local4131 = local3451;
    local4132 = local3452;
    local4133 = local3453;
    local4134 = local3454;
    local4135 = local3455;
    local4136 = local3456;
    local4137 = local3457;
    local4138 = local3458;
    local4139 = local3459;
    local4140 = local3460;
    local4141 = local3461;
    local4142 = local3462;
    local4143 = local3463;
    local4144 = local3464;
    local4145 = local3465;
    local4146 = local3466;
    local4147 = local3467;
    local4148 = local3468;
    local4149 = local3469;
    local4150 = local3470;
    local4151 = local3471;
    local4152 = local3508;
    local4153 = local3509;
    local4154 = local3510;
    local4162 = local3472;
    local4163 = local3518;
    local4164 = local3473;
    local4165 = local3474;
    local4166 = local3475;
    local4167 = local3476;
    local4168 = local3477;
    local4169 = local3478;
    local4170 = local3479;
    local4171 = local3480;
    local4172 = local3519;
    local4173 = local3481;
    local4174 = local3482;
    local4175 = local3483;
    local4176 = local3484;
    local4177 = local3485;
    local4178 = local3486;
    local4179 = local3487;
    local4180 = local3488;
    local4181 = local3489;
    local4182 = local3490;
    local4183 = local3491;
    local4184 = local3492;
    local4185 = local3493;
    local4186 = local3494;
    local4190 = local3495;
    local4191 = local3496;
    local4192 = local3497;
    local4193 = local3498;
    local3520 = local4659;
    local3817 = local3520;
    local4187 = local3520;
    if (local4659 != 0) {
        local3522 = *(int*)local4662;
        local4655 = (unsigned short) *(int*)local4662 + 2;
        local3521 = local4655;
        local3534 = (local4655);
        local3533 = 0;
        local3532 = local4659;
        local3531 = local3500;
        __imp_memset(local4659, 0, (local4655));
        local4188 = local3521;
        local4189 = local3522;
        local3527 = *(unsigned short*)local4662;
        local3515 = *(int*)(local4662 + 4);
        local3516 = local4659;
        local3517 = local3500 - 0x8468;
        memmove(local4659, *(int*)(local4662 + 4), *(unsigned short*)local4662);
        local4159 = local3515;
        local4160 = local3516;
        local4161 = local3517;
        local3511 = local31 - 60;
        local3512 = local31 - 36;
        local3513 = local31 - 132;
        local3514 = *(int*)0x17020;
        local3523 = *(int*)0x17020 - 1419;
        local3407 = proc2(local4662, local4665, local4666); /* Warning: also results in local4665, local3504, local4657, local3408, local4661, local3505, local11, local30, local4666 */
        local4077 = local3504;
        local4078 = local3407;
        local4079 = local3408;
        local4080 = local3505;
        local4081 = local11;
        local4082 = local30;
        local4083 = local4666;
        local4084 = local3523;
        local4155 = local3511;
        local4156 = local3512;
        local4157 = local3513;
        local4158 = local3514;
        local3506 = local3407;
        local4086 = local3506;
        if (local3407 >= 0) {
            local3503 = 0;
            local3502 = local30 - 44;
            local3501 = *(int*)0x17020 - 1419;
            (*local3499)(local3435, local3434, local3433, local3432, local3431, local3430, local3429, local3428, local3427, local3426, local3425, local3424, local3423, local3422, local3421, local3420, local3419, local3418, local3417, local3416, local3415, local3500 - 0x8468, local3477, *(int*)(local21 - 28), local4659, local3444, local3476, *(int*)(local21 - 24), *(int*)(local22 - 24), local3414, *(int*)(local4662 + 4), local3443, local3452, local3475, *(int*)(local21 - 20), *(int*)(local22 - 20), *(unsigned short*)local4662, local3413, *(int*)(local22 - 16), local3439, local3442, local3451, local3459, local3463, local3467, local3471, local3474, local3483, *(int*)(local21 - 16), local31 - 132, *(int*)0x17020 - 1419, local3412, local3450, local3441, local3438, local3447, local3455, local3458, local3462, local3466, local3470, local3473, local3480, local3482, local3486, local1326, *(int*)(local22 - 12), local31 - 36, local30 - 44, local3437, local3440, local3446, local3449, local3454, local3457, local3461, local3465, local3469, local3479, local3481, local3485, *(int*)(local17 - 8), *(int*)(local144 - 8), *(int*)(local18 - 8), *(int*)(local19 - 8), *(int*)(local20 - 8), local1325, *(int*)(local22 - 8), *(int*)(local23 - 8), local3484, local3478, local3472, local1324, local3468, local3464, local3460, local3456, local3453, local3448, local3445, local3436, (local4655), 0, local45, *(int*)(local17 - 4), *(int*)(local144 - 4), *(int*)(local18 - 4), *(int*)(local19 - 4), *(int*)(local20 - 4), *(int*)(local22 - 4), *(int*)(local23 - 4), (unsigned short) local30 - 44, local4657, local4658, local30 - 44, local3408, local4661, local3499, local30, local4665, local4666, *(int*)(local4660 + 48), *(int*)(local4660 + 56), *(int*)(local4660 + 64), *(int*)(local4660 + 68), *(int*)(local4660 + 92), *(int*)(local4660 + 112), *(int*)(local4660 + 128), local3409, local3407, local3410, local3411, *(int*)(local35 + 12), *(int*)(local37 + 12), *(int*)(local38 + 12), *(int*)(local40 + 12), *(int*)(*(int*)(local35 + 8) + 48), *(int*)(*(int*)(local35 + 8) + 56), *(int*)(*(int*)(local35 + 8) + 64), *(int*)(*(int*)(local35 + 8) + 68), *(int*)(*(int*)(local35 + 8) + 92), *(int*)(*(int*)(local35 + 8) + 112), *(int*)(*(int*)(local35 + 8) + 128), local3487, local3488, local3489, local3490, local3491, local3492, local3493, local3494, local4659, local4655, *(int*)local4662, local3495, local3496, local3497, local3498, *(int*)(local38 - 12), *(int*)(local38 - 20), *(int*)(local38 - 28), *(int*)(local39 - 4), <all>, LOGICALFLAGS32(local3407), LOGICALFLAGS32(local3407));
            local3406 = 18;
            local3405 = local4666;
            local3404 = 18;
            local3403 = 1;
            local3402 = 18;
            local3401 = local3398;
            (*local4665)(local3298, local3297, local3296, local3295, local3294, local3293, local3292, local3291, local3290, local3289, local3288, local3287, local3286, local3285, local3284, local3283, local3282, local3281, local3280, local3279, local3278, local3277, local3345, local3339, local3371, local3344, local3338, local3307, local3370, local3377, local3276, local3343, local3337, local3314, local3306, local3369, local3376, local3342, local3336, local3398, local3329, local3325, local3321, local3313, local3305, local3302, local3275, local3375, local3368, local3354, local3351, local3348, local3341, local3335, local3332, 1, local3328, local3324, local3320, local3317, local3312, local3310, local3304, local3301, local3274, local3367, local3374, local3353, local3350, local3347, local3340, local3334, local3331, 18, local3327, local3323, local3319, local3316, local3311, local3309, local3303, local3300, local3356, local3358, local3360, local3362, local3364, local3366, local3373, local3379, local3352, local3349, local3346, local3365, local3333, local3330, 18, local3326, local3322, local3318, local3315, local3308, local3299, local3273, local3355, local3357, local3359, local3361, local3363, local3372, local3378, 18, local4657, local4658, 18, local3250, local4661, local4662, local29, local4665, local4666, local3251, local3252, local3253, local3254, local3255, local3256, local3257, local3258, local3259, local3260, local3261, local3262, local3263, local3264, local3265, local3266, local3267, local3268, local3269, local3270, local3271, local3272, local3380, local3381, local3382, local3383, local3384, local3385, local3386, 18, local3387, local3388, local3389, local3390, local3391, local3392, local3393, local3394, local3395, local3396, local3397, <all>, local3399, local3400);
            local3710 = local3081;
            local3711 = local3240;
            local3712 = local9;
            local3713 = local28;
            local3714 = local3230;
            local3715 = local3090;
            local3716 = local3091;
            local3717 = local3092;
            local3718 = local3093;
            local3719 = local3105;
            local3720 = local3106;
            local3721 = local3107;
            local3722 = local3108;
            local3723 = local3109;
            local3724 = local3110;
            local3725 = local3111;
            local3726 = local3112;
            local3727 = local3113;
            local3728 = local3114;
            local3729 = local3115;
            local3730 = local3116;
            local3731 = local3117;
            local3732 = local3118;
            local3733 = local3119;
            local3734 = local3120;
            local3735 = local3121;
            local3736 = local3122;
            local3737 = local3123;
            local3738 = local3124;
            local3739 = local3125;
            local3740 = local3126;
            local3741 = local3127;
            local3742 = local3128;
            local3743 = local3129;
            local3744 = local3130;
            local3745 = local3131;
            local3746 = local3132;
            local3747 = local3133;
            local3748 = local3134;
            local3749 = local3241;
            local3750 = local3135;
            local3751 = local3136;
            local3752 = local3137;
            local3753 = local3138;
            local3754 = local3139;
            local3755 = local3140;
            local3756 = local3141;
            local3757 = local3142;
            local3758 = local3242;
            local3759 = local3143;
            local3760 = local3144;
            local3761 = local3145;
            local3762 = local3146;
            local3763 = local3147;
            local3764 = local3148;
            local3765 = local3149;
            local3766 = local3150;
            local3767 = local3151;
            local3768 = local3152;
            local3769 = local3153;
            local3770 = local3154;
            local3771 = local3155;
            local3772 = local3156;
            local3773 = local3157;
            local3774 = local3243;
            local3775 = local3244;
            local3776 = local3245;
            local3777 = local3246;
            local3778 = local3158;
            local3779 = local3159;
            local3780 = local3160;
            local3781 = local3161;
            local3782 = local3162;
            local3783 = local3163;
            local3784 = local3164;
            local3785 = local3165;
            local3786 = local3166;
            local3787 = local3167;
            local3788 = local3168;
            local3789 = local3169;
            local3790 = local3170;
            local3791 = local3171;
            local3792 = local3247;
            local3793 = local3172;
            local3794 = local3173;
            local3795 = local3174;
            local3796 = local3175;
            local3797 = local3176;
            local3798 = local3177;
            local3799 = local3178;
            local3800 = local3179;
            local3801 = local3180;
            local3802 = local3181;
            local3803 = local3182;
            local3804 = local3183;
            local3805 = local3248;
            local3806 = local3184;
            local3807 = local3185;
            local3808 = local3186;
            local3809 = local3212;
            local3810 = local3213;
            local3811 = local3214;
            local3812 = local3215;
            local3813 = local3216;
            local3814 = local3217;
            local3816 = local3218;
            local3817 = local3219;
            local3818 = local3220;
            local3819 = local3221;
            local3820 = local3222;
            local3821 = local3223;
            local3822 = local3224;
            local3823 = local3225;
            local3249 = local3081;
            local3815 = local3249;
            if (local3081 == 0) {
L19:
                local3535 = local3710;
                local3536 = local3711;
                local3537 = local3712;
                local40 = local3713;
                local3647 = local3714;
                local3538 = local3715;
                local3539 = local3716;
                local3540 = local3717;
                local3541 = local3718;
                local3542 = local3719;
                local3543 = local3720;
                local3544 = local3721;
                local3545 = local3722;
                local3546 = local3723;
                local3547 = local3724;
                local3548 = local3725;
                local3549 = local3726;
                local3550 = local3727;
                local3551 = local3728;
                local3552 = local3729;
                local3553 = local3730;
                local3554 = local3731;
                local3555 = local3732;
                local3556 = local3733;
                local3557 = local3734;
                local3558 = local3735;
                local3559 = local3736;
                local3560 = local3737;
                local3561 = local3738;
                local3562 = local3739;
                local3563 = local3740;
                local3564 = local3741;
                local3565 = local3742;
                local3566 = local3743;
                local3567 = local3744;
                local3568 = local3745;
                local3569 = local3746;
                local3570 = local3747;
                local3571 = local3748;
                local3572 = local3749;
                local3573 = local3750;
                local3574 = local3751;
                local3575 = local3752;
                local3576 = local3753;
                local3577 = local3754;
                local3578 = local3755;
                local3579 = local3756;
                local3580 = local3757;
                local3581 = local3758;
                local3582 = local3759;
                local3583 = local3760;
                local3584 = local3761;
                local3585 = local3762;
                local3586 = local3763;
                local3587 = local3764;
                local3588 = local3765;
                local3589 = local3766;
                local3590 = local3767;
                local3591 = local3768;
                local3592 = local3769;
                local3593 = local3770;
                local3594 = local3771;
                local3595 = local3772;
                local3596 = local3773;
                local3597 = local3774;
                local3598 = local3775;
                local3599 = local3776;
                local3600 = local3777;
                local3601 = local3778;
                local3602 = local3779;
                local3603 = local3780;
                local3604 = local3781;
                local3605 = local3782;
                local3606 = local3783;
                local3607 = local3784;
                local3608 = local3785;
                local3609 = local3786;
                local3610 = local3787;
                local3611 = local3788;
                local3612 = local3789;
                local3613 = local3790;
                local3614 = local3791;
                local3615 = local3792;
                local3616 = local3793;
                local3617 = local3794;
                local3618 = local3795;
                local3619 = local3796;
                local3620 = local3797;
                local3621 = local3798;
                local3622 = local3799;
                local3623 = local3800;
                local3624 = local3801;
                local3625 = local3802;
                local3626 = local3803;
                local3627 = local3804;
                local3628 = local3805;
                local3629 = local3806;
                local3630 = local3807;
                local3631 = local3808;
                local3632 = local3809;
                local3633 = local3810;
                local3634 = local3811;
                local3635 = local3812;
                local3636 = local3813;
                local3637 = local3814;
                local3638 = local3815;
                local3639 = local3816;
                local3640 = local3817;
                local3641 = local3818;
                local3642 = local3819;
                local3643 = local3820;
                local3644 = local3821;
                local3645 = local3822;
                local3646 = local3823;
                local3648 = 0xc0000001;
                local4077 = local4655;
                local4078 = local3535;
                local4079 = local3536;
                local4080 = local4662;
                local4081 = local3537;
                local4082 = local40;
                local4083 = local4666;
                local4084 = local3647;
                local4085 = local3538;
                local4086 = local3539;
                local4087 = local3540;
                local4088 = local3541;
                local4089 = local3542;
                local4090 = local3543;
                local4091 = local3544;
                local4092 = local3545;
                local4093 = local3546;
                local4094 = local3547;
                local4095 = local3548;
                local4096 = local3549;
                local4097 = local3550;
                local4098 = local3551;
                local4099 = local3552;
                local4100 = local3553;
                local4101 = local3554;
                local4102 = local3555;
                local4103 = local3556;
                local4104 = local3557;
                local4105 = local3558;
                local4106 = local3559;
                local4107 = local3560;
                local4108 = local3561;
                local4109 = local3562;
                local4110 = local3563;
                local4111 = local3564;
                local4112 = local3565;
                local4113 = local3566;
                local4114 = local3567;
                local4115 = local3568;
                local4116 = local3569;
                local4117 = local3570;
                local4118 = local3571;
                local4119 = local3572;
                local4120 = local3573;
                local4121 = local3574;
                local4122 = local3575;
                local4123 = local3576;
                local4124 = local3577;
                local4125 = local3578;
                local4126 = local3579;
                local4127 = local3580;
                local4128 = local3581;
                local4129 = local3582;
                local4130 = local3583;
                local4131 = local3584;
                local4132 = local3585;
                local4133 = local3586;
                local4134 = local3587;
                local4135 = local3588;
                local4136 = local3589;
                local4137 = local3590;
                local4138 = local3591;
                local4139 = local3592;
                local4140 = local3593;
                local4141 = local3594;
                local4142 = local3595;
                local4143 = local3596;
                local4144 = local3597;
                local4145 = local3598;
                local4146 = local3599;
                local4147 = local3600;
                local4148 = local3601;
                local4149 = local3602;
                local4150 = local3603;
                local4151 = local3604;
                local4152 = local3605;
                local4153 = local3606;
                local4154 = local3607;
                local4155 = local3608;
                local4156 = local3609;
                local4157 = local3610;
                local4158 = local3611;
                local4159 = local3612;
                local4160 = local3613;
                local4161 = local3614;
                local4162 = local3615;
                local4163 = local3616;
                local4164 = local3617;
                local4165 = local3618;
                local4166 = local3619;
                local4167 = local3620;
                local4168 = local3621;
                local4169 = local3622;
                local4170 = local3623;
                local4171 = local3624;
                local4172 = local3625;
                local4173 = local3626;
                local4174 = local3627;
                local4175 = local3628;
                local4176 = local3629;
                local4177 = local3630;
                local4178 = local3631;
                local4179 = local3632;
                local4180 = local3633;
                local4181 = local3634;
                local4182 = local3635;
                local4183 = local3636;
                local4184 = local3637;
                local4185 = local3638;
                local4186 = local3639;
                local4187 = local3640;
                local4188 = local3641;
                local4189 = local3642;
                local4190 = local3643;
                local4191 = local3644;
                local4192 = local3645;
                local4193 = local3646;
            } else {
                local3239 = *(unsigned short*)(local28 - 42);
                local3238 = 0;
                local3237 = local3081;
                local3236 = local3230;
                local3082 = __imp_memset(local3081, 0, *(unsigned short*)(local28 - 42)); /* Warning: also results in local4661 */
                local3233 = 0;
                local3232 = local28 - 20;
                local3231 = local3230 - 0x84c9;
                (*local4662)(local3130, local3129, local3128, local3127, local3126, local3125, local3124, local3123, local3122, local3121, local3120, local3119, local3118, local3117, local3116, local3115, local3114, local3113, local3112, local3111, local3110, local3109, local3177, local3171, local3203, local3176, local3170, local3139, local3202, local3209, local3108, local3175, local3169, local3146, local3138, local3201, local3208, local3174, local3168, local3161, local3230, local3157, local3153, local3145, local3137, local3134, local3107, local3207, local3200, local3186, local3183, local3180, local3173, local3167, local3164, local3160, local3230 - 0x84c9, local3156, local3152, local3149, local3144, local3142, local3136, local3133, local3106, local3199, local3206, local3185, local3182, local3179, local3172, local3166, local3163, local3159, local28 - 20, local3155, local3151, local3148, local3143, local3141, local3135, local3132, local3188, local3190, local3192, local3194, local3196, local3198, local3205, local3211, local3184, local3181, local3178, local3197, local3165, local3162, local3158, *(unsigned short*)(local28 - 42), local3154, local3150, local3147, local3140, local3131, local3105, local3187, local3189, local3191, local3193, local3195, local3204, local3210, (unsigned short) local28 - 20, local4657, local4658, local28 - 20, local3082, local4661, local4662, local28, local4665, local4666, local3083, local3084, local3085, local3086, local3087, local3088, local3089, local3090, local3091, local3092, local3093, local3094, local3095, local3096, local3097, local3098, local3099, local3100, local3101, local3102, local3103, local3104, local3212, local3213, local3214, local3215, local3216, local3217, local3081, local3218, local3219, local3220, local3221, local3222, local3223, local3224, local3225, local3226, local3227, local3228, local3229, <all>, ADDFLAGS32(local9 - 12, 12, local9), ADDFLAGS32(local9 - 12, 12, local9));
                local4655 = (unsigned short) *(int*)(local27 - 60) + *(int*)(local27 - 42) + 18;
                local3080 = local4655;
                local3079 = local4666;
                local3078 = (local4655);
                local3077 = 1;
                local3076 = local3073;
                (*local4665)(local2973, local2972, local2971, local2970, local2969, local2968, local2967, local2966, local2965, local2964, local2963, local2962, local2961, local2960, local2959, local2958, local2957, local2956, local2955, local2954, local2953, local2952, local3020, local3014, local3046, local3019, local3013, local2982, local3045, local3052, local2951, local3018, local3012, local2989, local2981, local3044, local3051, local3026, local3017, local3004, local3011, local3000, local3073, local2996, local2988, local2980, local2977, local2950, local3050, local3043, local3029, local3025, local3023, local3016, local3010, local3007, local3003, local2999, 1, local2995, local2992, local2987, local2985, local2979, local2976, local2949, local3042, local3049, local3028, local3024, local3022, local3009, local3006, local3002, local2998, (local4655), local2994, local2991, local2986, local2984, local2978, local2975, local3031, local3033, local3035, local3037, local3039, local3041, local3048, local3054, local3027, local3021, local3015, local3040, local3008, local3005, local3001, local2997, local4666, local2993, local2990, local2983, local2974, local2948, local3030, local3032, local3034, local3036, local3038, local3047, local3053, (unsigned short) (local4655), local4657, local4658, (local4655), *(int*)(local27 - 42), local4661, local4662, local27, local4665, local4666, local2926, local2927, local2928, local2929, local2930, local2931, local2932, local2933, local2934, local2935, local2936, local2937, local2938, local2939, local2940, local2941, local2942, local2943, local2944, local2945, local2946, local2947, local3055, local3056, local3057, local3058, local3059, local4655, local3060, local3061, local3062, local3063, local3064, local3065, local3066, local3067, local3068, local3069, local3070, local3071, local3072, <all>, local3074, local3075);
                local3710 = local2757;
                local3711 = local2915;
                local3712 = local7;
                local3713 = local26;
                local3714 = local2905;
                local3715 = local2766;
                local3716 = local2767;
                local3717 = local2768;
                local3718 = local2769;
                local3719 = local2781;
                local3720 = local2782;
                local3721 = local2783;
                local3722 = local2784;
                local3723 = local2785;
                local3724 = local2786;
                local3725 = local2787;
                local3726 = local2788;
                local3727 = local2789;
                local3728 = local2790;
                local3729 = local2791;
                local3730 = local2792;
                local3731 = local2793;
                local3732 = local2794;
                local3733 = local2795;
                local3734 = local2796;
                local3735 = local2797;
                local3736 = local2798;
                local3737 = local2799;
                local3738 = local2800;
                local3739 = local2801;
                local3740 = local2802;
                local3741 = local2803;
                local3742 = local2804;
                local3743 = local2805;
                local3744 = local2806;
                local3745 = local2807;
                local3746 = local2808;
                local3747 = local2809;
                local3748 = local2810;
                local3749 = local2916;
                local3750 = local2811;
                local3751 = local2812;
                local3752 = local2813;
                local3753 = local2814;
                local3754 = local2815;
                local3755 = local2816;
                local3756 = local2817;
                local3757 = local2818;
                local3758 = local2917;
                local3759 = local2819;
                local3760 = local2820;
                local3761 = local2821;
                local3762 = local2822;
                local3763 = local2823;
                local3764 = local2824;
                local3765 = local2825;
                local3766 = local2918;
                local3767 = local2919;
                local3768 = local2920;
                local3769 = local2921;
                local3770 = local2826;
                local3771 = local2827;
                local3772 = local2828;
                local3773 = local2829;
                local3774 = local2830;
                local3775 = local2831;
                local3776 = local2832;
                local3777 = local2833;
                local3778 = local2834;
                local3779 = local2835;
                local3780 = local2836;
                local3781 = local2837;
                local3782 = local2838;
                local3783 = local2839;
                local3784 = local2840;
                local3785 = local2922;
                local3786 = local2841;
                local3787 = local2842;
                local3788 = local2843;
                local3789 = local2844;
                local3790 = local2845;
                local3791 = local2846;
                local3792 = local2847;
                local3793 = local2848;
                local3794 = local2849;
                local3795 = local2923;
                local3796 = local2850;
                local3797 = local2851;
                local3798 = local2852;
                local3799 = local2853;
                local3800 = local2854;
                local3801 = local2855;
                local3802 = local2924;
                local3803 = local2856;
                local3804 = local2857;
                local3805 = local2858;
                local3806 = local2859;
                local3807 = local2860;
                local3808 = local2861;
                local3809 = local2887;
                local3810 = local2888;
                local3811 = local2889;
                local3812 = local2890;
                local3814 = local2891;
                local3815 = local2892;
                local3816 = local2893;
                local3817 = local2894;
                local3818 = local2895;
                local3819 = local2896;
                local3820 = local2897;
                local3821 = local2898;
                local3822 = local2899;
                local3823 = local2900;
                local2925 = local2757;
                local3813 = local2925;
                if (local2757 == 0) {
                    goto L19;
                } else {
                    local2914 = *(unsigned short*)(local26 - 18);
                    local2913 = 0;
                    local2912 = local2757;
                    local2911 = local2905;
                    local2758 = __imp_memset(local2757, 0, *(unsigned short*)(local26 - 18)); /* Warning: also results in local4661 */
                    local2908 = 0x1a928;
                    local2907 = local26 - 20;
                    local2906 = local2905 - 0x8503;
                    (**(int*)0x17034)(local2806, local2805, local2804, local2803, local2802, local2801, local2800, local2799, local2798, local2797, local2796, local2795, local2794, local2793, local2792, local2791, local2790, local2789, local2788, local2787, local2786, local2785, local2852, local2846, local2878, local2851, local2845, local2815, local2877, local2884, local2784, local2850, local2844, local2822, local2814, local2876, local2883, local2858, local2843, local2837, local2833, local2829, local2905, local2821, local2813, local2810, local2783, local2882, local2875, local2861, local2857, local2855, local2849, local2842, local2840, local2836, local2832, local2828, local2905 - 0x8503, local2825, local2820, local2818, local2812, local2809, local2782, local2874, local2881, local2860, local2856, local2854, local2848, local2841, local2839, local2835, local2831, local2827, local26 - 20, local2824, local2819, local2817, local2811, local2808, local2863, local2865, local2867, local2869, local2871, local2873, local2880, local2886, local2859, local2853, local2847, local2872, local2838, local2834, local2830, local2826, *(unsigned short*)(local26 - 18), local2823, local2816, local2807, local2781, local2862, local2864, local2866, local2868, local2870, local2879, local2885, (unsigned short) local26 - 20, local4657, local4658, local26 - 20, local2758, local4661, *(int*)0x17034, local26, local4665, local4666, local2759, local2760, local2761, local2762, local2763, local2764, local2765, local2766, local2767, local2768, local2769, local2770, local2771, local2772, local2773, local2774, local2775, local2776, local2777, local2778, local2779, local2780, local2887, local2888, local2889, local2890, local2757, local2891, local2892, local2893, local2894, local2895, local2896, local2897, local2898, local2899, local2900, local2901, local2902, local2903, local2904, <all>, ADDFLAGS32(local7 - 12, 12, local7), ADDFLAGS32(local7 - 12, 12, local7));
                    local2756 = *(int*)(local2601 - 56);
                    local2755 = local2601 - 20;
                    local2754 = local2751;
                    (*local4662)(local2649, local2648, local2647, local2646, local2645, local2644, local2643, local2642, local2641, local2640, local2639, local2638, local2637, local2636, local2635, local2634, local2633, local2632, local2631, local2630, local2629, local2628, local2696, local2690, local2723, local2695, local2689, local2658, local2722, local2729, local2627, local2694, local2688, local2665, local2657, local2721, local2728, local2703, local2693, local2687, local2681, local2677, local2673, local2669, local2664, local2656, local2653, local2626, local2727, local2720, local2706, local2702, local2699, local2692, local2686, local2684, local2680, local2676, local2672, local2668, local2751, local2663, local2661, local2655, local2652, local2625, local2719, local2726, local2705, local2701, local2698, local2691, local2685, local2683, local2679, local2675, local2671, local2667, local2601 - 20, local2662, local2660, local2654, local2651, local2708, local2710, local2712, local2714, local2716, local2718, local2725, local2731, local2704, local2700, local2697, local2717, local2682, local2678, local2674, local2670, local2666, *(int*)(local2601 - 56), local2659, local2650, local2624, local2707, local2709, local2711, local2713, local2715, local2724, local2730, (unsigned short) local2601 - 20, local4657, local4658, local2601 - 20, local2600, local4661, local4662, local2601, local4665, local4666, local2602, local2603, local2604, local2605, local2606, local2607, local2608, local2609, local2610, local2611, local2612, local2613, local2614, local2615, local2616, local2617, local2618, local2619, local2620, local2621, local2622, local2623, local2732, local2733, local2734, local2735, local2736, local2737, local2738, local2739, local2740, local2741, local2742, local2743, local2744, local2745, local2746, local2747, local2748, local2749, local2750, <all>, local2752, local2753);
                    local2599 = local25 - 60;
                    local2598 = local25 - 52;
                    local2596 = local2597;
                    RtlCopyUnicodeString();
                    local2593 = local4667 + 0xfff6;
                    local2592 = 0x1a91e;
                    local2591 = local25 - 52;
                    local2590 = *(int*)0x1702c;
                    (*local4662)(local2489, local2488, local2487, local2486, local2485, local2484, local2483, local2482, local2481, local2480, local2479, local2478, local2477, local2476, local2475, local2474, local2473, local2472, local2471, local2470, local2469, local2468, local2535, local2529, local2562, local2534, local2528, local2498, local2561, local2568, local2467, local2533, local2527, *(int*)0x1702c, local2497, local2560, local2567, local2542, local2532, local2520, local2516, local2512, local2508, local2526, local25 - 52, local2496, local2493, local2466, local2566, local2559, local2545, local2541, local2538, local2531, local2525, local2523, local2519, local2515, local2511, local2507, local2504, 0x1a91e, local2501, local2495, local2492, local2465, local2558, local2565, local2544, local2540, local2537, local2530, local2524, local2522, local2518, local2514, local2510, local2506, local2503, local25 - 52, local2500, local2494, local2491, local2547, local2549, local2551, local2553, local2555, local2557, local2564, local2570, local2543, local2539, local2536, local2556, local2521, local2517, local2513, local2509, local2505, local2502, local2499, local2490, local2464, local2546, local2548, local2550, local2552, local2554, local2563, local2569, (unsigned short) local25 - 52, local4657, local4658, local25 - 52, local2441, local4661, local4662, local25, local4665, local4666, local2442, local2443, local2444, local2445, local2446, local2447, local2448, local2449, local2450, local2451, local2452, local2453, local2454, local2455, local2456, local2457, local2458, local2459, local2460, local2461, local2462, local2463, local2571, local2572, local2573, local4667 + 0xfff6, local2575, local2576, local2577, local2578, local2579, local2580, local2581, local2582, local2583, local2584, local2585, local2586, local2587, local2588, local2589, <all>, ADDFLAGS16(local2574, 0xfff6, local4667 + 0xfff6), ADDFLAGS16(local2574, 0xfff6, local4667 + 0xfff6));
                    local3824 = local2435;
                    local3824 = local2435;
                    local2440 = local2278 - 4;
                    local2439 = local2278 - 52;
                    local2438 = local2421;
                    local2436 = proc3(local2278 - 4, local4662, local2278, local4665, local4666); /* Warning: also results in local4665, local4662, local3, local24, local4666 */
                    if (local2436 >= 0) {
                        if ((unsigned)*(int*)(local24 - 4) < (unsigned)local2435) {
                            local2434 = *(int*)(local24 - 4);
                            local3824 = local2434;
                        }
                    }
                    local2404 = local3824;
                    local2433 = 0;
                    local2432 = 0;
                    local2431 = local24 - 28;
                    local2430 = local2421 - 529;
                    RtlInitUnicodeString(local24 - 28, 0);
                    local4655 = (unsigned short) *(int*)(local24 - 52) + *(int*)(local24 - 42) + 18;
                    local2426 = local4655;
                    local2425 = local4666;
                    local2424 = (local4655);
                    local2423 = 1;
                    local2422 = *(int*)0x17038;
                    (*local4665)(local2325, local2324, local2323, local2322, local2321, local2320, local2319, local2318, local2317, local2316, local2315, local2314, local2313, local2312, local2311, local2310, local2309, local2308, local2307, local2306, local2305, local2304, local2368, local2362, local2394, local2367, local2361, *(int*)0x17038, local2393, local2400, local2303, local2366, local2360, local2333, 1, local2392, local2399, local2374, local2365, local2352, local2359, local2348, local2344, local2340, local2332, (local4655), local2329, local2302, local2398, local2391, local2377, local2373, local2371, local2364, local2358, local2355, local2351, local2347, local2343, local2339, local2336, local2331, local2421, local4666, local2328, local2301, local2390, local2397, local2376, local2372, local2370, local2357, local2354, local2350, local2346, local2342, local2338, local2335, local2330, local2278 - 52, local24 - 28, local2327, local2379, local2381, local2383, local2385, local2387, local2389, local2396, local2402, local2375, local2369, local2363, local2388, local2356, local2353, local2349, local2345, local2341, local2337, local2334, local2278 - 4, local2326, local2300, local2378, local2380, local2382, local2384, local2386, local2395, local2401, (unsigned short) (local4655), local4657, local4658, (local4655), *(int*)(local24 - 52), local4661, local4662, local24, local4665, local4666, local2279, local2280, local2281, local2282, local2283, local2284, local2285, 0, local2286, local2287, local2288, local2289, local2290, local2291, local2292, local2293, local2294, local2295, local2296, local2297, local2298, local2299, local2403, local4655, local2404, local2405, local2406, local2407, local2408, local2409, local2410, local2411, local2412, local2413, local2414, local2415, local2416, local2417, local2418, local2419, local2420, <all>, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
                    local3710 = local2109;
                    local3711 = local2268;
                    local3712 = local2;
                    local3713 = local3661;
                    local3714 = local2258;
                    local3715 = local2118;
                    local3716 = local2119;
                    local3717 = local2120;
                    local3718 = local2121;
                    local3719 = local2133;
                    local3720 = local2134;
                    local3721 = local2135;
                    local3722 = local2136;
                    local3723 = local2137;
                    local3724 = local2138;
                    local3725 = local2139;
                    local3726 = local2140;
                    local3727 = local2141;
                    local3728 = local2142;
                    local3729 = local2143;
                    local3730 = local2144;
                    local3731 = local2145;
                    local3732 = local2146;
                    local3733 = local2147;
                    local3734 = local2148;
                    local3735 = local2149;
                    local3736 = local2150;
                    local3737 = local2151;
                    local3738 = local2152;
                    local3739 = local2153;
                    local3740 = local2154;
                    local3741 = local2155;
                    local3742 = local2156;
                    local3743 = local2157;
                    local3744 = local2158;
                    local3745 = local2269;
                    local3746 = local2270;
                    local3747 = local2271;
                    local3748 = local2272;
                    local3749 = local2159;
                    local3750 = local2160;
                    local3751 = local2161;
                    local3752 = local2162;
                    local3753 = local2163;
                    local3754 = local2164;
                    local3755 = local2165;
                    local3756 = local2166;
                    local3757 = local2167;
                    local3758 = local2273;
                    local3759 = local2168;
                    local3760 = local2169;
                    local3761 = local2170;
                    local3762 = local2171;
                    local3763 = local2172;
                    local3764 = local2173;
                    local3765 = local2174;
                    local3766 = local2175;
                    local3767 = local2176;
                    local3768 = local2177;
                    local3769 = local2178;
                    local3770 = local2179;
                    local3771 = local2180;
                    local3772 = local2181;
                    local3773 = local2182;
                    local3774 = local2183;
                    local3775 = local2184;
                    local3776 = local2185;
                    local3777 = local2186;
                    local3778 = local2187;
                    local3779 = local2188;
                    local3780 = local2189;
                    local3781 = local2190;
                    local3782 = local2191;
                    local3783 = local2192;
                    local3784 = local2193;
                    local3785 = local2274;
                    local3786 = local2194;
                    local3787 = local2195;
                    local3788 = local2196;
                    local3789 = local2197;
                    local3790 = local2198;
                    local3791 = local2199;
                    local3792 = local2200;
                    local3793 = local2201;
                    local3794 = local2202;
                    local3795 = local2275;
                    local3796 = local2203;
                    local3797 = local2204;
                    local3798 = local2205;
                    local3799 = local2206;
                    local3800 = local2207;
                    local3801 = local2208;
                    local3802 = local2276;
                    local3803 = local2209;
                    local3804 = local2210;
                    local3805 = local2211;
                    local3806 = local2212;
                    local3807 = local2213;
                    local3808 = local2214;
                    local3810 = local2240;
                    local3811 = local2241;
                    local3812 = local2242;
                    local3813 = local2243;
                    local3814 = local2244;
                    local3815 = local2245;
                    local3816 = local2246;
                    local3817 = local2247;
                    local3818 = local2248;
                    local3819 = local2249;
                    local3820 = local2250;
                    local3821 = local2251;
                    local3822 = local2252;
                    local3823 = local2253;
                    local2277 = local2109;
                    local3809 = local2277;
                    if (local2109 == 0) {
                        goto L19;
                    } else {
                        local2267 = *(unsigned short*)(local3661 - 26);
                        local2266 = 0;
                        local2265 = local2109;
                        local2264 = local2258;
                        local2110 = __imp_memset(local2109, 0, *(unsigned short*)(local3661 - 26)); /* Warning: also results in local4661 */
                        local2261 = 0x1a928;
                        local2260 = local3661 - 28;
                        local2259 = local2258 - 0x859d;
                        (*local4662)(local2158, local2157, local2156, local2155, local2154, local2153, local2152, local2151, local2150, local2149, local2148, local2147, local2146, local2145, local2144, local2143, local2142, local2141, local2140, local2139, local2138, local2137, local2205, local2199, local2231, local2204, local2198, local2164, local2230, local2237, local2136, local2203, local2197, local2171, local2163, local2229, local2236, local2211, local2196, local2190, local2186, local2182, local2178, local2170, local2162, local2258, local2135, local2235, local2228, local2214, local2210, local2208, local2202, local2195, local2193, local2189, local2185, local2181, local2177, local2174, local2169, local2167, local2161, local2258 - 0x859d, local2134, local2227, local2234, local2213, local2209, local2207, local2201, local2194, local2192, local2188, local2184, local2180, local2176, local2173, local2168, local2166, local2160, local3661 - 28, local2216, local2218, local2220, local2222, local2224, local2226, local2233, local2239, local2212, local2206, local2200, local2225, local2191, local2187, local2183, local2179, local2175, local2172, local2165, local2159, *(unsigned short*)(local3661 - 26), local2133, local2215, local2217, local2219, local2221, local2223, local2232, local2238, (unsigned short) local3661 - 28, local4657, local4658, local3661 - 28, local2110, local4661, local4662, local3661, local4665, local4666, local2111, local2112, local2113, local2114, local2115, local2116, local2117, local2118, local2119, local2120, local2121, local2122, local2123, local2124, local2125, local2126, local2127, local2128, local2129, local2130, local2131, local2132, local2109, local2240, local2241, local2242, local2243, local2244, local2245, local2246, local2247, local2248, local2249, local2250, local2251, local2252, local2253, local2254, local2255, local2256, local2257, <all>, ADDFLAGS32(local2 - 12, 12, local2), ADDFLAGS32(local2 - 12, 12, local2));
                        local2108 = *(int*)(local1953 - 48);
                        local2107 = local1953 - 28;
                        local2106 = local2103;
                        (*local4662)(local2001, local2000, local1999, local1998, local1997, local1996, local1995, local1994, local1993, local1992, local1991, local1990, local1989, local1988, local1987, local1986, local1985, local1984, local1983, local1982, local1981, local1980, local2052, local2046, local2075, local2051, local2045, local2011, local2074, local2081, local1979, local2050, local2044, local2018, local2010, local2073, local2080, local2058, local2043, local2037, local2033, local2029, local2025, local2017, local2009, local2005, local1978, local2079, local2072, local2103, local2057, local2055, local2049, local2042, local2040, local2036, local2032, local2028, local2024, local2021, local2016, local2014, local2008, local2004, local1977, local2071, local2078, local1953 - 28, local2056, local2054, local2048, local2041, local2039, local2035, local2031, local2027, local2023, local2020, local2015, local2013, local2007, local2003, local2060, local2062, local2064, local2066, local2068, local2070, local2077, local2083, *(int*)(local1953 - 48), local2053, local2047, local2069, local2038, local2034, local2030, local2026, local2022, local2019, local2012, local2006, local2002, local1976, local2059, local2061, local2063, local2065, local2067, local2076, local2082, (unsigned short) local1953 - 28, local4657, local4658, local1953 - 28, local1952, local4661, local4662, local1953, local4665, local4666, local1954, local1955, local1956, local1957, local1958, local1959, local1960, local1961, local1962, local1963, local1964, local1965, local1966, local1967, local1968, local1969, local1970, local1971, local1972, local1973, local1974, local1975, local2084, local2085, local2086, local2087, local2088, local2089, local2090, local2091, local2092, local2093, local2094, local2095, local2096, local2097, local2098, local2099, local2100, local2101, local2102, <all>, local2104, local2105);
                        local1951 = local4666;
                        local1795 = *(int*)(local1797 - 80) * 4;
                        local1950 = local1795;
                        local1949 = 0;
                        local1948 = local1947;
                        (*local4665)(local1845, local1844, local1843, local1842, local1841, local1840, local1839, local1838, local1837, local1836, local1835, local1834, local1833, local1832, local1831, local1830, local1829, local1828, local1827, local1826, local1825, local1824, local1896, local1890, local1919, local1895, local1889, local1855, local1918, local1925, local1823, local1894, local1888, local1862, local1854, local1917, local1924, local1947, local1887, local1881, local1877, local1873, local1869, local1861, local1853, local1849, local1822, local1923, local1916, local1902, 0, local1899, local1893, local1886, local1884, local1880, local1876, local1872, local1868, local1865, local1860, local1858, local1852, local1848, local1821, local1915, local1922, local1901, local1795, local1898, local1892, local1885, local1883, local1879, local1875, local1871, local1867, local1864, local1859, local1857, local1851, local1847, local1904, local1906, local1908, local1910, local1912, local1914, local1921, local1927, local1900, local1897, local1891, local1913, local1882, local1878, local1874, local1870, local1866, local1863, local1856, local1850, local1846, local1820, local1903, local1905, local1907, local1909, local1911, local1920, local1926, (unsigned short) local1795, local4657, local4658, local1795, local1796, local4661, local4662, local1797, local4665, 0, local1798, local1799, local1800, local1801, local1802, local1803, local1804, local1805, local1806, local1807, local1808, local1809, local1810, local1811, local1812, local1813, local1814, local1815, local1816, local1817, local1818, local1819, local1928, local1929, local1930, local1931, local1932, local1933, local1934, local1935, local1936, local1937, local1938, local1939, local1940, local1941, local1942, local1943, local1944, local1945, local1946, <all>, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
                        local3825 = local1705;
                        local3826 = local34;
                        local3827 = local4666;
                        local3828 = local1789;
                        local3829 = local1790;
                        local3830 = local1524;
                        local3831 = local1525;
                        local3832 = local1706;
                        local3833 = local1707;
                        local3834 = local1538;
                        local3835 = local1708;
                        local3836 = local1709;
                        local3837 = local1710;
                        local3838 = local1711;
                        local3839 = local1712;
                        local3840 = local1713;
                        local3841 = local1714;
                        local3842 = local1715;
                        local3843 = local1716;
                        local3844 = local1717;
                        local3845 = local1718;
                        local3846 = local1719;
                        local3847 = local1720;
                        local3848 = local1721;
                        local3849 = local1722;
                        local3850 = local1723;
                        local3851 = local1724;
                        local3852 = local1725;
                        local3853 = local1726;
                        local3854 = local1727;
                        local3855 = local1728;
                        local3856 = local1729;
                        local3857 = local1730;
                        local3858 = local1731;
                        local3859 = local1732;
                        local3860 = local1564;
                        local3861 = local1733;
                        local3862 = local1734;
                        local3863 = local1735;
                        local3864 = local1736;
                        local3865 = local1737;
                        local3866 = local1570;
                        local3867 = local1738;
                        local3868 = local1739;
                        local3869 = local1740;
                        local3870 = local1574;
                        local3871 = local1741;
                        local3872 = local1742;
                        local3873 = local1743;
                        local3874 = local1744;
                        local3875 = local1578;
                        local3876 = local1745;
                        local3877 = local1746;
                        local3878 = local1581;
                        local3879 = local1747;
                        local3880 = local1748;
                        local3881 = local1584;
                        local3882 = local1749;
                        local3883 = local1750;
                        local3884 = local1751;
                        local3885 = local1588;
                        local3886 = local1752;
                        local3887 = local1753;
                        local3888 = local1754;
                        local3889 = local1592;
                        local3890 = local1755;
                        local3891 = local1756;
                        local3892 = local1757;
                        local3893 = local1596;
                        local3894 = local1758;
                        local3895 = local1759;
                        local3896 = local1760;
                        local3897 = local1600;
                        local3898 = local1761;
                        local3899 = local1762;
                        local3900 = local1763;
                        local3901 = local1764;
                        local3902 = local1765;
                        local3903 = local1605;
                        local3904 = local1766;
                        local3905 = local1767;
                        local3906 = local1768;
                        local3907 = local1769;
                        local3908 = local1770;
                        local3909 = local1771;
                        local3910 = local1772;
                        local3911 = local1773;
                        local3912 = local1774;
                        local3913 = local1775;
                        local3914 = local1776;
                        local3915 = local1777;
                        local3916 = local1778;
                        local3917 = local1779;
                        local3918 = local1780;
                        local3919 = local1781;
                        local3920 = local1782;
                        local3921 = local1623;
                        local3922 = local1783;
                        local3923 = local1784;
                        local3924 = local1646;
                        local3925 = local1647;
                        local3926 = local1648;
                        local3927 = local1649;
                        local3928 = local1650;
                        local3929 = local1651;
                        local3930 = local1652;
                        local3931 = local1653;
                        local3932 = local1654;
                        local3933 = local1655;
                        local3934 = local1656;
                        local3935 = local1785;
                        local4077 = local4655;
                        local4077 = local4655;
                        local4078 = local1514;
                        local4078 = local1514;
                        local4079 = local1791;
                        local4079 = local1791;
                        local4080 = local4662;
                        local4080 = local4662;
                        local4081 = local1705;
                        local4081 = local1705;
                        local4082 = local34;
                        local4082 = local34;
                        local4083 = local4666;
                        local4083 = local4666;
                        local4084 = local1790;
                        local4084 = local1790;
                        local4085 = local1524;
                        local4085 = local1524;
                        local4086 = local1525;
                        local4086 = local1525;
                        local4087 = local1706;
                        local4087 = local1706;
                        local4088 = local1707;
                        local4089 = local1538;
                        local4089 = local1538;
                        local4090 = local1708;
                        local4090 = local1708;
                        local4091 = local1709;
                        local4091 = local1709;
                        local4092 = local1710;
                        local4092 = local1710;
                        local4093 = local1711;
                        local4093 = local1711;
                        local4094 = local1712;
                        local4094 = local1712;
                        local4095 = local1713;
                        local4095 = local1713;
                        local4096 = local1714;
                        local4096 = local1714;
                        local4097 = local1715;
                        local4097 = local1715;
                        local4098 = local1716;
                        local4098 = local1716;
                        local4099 = local1717;
                        local4099 = local1717;
                        local4100 = local1718;
                        local4100 = local1718;
                        local4101 = local1719;
                        local4101 = local1719;
                        local4102 = local1720;
                        local4102 = local1720;
                        local4103 = local1721;
                        local4103 = local1721;
                        local4104 = local1722;
                        local4104 = local1722;
                        local4105 = local1723;
                        local4105 = local1723;
                        local4106 = local1724;
                        local4106 = local1724;
                        local4107 = local1725;
                        local4107 = local1725;
                        local4108 = local1726;
                        local4108 = local1726;
                        local4109 = local1727;
                        local4109 = local1727;
                        local4110 = local1728;
                        local4110 = local1728;
                        local4111 = local1729;
                        local4111 = local1729;
                        local4112 = local1730;
                        local4112 = local1730;
                        local4113 = local1731;
                        local4113 = local1731;
                        local4114 = local1732;
                        local4114 = local1732;
                        local4115 = local1564;
                        local4115 = local1564;
                        local4116 = local1733;
                        local4116 = local1733;
                        local4117 = local1734;
                        local4117 = local1734;
                        local4118 = local1735;
                        local4118 = local1735;
                        local4119 = local1736;
                        local4119 = local1736;
                        local4120 = local1737;
                        local4120 = local1737;
                        local4121 = local1570;
                        local4121 = local1570;
                        local4122 = local1738;
                        local4122 = local1738;
                        local4123 = local1739;
                        local4123 = local1739;
                        local4124 = local1740;
                        local4124 = local1740;
                        local4125 = local1574;
                        local4125 = local1574;
                        local4126 = local1741;
                        local4126 = local1741;
                        local4127 = local1742;
                        local4127 = local1742;
                        local4128 = local1743;
                        local4128 = local1743;
                        local4129 = local1744;
                        local4129 = local1744;
                        local4130 = local1578;
                        local4130 = local1578;
                        local4131 = local1745;
                        local4131 = local1745;
                        local4132 = local1746;
                        local4132 = local1746;
                        local4133 = local1581;
                        local4133 = local1581;
                        local4134 = local1747;
                        local4134 = local1747;
                        local4135 = local1748;
                        local4135 = local1748;
                        local4136 = local1584;
                        local4136 = local1584;
                        local4137 = local1749;
                        local4137 = local1749;
                        local4138 = local1750;
                        local4138 = local1750;
                        local4139 = local1751;
                        local4139 = local1751;
                        local4140 = local1588;
                        local4140 = local1588;
                        local4141 = local1752;
                        local4141 = local1752;
                        local4142 = local1753;
                        local4142 = local1753;
                        local4143 = local1754;
                        local4143 = local1754;
                        local4144 = local1592;
                        local4144 = local1592;
                        local4145 = local1755;
                        local4145 = local1755;
                        local4146 = local1756;
                        local4146 = local1756;
                        local4147 = local1757;
                        local4147 = local1757;
                        local4148 = local1596;
                        local4148 = local1596;
                        local4149 = local1758;
                        local4149 = local1758;
                        local4150 = local1759;
                        local4150 = local1759;
                        local4151 = local1760;
                        local4151 = local1760;
                        local4152 = local1600;
                        local4152 = local1600;
                        local4153 = local1761;
                        local4153 = local1761;
                        local4154 = local1762;
                        local4154 = local1762;
                        local4155 = local1763;
                        local4155 = local1763;
                        local4156 = local1764;
                        local4156 = local1764;
                        local4157 = local1765;
                        local4157 = local1765;
                        local4158 = local1605;
                        local4158 = local1605;
                        local4159 = local1766;
                        local4159 = local1766;
                        local4160 = local1767;
                        local4160 = local1767;
                        local4161 = local1768;
                        local4161 = local1768;
                        local4162 = local1769;
                        local4162 = local1769;
                        local4163 = local1770;
                        local4163 = local1770;
                        local4164 = local1771;
                        local4164 = local1771;
                        local4165 = local1772;
                        local4165 = local1772;
                        local4166 = local1773;
                        local4166 = local1773;
                        local4167 = local1774;
                        local4167 = local1774;
                        local4168 = local1775;
                        local4168 = local1775;
                        local4169 = local1776;
                        local4169 = local1776;
                        local4170 = local1777;
                        local4170 = local1777;
                        local4171 = local1778;
                        local4171 = local1778;
                        local4172 = local1779;
                        local4172 = local1779;
                        local4173 = local1780;
                        local4173 = local1780;
                        local4174 = local1781;
                        local4174 = local1781;
                        local4175 = local1782;
                        local4175 = local1782;
                        local4176 = local1623;
                        local4176 = local1623;
                        local4177 = local1783;
                        local4177 = local1783;
                        local4178 = local1784;
                        local4178 = local1784;
                        local4179 = local1646;
                        local4179 = local1646;
                        local4180 = local1647;
                        local4180 = local1647;
                        local4181 = local1648;
                        local4181 = local1648;
                        local4182 = local1649;
                        local4182 = local1649;
                        local4183 = local1650;
                        local4183 = local1650;
                        local4184 = local1651;
                        local4184 = local1651;
                        local4185 = local1652;
                        local4185 = local1652;
                        local4186 = local1653;
                        local4186 = local1653;
                        local4187 = local1654;
                        local4187 = local1654;
                        local4188 = local1655;
                        local4188 = local1655;
                        local4189 = local1656;
                        local4189 = local1656;
                        local4190 = local1785;
                        local4190 = local1785;
                        local4191 = local1793;
                        local4192 = local1794;
                        local1788 = local1514;
                        local3938 = local1788;
                        local4193 = local1788;
                        local4193 = local1788;
                        if (local1514 != local4666) {
                            local1787 = local4666;
                            local1786 = local4666;
                            local3936 = local1786;
                            local3937 = local1787;
                            local4191 = local1786;
                            local4192 = local1787;
                            if ((unsigned)*(int*)(local34 - 80) > (unsigned)local4666) {
                                local4665 = *(int*)0x17070;
                                do {
                                    local22 = local3825;
                                    local37 = local3826;
                                    local1516 = local3827;
                                    local1697 = local3828;
                                    local1701 = local3829;
                                    local1666 = local3830;
                                    local1667 = local3831;
                                    local1526 = local3832;
                                    local1527 = local3833;
                                    local1668 = local3834;
                                    local1539 = local3835;
                                    local1540 = local3836;
                                    local1541 = local3837;
                                    local1542 = local3838;
                                    local1543 = local3839;
                                    local1544 = local3840;
                                    local1545 = local3841;
                                    local1546 = local3842;
                                    local1547 = local3843;
                                    local1548 = local3844;
                                    local1549 = local3845;
                                    local1550 = local3846;
                                    local1551 = local3847;
                                    local1552 = local3848;
                                    local1553 = local3849;
                                    local1554 = local3850;
                                    local1555 = local3851;
                                    local1556 = local3852;
                                    local1557 = local3853;
                                    local1558 = local3854;
                                    local1559 = local3855;
                                    local1560 = local3856;
                                    local1561 = local3857;
                                    local1562 = local3858;
                                    local1563 = local3859;
                                    local1669 = local3860;
                                    local1565 = local3861;
                                    local1566 = local3862;
                                    local1567 = local3863;
                                    local1568 = local3864;
                                    local1569 = local3865;
                                    local1670 = local3866;
                                    local1571 = local3867;
                                    local1572 = local3868;
                                    local1573 = local3869;
                                    local1671 = local3870;
                                    local1575 = local3871;
                                    local1576 = local3872;
                                    local1672 = local3873;
                                    local1577 = local3874;
                                    local1673 = local3875;
                                    local1579 = local3876;
                                    local1580 = local3877;
                                    local1674 = local3878;
                                    local1582 = local3879;
                                    local1583 = local3880;
                                    local1675 = local3881;
                                    local1585 = local3882;
                                    local1586 = local3883;
                                    local1587 = local3884;
                                    local1676 = local3885;
                                    local1589 = local3886;
                                    local1590 = local3887;
                                    local1591 = local3888;
                                    local1677 = local3889;
                                    local1593 = local3890;
                                    local1594 = local3891;
                                    local1595 = local3892;
                                    local1678 = local3893;
                                    local1597 = local3894;
                                    local1598 = local3895;
                                    local1599 = local3896;
                                    local1679 = local3897;
                                    local1601 = local3898;
                                    local1602 = local3899;
                                    local1680 = local3900;
                                    local1603 = local3901;
                                    local1604 = local3902;
                                    local1681 = local3903;
                                    local1606 = local3904;
                                    local1607 = local3905;
                                    local1608 = local3906;
                                    local1609 = local3907;
                                    local1610 = local3908;
                                    local1611 = local3909;
                                    local1612 = local3910;
                                    local1613 = local3911;
                                    local1614 = local3912;
                                    local1615 = local3913;
                                    local1616 = local3914;
                                    local1617 = local3915;
                                    local1618 = local3916;
                                    local1619 = local3917;
                                    local1620 = local3918;
                                    local1621 = local3919;
                                    local1622 = local3920;
                                    local1682 = local3921;
                                    local1624 = local3922;
                                    local1625 = local3923;
                                    local1683 = local3924;
                                    local1684 = local3925;
                                    local1685 = local3926;
                                    local1686 = local3927;
                                    local1687 = local3928;
                                    local1688 = local3929;
                                    local1689 = local3930;
                                    local1690 = local3931;
                                    local1691 = local3932;
                                    local1692 = local3933;
                                    local1693 = local3934;
                                    local1657 = local3935;
                                    local1694 = local3936;
                                    local1695 = local3937;
                                    local1696 = local3938;
                                    local1704 = local37 - 44;
                                    local1703 = 10;
                                    local1702 = *(int*)(local37 - 4);
                                    local1700 = local1701;
                                    local1698 = *(int*)0x1706c;
                                    local1513 = RtlIntegerToUnicodeString(*(int*)(local37 - 4), 10, local37 - 44);
                                    local3962 = local1515;
                                    local3963 = local1665;
                                    local3964 = local37;
                                    local3965 = local1516;
                                    local3966 = local1697;
                                    local3967 = local1698;
                                    local3968 = local1666;
                                    local3969 = local1667;
                                    local3970 = local1526;
                                    local3971 = local1527;
                                    local3972 = local1668;
                                    local3973 = local1539;
                                    local3974 = local1540;
                                    local3975 = local1541;
                                    local3976 = local1542;
                                    local3977 = local1543;
                                    local3978 = local1544;
                                    local3979 = local1545;
                                    local3980 = local1546;
                                    local3981 = local1547;
                                    local3982 = local1548;
                                    local3983 = local1549;
                                    local3984 = local1550;
                                    local3985 = local1551;
                                    local3986 = local1552;
                                    local3987 = local1553;
                                    local3988 = local1554;
                                    local3989 = local1555;
                                    local3990 = local1556;
                                    local3991 = local1557;
                                    local3992 = local1558;
                                    local3993 = local1559;
                                    local3994 = local1560;
                                    local3995 = local1561;
                                    local3996 = local1562;
                                    local3997 = local1563;
                                    local3998 = local1669;
                                    local3999 = local1565;
                                    local4000 = local1566;
                                    local4001 = local1567;
                                    local4002 = local1568;
                                    local4003 = local1569;
                                    local4004 = local1670;
                                    local4005 = local1571;
                                    local4006 = local1572;
                                    local4007 = local1573;
                                    local4008 = local1671;
                                    local4009 = local1575;
                                    local4010 = local1576;
                                    local4011 = local1672;
                                    local4012 = local1577;
                                    local4013 = local1673;
                                    local4014 = local1579;
                                    local4015 = local1580;
                                    local4016 = local1674;
                                    local4017 = local1582;
                                    local4018 = local1583;
                                    local4019 = local1675;
                                    local4020 = local1585;
                                    local4021 = local1586;
                                    local4022 = local1587;
                                    local4023 = local1676;
                                    local4024 = local1589;
                                    local4025 = local1590;
                                    local4026 = local1591;
                                    local4027 = local1677;
                                    local4028 = local1593;
                                    local4029 = local1594;
                                    local4030 = local1595;
                                    local4031 = local1678;
                                    local4032 = local1597;
                                    local4033 = local1598;
                                    local4034 = local1599;
                                    local4035 = local1679;
                                    local4036 = local1601;
                                    local4037 = local1602;
                                    local4038 = local1680;
                                    local4039 = local1603;
                                    local4040 = local1604;
                                    local4041 = local1681;
                                    local4042 = local1606;
                                    local4043 = local1607;
                                    local4044 = local1608;
                                    local4045 = local1609;
                                    local4046 = local1610;
                                    local4047 = local1611;
                                    local4048 = local1612;
                                    local4049 = local1613;
                                    local4050 = local1614;
                                    local4051 = local1615;
                                    local4052 = local1616;
                                    local4053 = local1617;
                                    local4054 = local1618;
                                    local4055 = local1619;
                                    local4056 = local1620;
                                    local4057 = local1621;
                                    local4058 = local1622;
                                    local4059 = local1682;
                                    local4060 = local1624;
                                    local4061 = local1625;
                                    local4062 = local1683;
                                    local4063 = local1684;
                                    local4064 = local1685;
                                    local4065 = local1686;
                                    local4066 = local1687;
                                    local4067 = local1688;
                                    local4068 = local1689;
                                    local4069 = local1690;
                                    local4070 = local1691;
                                    local4071 = local1692;
                                    local4072 = local1693;
                                    local4073 = local1657;
                                    local4074 = local1694;
                                    local4075 = local1695;
                                    local4076 = local1696;
                                    local1699 = local1513;
                                    if (local1513 >= local1516) {
                                        local1664 = local37 - 44;
                                        local1663 = local37 - 20;
                                        local1662 = *(int*)0x1706c;
                                        (*local4665)(local1563, local1562, local1561, local1560, local1559, local1558, local1557, local1556, local1555, local1554, local1553, local1552, local1551, local1550, local1549, local1548, local1547, local1546, local1545, local1544, local1543, local1542, local1615, local1608, local1642, local1614, local1607, local1573, local1641, *(int*)0x1706c, local1541, local1613, local1606, local1580, local1572, local1640, local37 - 20, local1622, local1612, local1605, local1599, local1595, local1591, local1587, local1579, local1571, local1567, local1540, local1643, local1639, local1625, local1621, local1618, local1611, local1604, local1602, local1598, local1594, local1590, local1586, local1583, local1578, local1576, local1570, local1566, local1539, local1638, *(int*)(local37 - 4), local1624, local1620, local1617, local1610, local1603, local1601, local1597, local1593, local1589, local1585, local1582, local1577, local1575, local1569, local1565, local1627, local1629, local1631, local1633, local1635, local1637, 10, local1645, local1623, local1616, local1609, local1636, local1600, local1596, local1592, local1588, local1584, local1581, local1574, local1568, local1564, local1538, local1619, local1626, local1628, local1630, local1632, local1634, local37 - 44, local1644, (unsigned short) local37 - 20, local4657, local4658, local37 - 20, local1515, local4661, local4662, local37, local4665, local1516, local1517, local1518, local1519, local1520, local1521, local1522, local1523, local1524, local1525, local1526, local1527, local1528, local1513, local1529, local1530, local1531, local1532, local1533, local1534, local1535, local1536, local1537, local1646, local1647, local1648, local1649, local1650, local1651, local1652, local1653, local1654, local1655, local1656, local1657, local4666, local4666, local1514, local1658, local1659, local1660, local1661, <all>, SUBFLAGS32(local1513, local1516, local1513 - local1516), (unsigned)local1513 < (unsigned)local1516);
                                        local1512 = local1360 - 44;
                                        local1511 = local1360 - 28;
                                        local1510 = local1509;
                                        (*local4665)(local1408, local1407, local1406, local1405, local1404, local1403, local1402, local1401, local1400, local1399, local1398, local1397, local1396, local1395, local1394, local1393, local1392, local1391, local1390, local1389, local1388, local1387, local1458, local1452, local1481, local1457, local1451, local1417, local1480, local1487, local1386, local1456, local1450, local1424, local1416, local1479, local1486, local1461, local1455, local1449, local1443, local1439, local1435, local1431, local1423, local1415, local1412, local1385, local1485, local1478, local1464, local1460, local1509, local1454, local1448, local1446, local1442, local1438, local1434, local1430, local1427, local1422, local1420, local1414, local1411, local1384, local1477, local1484, local1463, local1459, local1360 - 28, local1453, local1447, local1445, local1441, local1437, local1433, local1429, local1426, local1421, local1419, local1413, local1410, local1466, local1468, local1470, local1472, local1474, local1476, local1483, local1489, local1462, local1360 - 44, local1475, local1444, local1440, local1436, local1432, local1428, local1425, local1418, local1409, local1383, local1465, local1467, local1469, local1471, local1473, local1482, local1488, (unsigned short) local1360 - 28, local4657, local4658, local1360 - 28, local1359, local4661, local4662, local1360, local4665, local3709, local1361, local1362, local1363, local1364, local1365, local1366, local1367, local1368, local1369, local1370, local1371, local1372, local1373, local1374, local1375, local1376, local1377, local1378, local1379, local1380, local1381, local1382, local1490, local1491, local1492, local1493, local1494, local1495, local1496, local1497, local1498, local1499, local1500, local1501, local1502, local1503, local1504, local1505, local1506, local1507, local1508, <all>, flags, NF);
                                        local3939 = local1348;
                                        local3940 = local1349;
                                        local3941 = local13;
                                        local3942 = local33;
                                        local3943 = local3707;
                                        local3944 = local1347;
                                        local3945 = local1350;
                                        local3946 = local1351;
                                        local3947 = local1352;
                                        local3948 = local1353;
                                        local3949 = local1354;
                                        local3950 = local1355;
                                        local3951 = local1356;
                                        local3952 = local1357;
                                        local3953 = local1358;
                                        local3966 = local4668;
                                        local3968 = local1187;
                                        local3968 = local1187;
                                        local3969 = local1188;
                                        local3969 = local1188;
                                        local3971 = local1190;
                                        local3971 = local1190;
                                        local3972 = local1191;
                                        local3972 = local1191;
                                        local3973 = local1192;
                                        local3973 = local1192;
                                        local3974 = local1193;
                                        local3974 = local1193;
                                        local3975 = local1194;
                                        local3975 = local1194;
                                        local3976 = local1195;
                                        local3976 = local1195;
                                        local3977 = local1196;
                                        local3977 = local1196;
                                        local3978 = local1197;
                                        local3978 = local1197;
                                        local3979 = local1198;
                                        local3979 = local1198;
                                        local3980 = local1199;
                                        local3980 = local1199;
                                        local3981 = local1200;
                                        local3981 = local1200;
                                        local3982 = local1201;
                                        local3982 = local1201;
                                        local3983 = local1202;
                                        local3983 = local1202;
                                        local3984 = local1203;
                                        local3984 = local1203;
                                        local3985 = local1204;
                                        local3985 = local1204;
                                        local3986 = local1205;
                                        local3986 = local1205;
                                        local3987 = local1206;
                                        local3987 = local1206;
                                        local3988 = local1207;
                                        local3988 = local1207;
                                        local3989 = local1208;
                                        local3989 = local1208;
                                        local3990 = local1209;
                                        local3990 = local1209;
                                        local3991 = local1210;
                                        local3991 = local1210;
                                        local3992 = local1211;
                                        local3992 = local1211;
                                        local3993 = local1212;
                                        local3993 = local1212;
                                        local3994 = local1213;
                                        local3994 = local1213;
                                        local3995 = local1214;
                                        local3995 = local1214;
                                        local3996 = local1215;
                                        local3996 = local1215;
                                        local3997 = local1216;
                                        local3997 = local1216;
                                        local3998 = local1217;
                                        local3998 = local1217;
                                        local3999 = local1218;
                                        local3999 = local1218;
                                        local4000 = local1219;
                                        local4000 = local1219;
                                        local4001 = local1220;
                                        local4001 = local1220;
                                        local4002 = local1221;
                                        local4002 = local1221;
                                        local4003 = local1222;
                                        local4003 = local1222;
                                        local4004 = local1223;
                                        local4004 = local1223;
                                        local4005 = local1224;
                                        local4005 = local1224;
                                        local4006 = local1225;
                                        local4006 = local1225;
                                        local4007 = local1226;
                                        local4007 = local1226;
                                        local4008 = local1227;
                                        local4008 = local1227;
                                        local4009 = local1228;
                                        local4009 = local1228;
                                        local4010 = local1229;
                                        local4010 = local1229;
                                        local4011 = local1230;
                                        local4011 = local1230;
                                        local4012 = local1231;
                                        local4012 = local1231;
                                        local4013 = local1232;
                                        local4013 = local1232;
                                        local4014 = local1233;
                                        local4014 = local1233;
                                        local4015 = local1234;
                                        local4015 = local1234;
                                        local4016 = local1235;
                                        local4016 = local1235;
                                        local4017 = local1236;
                                        local4017 = local1236;
                                        local4018 = local1237;
                                        local4018 = local1237;
                                        local4019 = local1238;
                                        local4019 = local1238;
                                        local4020 = local1239;
                                        local4020 = local1239;
                                        local4021 = local1240;
                                        local4021 = local1240;
                                        local4022 = local1241;
                                        local4022 = local1241;
                                        local4023 = local1242;
                                        local4023 = local1242;
                                        local4024 = local1243;
                                        local4024 = local1243;
                                        local4025 = local1244;
                                        local4025 = local1244;
                                        local4026 = local1245;
                                        local4026 = local1245;
                                        local4027 = local1246;
                                        local4027 = local1246;
                                        local4028 = local1247;
                                        local4028 = local1247;
                                        local4029 = local1248;
                                        local4029 = local1248;
                                        local4030 = local1249;
                                        local4030 = local1249;
                                        local4031 = local1250;
                                        local4031 = local1250;
                                        local4032 = local1251;
                                        local4032 = local1251;
                                        local4033 = local1252;
                                        local4033 = local1252;
                                        local4034 = local1253;
                                        local4034 = local1253;
                                        local4035 = local1254;
                                        local4035 = local1254;
                                        local4036 = local1255;
                                        local4036 = local1255;
                                        local4037 = local1256;
                                        local4037 = local1256;
                                        local4038 = local1257;
                                        local4038 = local1257;
                                        local4039 = local1258;
                                        local4039 = local1258;
                                        local4040 = local1259;
                                        local4040 = local1259;
                                        local4041 = local1260;
                                        local4041 = local1260;
                                        local4042 = local1261;
                                        local4042 = local1261;
                                        local4043 = local1262;
                                        local4043 = local1262;
                                        local4044 = local1263;
                                        local4044 = local1263;
                                        local4052 = local1271;
                                        local4052 = local1271;
                                        local4053 = local1272;
                                        local4053 = local1272;
                                        local4054 = local1273;
                                        local4054 = local1273;
                                        local4055 = local1274;
                                        local4055 = local1274;
                                        local4056 = local1275;
                                        local4056 = local1275;
                                        local4057 = local1276;
                                        local4057 = local1276;
                                        local4058 = local1277;
                                        local4058 = local1277;
                                        local4059 = local1278;
                                        local4059 = local1278;
                                        local4060 = local1279;
                                        local4060 = local1279;
                                        local4061 = local1280;
                                        local4061 = local1280;
                                        local4062 = local1281;
                                        local4062 = local1281;
                                        local4063 = local1282;
                                        local4063 = local1282;
                                        local4064 = local1283;
                                        local4064 = local1283;
                                        local4065 = local1284;
                                        local4065 = local1284;
                                        local4066 = local1285;
                                        local4066 = local1285;
                                        local4067 = local1286;
                                        local4067 = local1286;
                                        local4068 = local1287;
                                        local4068 = local1287;
                                        local4069 = local1288;
                                        local4069 = local1288;
                                        local4070 = local1289;
                                        local4070 = local1289;
                                        local4071 = local1290;
                                        local4071 = local1290;
                                        local4072 = local1291;
                                        local4072 = local1291;
                                        local4074 = local1293;
                                        local4074 = local1293;
                                        local4075 = local1294;
                                        local4075 = local1294;
                                        local4076 = local1295;
                                        local4076 = local1295;
                                        local4085 = local1187;
                                        local4085 = local1187;
                                        local4086 = local1188;
                                        local4086 = local1188;
                                        local4088 = local1190;
                                        local4088 = local1190;
                                        local4089 = local1191;
                                        local4089 = local1191;
                                        local4090 = local1192;
                                        local4090 = local1192;
                                        local4091 = local1193;
                                        local4091 = local1193;
                                        local4092 = local1194;
                                        local4092 = local1194;
                                        local4093 = local1195;
                                        local4093 = local1195;
                                        local4094 = local1196;
                                        local4094 = local1196;
                                        local4095 = local1197;
                                        local4095 = local1197;
                                        local4096 = local1198;
                                        local4096 = local1198;
                                        local4097 = local1199;
                                        local4097 = local1199;
                                        local4098 = local1200;
                                        local4098 = local1200;
                                        local4099 = local1201;
                                        local4099 = local1201;
                                        local4100 = local1202;
                                        local4100 = local1202;
                                        local4101 = local1203;
                                        local4101 = local1203;
                                        local4102 = local1204;
                                        local4102 = local1204;
                                        local4103 = local1205;
                                        local4103 = local1205;
                                        local4104 = local1206;
                                        local4104 = local1206;
                                        local4105 = local1207;
                                        local4105 = local1207;
                                        local4106 = local1208;
                                        local4106 = local1208;
                                        local4107 = local1209;
                                        local4107 = local1209;
                                        local4108 = local1210;
                                        local4108 = local1210;
                                        local4109 = local1211;
                                        local4109 = local1211;
                                        local4110 = local1212;
                                        local4110 = local1212;
                                        local4111 = local1213;
                                        local4111 = local1213;
                                        local4112 = local1214;
                                        local4112 = local1214;
                                        local4113 = local1215;
                                        local4113 = local1215;
                                        local4114 = local1216;
                                        local4114 = local1216;
                                        local4115 = local1217;
                                        local4115 = local1217;
                                        local4116 = local1218;
                                        local4116 = local1218;
                                        local4117 = local1219;
                                        local4117 = local1219;
                                        local4118 = local1220;
                                        local4118 = local1220;
                                        local4119 = local1221;
                                        local4119 = local1221;
                                        local4120 = local1222;
                                        local4120 = local1222;
                                        local4121 = local1223;
                                        local4121 = local1223;
                                        local4122 = local1224;
                                        local4122 = local1224;
                                        local4123 = local1225;
                                        local4123 = local1225;
                                        local4124 = local1226;
                                        local4124 = local1226;
                                        local4125 = local1227;
                                        local4125 = local1227;
                                        local4126 = local1228;
                                        local4126 = local1228;
                                        local4127 = local1229;
                                        local4127 = local1229;
                                        local4128 = local1230;
                                        local4128 = local1230;
                                        local4129 = local1231;
                                        local4129 = local1231;
                                        local4130 = local1232;
                                        local4130 = local1232;
                                        local4131 = local1233;
                                        local4131 = local1233;
                                        local4132 = local1234;
                                        local4132 = local1234;
                                        local4133 = local1235;
                                        local4133 = local1235;
                                        local4134 = local1236;
                                        local4134 = local1236;
                                        local4135 = local1237;
                                        local4135 = local1237;
                                        local4136 = local1238;
                                        local4136 = local1238;
                                        local4137 = local1239;
                                        local4137 = local1239;
                                        local4138 = local1240;
                                        local4138 = local1240;
                                        local4139 = local1241;
                                        local4139 = local1241;
                                        local4140 = local1242;
                                        local4140 = local1242;
                                        local4141 = local1243;
                                        local4141 = local1243;
                                        local4142 = local1244;
                                        local4142 = local1244;
                                        local4143 = local1245;
                                        local4143 = local1245;
                                        local4144 = local1246;
                                        local4144 = local1246;
                                        local4145 = local1247;
                                        local4145 = local1247;
                                        local4146 = local1248;
                                        local4146 = local1248;
                                        local4147 = local1249;
                                        local4147 = local1249;
                                        local4148 = local1250;
                                        local4148 = local1250;
                                        local4149 = local1251;
                                        local4149 = local1251;
                                        local4150 = local1252;
                                        local4150 = local1252;
                                        local4151 = local1253;
                                        local4151 = local1253;
                                        local4152 = local1254;
                                        local4152 = local1254;
                                        local4153 = local1255;
                                        local4153 = local1255;
                                        local4154 = local1256;
                                        local4154 = local1256;
                                        local4155 = local1257;
                                        local4155 = local1257;
                                        local4156 = local1258;
                                        local4156 = local1258;
                                        local4157 = local1259;
                                        local4157 = local1259;
                                        local4158 = local1260;
                                        local4158 = local1260;
                                        local4159 = local1261;
                                        local4159 = local1261;
                                        local4160 = local1262;
                                        local4160 = local1262;
                                        local4161 = local1263;
                                        local4161 = local1263;
                                        local4169 = local1271;
                                        local4169 = local1271;
                                        local4170 = local1272;
                                        local4170 = local1272;
                                        local4171 = local1273;
                                        local4171 = local1273;
                                        local4172 = local1274;
                                        local4172 = local1274;
                                        local4173 = local1275;
                                        local4173 = local1275;
                                        local4174 = local1276;
                                        local4174 = local1276;
                                        local4175 = local1277;
                                        local4175 = local1277;
                                        local4176 = local1278;
                                        local4176 = local1278;
                                        local4177 = local1279;
                                        local4177 = local1279;
                                        local4178 = local1280;
                                        local4178 = local1280;
                                        local4179 = local1281;
                                        local4179 = local1281;
                                        local4180 = local1282;
                                        local4180 = local1282;
                                        local4181 = local1283;
                                        local4181 = local1283;
                                        local4182 = local1284;
                                        local4182 = local1284;
                                        local4183 = local1285;
                                        local4183 = local1285;
                                        local4184 = local1286;
                                        local4184 = local1286;
                                        local4185 = local1287;
                                        local4185 = local1287;
                                        local4186 = local1288;
                                        local4186 = local1288;
                                        local4187 = local1289;
                                        local4187 = local1289;
                                        local4188 = local1290;
                                        local4188 = local1290;
                                        local4189 = local1291;
                                        local4189 = local1291;
                                        local4191 = local1293;
                                        local4191 = local1293;
                                        local4192 = local1294;
                                        local4192 = local1294;
                                        local4193 = local1295;
                                        local4193 = local1295;
                                        if (*(int*)(local33 - 76) != local3707) {
L32:
                                            local1338 = local33 - 8;
                                            local1339 = local33 - 60;
                                            local1340 = local33 - 20;
                                            local1341 = local33 - 36;
                                            local4655 = (unsigned short) local33 - 132;
                                            local1342 = local33 - 132;
                                            local1343 = *(int*)(local33 + 8);
                                            local1345 = local3707;
                                            local1344 = local1347;
                                            local1346 = local1347 - 1017;
                                            local1334 = proc4(*(int*)(local33 + 8), local33 - 132, local33 - 20, local33 - 8, local4657, local4658, local4662, local33, local4665, local3707); /* Warning: also results in local4665, local4658, local1335, local4661, local4662, local1336, local32, local3708 */
                                            local3939 = local1334;
                                            local3940 = local1335;
                                            local3941 = local1336;
                                            local3942 = local32;
                                            local3943 = local3708;
                                            local3944 = local1346;
                                            local3946 = local1338;
                                            local3947 = local1339;
                                            local3948 = local1340;
                                            local3949 = local1341;
                                            local3950 = local1342;
                                            local3951 = local1343;
                                            local3952 = local1344;
                                            local3953 = local1345;
                                            local1337 = local1334;
                                            local3945 = local1337;
                                        } else {
                                            if (local1358 == local3707) {
                                                goto L32;
                                            }
                                        }
                                        local1331 = local3939;
                                        local1332 = local3940;
                                        local21 = local3941;
                                        local38 = local3942;
                                        local3706 = local3943;
                                        local1309 = local3944;
                                        local1189 = local3945;
                                        local1264 = local3946;
                                        local1265 = local3947;
                                        local1266 = local3948;
                                        local1267 = local3949;
                                        local1268 = local3950;
                                        local1269 = local3951;
                                        local1270 = local3952;
                                        local1292 = local3953;
                                        local3958 = local1331;
                                        local3959 = local1332;
                                        local3960 = local3706;
                                        local3961 = local1309;
                                        local3964 = local38;
                                        local3964 = local38;
                                        local3970 = local1189;
                                        local3970 = local1189;
                                        local4045 = local1264;
                                        local4045 = local1264;
                                        local4046 = local1265;
                                        local4046 = local1265;
                                        local4047 = local1266;
                                        local4047 = local1266;
                                        local4048 = local1267;
                                        local4048 = local1267;
                                        local4049 = local1268;
                                        local4049 = local1268;
                                        local4050 = local1269;
                                        local4050 = local1269;
                                        local4051 = local1270;
                                        local4051 = local1270;
                                        local4073 = local1292;
                                        local4073 = local1292;
                                        local4082 = local38;
                                        local4082 = local38;
                                        local4087 = local1189;
                                        local4087 = local1189;
                                        local4162 = local1264;
                                        local4162 = local1264;
                                        local4163 = local1265;
                                        local4163 = local1265;
                                        local4164 = local1266;
                                        local4164 = local1266;
                                        local4165 = local1267;
                                        local4165 = local1267;
                                        local4166 = local1268;
                                        local4166 = local1268;
                                        local4167 = local1269;
                                        local4167 = local1269;
                                        local4168 = local1270;
                                        local4168 = local1270;
                                        local4190 = local1292;
                                        local4190 = local1292;
                                        if (local1333 < local3706) {
L21:
                                            local1184 = local3958;
                                            local1185 = local3959;
                                            local1186 = local21;
                                            local3703 = local3960;
                                            local1296 = local3961;
                                            local3962 = local1185;
                                            local3963 = local1186;
                                            local3965 = local3703;
                                            local3967 = local1296;
                                            local4077 = local4655;
                                            local4078 = local1184;
                                            local4079 = local1185;
                                            local4080 = local4662;
                                            local4081 = local1186;
                                            local4083 = local3703;
                                            local4084 = local1296;
                                            if (*(int*)(local38 - 76) == local3703) {
                                                goto L20;
                                            }
                                            goto L18;
                                        }
                                        local1330 = *(int*)(local38 - 4);
                                        local4655 = (unsigned short) local38 - 28;
                                        local1329 = local38 - 28;
                                        local1328 = *(int*)(local38 - 8);
                                        local1327 = local1309;
                                        local1319 = local1309 - 1208;
                                        local1322 = proc5(*(int*)(local21 - 12), *(int*)(local21 - 8), *(int*)(local21 - 4), local4662); /* Warning: also results in local4665, local4657, local1317, local4661, local4662, local1318, local3704 */
                                        local3954 = local1317;
                                        local3955 = local1318;
                                        local3956 = local3704;
                                        local3957 = local1319;
                                        local3958 = local1322;
                                        local3959 = local1317;
                                        local3960 = local3704;
                                        local3961 = local1319;
                                        local4080 = local4662;
                                        local4083 = local3704;
                                        local1323 = local1322;
                                        if (local1322 < local3704) {
                                            goto L21;
                                        }
                                        local1320 = local1321 + 1;
                                        if (*(int*)(local38 - 76) == local3704) {
                                            local4667 = local1320 - 1;
                                            if (local1320 == 1) {
L25:
                                                local1316 = *(unsigned short*)(local38 - 36);
                                                local4655 = (unsigned short) local1316 + 2;
                                                local1315 = local1316 + 2;
                                                local1314 = *(int*)(local38 - 32);
                                                local1313 = 1;
                                                local1312 = *(int*)(local38 - 16);
                                                local1311 = *(int*)(local38 - 56);
                                                local1310 = 4;
                                                local1308 = local1309 - 1208;
                                                local1305 = *(int*)0x17068;
                                                RtlWriteRegistryValue();
                                                local3954 = local1303;
                                                local3955 = local1304;
                                                local3957 = local1305;
                                                local4077 = local4655;
                                                local4078 = local1306;
                                                local4079 = local1303;
                                                local4081 = local1304;
                                                local4084 = local1305;
                                                local4667 = local1306 - local3704;
                                                local1307 = local1306;
                                                if (local1306 < local3704) {
                                                    break;
                                                }
                                                local3705 = 0;
                                                local3956 = local3705;
L22:
                                                local1297 = local3954;
                                                local1298 = local3955;
                                                local3701 = local3956;
                                                local1299 = local3957;
                                                local1302 = local4667 - *(int*)(local38 - 44);
                                                local3702 = local1301;
                                                local1300 = local4667 - *(int*)(local38 - 44);
                                                local3962 = local1297;
                                                local3963 = local1298;
                                                local3965 = local3701;
                                                local3966 = local3702;
                                                local3967 = local1299;
                                                goto L20;
                                            }
                                            goto L22;
                                        }
                                        goto L25;
                                    }
L20:
                                    local1070 = local3962;
                                    local1071 = local3963;
                                    local39 = local3964;
                                    local3699 = local3965;
                                    local3700 = local3966;
                                    local1181 = local3967;
                                    local1072 = local3968;
                                    local1073 = local3969;
                                    local1074 = local3970;
                                    local1075 = local3971;
                                    local1076 = local3972;
                                    local1077 = local3973;
                                    local1078 = local3974;
                                    local1079 = local3975;
                                    local1080 = local3976;
                                    local1081 = local3977;
                                    local1082 = local3978;
                                    local1083 = local3979;
                                    local1084 = local3980;
                                    local1085 = local3981;
                                    local1086 = local3982;
                                    local1087 = local3983;
                                    local1088 = local3984;
                                    local1089 = local3985;
                                    local1090 = local3986;
                                    local1091 = local3987;
                                    local1092 = local3988;
                                    local1093 = local3989;
                                    local1094 = local3990;
                                    local1095 = local3991;
                                    local1096 = local3992;
                                    local1097 = local3993;
                                    local1098 = local3994;
                                    local1099 = local3995;
                                    local1100 = local3996;
                                    local1101 = local3997;
                                    local1102 = local3998;
                                    local1103 = local3999;
                                    local1104 = local4000;
                                    local1105 = local4001;
                                    local1106 = local4002;
                                    local1107 = local4003;
                                    local1108 = local4004;
                                    local1109 = local4005;
                                    local1110 = local4006;
                                    local1111 = local4007;
                                    local1112 = local4008;
                                    local1113 = local4009;
                                    local1114 = local4010;
                                    local1115 = local4011;
                                    local1116 = local4012;
                                    local1117 = local4013;
                                    local1118 = local4014;
                                    local1119 = local4015;
                                    local1120 = local4016;
                                    local1121 = local4017;
                                    local1122 = local4018;
                                    local1123 = local4019;
                                    local1124 = local4020;
                                    local1125 = local4021;
                                    local1126 = local4022;
                                    local1127 = local4023;
                                    local1128 = local4024;
                                    local1129 = local4025;
                                    local1130 = local4026;
                                    local1131 = local4027;
                                    local1132 = local4028;
                                    local1133 = local4029;
                                    local1134 = local4030;
                                    local1135 = local4031;
                                    local1136 = local4032;
                                    local1137 = local4033;
                                    local1138 = local4034;
                                    local1139 = local4035;
                                    local1140 = local4036;
                                    local1141 = local4037;
                                    local1142 = local4038;
                                    local1143 = local4039;
                                    local1144 = local4040;
                                    local1145 = local4041;
                                    local1146 = local4042;
                                    local1147 = local4043;
                                    local1148 = local4044;
                                    local1149 = local4045;
                                    local1150 = local4046;
                                    local1151 = local4047;
                                    local1152 = local4048;
                                    local1153 = local4049;
                                    local1154 = local4050;
                                    local1155 = local4051;
                                    local1156 = local4052;
                                    local1157 = local4053;
                                    local1158 = local4054;
                                    local1159 = local4055;
                                    local1160 = local4056;
                                    local1161 = local4057;
                                    local1162 = local4058;
                                    local1163 = local4059;
                                    local1164 = local4060;
                                    local1165 = local4061;
                                    local1166 = local4062;
                                    local1167 = local4063;
                                    local1168 = local4064;
                                    local1169 = local4065;
                                    local1170 = local4066;
                                    local1171 = local4067;
                                    local1172 = local4068;
                                    local1173 = local4069;
                                    local1174 = local4070;
                                    local1175 = local4071;
                                    local1176 = local4072;
                                    local1177 = local4073;
                                    local1178 = local4074;
                                    local1179 = local4075;
                                    local1180 = local4076;
                                    local1182 = local1183 + 1;
                                    local1069 = local1182;
                                    local4655 = (unsigned short) local1182;
                                    local3825 = local1071;
                                    local3826 = local39;
                                    local3827 = local3699;
                                    local3828 = local3700;
                                    local3829 = local1181;
                                    local3830 = local1072;
                                    local3831 = local1073;
                                    local3832 = local1074;
                                    local3833 = local1075;
                                    local3834 = local1076;
                                    local3835 = local1077;
                                    local3836 = local1078;
                                    local3837 = local1079;
                                    local3838 = local1080;
                                    local3839 = local1081;
                                    local3840 = local1082;
                                    local3841 = local1083;
                                    local3842 = local1084;
                                    local3843 = local1085;
                                    local3844 = local1086;
                                    local3845 = local1087;
                                    local3846 = local1088;
                                    local3847 = local1089;
                                    local3848 = local1090;
                                    local3849 = local1091;
                                    local3850 = local1092;
                                    local3851 = local1093;
                                    local3852 = local1094;
                                    local3853 = local1095;
                                    local3854 = local1096;
                                    local3855 = local1097;
                                    local3856 = local1098;
                                    local3857 = local1099;
                                    local3858 = local1100;
                                    local3859 = local1101;
                                    local3860 = local1102;
                                    local3861 = local1103;
                                    local3862 = local1104;
                                    local3863 = local1105;
                                    local3864 = local1106;
                                    local3865 = local1107;
                                    local3866 = local1108;
                                    local3867 = local1109;
                                    local3868 = local1110;
                                    local3869 = local1111;
                                    local3870 = local1112;
                                    local3871 = local1113;
                                    local3872 = local1114;
                                    local3873 = local1115;
                                    local3874 = local1116;
                                    local3875 = local1117;
                                    local3876 = local1118;
                                    local3877 = local1119;
                                    local3878 = local1120;
                                    local3879 = local1121;
                                    local3880 = local1122;
                                    local3881 = local1123;
                                    local3882 = local1124;
                                    local3883 = local1125;
                                    local3884 = local1126;
                                    local3885 = local1127;
                                    local3886 = local1128;
                                    local3887 = local1129;
                                    local3888 = local1130;
                                    local3889 = local1131;
                                    local3890 = local1132;
                                    local3891 = local1133;
                                    local3892 = local1134;
                                    local3893 = local1135;
                                    local3894 = local1136;
                                    local3895 = local1137;
                                    local3896 = local1138;
                                    local3897 = local1139;
                                    local3898 = local1140;
                                    local3899 = local1141;
                                    local3900 = local1142;
                                    local3901 = local1143;
                                    local3902 = local1144;
                                    local3903 = local1145;
                                    local3904 = local1146;
                                    local3905 = local1147;
                                    local3906 = local1148;
                                    local3907 = local1149;
                                    local3908 = local1150;
                                    local3909 = local1151;
                                    local3910 = local1152;
                                    local3911 = local1153;
                                    local3912 = local1154;
                                    local3913 = local1155;
                                    local3914 = local1156;
                                    local3915 = local1157;
                                    local3916 = local1158;
                                    local3917 = local1159;
                                    local3918 = local1160;
                                    local3919 = local1161;
                                    local3920 = local1162;
                                    local3921 = local1163;
                                    local3922 = local1164;
                                    local3923 = local1165;
                                    local3924 = local1166;
                                    local3925 = local1167;
                                    local3926 = local1168;
                                    local3927 = local1169;
                                    local3928 = local1170;
                                    local3929 = local1171;
                                    local3930 = local1172;
                                    local3931 = local1173;
                                    local3932 = local1174;
                                    local3933 = local1175;
                                    local3934 = local1176;
                                    local3935 = local1177;
                                    local3936 = local1178;
                                    local3937 = local1179;
                                    local3938 = local1180;
                                    local4077 = local4655;
                                    local4078 = local1069;
                                    local4079 = local1070;
                                    local4080 = local4662;
                                    local4081 = local1071;
                                    local4082 = local39;
                                    local4083 = local3699;
                                    local4084 = local1181;
                                    local4085 = local1072;
                                    local4086 = local1073;
                                    local4087 = local1074;
                                    local4088 = local1075;
                                    local4089 = local1076;
                                    local4090 = local1077;
                                    local4091 = local1078;
                                    local4092 = local1079;
                                    local4093 = local1080;
                                    local4094 = local1081;
                                    local4095 = local1082;
                                    local4096 = local1083;
                                    local4097 = local1084;
                                    local4098 = local1085;
                                    local4099 = local1086;
                                    local4100 = local1087;
                                    local4101 = local1088;
                                    local4102 = local1089;
                                    local4103 = local1090;
                                    local4104 = local1091;
                                    local4105 = local1092;
                                    local4106 = local1093;
                                    local4107 = local1094;
                                    local4108 = local1095;
                                    local4109 = local1096;
                                    local4110 = local1097;
                                    local4111 = local1098;
                                    local4112 = local1099;
                                    local4113 = local1100;
                                    local4114 = local1101;
                                    local4115 = local1102;
                                    local4116 = local1103;
                                    local4117 = local1104;
                                    local4118 = local1105;
                                    local4119 = local1106;
                                    local4120 = local1107;
                                    local4121 = local1108;
                                    local4122 = local1109;
                                    local4123 = local1110;
                                    local4124 = local1111;
                                    local4125 = local1112;
                                    local4126 = local1113;
                                    local4127 = local1114;
                                    local4128 = local1115;
                                    local4129 = local1116;
                                    local4130 = local1117;
                                    local4131 = local1118;
                                    local4132 = local1119;
                                    local4133 = local1120;
                                    local4134 = local1121;
                                    local4135 = local1122;
                                    local4136 = local1123;
                                    local4137 = local1124;
                                    local4138 = local1125;
                                    local4139 = local1126;
                                    local4140 = local1127;
                                    local4141 = local1128;
                                    local4142 = local1129;
                                    local4143 = local1130;
                                    local4144 = local1131;
                                    local4145 = local1132;
                                    local4146 = local1133;
                                    local4147 = local1134;
                                    local4148 = local1135;
                                    local4149 = local1136;
                                    local4150 = local1137;
                                    local4151 = local1138;
                                    local4152 = local1139;
                                    local4153 = local1140;
                                    local4154 = local1141;
                                    local4155 = local1142;
                                    local4156 = local1143;
                                    local4157 = local1144;
                                    local4158 = local1145;
                                    local4159 = local1146;
                                    local4160 = local1147;
                                    local4161 = local1148;
                                    local4162 = local1149;
                                    local4163 = local1150;
                                    local4164 = local1151;
                                    local4165 = local1152;
                                    local4166 = local1153;
                                    local4167 = local1154;
                                    local4168 = local1155;
                                    local4169 = local1156;
                                    local4170 = local1157;
                                    local4171 = local1158;
                                    local4172 = local1159;
                                    local4173 = local1160;
                                    local4174 = local1161;
                                    local4175 = local1162;
                                    local4176 = local1163;
                                    local4177 = local1164;
                                    local4178 = local1165;
                                    local4179 = local1166;
                                    local4180 = local1167;
                                    local4181 = local1168;
                                    local4182 = local1169;
                                    local4183 = local1170;
                                    local4184 = local1171;
                                    local4185 = local1172;
                                    local4186 = local1173;
                                    local4187 = local1174;
                                    local4188 = local1175;
                                    local4189 = local1176;
                                    local4190 = local1177;
                                    local4191 = local1178;
                                    local4192 = local1179;
                                    local4193 = local1180;
                                } while ((unsigned)local1182 < (unsigned)*(int*)(local39 - 80));
                            }
                        } else {
                            local1792 = 0xc000009a;
                            local4088 = local1792;
                        }
                    }
                }
            }
        }
    } else {
        goto L19;
    }
L18:
    local4655 = local4077;
    local954 = local4078;
    local955 = local4079;
    local4662 = local4080;
    local23 = local4081;
    local956 = local4082;
    local4666 = local4083;
    local1057 = local4084;
    local957 = local4085;
    local958 = local4086;
    local959 = local4087;
    local960 = local4088;
    local1060 = local4089;
    local961 = local4090;
    local962 = local4091;
    local963 = local4092;
    local964 = local4093;
    local965 = local4094;
    local966 = local4095;
    local967 = local4096;
    local968 = local4097;
    local969 = local4098;
    local970 = local4099;
    local971 = local4100;
    local972 = local4101;
    local973 = local4102;
    local974 = local4103;
    local975 = local4104;
    local976 = local4105;
    local977 = local4106;
    local978 = local4107;
    local1061 = local4108;
    local979 = local4109;
    local980 = local4110;
    local1062 = local4111;
    local981 = local4112;
    local982 = local4113;
    local983 = local4114;
    local984 = local4115;
    local985 = local4116;
    local986 = local4117;
    local987 = local4118;
    local1063 = local4119;
    local988 = local4120;
    local989 = local4121;
    local990 = local4122;
    local991 = local4123;
    local992 = local4124;
    local993 = local4125;
    local994 = local4126;
    local995 = local4127;
    local1064 = local4128;
    local996 = local4129;
    local997 = local4130;
    local998 = local4131;
    local999 = local4132;
    local1000 = local4133;
    local1001 = local4134;
    local1002 = local4135;
    local1003 = local4136;
    local1004 = local4137;
    local1005 = local4138;
    local1006 = local4139;
    local1007 = local4140;
    local1008 = local4141;
    local1009 = local4142;
    local1010 = local4143;
    local1011 = local4144;
    local1012 = local4145;
    local1013 = local4146;
    local1014 = local4147;
    local1015 = local4148;
    local1016 = local4149;
    local1017 = local4150;
    local1018 = local4151;
    local1019 = local4152;
    local1020 = local4153;
    local1021 = local4154;
    local1065 = local4155;
    local1022 = local4156;
    local1023 = local4157;
    local1024 = local4158;
    local1025 = local4159;
    local1026 = local4160;
    local1027 = local4161;
    local1066 = local4162;
    local1028 = local4163;
    local1029 = local4164;
    local1030 = local4165;
    local1031 = local4166;
    local1032 = local4167;
    local1033 = local4168;
    local1034 = local4169;
    local1035 = local4170;
    local1036 = local4171;
    local1037 = local4172;
    local1038 = local4173;
    local1039 = local4174;
    local1067 = local4175;
    local1040 = local4176;
    local1041 = local4177;
    local1042 = local4178;
    local1043 = local4179;
    local1044 = local4180;
    local1045 = local4181;
    local1046 = local4182;
    local1047 = local4183;
    local1048 = local4184;
    local1049 = local4185;
    local1050 = local4186;
    local1068 = local4187;
    local1051 = local4188;
    local1052 = local4189;
    local1053 = local4190;
    local1054 = local4191;
    local1055 = local4192;
    local1056 = local4193;
    local4665 = *(int*)0x17028;
    local4194 = local954;
    local4195 = local955;
    local4196 = local23;
    local4197 = local956;
    local4198 = local1057;
    local4199 = local957;
    local4200 = local958;
    local4201 = local959;
    local4202 = local960;
    local4203 = local1060;
    local4204 = local961;
    local4205 = local962;
    local4206 = local963;
    local4207 = local964;
    local4208 = local965;
    local4209 = local966;
    local4210 = local967;
    local4211 = local968;
    local4212 = local969;
    local4213 = local970;
    local4214 = local971;
    local4215 = local972;
    local4216 = local973;
    local4217 = local974;
    local4218 = local975;
    local4219 = local976;
    local4220 = local977;
    local4221 = local978;
    local4222 = local1061;
    local4223 = local979;
    local4224 = local980;
    local4225 = local1062;
    local4226 = local981;
    local4227 = local982;
    local4228 = local983;
    local4229 = local984;
    local4230 = local985;
    local4231 = local986;
    local4232 = local987;
    local4233 = local1063;
    local4234 = local988;
    local4235 = local989;
    local4236 = local990;
    local4237 = local991;
    local4238 = local992;
    local4239 = local993;
    local4240 = local994;
    local4241 = local995;
    local4242 = local1064;
    local4243 = local996;
    local4244 = local997;
    local4245 = local998;
    local4246 = local999;
    local4247 = local1000;
    local4248 = local1001;
    local4249 = local1002;
    local4250 = local1003;
    local4251 = local1004;
    local4252 = local1005;
    local4253 = local1006;
    local4254 = local1007;
    local4255 = local1008;
    local4256 = local1009;
    local4257 = local1010;
    local4258 = local1011;
    local4259 = local1012;
    local4260 = local1013;
    local4261 = local1014;
    local4262 = local1015;
    local4263 = local1016;
    local4264 = local1017;
    local4265 = local1018;
    local4266 = local1019;
    local4267 = local1020;
    local4268 = local1021;
    local4269 = local1065;
    local4270 = local1022;
    local4271 = local1023;
    local4272 = local1024;
    local4273 = local1025;
    local4274 = local1026;
    local4275 = local1027;
    local4276 = local1066;
    local4277 = local1028;
    local4278 = local1029;
    local4279 = local1030;
    local4280 = local1031;
    local4281 = local1032;
    local4282 = local1033;
    local4283 = local1034;
    local4284 = local1035;
    local4285 = local1036;
    local4286 = local1037;
    local4287 = local1038;
    local4288 = local1039;
    local4289 = local1067;
    local4290 = local1040;
    local4291 = local1041;
    local4292 = local1042;
    local4293 = local1043;
    local4294 = local1044;
    local4295 = local1045;
    local4296 = local1046;
    local4297 = local1047;
    local4298 = local1048;
    local4299 = local1049;
    local4300 = local1050;
    local4301 = local1068;
    local4302 = local1051;
    local4303 = local1052;
    local4304 = local1053;
    local4305 = local1054;
    local4306 = local1055;
    local4307 = local1056;
    if (*(int*)(local956 - 42) != 0) {
        local1059 = *(int*)(local956 - 40);
        local1058 = local1057;
        (**(int*)0x17028)(local983, local982, local981, local66, local980, local979, local978, local977, local976, local975, local974, local973, local972, local971, local970, local969, local968, local967, local966, local965, local964, local1033, local1027, *(int*)(local21 - 28), local1032, local1026, local992, *(int*)(local21 - 24), *(int*)(local22 - 24), local963, local1031, local1025, local999, local991, *(int*)(local21 - 20), *(int*)(local22 - 20), local1030, local1024, local1018, local1014, local1010, local1006, local998, local990, local987, local962, *(int*)(local22 - 16), *(int*)(local21 - 16), local1042, local1039, local1036, local1029, local1023, local1021, local1017, local1013, local1009, local1005, local1002, local997, local995, local989, local986, local961, local1326, *(int*)(local22 - 12), local1041, local1038, local1035, local1028, local1022, local1020, local1016, local1012, local1008, local1004, local1001, local996, local994, local988, local985, *(int*)(local17 - 8), *(int*)(local144 - 8), *(int*)(local18 - 8), *(int*)(local19 - 8), *(int*)(local20 - 8), local1325, *(int*)(local22 - 8), local1057, local1040, local1037, local1034, local1324, local1019, local1015, local1011, local1007, local1003, local1000, local993, local984, local45, *(int*)(local17 - 4), *(int*)(local144 - 4), *(int*)(local18 - 4), *(int*)(local19 - 4), *(int*)(local20 - 4), *(int*)(local22 - 4), *(int*)(local956 - 40), local4655, local4657, local4658, local954, local955, local4661, local4662, local956, *(int*)0x17028, local4666, *(int*)(local4660 + 48), *(int*)(local4660 + 56), *(int*)(local4660 + 64), *(int*)(local4660 + 68), *(int*)(local4660 + 92), *(int*)(local4660 + 112), *(int*)(local4660 + 128), local957, local958, local959, local960, *(int*)(local35 + 12), *(int*)(local37 + 12), *(int*)(local38 + 12), *(int*)(local40 + 12), *(int*)(*(int*)(local35 + 8) + 48), *(int*)(*(int*)(local35 + 8) + 56), *(int*)(*(int*)(local35 + 8) + 64), *(int*)(*(int*)(local35 + 8) + 68), *(int*)(*(int*)(local35 + 8) + 92), *(int*)(*(int*)(local35 + 8) + 112), *(int*)(*(int*)(local35 + 8) + 128), local1043, local1044, local1045, local1046, local1047, local1048, local1049, local1050, local4659, local1051, local1052, local1053, local1054, local1055, local1056, *(int*)(local38 - 12), *(int*)(local38 - 20), *(int*)(local38 - 28), *(int*)(local39 - 4), <all>, SUBFLAGS16(*(int*)(local956 - 42), 0, *(int*)(local956 - 42)), (unsigned)*(int*)(local956 - 42) < 0);
        local4194 = local840;
        local4195 = local841;
        local4196 = local842;
        local4197 = local843;
        local4198 = local953;
        local4199 = local844;
        local4200 = local845;
        local4201 = local846;
        local4202 = local847;
        local4203 = local848;
        local4204 = local849;
        local4205 = local850;
        local4206 = local851;
        local4207 = local852;
        local4208 = local853;
        local4209 = local854;
        local4210 = local855;
        local4211 = local856;
        local4212 = local857;
        local4213 = local858;
        local4214 = local859;
        local4215 = local860;
        local4216 = local861;
        local4217 = local862;
        local4218 = local863;
        local4219 = local864;
        local4220 = local865;
        local4221 = local866;
        local4222 = local867;
        local4223 = local868;
        local4224 = local869;
        local4225 = local870;
        local4226 = local871;
        local4227 = local872;
        local4228 = local873;
        local4229 = local874;
        local4230 = local875;
        local4231 = local876;
        local4232 = local877;
        local4233 = local878;
        local4234 = local879;
        local4235 = local880;
        local4236 = local881;
        local4237 = local882;
        local4238 = local883;
        local4239 = local884;
        local4240 = local885;
        local4241 = local886;
        local4242 = local887;
        local4243 = local888;
        local4244 = local889;
        local4245 = local890;
        local4246 = local891;
        local4247 = local892;
        local4248 = local893;
        local4249 = local894;
        local4250 = local895;
        local4251 = local896;
        local4252 = local897;
        local4253 = local898;
        local4254 = local899;
        local4255 = local900;
        local4256 = local901;
        local4257 = local902;
        local4258 = local903;
        local4259 = local904;
        local4260 = local905;
        local4261 = local906;
        local4262 = local907;
        local4263 = local908;
        local4264 = local909;
        local4265 = local910;
        local4266 = local911;
        local4267 = local912;
        local4268 = local913;
        local4269 = local914;
        local4270 = local915;
        local4271 = local916;
        local4272 = local917;
        local4273 = local918;
        local4274 = local919;
        local4275 = local920;
        local4276 = local921;
        local4277 = local922;
        local4278 = local923;
        local4279 = local924;
        local4280 = local925;
        local4281 = local926;
        local4282 = local927;
        local4283 = local928;
        local4284 = local929;
        local4285 = local930;
        local4286 = local931;
        local4287 = local932;
        local4288 = local933;
        local4289 = local934;
        local4290 = local935;
        local4291 = local936;
        local4292 = local937;
        local4293 = local938;
        local4294 = local939;
        local4295 = local940;
        local4296 = local941;
        local4297 = local942;
        local4298 = local943;
        local4299 = local944;
        local4300 = local945;
        local4301 = local946;
        local4302 = local947;
        local4303 = local948;
        local4304 = local949;
        local4305 = local950;
        local4306 = local951;
        local4307 = local952;
    }
    local725 = local4194;
    local726 = local4195;
    local20 = local4196;
    local727 = local4197;
    local828 = local4198;
    local728 = local4199;
    local729 = local4200;
    local730 = local4201;
    local731 = local4202;
    local831 = local4203;
    local732 = local4204;
    local733 = local4205;
    local734 = local4206;
    local735 = local4207;
    local736 = local4208;
    local737 = local4209;
    local738 = local4210;
    local739 = local4211;
    local740 = local4212;
    local741 = local4213;
    local742 = local4214;
    local743 = local4215;
    local744 = local4216;
    local745 = local4217;
    local746 = local4218;
    local747 = local4219;
    local748 = local4220;
    local749 = local4221;
    local832 = local4222;
    local750 = local4223;
    local751 = local4224;
    local833 = local4225;
    local752 = local4226;
    local753 = local4227;
    local754 = local4228;
    local755 = local4229;
    local756 = local4230;
    local757 = local4231;
    local758 = local4232;
    local834 = local4233;
    local759 = local4234;
    local760 = local4235;
    local761 = local4236;
    local762 = local4237;
    local763 = local4238;
    local764 = local4239;
    local765 = local4240;
    local766 = local4241;
    local835 = local4242;
    local767 = local4243;
    local768 = local4244;
    local769 = local4245;
    local770 = local4246;
    local771 = local4247;
    local772 = local4248;
    local773 = local4249;
    local774 = local4250;
    local775 = local4251;
    local776 = local4252;
    local777 = local4253;
    local778 = local4254;
    local779 = local4255;
    local780 = local4256;
    local781 = local4257;
    local782 = local4258;
    local783 = local4259;
    local784 = local4260;
    local785 = local4261;
    local786 = local4262;
    local787 = local4263;
    local788 = local4264;
    local789 = local4265;
    local790 = local4266;
    local791 = local4267;
    local792 = local4268;
    local836 = local4269;
    local793 = local4270;
    local794 = local4271;
    local795 = local4272;
    local796 = local4273;
    local797 = local4274;
    local798 = local4275;
    local837 = local4276;
    local799 = local4277;
    local800 = local4278;
    local801 = local4279;
    local802 = local4280;
    local803 = local4281;
    local804 = local4282;
    local805 = local4283;
    local806 = local4284;
    local807 = local4285;
    local808 = local4286;
    local809 = local4287;
    local810 = local4288;
    local838 = local4289;
    local811 = local4290;
    local812 = local4291;
    local813 = local4292;
    local814 = local4293;
    local815 = local4294;
    local816 = local4295;
    local817 = local4296;
    local818 = local4297;
    local819 = local4298;
    local820 = local4299;
    local821 = local4300;
    local839 = local4301;
    local822 = local4302;
    local823 = local4303;
    local824 = local4304;
    local825 = local4305;
    local826 = local4306;
    local827 = local4307;
    local4308 = local725;
    local4309 = local726;
    local4310 = local20;
    local4311 = local727;
    local4312 = local828;
    local4313 = local728;
    local4314 = local729;
    local4315 = local730;
    local4316 = local731;
    local4317 = local831;
    local4318 = local732;
    local4319 = local733;
    local4320 = local734;
    local4321 = local735;
    local4322 = local736;
    local4323 = local737;
    local4324 = local738;
    local4325 = local739;
    local4326 = local740;
    local4327 = local741;
    local4328 = local742;
    local4329 = local743;
    local4330 = local744;
    local4331 = local745;
    local4332 = local746;
    local4333 = local747;
    local4334 = local748;
    local4335 = local749;
    local4336 = local832;
    local4337 = local750;
    local4338 = local751;
    local4339 = local833;
    local4340 = local752;
    local4341 = local753;
    local4342 = local754;
    local4343 = local755;
    local4344 = local756;
    local4345 = local757;
    local4346 = local758;
    local4347 = local834;
    local4348 = local759;
    local4349 = local760;
    local4350 = local761;
    local4351 = local762;
    local4352 = local763;
    local4353 = local764;
    local4354 = local765;
    local4355 = local766;
    local4356 = local835;
    local4357 = local767;
    local4358 = local768;
    local4359 = local769;
    local4360 = local770;
    local4361 = local771;
    local4362 = local772;
    local4363 = local773;
    local4364 = local774;
    local4365 = local775;
    local4366 = local776;
    local4367 = local777;
    local4368 = local778;
    local4369 = local779;
    local4370 = local780;
    local4371 = local781;
    local4372 = local782;
    local4373 = local783;
    local4374 = local784;
    local4375 = local785;
    local4376 = local786;
    local4377 = local787;
    local4378 = local788;
    local4379 = local789;
    local4380 = local790;
    local4381 = local791;
    local4382 = local792;
    local4383 = local836;
    local4384 = local793;
    local4385 = local794;
    local4386 = local795;
    local4387 = local796;
    local4388 = local797;
    local4389 = local798;
    local4390 = local837;
    local4391 = local799;
    local4392 = local800;
    local4393 = local801;
    local4394 = local802;
    local4395 = local803;
    local4396 = local804;
    local4397 = local805;
    local4398 = local806;
    local4399 = local807;
    local4400 = local808;
    local4401 = local809;
    local4402 = local810;
    local4403 = local838;
    local4404 = local811;
    local4405 = local812;
    local4406 = local813;
    local4407 = local814;
    local4408 = local815;
    local4409 = local816;
    local4410 = local817;
    local4411 = local818;
    local4412 = local819;
    local4413 = local820;
    local4414 = local821;
    local4415 = local839;
    local4416 = local822;
    local4417 = local823;
    local4418 = local824;
    local4419 = local825;
    local4420 = local826;
    local4421 = local827;
    if (*(int*)(local727 - 18) != 0) {
        local830 = *(int*)(local727 - 16);
        local829 = local828;
        (*local4665)(local754, local753, local752, local66, local751, local750, local749, local748, local747, local746, local745, local744, local743, local742, local741, local740, local739, local738, local737, local736, local735, local804, local798, *(int*)(local21 - 28), local803, local797, local763, *(int*)(local21 - 24), *(int*)(local22 - 24), local734, local802, local796, local770, local762, *(int*)(local21 - 20), *(int*)(local22 - 20), local801, local795, local789, local785, local781, local777, local769, local761, local758, local733, *(int*)(local22 - 16), *(int*)(local21 - 16), local813, local810, local807, local800, local794, local792, local788, local784, local780, local776, local773, local768, local766, local760, local757, local732, local1326, *(int*)(local22 - 12), local812, local809, local806, local799, local793, local791, local787, local783, local779, local775, local772, local767, local765, local759, local756, *(int*)(local17 - 8), *(int*)(local144 - 8), *(int*)(local18 - 8), *(int*)(local19 - 8), local828, local1325, *(int*)(local22 - 8), *(int*)(local23 - 8), local811, local808, local805, local1324, local790, local786, local782, local778, local774, local771, local764, local755, local45, *(int*)(local17 - 4), *(int*)(local144 - 4), *(int*)(local18 - 4), *(int*)(local19 - 4), *(int*)(local727 - 16), *(int*)(local22 - 4), *(int*)(local23 - 4), local4655, local4657, local4658, local725, local726, local4661, local4662, local727, local4665, local4666, *(int*)(local4660 + 48), *(int*)(local4660 + 56), *(int*)(local4660 + 64), *(int*)(local4660 + 68), *(int*)(local4660 + 92), *(int*)(local4660 + 112), *(int*)(local4660 + 128), local728, local729, local730, local731, *(int*)(local35 + 12), *(int*)(local37 + 12), *(int*)(local38 + 12), *(int*)(local40 + 12), *(int*)(*(int*)(local35 + 8) + 48), *(int*)(*(int*)(local35 + 8) + 56), *(int*)(*(int*)(local35 + 8) + 64), *(int*)(*(int*)(local35 + 8) + 68), *(int*)(*(int*)(local35 + 8) + 92), *(int*)(*(int*)(local35 + 8) + 112), *(int*)(*(int*)(local35 + 8) + 128), local814, local815, local816, local817, local818, local819, local820, local821, local4659, local822, local823, local824, local825, local826, local827, *(int*)(local38 - 12), *(int*)(local38 - 20), *(int*)(local38 - 28), *(int*)(local39 - 4), <all>, SUBFLAGS16(*(int*)(local727 - 18), 0, *(int*)(local727 - 18)), (unsigned)*(int*)(local727 - 18) < 0);
        local4308 = local611;
        local4309 = local612;
        local4310 = local613;
        local4311 = local614;
        local4312 = local724;
        local4313 = local615;
        local4314 = local616;
        local4315 = local617;
        local4316 = local618;
        local4317 = local619;
        local4318 = local620;
        local4319 = local621;
        local4320 = local622;
        local4321 = local623;
        local4322 = local624;
        local4323 = local625;
        local4324 = local626;
        local4325 = local627;
        local4326 = local628;
        local4327 = local629;
        local4328 = local630;
        local4329 = local631;
        local4330 = local632;
        local4331 = local633;
        local4332 = local634;
        local4333 = local635;
        local4334 = local636;
        local4335 = local637;
        local4336 = local638;
        local4337 = local639;
        local4338 = local640;
        local4339 = local641;
        local4340 = local642;
        local4341 = local643;
        local4342 = local644;
        local4343 = local645;
        local4344 = local646;
        local4345 = local647;
        local4346 = local648;
        local4347 = local649;
        local4348 = local650;
        local4349 = local651;
        local4350 = local652;
        local4351 = local653;
        local4352 = local654;
        local4353 = local655;
        local4354 = local656;
        local4355 = local657;
        local4356 = local658;
        local4357 = local659;
        local4358 = local660;
        local4359 = local661;
        local4360 = local662;
        local4361 = local663;
        local4362 = local664;
        local4363 = local665;
        local4364 = local666;
        local4365 = local667;
        local4366 = local668;
        local4367 = local669;
        local4368 = local670;
        local4369 = local671;
        local4370 = local672;
        local4371 = local673;
        local4372 = local674;
        local4373 = local675;
        local4374 = local676;
        local4375 = local677;
        local4376 = local678;
        local4377 = local679;
        local4378 = local680;
        local4379 = local681;
        local4380 = local682;
        local4381 = local683;
        local4382 = local684;
        local4383 = local685;
        local4384 = local686;
        local4385 = local687;
        local4386 = local688;
        local4387 = local689;
        local4388 = local690;
        local4389 = local691;
        local4390 = local692;
        local4391 = local693;
        local4392 = local694;
        local4393 = local695;
        local4394 = local696;
        local4395 = local697;
        local4396 = local698;
        local4397 = local699;
        local4398 = local700;
        local4399 = local701;
        local4400 = local702;
        local4401 = local703;
        local4402 = local704;
        local4403 = local705;
        local4404 = local706;
        local4405 = local707;
        local4406 = local708;
        local4407 = local709;
        local4408 = local710;
        local4409 = local711;
        local4410 = local712;
        local4411 = local713;
        local4412 = local714;
        local4413 = local715;
        local4414 = local716;
        local4415 = local717;
        local4416 = local718;
        local4417 = local719;
        local4418 = local720;
        local4419 = local721;
        local4420 = local722;
        local4421 = local723;
    }
    local496 = local4308;
    local497 = local4309;
    local19 = local4310;
    local498 = local4311;
    local599 = local4312;
    local499 = local4313;
    local500 = local4314;
    local501 = local4315;
    local502 = local4316;
    local602 = local4317;
    local503 = local4318;
    local504 = local4319;
    local505 = local4320;
    local506 = local4321;
    local507 = local4322;
    local508 = local4323;
    local509 = local4324;
    local510 = local4325;
    local511 = local4326;
    local512 = local4327;
    local513 = local4328;
    local514 = local4329;
    local515 = local4330;
    local516 = local4331;
    local517 = local4332;
    local518 = local4333;
    local519 = local4334;
    local520 = local4335;
    local603 = local4336;
    local521 = local4337;
    local522 = local4338;
    local604 = local4339;
    local523 = local4340;
    local524 = local4341;
    local525 = local4342;
    local526 = local4343;
    local527 = local4344;
    local528 = local4345;
    local529 = local4346;
    local605 = local4347;
    local530 = local4348;
    local531 = local4349;
    local532 = local4350;
    local533 = local4351;
    local534 = local4352;
    local535 = local4353;
    local536 = local4354;
    local537 = local4355;
    local606 = local4356;
    local538 = local4357;
    local539 = local4358;
    local540 = local4359;
    local541 = local4360;
    local542 = local4361;
    local543 = local4362;
    local544 = local4363;
    local545 = local4364;
    local546 = local4365;
    local547 = local4366;
    local548 = local4367;
    local549 = local4368;
    local550 = local4369;
    local551 = local4370;
    local552 = local4371;
    local553 = local4372;
    local554 = local4373;
    local555 = local4374;
    local556 = local4375;
    local557 = local4376;
    local558 = local4377;
    local559 = local4378;
    local560 = local4379;
    local561 = local4380;
    local562 = local4381;
    local563 = local4382;
    local607 = local4383;
    local564 = local4384;
    local565 = local4385;
    local566 = local4386;
    local567 = local4387;
    local568 = local4388;
    local569 = local4389;
    local608 = local4390;
    local570 = local4391;
    local571 = local4392;
    local572 = local4393;
    local573 = local4394;
    local574 = local4395;
    local575 = local4396;
    local576 = local4397;
    local577 = local4398;
    local578 = local4399;
    local579 = local4400;
    local580 = local4401;
    local581 = local4402;
    local609 = local4403;
    local582 = local4404;
    local583 = local4405;
    local584 = local4406;
    local585 = local4407;
    local586 = local4408;
    local587 = local4409;
    local588 = local4410;
    local589 = local4411;
    local590 = local4412;
    local591 = local4413;
    local592 = local4414;
    local610 = local4415;
    local593 = local4416;
    local594 = local4417;
    local595 = local4418;
    local596 = local4419;
    local597 = local4420;
    local598 = local4421;
    local4422 = local496;
    local4423 = local497;
    local4424 = local19;
    local4425 = local498;
    local4426 = local599;
    local4427 = local499;
    local4428 = local500;
    local4429 = local501;
    local4430 = local502;
    local4431 = local602;
    local4432 = local503;
    local4433 = local504;
    local4434 = local505;
    local4435 = local506;
    local4436 = local507;
    local4437 = local508;
    local4438 = local509;
    local4439 = local510;
    local4440 = local511;
    local4441 = local512;
    local4442 = local513;
    local4443 = local514;
    local4444 = local515;
    local4445 = local516;
    local4446 = local517;
    local4447 = local518;
    local4448 = local519;
    local4449 = local520;
    local4450 = local603;
    local4451 = local521;
    local4452 = local522;
    local4453 = local604;
    local4454 = local523;
    local4455 = local524;
    local4456 = local525;
    local4457 = local526;
    local4458 = local527;
    local4459 = local528;
    local4460 = local529;
    local4461 = local605;
    local4462 = local530;
    local4463 = local531;
    local4464 = local532;
    local4465 = local533;
    local4466 = local534;
    local4467 = local535;
    local4468 = local536;
    local4469 = local537;
    local4470 = local606;
    local4471 = local538;
    local4472 = local539;
    local4473 = local540;
    local4474 = local541;
    local4475 = local542;
    local4476 = local543;
    local4477 = local544;
    local4478 = local545;
    local4479 = local546;
    local4480 = local547;
    local4481 = local548;
    local4482 = local549;
    local4483 = local550;
    local4484 = local551;
    local4485 = local552;
    local4486 = local553;
    local4487 = local554;
    local4488 = local555;
    local4489 = local556;
    local4490 = local557;
    local4491 = local558;
    local4492 = local559;
    local4493 = local560;
    local4494 = local561;
    local4495 = local562;
    local4496 = local563;
    local4497 = local607;
    local4498 = local564;
    local4499 = local565;
    local4500 = local566;
    local4501 = local567;
    local4502 = local568;
    local4503 = local569;
    local4504 = local608;
    local4505 = local570;
    local4506 = local571;
    local4507 = local572;
    local4508 = local573;
    local4509 = local574;
    local4510 = local575;
    local4511 = local576;
    local4512 = local577;
    local4513 = local578;
    local4514 = local579;
    local4515 = local580;
    local4516 = local581;
    local4517 = local609;
    local4518 = local582;
    local4519 = local583;
    local4520 = local584;
    local4521 = local585;
    local4522 = local586;
    local4523 = local587;
    local4524 = local588;
    local4525 = local589;
    local4526 = local590;
    local4527 = local591;
    local4528 = local592;
    local4529 = local610;
    local4530 = local593;
    local4531 = local594;
    local4532 = local595;
    local4533 = local596;
    local4534 = local597;
    local4535 = local598;
    if (*(int*)(local498 - 26) != 0) {
        local601 = *(int*)(local498 - 24);
        local600 = local599;
        (*local4665)(local525, local524, local523, local66, local522, local521, local520, local519, local518, local517, local516, local515, local514, local513, local512, local511, local510, local509, local508, local507, local506, local575, local569, *(int*)(local21 - 28), local574, local568, local534, *(int*)(local21 - 24), *(int*)(local22 - 24), local505, local573, local567, local541, local533, *(int*)(local21 - 20), *(int*)(local22 - 20), local572, local566, local560, local556, local552, local548, local540, local532, local529, local504, *(int*)(local22 - 16), *(int*)(local21 - 16), local584, local581, local578, local571, local565, local563, local559, local555, local551, local547, local544, local539, local537, local531, local528, local503, local1326, *(int*)(local22 - 12), local583, local580, local577, local570, local564, local562, local558, local554, local550, local546, local543, local538, local536, local530, local527, *(int*)(local17 - 8), *(int*)(local144 - 8), *(int*)(local18 - 8), local599, *(int*)(local20 - 8), local1325, *(int*)(local22 - 8), *(int*)(local23 - 8), local582, local579, local576, local1324, local561, local557, local553, local549, local545, local542, local535, local526, local45, *(int*)(local17 - 4), *(int*)(local144 - 4), *(int*)(local18 - 4), *(int*)(local498 - 24), *(int*)(local20 - 4), *(int*)(local22 - 4), *(int*)(local23 - 4), local4655, local4657, local4658, local496, local497, local4661, local4662, local498, local4665, local4666, *(int*)(local4660 + 48), *(int*)(local4660 + 56), *(int*)(local4660 + 64), *(int*)(local4660 + 68), *(int*)(local4660 + 92), *(int*)(local4660 + 112), *(int*)(local4660 + 128), local499, local500, local501, local502, *(int*)(local35 + 12), *(int*)(local37 + 12), *(int*)(local38 + 12), *(int*)(local40 + 12), *(int*)(*(int*)(local35 + 8) + 48), *(int*)(*(int*)(local35 + 8) + 56), *(int*)(*(int*)(local35 + 8) + 64), *(int*)(*(int*)(local35 + 8) + 68), *(int*)(*(int*)(local35 + 8) + 92), *(int*)(*(int*)(local35 + 8) + 112), *(int*)(*(int*)(local35 + 8) + 128), local585, local586, local587, local588, local589, local590, local591, local592, local4659, local593, local594, local595, local596, local597, local598, *(int*)(local38 - 12), *(int*)(local38 - 20), *(int*)(local38 - 28), *(int*)(local39 - 4), <all>, SUBFLAGS16(*(int*)(local498 - 26), 0, *(int*)(local498 - 26)), (unsigned)*(int*)(local498 - 26) < 0);
        local4422 = local382;
        local4423 = local383;
        local4424 = local384;
        local4425 = local385;
        local4426 = local495;
        local4427 = local386;
        local4428 = local387;
        local4429 = local388;
        local4430 = local389;
        local4431 = local390;
        local4432 = local391;
        local4433 = local392;
        local4434 = local393;
        local4435 = local394;
        local4436 = local395;
        local4437 = local396;
        local4438 = local397;
        local4439 = local398;
        local4440 = local399;
        local4441 = local400;
        local4442 = local401;
        local4443 = local402;
        local4444 = local403;
        local4445 = local404;
        local4446 = local405;
        local4447 = local406;
        local4448 = local407;
        local4449 = local408;
        local4450 = local409;
        local4451 = local410;
        local4452 = local411;
        local4453 = local412;
        local4454 = local413;
        local4455 = local414;
        local4456 = local415;
        local4457 = local416;
        local4458 = local417;
        local4459 = local418;
        local4460 = local419;
        local4461 = local420;
        local4462 = local421;
        local4463 = local422;
        local4464 = local423;
        local4465 = local424;
        local4466 = local425;
        local4467 = local426;
        local4468 = local427;
        local4469 = local428;
        local4470 = local429;
        local4471 = local430;
        local4472 = local431;
        local4473 = local432;
        local4474 = local433;
        local4475 = local434;
        local4476 = local435;
        local4477 = local436;
        local4478 = local437;
        local4479 = local438;
        local4480 = local439;
        local4481 = local440;
        local4482 = local441;
        local4483 = local442;
        local4484 = local443;
        local4485 = local444;
        local4486 = local445;
        local4487 = local446;
        local4488 = local447;
        local4489 = local448;
        local4490 = local449;
        local4491 = local450;
        local4492 = local451;
        local4493 = local452;
        local4494 = local453;
        local4495 = local454;
        local4496 = local455;
        local4497 = local456;
        local4498 = local457;
        local4499 = local458;
        local4500 = local459;
        local4501 = local460;
        local4502 = local461;
        local4503 = local462;
        local4504 = local463;
        local4505 = local464;
        local4506 = local465;
        local4507 = local466;
        local4508 = local467;
        local4509 = local468;
        local4510 = local469;
        local4511 = local470;
        local4512 = local471;
        local4513 = local472;
        local4514 = local473;
        local4515 = local474;
        local4516 = local475;
        local4517 = local476;
        local4518 = local477;
        local4519 = local478;
        local4520 = local479;
        local4521 = local480;
        local4522 = local481;
        local4523 = local482;
        local4524 = local483;
        local4525 = local484;
        local4526 = local485;
        local4527 = local486;
        local4528 = local487;
        local4529 = local488;
        local4530 = local489;
        local4531 = local490;
        local4532 = local491;
        local4533 = local492;
        local4534 = local493;
        local4535 = local494;
    }
    local267 = local4422;
    local268 = local4423;
    local18 = local4424;
    local269 = local4425;
    local370 = local4426;
    local270 = local4427;
    local271 = local4428;
    local272 = local4429;
    local273 = local4430;
    local373 = local4431;
    local274 = local4432;
    local275 = local4433;
    local276 = local4434;
    local277 = local4435;
    local278 = local4436;
    local279 = local4437;
    local280 = local4438;
    local281 = local4439;
    local282 = local4440;
    local283 = local4441;
    local284 = local4442;
    local285 = local4443;
    local286 = local4444;
    local287 = local4445;
    local288 = local4446;
    local289 = local4447;
    local290 = local4448;
    local291 = local4449;
    local374 = local4450;
    local292 = local4451;
    local293 = local4452;
    local375 = local4453;
    local294 = local4454;
    local295 = local4455;
    local296 = local4456;
    local297 = local4457;
    local298 = local4458;
    local299 = local4459;
    local300 = local4460;
    local376 = local4461;
    local301 = local4462;
    local302 = local4463;
    local303 = local4464;
    local304 = local4465;
    local305 = local4466;
    local306 = local4467;
    local307 = local4468;
    local308 = local4469;
    local377 = local4470;
    local309 = local4471;
    local310 = local4472;
    local311 = local4473;
    local312 = local4474;
    local313 = local4475;
    local314 = local4476;
    local315 = local4477;
    local316 = local4478;
    local317 = local4479;
    local318 = local4480;
    local319 = local4481;
    local320 = local4482;
    local321 = local4483;
    local322 = local4484;
    local323 = local4485;
    local324 = local4486;
    local325 = local4487;
    local326 = local4488;
    local327 = local4489;
    local328 = local4490;
    local329 = local4491;
    local330 = local4492;
    local331 = local4493;
    local332 = local4494;
    local333 = local4495;
    local334 = local4496;
    local378 = local4497;
    local335 = local4498;
    local336 = local4499;
    local337 = local4500;
    local338 = local4501;
    local339 = local4502;
    local340 = local4503;
    local379 = local4504;
    local341 = local4505;
    local342 = local4506;
    local343 = local4507;
    local344 = local4508;
    local345 = local4509;
    local346 = local4510;
    local347 = local4511;
    local348 = local4512;
    local349 = local4513;
    local350 = local4514;
    local351 = local4515;
    local352 = local4516;
    local380 = local4517;
    local353 = local4518;
    local354 = local4519;
    local355 = local4520;
    local356 = local4521;
    local357 = local4522;
    local358 = local4523;
    local359 = local4524;
    local360 = local4525;
    local361 = local4526;
    local362 = local4527;
    local363 = local4528;
    local381 = local4529;
    local364 = local4530;
    local365 = local4531;
    local366 = local4532;
    local367 = local4533;
    local368 = local4534;
    local369 = local4535;
    local4536 = local268;
    local4537 = local18;
    local4538 = local269;
    local4539 = local370;
    local4540 = local270;
    local4541 = local271;
    local4542 = local272;
    local4543 = local273;
    local4544 = local373;
    local4545 = local274;
    local4546 = local275;
    local4547 = local276;
    local4548 = local277;
    local4549 = local278;
    local4550 = local279;
    local4551 = local280;
    local4552 = local281;
    local4553 = local282;
    local4554 = local283;
    local4555 = local284;
    local4556 = local285;
    local4557 = local286;
    local4558 = local287;
    local4559 = local288;
    local4560 = local289;
    local4561 = local290;
    local4562 = local291;
    local4563 = local374;
    local4564 = local292;
    local4565 = local293;
    local4566 = local375;
    local4567 = local294;
    local4568 = local295;
    local4569 = local296;
    local4570 = local297;
    local4571 = local298;
    local4572 = local299;
    local4573 = local300;
    local4574 = local376;
    local4575 = local301;
    local4576 = local302;
    local4577 = local303;
    local4578 = local304;
    local4579 = local305;
    local4580 = local306;
    local4581 = local307;
    local4582 = local308;
    local4583 = local377;
    local4584 = local309;
    local4585 = local310;
    local4586 = local311;
    local4587 = local312;
    local4588 = local313;
    local4589 = local314;
    local4590 = local315;
    local4591 = local316;
    local4592 = local317;
    local4593 = local318;
    local4594 = local319;
    local4595 = local320;
    local4596 = local321;
    local4597 = local322;
    local4598 = local323;
    local4599 = local324;
    local4600 = local325;
    local4601 = local326;
    local4602 = local327;
    local4603 = local328;
    local4604 = local329;
    local4605 = local330;
    local4606 = local331;
    local4607 = local332;
    local4608 = local333;
    local4609 = local334;
    local4610 = local378;
    local4611 = local335;
    local4612 = local336;
    local4613 = local337;
    local4614 = local338;
    local4615 = local339;
    local4616 = local340;
    local4617 = local379;
    local4618 = local341;
    local4619 = local342;
    local4620 = local343;
    local4621 = local344;
    local4622 = local345;
    local4623 = local346;
    local4624 = local347;
    local4625 = local348;
    local4626 = local349;
    local4627 = local350;
    local4628 = local351;
    local4629 = local352;
    local4630 = local380;
    local4631 = local353;
    local4632 = local354;
    local4633 = local355;
    local4634 = local356;
    local4635 = local357;
    local4636 = local358;
    local4637 = local359;
    local4638 = local360;
    local4639 = local361;
    local4640 = local362;
    local4641 = local363;
    local4642 = local381;
    local4643 = local364;
    local4644 = local365;
    local4645 = local366;
    local4646 = local367;
    local4647 = local368;
    local4648 = local369;
    if (*(int*)(local269 - 34) != 0) {
        local372 = *(int*)(local269 - 32);
        local371 = local370;
        (*local4665)(local296, local295, local294, local66, local293, local292, local291, local290, local289, local288, local287, local286, local285, local284, local283, local282, local281, local280, local279, local278, local277, local346, local340, *(int*)(local21 - 28), local345, local339, local305, *(int*)(local21 - 24), *(int*)(local22 - 24), local276, local344, local338, local312, local304, *(int*)(local21 - 20), *(int*)(local22 - 20), local343, local337, local331, local327, local323, local319, local311, local303, local300, local275, *(int*)(local22 - 16), *(int*)(local21 - 16), local355, local352, local349, local342, local336, local334, local330, local326, local322, local318, local315, local310, local308, local302, local299, local274, local1326, *(int*)(local22 - 12), local354, local351, local348, local341, local335, local333, local329, local325, local321, local317, local314, local309, local307, local301, local298, *(int*)(local17 - 8), *(int*)(local144 - 8), local370, *(int*)(local19 - 8), *(int*)(local20 - 8), local1325, *(int*)(local22 - 8), *(int*)(local23 - 8), local353, local350, local347, local1324, local332, local328, local324, local320, local316, local313, local306, local297, local45, *(int*)(local17 - 4), *(int*)(local144 - 4), *(int*)(local269 - 32), *(int*)(local19 - 4), *(int*)(local20 - 4), *(int*)(local22 - 4), *(int*)(local23 - 4), local4655, local4657, local4658, local267, local268, local4661, local4662, local269, local4665, local4666, *(int*)(local4660 + 48), *(int*)(local4660 + 56), *(int*)(local4660 + 64), *(int*)(local4660 + 68), *(int*)(local4660 + 92), *(int*)(local4660 + 112), *(int*)(local4660 + 128), local270, local271, local272, local273, *(int*)(local35 + 12), *(int*)(local37 + 12), *(int*)(local38 + 12), *(int*)(local40 + 12), *(int*)(*(int*)(local35 + 8) + 48), *(int*)(*(int*)(local35 + 8) + 56), *(int*)(*(int*)(local35 + 8) + 64), *(int*)(*(int*)(local35 + 8) + 68), *(int*)(*(int*)(local35 + 8) + 92), *(int*)(*(int*)(local35 + 8) + 112), *(int*)(*(int*)(local35 + 8) + 128), local356, local357, local358, local359, local360, local361, local362, local363, local4659, local364, local365, local366, local367, local368, local369, *(int*)(local38 - 12), *(int*)(local38 - 20), *(int*)(local38 - 28), *(int*)(local39 - 4), <all>, SUBFLAGS16(*(int*)(local269 - 34), 0, *(int*)(local269 - 34)), (unsigned)*(int*)(local269 - 34) < 0);
        local4536 = local154;
        local4537 = local155;
        local4538 = local156;
        local4539 = local266;
        local4540 = local157;
        local4541 = local158;
        local4542 = local159;
        local4543 = local160;
        local4544 = local161;
        local4545 = local162;
        local4546 = local163;
        local4547 = local164;
        local4548 = local165;
        local4549 = local166;
        local4550 = local167;
        local4551 = local168;
        local4552 = local169;
        local4553 = local170;
        local4554 = local171;
        local4555 = local172;
        local4556 = local173;
        local4557 = local174;
        local4558 = local175;
        local4559 = local176;
        local4560 = local177;
        local4561 = local178;
        local4562 = local179;
        local4563 = local180;
        local4564 = local181;
        local4565 = local182;
        local4566 = local183;
        local4567 = local184;
        local4568 = local185;
        local4569 = local186;
        local4570 = local187;
        local4571 = local188;
        local4572 = local189;
        local4573 = local190;
        local4574 = local191;
        local4575 = local192;
        local4576 = local193;
        local4577 = local194;
        local4578 = local195;
        local4579 = local196;
        local4580 = local197;
        local4581 = local198;
        local4582 = local199;
        local4583 = local200;
        local4584 = local201;
        local4585 = local202;
        local4586 = local203;
        local4587 = local204;
        local4588 = local205;
        local4589 = local206;
        local4590 = local207;
        local4591 = local208;
        local4592 = local209;
        local4593 = local210;
        local4594 = local211;
        local4595 = local212;
        local4596 = local213;
        local4597 = local214;
        local4598 = local215;
        local4599 = local216;
        local4600 = local217;
        local4601 = local218;
        local4602 = local219;
        local4603 = local220;
        local4604 = local221;
        local4605 = local222;
        local4606 = local223;
        local4607 = local224;
        local4608 = local225;
        local4609 = local226;
        local4610 = local227;
        local4611 = local228;
        local4612 = local229;
        local4613 = local230;
        local4614 = local231;
        local4615 = local232;
        local4616 = local233;
        local4617 = local234;
        local4618 = local235;
        local4619 = local236;
        local4620 = local237;
        local4621 = local238;
        local4622 = local239;
        local4623 = local240;
        local4624 = local241;
        local4625 = local242;
        local4626 = local243;
        local4627 = local244;
        local4628 = local245;
        local4629 = local246;
        local4630 = local247;
        local4631 = local248;
        local4632 = local249;
        local4633 = local250;
        local4634 = local251;
        local4635 = local252;
        local4636 = local253;
        local4637 = local254;
        local4638 = local255;
        local4639 = local256;
        local4640 = local257;
        local4641 = local258;
        local4642 = local259;
        local4643 = local260;
        local4644 = local261;
        local4645 = local262;
        local4646 = local263;
        local4647 = local264;
        local4648 = local265;
    }
    local1 = local4536;
    local144 = local4537;
    local36 = local4538;
    local143 = local4539;
    local41 = local4540;
    local42 = local4541;
    local43 = local4542;
    local44 = local4543;
    local145 = local4544;
    local46 = local4545;
    local47 = local4546;
    local48 = local4547;
    local49 = local4548;
    local50 = local4549;
    local51 = local4550;
    local52 = local4551;
    local53 = local4552;
    local54 = local4553;
    local55 = local4554;
    local56 = local4555;
    local57 = local4556;
    local58 = local4557;
    local59 = local4558;
    local60 = local4559;
    local61 = local4560;
    local62 = local4561;
    local63 = local4562;
    local146 = local4563;
    local64 = local4564;
    local65 = local4565;
    local147 = local4566;
    local67 = local4567;
    local68 = local4568;
    local69 = local4569;
    local70 = local4570;
    local71 = local4571;
    local72 = local4572;
    local73 = local4573;
    local148 = local4574;
    local74 = local4575;
    local75 = local4576;
    local76 = local4577;
    local77 = local4578;
    local78 = local4579;
    local79 = local4580;
    local80 = local4581;
    local81 = local4582;
    local149 = local4583;
    local82 = local4584;
    local83 = local4585;
    local84 = local4586;
    local85 = local4587;
    local86 = local4588;
    local87 = local4589;
    local88 = local4590;
    local89 = local4591;
    local90 = local4592;
    local91 = local4593;
    local92 = local4594;
    local93 = local4595;
    local94 = local4596;
    local95 = local4597;
    local96 = local4598;
    local97 = local4599;
    local98 = local4600;
    local99 = local4601;
    local100 = local4602;
    local101 = local4603;
    local102 = local4604;
    local103 = local4605;
    local104 = local4606;
    local105 = local4607;
    local106 = local4608;
    local107 = local4609;
    local150 = local4610;
    local108 = local4611;
    local109 = local4612;
    local110 = local4613;
    local111 = local4614;
    local112 = local4615;
    local113 = local4616;
    local151 = local4617;
    local114 = local4618;
    local115 = local4619;
    local116 = local4620;
    local117 = local4621;
    local118 = local4622;
    local119 = local4623;
    local120 = local4624;
    local121 = local4625;
    local122 = local4626;
    local123 = local4627;
    local124 = local4628;
    local125 = local4629;
    local152 = local4630;
    local126 = local4631;
    local127 = local4632;
    local128 = local4633;
    local129 = local4634;
    local130 = local4635;
    local131 = local4636;
    local132 = local4637;
    local133 = local4638;
    local134 = local4639;
    local135 = local4640;
    local136 = local4641;
    local153 = local4642;
    local137 = local4643;
    local138 = local4644;
    local139 = local4645;
    local140 = local4646;
    local141 = local4647;
    local142 = local4648;
    local4649 = local144;
    local4649 = local144;
    local4650 = local36;
    local4650 = local36;
    local4651 = local143;
    local4651 = local143;
    local4652 = local36;
    local4653 = local36;
    if (*(int*)(local36 - 76) == 0) {
L8:
        if (*(int*)(local36 - 12) != 0) {
L1:
            local35 = local4653;
            local4660 = *(int*)(local35 + 8);
            *(int*)(*(int*)(local35 + 8) + 48) = 0x11dba;
            *(int*)(*(int*)(local35 + 8) + 56) = 0x11fce;
            *(int*)(*(int*)(local35 + 8) + 64) = 0x11fce;
            *(int*)(*(int*)(local35 + 8) + 68) = 0x11b90;
            *(int*)(*(int*)(local35 + 8) + 92) = 0x11fa4;
            *(int*)(*(int*)(local35 + 8) + 112) = 0x11b18;
            *(int*)(*(int*)(local35 + 8) + 128) = 0x11a36;
            *(int*)(local35 + 12) = 0;
            local4654 = local35;
        } else {
L7:
            if (*(int*)(local36 - 8) != 0) {
                local0 = *(int*)(*(int*)(local36 - 8) + 40);
                if (local0 != 0) {
                    if (*(int*)(local0 + 8) != 0) {
                        *(int*)(local144 - 4) = *(int*)(local0 + 8);
                        *(int*)(local144 - 8) = local143;
                        (*local4665)(local69, local68, local67, local66, local65, local64, local63, local62, local61, local60, local59, local58, local57, local56, local55, local54, local53, local52, local51, local50, local49, local119, local113, *(int*)(local21 - 28), local118, local112, local78, *(int*)(local21 - 24), *(int*)(local22 - 24), local48, local117, local111, local85, local77, *(int*)(local21 - 20), *(int*)(local22 - 20), local116, local110, local104, local100, local96, local92, local84, local76, local73, local47, *(int*)(local22 - 16), *(int*)(local21 - 16), local128, local125, local122, local115, local109, local107, local103, local99, local95, local91, local88, local83, local81, local75, local72, local46, local1326, *(int*)(local22 - 12), local127, local124, local121, local114, local108, local106, local102, local98, local94, local90, local87, local82, local80, local74, local71, *(int*)(local17 - 8), local143, *(int*)(local18 - 8), *(int*)(local19 - 8), *(int*)(local20 - 8), local1325, *(int*)(local22 - 8), *(int*)(local23 - 8), local126, local123, local120, local1324, local105, local101, local97, local93, local89, local86, local79, local70, local45, *(int*)(local17 - 4), *(int*)(local0 + 8), *(int*)(local18 - 4), *(int*)(local19 - 4), *(int*)(local20 - 4), *(int*)(local22 - 4), *(int*)(local23 - 4), (unsigned short) *(int*)(local0 + 8), local4657, local4658, *(int*)(local0 + 8), local1, 0, local4662, local36, local4665, local4666, *(int*)(local4660 + 48), *(int*)(local4660 + 56), *(int*)(local4660 + 64), *(int*)(local4660 + 68), *(int*)(local4660 + 92), *(int*)(local4660 + 112), *(int*)(local4660 + 128), local41, local42, local43, local44, *(int*)(local35 + 12), *(int*)(local37 + 12), *(int*)(local38 + 12), *(int*)(local40 + 12), *(int*)(*(int*)(local35 + 8) + 48), *(int*)(*(int*)(local35 + 8) + 56), *(int*)(*(int*)(local35 + 8) + 64), *(int*)(*(int*)(local35 + 8) + 68), *(int*)(*(int*)(local35 + 8) + 92), *(int*)(*(int*)(local35 + 8) + 112), *(int*)(*(int*)(local35 + 8) + 128), local129, local130, local131, local132, local133, local134, local135, local136, local4659, local137, local138, local139, local140, local141, local142, *(int*)(local38 - 12), *(int*)(local38 - 20), *(int*)(local38 - 28), *(int*)(local39 - 4), <all>, SUBFLAGS32(*(int*)(local0 + 8), 0, *(int*)(local0 + 8)), (unsigned)*(int*)(local0 + 8) < 0);
                        local4649 = local4663;
                        local4650 = local4664;
                    }
                }
                local17 = local4649;
                local4664 = local4650;
                *(int*)(local17 - 4) = *(int*)(local4664 - 8);
                IoDeleteDevice(*(int*)(local4664 - 8));
                local4652 = local4664;
            }
            local4664 = local4652;
            local4653 = local4664;
            local4654 = local4664;
            if (*(int*)(local4664 - 12) != 0) {
                goto L1;
            }
        }
    } else {
        if (*(int*)(local36 + 12) < 0) {
            goto L7;
        } else {
            goto L8;
        }
    }
    local4664 = local4654;
    return *(int*)(local4664 + 12);
}

// address: 0x120fc
__imp_memset(int param1, int param2, int param3) {
    int local1; 		// r25
    int local2; 		// r26
    int local3; 		// r28

    memset(param1, param2, param3);
    return local1; /* WARNING: Also returning: local2 */
}

// address: 0x1a000
proc2(int param1, int param3, int param4) {
    int local0; 		// r29{332}
    int local1; 		// m[r31 + 32]{251}
    int local10; 		// r28{331}
    int local100;
    int local101;
    int local102;
    int local103;
    int local104;
    int local105;
    int local106;
    int local107;
    int local108;
    int local109;
    int local11; 		// r28{316}
    int local110;
    int local111;
    int local112;
    int local113;
    int local114;
    int local115;
    int local116;
    int local117;
    int local118; 		// m[r28 - 16]{132}
    int local119; 		// m[r28 - 20]{132}
    int local12; 		// r29{78}
    int local120; 		// m[r28 - 24]{132}
    int local121;
    int local122;
    int local123;
    int local124;
    int local125;
    int local126;
    int local127;
    int local128;
    int local129; 		// m[r28 - 4]{132}
    int local13; 		// r29{46}
    int local130; 		// m[r28 - 8]{132}
    int local131; 		// m[r28 - 12]{132}
    int local132;
    int local133;
    int local134; 		// m[r29 - 54]{132}
    int local135;
    int local136;
    int local137;
    int local138;
    int local139; 		// m[r29 - 32]{132}
    int local14; 		// r29{8}
    int local140; 		// m[r29 - 36]{132}
    int local141; 		// m[r29 - 40]{132}
    int local142; 		// m[r29 - 44]{132}
    int local143; 		// m[r29 - 48]{132}
    int local144;
    int local145; 		// m[r29 - 56]{132}
    int local146; 		// m[r29 - 28]{132}
    int local147; 		// m[r29 - 52]{132}
    int local148; 		// m[r29 - 4]{132}
    void *local149; 		// %pc{132}
    int local15; 		// r29{152}
    int local150; 		// %flags{132}
    int local151; 		// %CF{132}
    void *local152; 		// m[r28 - 12]{140}
    int local153; 		// m[r28 - 8]{137}
    int local154; 		// m[r28 - 4]{133}
    int local155; 		// r30{99}
    int local156; 		// m[r30 + 4]{99}
    int local157; 		// m[r30 + 8]{99}
    int local158; 		// m[r30 + 12]{99}
    int local159; 		// m[r30 + 16]{99}
    int local16; 		// r29{142}
    int local160; 		// m[r30 + 20]{99}
    int local161; 		// m[r30 + 24]{99}
    int local162; 		// m[r30 + 32]{99}
    int local163; 		// m[r30 + 36]{99}
    int local164; 		// m[r30 + 40]{99}
    int local165; 		// m[r30 + 44]{99}
    int local166; 		// m[r30 + 48]{99}
    int local167; 		// m[r30 + 52]{99}
    int local168; 		// m[r30 + 60]{99}
    int local169; 		// m[r30 + 64]{99}
    int local17; 		// r30{142}
    int local170; 		// m[r30 + 68]{99}
    int local171; 		// m[r30 + 72]{99}
    int local172; 		// m[r30 + 76]{99}
    int local173; 		// m[r30 + 80]{99}
    int local174; 		// m[r30 + 88]{99}
    int local175; 		// m[r30 + 92]{99}
    int local176; 		// m[r30 + 96]{99}
    int local177; 		// m[r30 + 100]{99}
    int local178; 		// m[r30 + 104]{99}
    int local179; 		// m[r30 + 108]{99}
    int local18; 		// r31{334}
    int local180;
    int local181;
    int local182; 		// m[r31 + 32]{99}
    int local183; 		// m[r31 + 52]{99}
    int local184; 		// m[r31 + 56]{99}
    int local185;
    int local186;
    int local187;
    int local188;
    int local189;
    int local19; 		// r31{319}
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
    int local2; 		// r28{99}
    int local20; 		// m[r31 + 32]{142}
    int local200;
    int local201;
    int local202;
    int local203; 		// m[r28 - 16]{99}
    int local204; 		// m[r28 - 20]{99}
    int local205; 		// m[r28 - 24]{99}
    int local206;
    int local207;
    int local208;
    int local209;
    int local21; 		// m[r31 + 56]{142}
    int local210;
    int local211;
    int local212;
    int local213;
    int local214;
    int local215;
    int local216;
    int local217; 		// m[r28 - 4]{99}
    int local218; 		// m[r28 - 8]{99}
    int local219; 		// m[r28 - 12]{99}
    int local22;
    int local220; 		// m[r29 - 28]{351}
    int local221; 		// m[r29 - 54]{99}
    int local222;
    int local223;
    int local224;
    int local225;
    int local226; 		// m[r29 - 32]{99}
    int local227; 		// m[r29 - 36]{99}
    int local228; 		// m[r29 - 40]{99}
    int local229; 		// m[r29 - 44]{99}
    int local23;
    int local230; 		// m[r29 - 48]{99}
    int local231;
    int local232; 		// m[r29 - 56]{99}
    int local233; 		// m[r29 - 28]{99}
    int local234; 		// m[r29 - 52]{99}
    int local235; 		// m[r29 - 4]{99}
    void *local236; 		// %pc{99}
    int local237; 		// m[r28 - 12]{130}
    int local238; 		// m[r28 - 8]{126}
    int local239; 		// m[r28 - 4]{122}
    int local24;
    int local240; 		// r24{118}
    int local241; 		// r28{118}
    void *local242; 		// m[r28 - 16]{116}
    int local243; 		// m[r28 - 12]{113}
    int local244; 		// m[r28 - 8]{111}
    int local245; 		// m[r28 - 4]{109}
    int local246;
    int local247; 		// m[r29 - 28]{104}
    int local248; 		// m[r29 - 52]{100}
    int local249; 		// r24{90}
    int local25;
    int local250; 		// r30{78}
    int local251; 		// r31{78}
    int local252; 		// m[r30 + 4]{78}
    int local253; 		// m[r30 + 8]{78}
    int local254; 		// m[r30 + 12]{78}
    int local255; 		// m[r30 + 16]{78}
    int local256; 		// m[r30 + 20]{78}
    int local257; 		// m[r30 + 24]{78}
    int local258; 		// m[r30 + 32]{78}
    int local259; 		// m[r30 + 36]{78}
    int local26;
    int local260; 		// m[r30 + 40]{78}
    int local261; 		// m[r30 + 44]{78}
    int local262; 		// m[r30 + 48]{78}
    int local263; 		// m[r30 + 52]{78}
    int local264; 		// m[r30 + 60]{78}
    int local265; 		// m[r30 + 64]{78}
    int local266; 		// m[r30 + 68]{78}
    int local267; 		// m[r30 + 72]{78}
    int local268; 		// m[r30 + 76]{78}
    int local269; 		// m[r30 + 80]{78}
    int local27;
    int local270; 		// m[r30 + 88]{78}
    int local271; 		// m[r30 + 92]{78}
    int local272; 		// m[r30 + 96]{78}
    int local273; 		// m[r30 + 100]{78}
    int local274; 		// m[r30 + 104]{78}
    int local275; 		// m[r30 + 108]{78}
    int local276;
    int local277;
    int local278; 		// m[r31 + 32]{78}
    int local279; 		// m[r31 + 52]{78}
    int local28;
    int local280; 		// m[r31 + 56]{78}
    int local281;
    int local282;
    int local283;
    int local284;
    int local285;
    int local286;
    int local287;
    int local288;
    int local289;
    int local29;
    int local290;
    int local291;
    int local292;
    int local293;
    int local294;
    int local295;
    int local296;
    int local297;
    int local298;
    int local299; 		// m[r28 - 16]{78}
    int local3; 		// r28{78}
    int local30;
    int local300; 		// m[r28 - 20]{78}
    int local301; 		// m[r28 - 24]{78}
    int local302;
    int local303;
    int local304;
    int local305;
    int local306;
    int local307;
    int local308;
    int local309;
    int local31;
    int local310;
    int local311;
    int local312;
    int local313; 		// m[r28 - 4]{78}
    int local314; 		// m[r28 - 8]{78}
    int local315; 		// m[r28 - 12]{78}
    int local316;
    int local317;
    int local318;
    int local319;
    int local32;
    int local320;
    int local321;
    int local322; 		// m[r29 - 32]{78}
    int local323; 		// m[r29 - 36]{78}
    int local324; 		// m[r29 - 40]{78}
    int local325; 		// m[r29 - 44]{78}
    int local326; 		// m[r29 - 48]{78}
    int local327;
    int local328; 		// m[r29 - 56]{78}
    int local329; 		// m[r29 - 28]{78}
    int local33;
    int local330; 		// m[r29 - 52]{78}
    int local331; 		// m[r29 - 4]{78}
    void *local332; 		// %pc{78}
    void *local333; 		// m[r28 - 16]{97}
    int local334; 		// m[r28 - 12]{94}
    int local335; 		// m[r28 - 8]{92}
    int local336; 		// m[r28 - 4]{88}
    int local337; 		// m[r29 - 54]{87}
    int local338; 		// r31{46}
    int local339; 		// m[r30 + 4]{46}
    int local34;
    int local340; 		// m[r30 + 8]{46}
    int local341; 		// m[r30 + 12]{46}
    int local342; 		// m[r30 + 16]{46}
    int local343; 		// m[r30 + 20]{46}
    int local344; 		// m[r30 + 24]{46}
    int local345; 		// m[r30 + 32]{46}
    int local346; 		// m[r30 + 36]{46}
    int local347; 		// m[r30 + 40]{46}
    int local348; 		// m[r30 + 44]{46}
    int local349; 		// m[r30 + 48]{46}
    int local35;
    int local350; 		// m[r30 + 52]{46}
    int local351; 		// m[r30 + 60]{46}
    int local352; 		// m[r30 + 64]{46}
    int local353; 		// m[r30 + 68]{46}
    int local354; 		// m[r30 + 72]{46}
    int local355; 		// m[r30 + 76]{46}
    int local356; 		// m[r30 + 80]{46}
    int local357; 		// m[r30 + 88]{46}
    int local358; 		// m[r30 + 92]{46}
    int local359; 		// m[r30 + 96]{46}
    int local36;
    int local360; 		// m[r30 + 100]{46}
    int local361; 		// m[r30 + 104]{46}
    int local362; 		// m[r30 + 108]{46}
    int local363;
    int local364;
    int local365; 		// m[r31 + 32]{46}
    int local366; 		// m[r31 + 52]{46}
    int local367; 		// m[r31 + 56]{46}
    int local368;
    int local369;
    int local37;
    int local370;
    int local371;
    int local372;
    int local373;
    int local374;
    int local375;
    int local376;
    int local377;
    int local378;
    int local379;
    int local38;
    int local380;
    int local381;
    int local382;
    int local383;
    int local384;
    int local385;
    int local386; 		// m[r28 - 16]{46}
    int local387; 		// m[r28 - 20]{46}
    int local388; 		// m[r28 - 24]{46}
    int local389;
    int local39;
    int local390;
    int local391;
    int local392;
    int local393;
    int local394;
    int local395;
    int local396;
    int local397;
    int local398;
    int local399;
    int local4; 		// r28{46}
    int local40; 		// m[r28 - 16]{142}
    int local400; 		// m[r28 - 4]{46}
    int local401; 		// m[r28 - 8]{46}
    int local402; 		// m[r28 - 12]{46}
    int local403;
    int local404;
    int local405; 		// m[r29 - 54]{46}
    int local406;
    int local407;
    int local408;
    int local409; 		// m[r29 - 32]{46}
    int local41; 		// m[r28 - 4]{142}
    int local410; 		// m[r29 - 36]{46}
    int local411; 		// m[r29 - 40]{46}
    int local412; 		// m[r29 - 44]{46}
    int local413; 		// m[r29 - 48]{46}
    int local414;
    int local415; 		// m[r29 - 56]{46}
    int local416; 		// m[r29 - 28]{46}
    int local417; 		// m[r29 - 52]{46}
    int local418; 		// m[r29 - 4]{46}
    void *local419; 		// %pc{46}
    int local42; 		// m[r28 - 8]{142}
    int local420; 		// m[r28 - 12]{76}
    int local421; 		// m[r28 - 8]{72}
    int local422; 		// m[r28 - 4]{68}
    int local423; 		// r24{64}
    int local424; 		// r28{64}
    void *local425; 		// m[r28 - 16]{62}
    int local426; 		// m[r28 - 12]{59}
    int local427; 		// m[r28 - 8]{57}
    int local428; 		// m[r28 - 4]{55}
    int local429; 		// m[r29 - 44]{48}
    int local43; 		// m[r28 - 12]{142}
    int local430; 		// r30{47}
    int local431; 		// m[r28 - 16]{44}
    int local432; 		// m[r28 - 12]{40}
    int local433; 		// m[r28 - 8]{38}
    int local434; 		// m[r28 - 4]{35}
    int local435; 		// m[r29 - 48]{34}
    int local436; 		// m[r29 - 4]{29}
    int local437; 		// m[r29 - 52]{27}
    int local438; 		// m[r29 - 56]{25}
    int local439; 		// m[r29 - 28]{20}
    int local44;
    int local440; 		// m[r29 - 40]{19}
    int local441; 		// m[r29 - 36]{18}
    int local442; 		// m[r29 - 32]{12}
    int local443; 		// m[r29 - 44]{11}
    int local444; 		// r30{152}
    int local445; 		// m[r28 - 12]{6}
    void *local446; 		// %pc{152}
    int local447; 		// m[r28 - 8]{3}
    int local448; 		// m[r28 - 4]{1}
    int local449; 		// local220{351}
    int local45;
    int local450; 		// r28{301}
    int local451; 		// r29{302}
    int local452; 		// r30{303}
    void *local453; 		// %pc{307}
    int local454; 		// local11{316}
    int local455; 		// r29{317}
    int local456; 		// r30{318}
    void *local457; 		// %pc{322}
    int local458; 		// local18{334}
    int local459; 		// local9{344}
    int local46; 		// m[r29 - 54]{142}
    int local460; 		// local8{349}
    int local461; 		// r0
    int local462; 		// r8
    int local463; 		// r24
    int local464; 		// r25
    int local465; 		// r26
    int local466; 		// r28
    int local47;
    int local48;
    int local49;
    int local5; 		// r28{8}
    int local50; 		// m[r29 - 28]{142}
    int local51; 		// m[r29 - 32]{142}
    int local52; 		// m[r29 - 36]{142}
    int local53; 		// m[r29 - 40]{142}
    int local54; 		// m[r29 - 44]{142}
    int local55; 		// m[r29 - 48]{142}
    int local56;
    int local57; 		// m[r29 - 56]{142}
    int local58; 		// m[r29 - 52]{142}
    int local59; 		// m[r29 - 4]{142}
    int local6; 		// r28{152}
    void *local60; 		// %pc{142}
    void *local61; 		// m[r28 - 12]{150}
    int local62; 		// r28{142}
    int local63; 		// m[r28 - 8]{147}
    int local64; 		// m[r28 - 4]{143}
    int local65; 		// r29{132}
    int local66; 		// r30{132}
    int local67; 		// m[r30 + 4]{132}
    int local68; 		// m[r30 + 8]{132}
    int local69; 		// m[r30 + 12]{132}
    int local7; 		// r28{132}
    int local70; 		// m[r30 + 16]{132}
    int local71; 		// m[r30 + 20]{132}
    int local72; 		// m[r30 + 24]{132}
    int local73; 		// m[r30 + 32]{132}
    int local74; 		// m[r30 + 36]{132}
    int local75; 		// m[r30 + 40]{132}
    int local76; 		// m[r30 + 44]{132}
    int local77; 		// m[r30 + 48]{132}
    int local78; 		// m[r30 + 52]{132}
    int local79; 		// m[r30 + 60]{132}
    int local8; 		// r28{349}
    int local80; 		// m[r30 + 64]{132}
    int local81; 		// m[r30 + 68]{132}
    int local82; 		// m[r30 + 72]{132}
    int local83; 		// m[r30 + 76]{132}
    int local84; 		// m[r30 + 80]{132}
    int local85; 		// m[r30 + 88]{132}
    int local86; 		// m[r30 + 92]{132}
    int local87; 		// m[r30 + 96]{132}
    int local88; 		// m[r30 + 100]{132}
    int local89; 		// m[r30 + 104]{132}
    int local9; 		// r28{344}
    int local90; 		// m[r30 + 108]{132}
    int local91;
    int local92;
    int local93; 		// m[r31 + 32]{132}
    int local94; 		// m[r31 + 52]{132}
    int local95; 		// m[r31 + 56]{132}
    int local96;
    int local97;
    int local98;
    int local99;

    local448 = 48;
    local447 = 0x17178;
    local5 = proc6(0x17178, 48, param1, param3, param4); /* Warning: also results in local14 */
    local443 = 0;
    local442 = 100;
    local441 = 1;
    local440 = 0;
    local439 = 0;
    local438 = 0;
    local437 = 0;
    local436 = 0;
    local463 = *(int*)(*(int*)(local14 + 12) + 4);
    local435 = local463;
    local434 = 0x206b6444;
    local433 = 140;
    local432 = 1;
    (*ExAllocatePoolWithTag)(pc - 0x86b2, 1, pc, 140, 0x17178, 0x206b6444, 48, (unsigned short) local463, local463, 1, 0, 140, local14, ExAllocatePoolWithTag, 0, 0, 100, 1, 0, 0, local463, 0, 0, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
    local454 = local4;
    local455 = local13;
    local457 = local419;
    local430 = local463;
    local429 = local463;
    local456 = local430;
    if (local463 != 0) {
        local428 = param1;
        local427 = 0;
        local426 = local463;
        local425 = local419;
        local464 = __imp_memset(local463, 0, param1); /* Warning: also results in local465 */
        local422 = 0;
        local421 = local13 - 56;
        local420 = local419 - 0x7f66;
        (**(int*)0x17038)(local388, local387, local382, local419, local374, local378, local386, local381, local419 - 0x7f66, local370, local373, local377, local385, local391, local394, local402, local380, local13 - 56, local369, local372, local376, local384, local390, local393, local397, local399, local401, local392, local389, local383, local379, param1, local375, local371, local368, local395, local396, local398, local400, (unsigned short) local13 - 56, local462, local13 - 56, local464, local465, *(int*)0x17038, local13, local463, local338, local339, local340, local341, local342, local343, local344, local345, local346, local347, local348, local349, local350, local351, local352, local353, local354, local355, local356, local357, local358, local359, local360, local361, local362, local363, local364, local365, local366, local367, local403, local404, local405, local406, local463, local407, local408, local409, local410, local411, local412, local413, local414, local415, local416, local417, local418, <all>, ADDFLAGS32(local4 - 12, 12, local4), ADDFLAGS32(local4 - 12, 12, local4));
        local463 = *(unsigned short*)*(int*)(local12 + 12);
        local337 = (unsigned short) local463 + 24;
        local336 = 0x206b6444;
        local249 = ((unsigned short) local463 + 24);
        local335 = local249;
        local334 = 1;
        local333 = local332;
        (*local251)(local301, local300, local295, local291, local332, local287, local299, local294, local290, 1, local283, local286, local298, local304, local307, local315, local293, local289, local249, local282, local285, local297, local303, local306, local310, local312, local314, local305, local302, local296, local292, local288, 0x206b6444, local284, local281, local308, local309, local311, local313, (unsigned short) local249, local462, local249, local464, local465, param1, local12, local250, local251, local252, local253, local254, local255, local256, local257, local258, local259, local260, local261, local262, local263, local264, local265, local266, local267, local268, local269, local270, local271, local272, local273, local274, local275, local276, local277, local278, local279, local280, local316, local317, (unsigned short) local463 + 24, local318, local319, local320, local321, local322, local323, local324, local325, local326, local327, local328, local329, local330, local331, <all>, ADDFLAGS32(local463, 24, local463 + 24), ADDFLAGS32(local463, 24, local463 + 24));
        local449 = local246;
        local450 = local2;
        local451 = ebp;
        local452 = local155;
        local453 = local236;
        local248 = local463;
        if (local463 == 0) {
            local247 = 0xc0000001;
            local449 = local247;
        }
        local220 = local449;
        if (local246 < 0) {
            param4 = *(int*)(ebp + 8);
        } else {
            local245 = *(unsigned short*)(ebp - 54);
            local244 = 0;
            local243 = local463;
            local242 = local236;
            local464 = __imp_memset(local463, 0, *(unsigned short*)(ebp - 54)); /* Warning: also results in local465 */
            local239 = *(int*)(ebp - 48);
            local238 = ebp - 56;
            local237 = local236 - 0x7fb6;
            (**(int*)0x17034)(local205, local204, local199, local195, local191, local236, local203, local198, local194, local190, local236 - 0x7fb6, local187, local202, local208, local211, local219, local197, local193, local189, ebp - 56, local186, local201, local207, local210, local214, local216, local218, local209, local206, local200, local196, local192, local188, *(unsigned short*)(ebp - 54), local185, local212, local213, local215, local217, (unsigned short) ebp - 56, local462, ebp - 56, local464, local465, param1, ebp, local155, *(int*)0x17034, local156, local157, local158, local159, local160, local161, local162, local163, local164, local165, local166, local167, local168, local169, local170, local171, local172, local173, local174, local175, local176, local177, local178, local179, local180, local181, local182, local183, local184, local220, local463, local221, local222, local223, local224, local225, local226, local227, local228, local229, local230, local231, local232, local233, local234, local235, <all>, ADDFLAGS32(local2 - 12, 12, local2), ADDFLAGS32(local2 - 12, 12, local2));
            local154 = 0x1a906;
            local153 = local65 - 56;
            local152 = local149;
            (*param4)(local120, local119, local114, local110, local106, local102, local118, local149, local113, local109, local105, local101, local98, local117, local123, local131, local65 - 56, local112, local108, local104, local100, local97, local116, local122, local126, local128, local130, 0x1a906, local121, local115, local111, local107, local103, local99, local96, local124, local125, local127, local129, (unsigned short) local65 - 56, local462, local65 - 56, local464, local465, param1, local65, local66, param4, local67, local68, local69, local70, local71, local72, local73, local74, local75, local76, local77, local78, local79, local80, local81, local82, local83, local84, local85, local86, local87, local88, local89, local90, local91, local92, local93, local94, local95, local132, local133, local134, local135, local136, local137, local138, local139, local140, local141, local142, local143, local144, local145, local146, local147, local148, <all>, local150, local151);
            local64 = 0x1a8ea;
            local63 = local16 - 64;
            local61 = local60;
            (*param1)(*(int*)(local6 - 24), *(int*)(local6 - 20), local40, local36, local32, local28, *(int*)(local6 - 16), local43, local60, local39, local35, local31, local27, local24, *(int*)(local6 - 12), *(int*)(local11 - 12), local42, local16 - 64, local38, local34, local30, local26, local23, *(int*)(local6 - 8), *(int*)(local9 - 8), *(int*)(local10 - 8), *(int*)(local11 - 8), local41, 0x1a8ea, *(int*)(local6 - 4), local37, local33, local29, local25, local22, *(int*)(local8 - 4), *(int*)(local9 - 4), *(int*)(local10 - 4), *(int*)(local11 - 4), (unsigned short) local16 - 64, local462, local16 - 64, local464, local465, param1, local16, local17, param4, *(int*)(local444 + 4), *(int*)(local444 + 8), *(int*)(local444 + 12), *(int*)(local444 + 16), *(int*)(local444 + 20), *(int*)(local444 + 24), *(int*)(local444 + 32), *(int*)(local444 + 36), *(int*)(local444 + 40), *(int*)(local444 + 44), *(int*)(local444 + 48), *(int*)(local444 + 52), *(int*)(local444 + 60), *(int*)(local444 + 64), *(int*)(local444 + 68), *(int*)(local444 + 72), *(int*)(local444 + 76), *(int*)(local444 + 80), *(int*)(local444 + 88), *(int*)(local444 + 92), *(int*)(local444 + 96), *(int*)(local444 + 100), *(int*)(local444 + 104), *(int*)(local444 + 108), local20, local21, *(int*)(local19 + 32), *(int*)(local19 + 52), *(int*)(local19 + 56), local44, local45, local46, local47, local48, local49, local50, local51, local52, local53, local54, local55, local56, local57, *(int*)(local15 - 28), local58, local59, <all>, flags, NF);
            local451 = local15;
            local452 = local444;
            *(int*)(local6 - 4) = 32;
            *(int*)(local444 + 4) = 32;
            *(int*)(local444 + 8) = 0x1a8be;
            param4 = *(int*)(local15 + 8);
            local463 = *(int*)(local15 + 8) + 32;
            *(int*)(local444 + 12) = local463;
            *(int*)(local6 - 4) = 4;
            *(int*)(local444 + 16) = 4;
            *(int*)(local444 + 20) = local15 - 32;
            *(int*)(local444 + 24) = 4;
            *(int*)(local444 + 32) = 32;
            *(int*)(local444 + 36) = 0x1a894;
            *(int*)(local444 + 40) = *(int*)(local15 + 8) + 52;
            *(int*)(local444 + 44) = 4;
            *(int*)(local444 + 48) = local15 - 36;
            *(int*)(local444 + 52) = 4;
            *(int*)(local444 + 60) = 32;
            *(int*)(local444 + 64) = *(int*)(local15 - 52);
            *(int*)(local444 + 68) = *(int*)(local15 + 16);
            *(int*)(local444 + 72) = 1;
            *(int*)(local444 + 76) = *(int*)(local15 - 60);
            *(int*)(local444 + 80) = 0;
            *(int*)(local15 - 52) = 32;
            *(int*)(local444 + 88) = 32;
            *(int*)(local444 + 92) = 0x1a86a;
            *(int*)(local444 + 96) = *(int*)(local15 + 8) + 56;
            *(int*)(local444 + 100) = 4;
            *(int*)(local444 + 104) = local15 - 40;
            *(int*)(local444 + 108) = 4;
            *(int*)(local6 - 4) = 0;
            *(int*)(local6 - 8) = 0;
            *(int*)(local6 - 12) = local444;
            *(int*)(local6 - 16) = 32;
            *(int*)(local6 - 20) = 0x80000000;
            *(int*)(local6 - 24) = local446;
            local463 = RtlQueryRegistryValues(0x80000000, 32, local444, 0, 0);
            local450 = local466;
            *(int*)(local15 - 28) = local463;
        }
        local466 = local450;
        ebp = local451;
        param3 = local452;
        local454 = local466;
        local455 = ebp;
        local456 = param3;
        local458 = param4;
        if (*(int*)(ebp - 28) < 0) {
L9:
            local11 = local454;
            ebp = local455;
            param3 = local456;
            local19 = param4;
            *(int*)(local19 + 32) = *(int*)(ebp - 32);
            *(int*)(local19 + 52) = *(int*)(ebp - 36);
            local462 =  (*(int*)(ebp - 40) == 0) ? 1 : 0;
            *(int*)(local19 + 56) = 0 >> 8 & 0xffffff | (local462);
            *(int*)(local11 - 4) = ebp - 64;
            *(int*)(local11 - 8) = *(int*)(ebp + 16);
            RtlCopyUnicodeString();
            local458 = local19;
        }
    } else {
        *(int*)(local13 - 28) = 0xc0000001;
        param4 = *(int*)(local13 + 8);
        goto L9;
    }
    local10 = local466;
    local0 = ebp;
    local18 = local458;
    local459 = local10;
    if (*(int*)(local18 + 32) == 0) {
        local1 = *(int*)(local0 - 32);
    }
    *(int*)(local18 + 32) = *(int*)(local18 + 32) * 12;
    local462 =  (*(int*)(local18 + 56) == 0) ? 1 : 0;
    *(int*)(local18 + 56) = 0 >> 8 & 0xffffff | (local462);
    *(int*)(local0 - 4) = *(int*)(local0 - 4) | -1;
    if (*(int*)(local0 - 52) != 0) {
        *(int*)(local10 - 4) = *(int*)(local0 - 52);
        ExFreePool(*(int*)(local0 - 52));
        local459 = local466;
    }
    local9 = local459;
    local460 = local9;
    if (param3 != 0) {
        *(int*)(local9 - 4) = param3;
        ExFreePool(param3);
        local460 = local466;
    }
    local8 = local460;
    param3 = proc7(*(int*)(local8 + 4), *(int*)(local8 + 8), local0, *(int*)(local0 - 16), *(int*)local8, *(int*)local0); /* Warning: also results in local464, param1, ebp, param4 */
    return *(int*)(local0 - 28); /* WARNING: Also returning: param3, (unsigned short) *(int*)(local0 - 28), local462, local464, local465, param1, ebp, param4 */
}

// address: 0x1a43a
proc3(int param5, int param2, int param1, int param3, int param4) {
    int local0; 		// r24{60}
    int local4; 		// r28{24}
    int local5; 		// r28{83}
    int local6; 		// r24
    int local9; 		// r28

    *(int*)(local9 - 4) = param1;
    *(int*)(local9 - 8) = param2;
    *(int*)(local9 - 12) = param3;
    *(int*)(local9 - 16) = param4;
    *(int*)(local9 - 20) = 0x206b6444;
    *(int*)(local9 - 24) = 56;
    *(int*)(local9 - 28) = 1;
    *(int*)param5 = 0;
    local6 = ExAllocatePoolWithTag(1, 56, 0x206b6444);
    local5 = local4;
    if (local6 != 0) {
        *(int*)(local9 - 32) = 56;
        *(int*)(local9 - 36) = 0;
        *(int*)(local9 - 40) = local6;
        *(int*)(local9 - 44) = ExAllocatePoolWithTag;
        __imp_memset(local6, 0, 56);
        *(int*)(local9 - 32) = 0;
        *(int*)(local9 - 36) = param5;
        *(int*)(local9 - 40) = local6;
        *(int*)local6 = 0x1a20a;
        *(int*)(local6 + 8) = 0;
        *(int*)(local9 - 44) = *(int*)(*(int*)(local9 + 4) + 4);
        *(int*)(local9 - 48) = 0x80000004;
        *(int*)(local9 - 52) = ExAllocatePoolWithTag - 0x8368;
        local0 = RtlQueryRegistryValues(0x80000004, *(int*)(*(int*)(local9 + 4) + 4), local6, param5, 0);
        *(int*)(local9 - 52) = local6;
        param4 = local0;
        *(int*)(local9 - 56) = RtlQueryRegistryValues;
        ExFreePool(local6);
        local5 = local9;
    } else {
        param4 = 0xc0000001;
    }
    local9 = local5;
    return param4; /* WARNING: Also returning: *(int*)(local9 + 4), param5, *(int*)(local9 + 12), *(int*)local9 */
}

// address: 0x1a346
proc4(int param7, int param8, int param6, int param5, int param10, int param9, int param3, int param2, int param4, int param1) {
    int local1; 		// r28{200}
    int local11; 		// m[r28 - 60]{65}
    int local14; 		// r24{34}
    int local15; 		// r28{29}
    PDRIVER_OBJECT local16; 		// r31{1}
    int local17; 		// r28{212}
    int local18; 		// r28{154}
    int local19; 		// local6{170}
    int local2; 		// r28{136}
    int local20; 		// local5{179}
    int local21; 		// local3{190}
    int local22; 		// local1{200}
    int local23; 		// local17{212}
    PDRIVER_OBJECT local24; 		// r31{214}
    int local25; 		// r24
    int local26; 		// r25
    int local27; 		// r26
    int local28; 		// r28
    int local3; 		// r28{190}
    int local4; 		// r28{126}
    int local5; 		// r28{179}
    int local6; 		// r28{170}
    int local7; 		// r28{112}
    int local8; 		// r28{94}
    int local9; 		// r24{72}

    local16 = param1;
    *(int*)(local28 - 4) = param2;
    *(int*)(local28 - 8) = param3;
    *(int*)(local28 - 12) = param4;
    *(int*)(local28 - 16) = param5;
    param3 = 0;
    *(int*)(local28 - 20) = 0;
    *(int*)(local28 - 24) = 0;
    *(int*)(local28 - 28) = 11;
    *(int*)(local28 - 32) = param6;
    *(int*)(local28 - 36) = 72;
    *(int*)(local28 - 40) = param7;
    local25 = IoCreateDevice(param7, 72, param6, 11, 0, 0, param5);
    local23 = local15;
    local24 = local16;
    param6 = local25;
    if (local25 < 0) {
L7:
        local17 = local23;
        param1 = local24;
        local20 = local17;
        local22 = local17;
        if (local25 != 0) {
L6:
            local5 = local20;
            local21 = local5;
            local21 = local5;
            if (param3 != 0) {
                if (*(int*)(param3 + 8) != 0) {
                    *(int*)(local5 - 4) = *(int*)(param3 + 8);
                    ExFreePool(*(int*)(param3 + 8));
                    local21 = local4;
                }
            }
            local3 = local21;
            local25 = *(int*)param5;
            local22 = local3;
            if (local25 != 0) {
                *(int*)(local3 - 4) = local25;
                IoDeleteDevice(local25);
                local22 = local2;
                *(int*)param5 = 0;
            }
        }
    } else {
        local14 = *(int*)param5;
        *(int*)(local14 + 28) = *(int*)(local14 + 28) | 4;
        param3 = *(int*)(*(int*)param5 + 40);
        param4 = param8;
        *(int*)(local28 - 44) = param1;
        *(int*)(local28 - 48) = 18;
        local26 = 18;
        param1 = param3;
        *(int*)(local28 - 48) = param3 + 48;
        while (local26 != 0) {
            *(PDRIVER_OBJECT*)param1 = *param4;
            param4 += 4;
            param1 += 4;
            local26 = local26 - 1;
        }
        *(int*)(local28 - 52) = IoCreateDevice;
        KeInitializeSpinLock(param3 + 48);
        *(int*)(local28 - 52) = 0x206b6444;
        *(int*)(local28 - 56) = *(int*)(param3 + 32);
        *(PUNICODE_STRING*)param3 = 0;
        local11 = 0;
        *(char*)(param3 + 1) = 0;
        *(char*)(param3 + 2) = 0;
        *(int*)(local28 - 64) = KeInitializeSpinLock;
        local9 = ExAllocatePoolWithTag(0, *(int*)(param3 + 32), 0x206b6444);
        *(int*)(param3 + 8) = local9;
        param1 = *(int*)(local28 - 60);
        if (local9 != 0) {
            *(int*)(local28 - 60) = param3;
            *(int*)(local28 - 64) = ExAllocatePoolWithTag;
            param9 = proc9(param3, param10); /* Warning: also results in local26, local27, local18, param1 */
            local23 = local18;
            local24 = param1;
            goto L7;
        } else {
            local25 = *(int*)param5;
            param6 = 0xc000009a;
            if (local25 == 0) {
                local25 = param7;
            }
            *(int*)(local28 - 60) = 48;
            *(int*)(local28 - 64) = local25;
            *(int*)(local28 - 68) = ExAllocatePoolWithTag;
            IoAllocateErrorLogEntry();
            local19 = local8;
            if (local25 != 0) {
                *(int*)(local25 + 24) = 0;
                *(int*)(local25 + 28) = 0;
                *(int*)(local28 - 68) = local25;
                *(int*)(local25 + 12) = 0xc0050002;
                *(int*)local25 = 0;
                *(char*)(local25 + 1) = 0;
                *(int*)(local25 + 16) = 0x2724;
                *(int*)(local25 + 20) = 0xc000009a;
                *(int*)(local28 - 72) = IoAllocateErrorLogEntry;
                IoWriteErrorLogEntry();
                local19 = local7;
            }
            local6 = local19;
            local20 = local6;
            goto L6;
        }
    }
    local1 = local22;
    return param6; /* WARNING: Also returning: *(int*)local1, param9, local26, local27, *(int*)(local1 + 4), *(int*)(local1 + 8), param1 */
}

// address: 0x1a29e
proc5(int param3, int param1, int param2, int param4) {
    int local0; 		// m[r28 - 12]
    int local1; 		// m[r28 - 8]
    int local13; 		// r24{64}
    int local14; 		// m[m[r24 + 60] + (m[r28 + 12] * 4)]{43}
    int local15; 		// r28{32}
    int local16; 		// r28{120}
    int local18; 		// r24
    int local19; 		// r25
    int local20; 		// r26
    int local21; 		// r28
    int local23; 		// r31

    local18 = IoGetDeviceObjectPointer(param1, 128, &local0, &local1);
    local16 = local15;
    local23 = local18;
    if (local18 != 0) {
L1:
        local21 = local16;
        local19 = 0;
    } else {
        local18 = *(int*)(param3 + 40);
        local14 = 0;
        local18 = *(int*)(*(int*)(local18 + 60) + param2 * 4);
        *(char*)(param3 + 48) = *(int*)(local18 + 48) + 1;
        local13 = proc8(); /* Warning: also results in local19, local20, param4 */
        local23 = local13;
        if (local13 != 0) {
            IoAllocateErrorLogEntry();
            local16 = local21;
            if (local18 != 0) {
                *(int*)(local18 + 24) = 0;
                *(int*)(local18 + 28) = 0;
                *(int*)(local18 + 12) = 0xc0050008;
                *(int*)local18 = 0;
                *(char*)(local18 + 1) = 0;
                *(int*)(local18 + 16) = 0x272e;
                *(int*)(local18 + 20) = local13;
                IoWriteErrorLogEntry();
                local16 = local21;
                goto L1;
            }
            goto L1;
        }
    }
    return local23; /* WARNING: Also returning: param3, (unsigned char) local23, local19, local20, param4, *(int*)local21 */
}

// address: 0x11950
proc6(int param5, int param1, int param2, int param3, int param4) {
    int local0; 		// r28

    *(int*)(local0 - 4) = 0x120f6;
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

// address: 0x11989
proc7(int param6, int param3, int param4, int param2, int param1, int param5) {
    int local0; 		// m[r29]{14}
    int local3; 		// r28

    *(int*)0 = param1;
    local0 = *(int*)local3;
    return param3; /* WARNING: Also returning: *(int*)local3, param4, param5, param6 */
}

// address: 0x1a21a
proc8() {
    int local0; 		// m[r28 - 12]
    int local1; 		// m[r28 - 36]
    int local17; 		// m[r28 - 92]
    int local25; 		// m[r28 - 20]
    int local26; 		// r28{105}
    int local27; 		// r28{68}
    int local28; 		// r28{86}
    int local31; 		// local26{105}
    int local32; 		// r24
    int local33; 		// r25
    int local34; 		// r26
    int local36; 		// r28
    int local37; 		// r30

    local37 = *(int*)(*(int*)(local36 + 4) + 40);
    KeInitializeEvent(local36 - 36, 0, 0);
    local17 = *(int*)(*(int*)(local37 + 60) + *(int*)(local36 + 12) * 4);
    IoBuildDeviceIoControlRequest(0xb0203, local17, &local0, 8, 0, 0, 1, local36 - 36, local36 - 20);
    local32 = IofCallDriver(0xb0203, local17);
    local31 = local27;
    if (local32 != 259) {
        local25 = local32;
    } else {
        KeWaitForSingleObject(&local1, 5, 0, 0, 0);
        local31 = local28;
    }
    local26 = local31;
    return local25; /* WARNING: Also returning: local33, local34, *(int*)(local26 + 8) */
}

// address: 0x11f6e
proc9(int param1, int param2) {
    char local10; 		// r28
    int local2; 		// m[r28 - 12]
    char local8; 		// r25
    char local9; 		// r26

    KfAcquireSpinLock();
    local8 = *(int*)(param1 + 8);
    *(int*)(param1 + 4) = 0;
    *(int*)(param1 + 12) = local8;
    *(int*)(param1 + 16) = local8;
    *(char*)(param1 + 68) = 1;
    KfReleaseSpinLock();
    return param2; /* WARNING: Also returning: local8, local9, local2 */
}

