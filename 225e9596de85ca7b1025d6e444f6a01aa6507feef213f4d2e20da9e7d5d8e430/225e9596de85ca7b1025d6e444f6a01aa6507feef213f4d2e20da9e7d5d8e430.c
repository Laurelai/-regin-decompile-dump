char memset[0] = "\xffffffda\xffffff89";
char IoAllocateErrorLogEntry[0] = "D\xffffff89";
char IoWriteErrorLogEntry[0] = ",\xffffff89";
char _allmul[0] = "\xffffff9a\xffffff8a";
void RtlInitUnicodeString;
void READ_PORT_UCHAR;
char KeInitializeEvent[0] = ",\xffffff8a";
void KeWaitForSingleObject;
char IofCallDriver[0] = "\xfffffffc\xffffff89";
char IoBuildDeviceIoControlRequest[0] = "\f\xffffff8a";
int global12 = 1;
char ExAcquireFastMutex[0] = "\xffffffb4\xffffff8d";
int global10 = 0;
char ExReleaseFastMutex[0] = "\xffffff9e\xffffff8d";
char MmResetDriverPaging[0] = "\xffffffba\xffffff8c";
char ExQueueWorkItem[0] = "\x04\xffffff8d";
void ExAllocatePoolWithTag;
void ExFreePool;
void RtlAppendUnicodeStringToString;
short global18 = 92;
void global21;
void global20;
char IoCreateDevice[0] = " \xffffff8c";
char IoGetDeviceObjectPointer[0] = "\x04\xffffff8c";
char IoDeleteDevice[0] = "n\xffffff8b";
char KeInitializeSemaphore[0] = "\xffffffec\xffffff8b";
char ObfDereferenceObject[0] = "\xffffffda\xffffff8a";
char RtlWriteRegistryValue[0] = "\xffffffb2\xffffff8b";
char IoCreateUnprotectedSymbolicLink[0] = "\xffffffca\xffffff8b";
char IoGetConfigurationInformation[0] = "\xffffffd0\xffffff8c";
char MmPageEntireDriver[0] = "\xffffffae\xffffff8a";

proc1(int param5, int param1, int param2, int param3, int param4);
proc2(int param3, int param8, int param6, int param7, int param2, int param1, int param4, int param5, int param9);
proc3(int param6, int param3, int param4, int param2, int param1, int param5);
proc4(int param1, int param2, int param3);
proc5(int param3, int param2, int param5, int param6, int param7, int param8, int param10, int param11, int param12, int param13, int param14, int param9, int param4, int param1);
__imp_memset(int param1, int param2, int param3);
proc7(int param1);
proc8(int param2, int param3, int param4, int param8, int param5, int param1, int param6, int param7);
proc9(int param5, int param4, int param1, int param2, int param3, int param6);
proc10(int param6, int param8, int param7, int param2, int param1, int param3, int param4, int param5, int param9);
proc11(int param5, int param6, int param2, int param1, int param3, int param4);
void proc12(int param2, int param1, int param3);
proc13();
__imp__allmul();

// address: 0x18586
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
    int local0; 		// r28{94}
    int local1; 		// global12{96}
    int local10; 		// r8
    int local11; 		// r9
    int local12; 		// r10
    int local13; 		// r11
    int local14; 		// r24
    int local15; 		// r25
    int local16; 		// r26
    int local17; 		// r27
    int local18; 		// r28
    int local19; 		// r29
    int local2; 		// r28{54}
    int local20; 		// r30
    int local21; 		// r31
    int local3; 		// r28{22}
    int local4; 		// m[r29 - 28]{70}
    int local5; 		// r28{146}
    int local6; 		// r28{158}
    int local7; 		// global12{162}
    int local8; 		// r0
    int local9; 		// r3

    local7 = global12;
    local7 = global12;
    *(int*)(local18 - 4) = 12;
    *(int*)(local18 - 8) = 0x161a0;
    local19 = proc1(0x161a0, 12, local17, local20, local21);
    local21 = 0;
    *(int*)(local19 - 4) = 0;
    *(int*)24 = 0;
    *(int*)(local18 - 4) = 0x43726150;
    *(int*)(local18 - 8) = 32;
    *(int*)(local18 - 12) = 0;
    local14 = ExAllocatePoolWithTag(0, 32, 0x43726150);
    local6 = local3;
    global10 = local14;
    if (local14 == 0) {
        *(int*)(local19 - 4) = -1;
        local14 = 0xc000009a;
    } else {
        *(int*)local14 = 1;
        *(int*)(local14 + 8) = 0;
        *(int*)(local18 - 16) = 0;
        *(int*)(local18 - 20) = 1;
        *(int*)(local18 - 24) = local14 + 12;
        *(int*)(local18 - 28) = ExAllocatePoolWithTag;
        KeInitializeEvent(local14 + 12, 1, 0);
        *(int*)(local19 - 28) = 0;
        local20 = *(int*)(local19 + 8);
        for(;;) {
            local14 = IoGetConfigurationInformation();
            local6 = local2;
            if ((unsigned)*(int*)(local19 - 28) >= (unsigned)*(int*)(local14 + 24)) {
                break;
            }
            *(int*)(local18 - 4) = *(int*)(local19 - 28);
            *(int*)(local18 - 8) = *(int*)(local19 + 12);
            *(int*)(local18 - 12) = local20;
            *(int*)(local18 - 16) = IoGetConfigurationInformation;
            local20 = proc2(*(int*)(local19 - 28), local9, local11, local12, local17, local19, local20, local21, <all>); /* Warning: also results in local8, local9, local10, local11, local12, local13, local17, local19, local21 */
            local4 = *(int*)(local19 - 28) + 1;
        }
        if (*(int*)(local20 + 4) != local21) {
            *(int*)(local20 + 56) = 0x129b6;
            *(int*)(local20 + 64) = 0x11bf0;
            *(int*)(local20 + 128) = 0x11c7a;
            *(int*)(local20 + 68) = 0x11dfc;
            *(int*)(local20 + 72) = 0x11dfc;
            *(int*)(local20 + 112) = 0x11eb4;
            *(int*)(local20 + 76) = 0x11fe4;
            *(int*)(local20 + 80) = 0x12058;
            *(int*)(local20 + 52) = 0x1208a;
            *(int*)(local18 - 4) = IoGetConfigurationInformation;
            ExAcquireFastMutex(*(int*)local18);
            local5 = local0;
            local1 = global12 - 1;
            local7 = local1;
            if (global12 - 1 == 0) {
                *(int*)(local18 - 4) = 0x18586;
                *(int*)(local18 - 8) = ExAcquireFastMutex;
                MmPageEntireDriver();
                local5 = local18;
            }
            local18 = local5;
            ExReleaseFastMutex(*(int*)local18);
            local6 = local18;
            *(int*)(local19 - 4) = *(int*)(local19 - 4) | -1;
            local14 = 0;
        } else {
            *(int*)(local19 - 4) = *(int*)(local19 - 4) | -1;
            local14 = 0xc000000e;
        }
    }
    local18 = local6;
    global12 = local7;
    local20 = proc3(DriverObject, RegistryPath, local19, *(int*)(local19 - 16), *(int*)local18, *(int*)local19); /* Warning: also results in local15, local17, local19, local21 */
    return local14;
}

// address: 0x11000
proc1(int param5, int param1, int param2, int param3, int param4) {
    int local0; 		// r28

    *(int*)(local0 - 4) = 0x12bea;
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

// address: 0x18314
proc2(int param3, int param8, int param6, int param7, int param2, int param1, int param4, int param5, int param9) {
    int local0; 		// r25{446}
    int local1; 		// r28{27}
    int local10; 		// r30{314}
    int local100; 		// m[r28 - 72]{649}
    int local101; 		// m[r28 - 76]{650}
    int local102; 		// m[r28 - 80]{651}
    int local103; 		// m[r28 - 84]{652}
    char local104[0]; 		// m[r28 - 88]{653}
    int local105; 		// m[r28 - 92]{654}
    int local106; 		// m[r28 - 96]{655}
    int local107; 		// m[r28 - 100]{656}
    int local108; 		// m[r28 - 104]{657}
    int local109; 		// m[r28 - 108]{658}
    int local11; 		// r30{250}
    int local110; 		// m[r28 - 112]{659}
    int local111; 		// m[r28 - 116]{660}
    int local112; 		// m[r28 - 4]{661}
    int local113; 		// m[r28 - 8]{662}
    int local114; 		// m[r28 - 12]{663}
    int local115; 		// m[r28 - 16]{664}
    int local116; 		// m[r28 - 20]{665}
    int local117; 		// m[r28 - 24]{666}
    int local118; 		// m[r28 - 28]{667}
    int local119; 		// m[r28 - 32]{668}
    int local12; 		// r30{446}
    int local120; 		// m[r28 - 36]{669}
    int local121; 		// m[r28 - 40]{670}
    int local122; 		// m[r28 - 44]{671}
    int local123; 		// m[r28 - 48]{672}
    int local124; 		// m[r28 - 52]{673}
    int local125; 		// m[r28 - 56]{674}
    char local126[0]; 		// m[r28 - 60]{675}
    int local127; 		// m[r28 - 4]{676}
    void *local128; 		// %pc{446}
    int local129; 		// %pc{551}
    int local13; 		// m[r30 + 97]{446}
    int local130; 		// %flags{552}
    int local131; 		// %CF{553}
    int local132; 		// m[r28 - 8]{444}
    int local133; 		// m[r28 - 4]{440}
    int local134; 		// m[r28 - 60]{646}
    int local135; 		// r25{439}
    int local136; 		// r27{439}
    int local137; 		// r28{439}
    int local138; 		// r29{439}
    int local139; 		// r31{439}
    int local14; 		// m[r30 + 100]{446}
    int local140; 		// m[r30 + 97]{614}
    int local141; 		// m[r30 + 100]{615}
    int local142; 		// m[r30 + 104]{616}
    int local143; 		// m[r30 + 84]{291}
    char local144; 		// m[r30 + 88]{292}
    char local145; 		// m[r30 + 89]{613}
    int local146; 		// m[r30 + 120]{308}
    int local147; 		// m[r30 + 124]{309}
    int local148; 		// m[r30 + 128]{310}
    int local149; 		// m[r30 + 132]{304}
    int local15; 		// m[r30 + 104]{446}
    int local150; 		// m[m[r29 + 16] + 28]{152}
    int local151; 		// m[r28 - 40]{159}
    int local152; 		// m[r28 - 44]{162}
    int local153; 		// m[r28 - 48]{164}
    int local154; 		// m[r28 - 52]{168}
    int local155; 		// m[r28 - 56]{227}
    int local156; 		// m[r28 - 64]{235}
    int local157; 		// m[r28 - 68]{306}
    int local158; 		// m[r28 - 72]{312}
    int local159; 		// m[r28 - 76]{452}
    int local16; 		// m[r30 + 84]{446}
    int local160; 		// m[r28 - 80]{452}
    int local161; 		// m[r28 - 84]{452}
    int local162; 		// m[r28 - 88]{452}
    int local163; 		// m[r28 - 92]{452}
    int local164; 		// m[r28 - 96]{452}
    int local165; 		// m[r28 - 100]{452}
    int local166; 		// m[r28 - 104]{452}
    int local167; 		// m[r28 - 108]{452}
    int local168; 		// m[r28 - 112]{452}
    int local169; 		// m[r28 - 116]{452}
    int local17; 		// m[r30 + 88]{446}
    int local170; 		// m[r28 - 4]{317}
    int local171; 		// m[r28 - 8]{321}
    int local172; 		// m[r28 - 12]{617}
    int local173; 		// m[r28 - 16]{618}
    int local174; 		// m[r28 - 20]{619}
    int local175; 		// m[r28 - 24]{620}
    int local176; 		// m[r28 - 28]{621}
    int local177; 		// m[r28 - 32]{622}
    int local178; 		// m[r28 - 36]{623}
    int local179; 		// m[r28 - 40]{624}
    int local18; 		// m[r30 + 89]{446}
    int local180; 		// m[r28 - 44]{625}
    int local181; 		// m[r28 - 48]{626}
    int local182; 		// m[r28 - 52]{627}
    int local183; 		// m[r28 - 56]{628}
    char local184[0]; 		// m[r28 - 60]{629}
    int local185; 		// m[r28 - 4]{452}
    int local186; 		// %pc{438}
    int local187; 		// %flags{402}
    int local188; 		// %CF{402}
    int local189; 		// r30{439}
    int local19; 		// m[r30 + 120]{446}
    int local190; 		// r27{531}
    int local191; 		// r29{533}
    int local192; 		// r31{520}
    int local193; 		// m[r28 - 8]{446}
    int local194; 		// %pc{534}
    int local195; 		// m[r28 - 12]{437}
    int local196; 		// m[r28 - 8]{434}
    int local197; 		// m[r28 - 4]{432}
    int local198; 		// r27{431}
    int local199; 		// r28{431}
    int local2; 		// r28{314}
    int local20; 		// m[r30 + 124]{446}
    int local200; 		// r29{431}
    int local201; 		// %pc{430}
    int local202; 		// r25{431}
    int local203; 		// r27{517}
    int local204; 		// r29{519}
    int local205; 		// m[r28 - 12]{446}
    int local206; 		// m[r28 - 16]{446}
    int local207; 		// m[r28 - 20]{446}
    int local208; 		// m[r28 - 24]{446}
    int local209; 		// m[r28 - 28]{446}
    int local21; 		// m[r30 + 128]{446}
    int local210; 		// m[r28 - 32]{446}
    int local211; 		// m[r28 - 36]{446}
    int local212; 		// m[r28 - 40]{446}
    int local213; 		// m[r28 - 44]{446}
    int local214; 		// m[r28 - 48]{446}
    int local215; 		// m[r28 - 52]{446}
    int local216; 		// m[r28 - 56]{429}
    int local217; 		// m[r28 - 52]{426}
    int local218; 		// m[r28 - 48]{424}
    int local219; 		// m[r28 - 44]{422}
    int local22; 		// m[r30 + 132]{446}
    int local220; 		// m[r28 - 40]{420}
    int local221; 		// m[r28 - 36]{418}
    int local222; 		// m[r28 - 32]{416}
    int local223; 		// m[r28 - 28]{414}
    int local224; 		// m[r28 - 24]{412}
    int local225; 		// m[r28 - 20]{410}
    int local226; 		// m[r28 - 16]{408}
    int local227; 		// m[r28 - 12]{406}
    int local228; 		// m[r28 - 8]{404}
    int local229; 		// r28{400}
    int local23; 		// m[m[r29 + 16] + 28]{446}
    int local230; 		// %pc{399}
    int local231; 		// r25{400}
    int local232; 		// m[r28 - 8]{398}
    int local233; 		// %pc{522}
    int local234; 		// m[r28 - 4]{395}
    int local235; 		// r27{394}
    int local236; 		// r28{394}
    int local237; 		// r29{394}
    int local238; 		// r31{327}
    int local239; 		// m[r30 + 97]{380}
    int local24;
    int local240; 		// m[r30 + 100]{452}
    int local241; 		// m[r30 + 104]{452}
    int local242; 		// m[r28 - 12]{366}
    int local243; 		// m[r28 - 16]{368}
    int local244; 		// m[r28 - 20]{370}
    int local245; 		// m[r28 - 24]{372}
    int local246; 		// m[r28 - 28]{374}
    int local247; 		// m[r28 - 32]{376}
    int local248; 		// m[r28 - 36]{378}
    int local249; 		// m[r28 - 40]{381}
    int local25;
    int local250; 		// m[r28 - 44]{383}
    int local251; 		// m[r28 - 48]{385}
    int local252; 		// m[r28 - 52]{387}
    int local253; 		// m[r28 - 56]{389}
    char local254[0]; 		// m[r28 - 60]{392}
    int local255; 		// %pc{393}
    int local256; 		// r25{394}
    int local257; 		// r27{314}
    int local258; 		// r29{314}
    int local259; 		// r28{363}
    int local26;
    int local260; 		// r31{364}
    char local261; 		// m[r30 + 97]{331}
    int local262; 		// m[r30 + 100]{334}
    int local263; 		// m[r30 + 104]{337}
    int local264; 		// m[r28 - 12]{348}
    int local265; 		// m[r28 - 16]{350}
    int local266; 		// m[r28 - 20]{352}
    int local267; 		// m[r28 - 24]{354}
    int local268; 		// m[r28 - 28]{356}
    int local269; 		// m[r28 - 32]{358}
    int local27;
    char local270[0]; 		// m[r28 - 36]{361}
    int local271; 		// m[r28 - 40]{452}
    int local272; 		// m[r28 - 44]{452}
    int local273; 		// m[r28 - 48]{452}
    int local274; 		// m[r28 - 52]{452}
    int local275; 		// m[r28 - 56]{452}
    int local276; 		// m[r28 - 60]{452}
    char local277[0]; 		// %pc{362}
    int local278; 		// r25{363}
    int local279; 		// r25{326}
    int local28;
    int local280; 		// r28{326}
    int local281; 		// m[r28 - 12]{324}
    int local282; 		// r25{314}
    int local283; 		// r31{314}
    int local284; 		// r31{250}
    int local285; 		// m[r30 + 132]{452}
    char local286; 		// m[r30 + 89]{303}
    char local287; 		// m[r30 + 89]{301}
    int local288; 		// %flags{252}
    int local289; 		// %CF{252}
    int local29;
    int local290; 		// r25{250}
    int local291; 		// r28{250}
    char local292[0]; 		// m[r28 - 72]{248}
    int local293; 		// m[r30 + 92]{246}
    char local294; 		// m[r30 + 91]{245}
    char local295; 		// m[r30 + 90]{244}
    int local296; 		// m[r30 + 48]{243}
    int local297; 		// m[r28 - 68]{241}
    int local298; 		// r25{240}
    int local299; 		// r28{240}
    int local3; 		// r28{284}
    int local30;
    char local300[0]; 		// m[r28 - 68]{238}
    int local301; 		// m[r28 - 60]{231}
    int local302; 		// m[r30 + 16]{229}
    int local303; 		// m[m[r29 + 16] + 48]{224}
    int local304; 		// %flags{175}
    int local305; 		// %CF{175}
    int local306; 		// r25{173}
    int local307; 		// r28{173}
    int local308; 		// m[r28 - 56]{171}
    int local309; 		// r31{161}
    int local31;
    int local310; 		// m[m[r29 + 16] + 28]{452}
    int local311; 		// m[r30]{149}
    int local312; 		// r25{146}
    int local313; 		// r28{146}
    char local314[0]; 		// m[r28 - 52]{144}
    int local315; 		// m[r28 - 48]{141}
    int local316; 		// m[r28 - 44]{139}
    int local317; 		// m[r28 - 40]{137}
    int local318; 		// r25{132}
    int local319; 		// r27{473}
    int local32;
    int local320; 		// r28{132}
    int local321; 		// r29{475}
    int local322; 		// r31{477}
    int local323; 		// m[r30 + 97]{452}
    int local324; 		// m[r30 + 84]{452}
    int local325; 		// m[r30 + 88]{452}
    int local326; 		// m[r30 + 89]{452}
    int local327; 		// m[r30 + 120]{452}
    int local328; 		// m[r30 + 124]{452}
    int local329; 		// m[r30 + 128]{452}
    int local33;
    int local330; 		// m[m[r29 + 16] + 28]{574}
    int local331; 		// m[r28 - 40]{575}
    int local332; 		// m[r28 - 44]{576}
    int local333; 		// m[r28 - 48]{577}
    int local334; 		// m[r28 - 52]{578}
    int local335; 		// m[r28 - 56]{579}
    int local336; 		// m[r28 - 64]{581}
    int local337; 		// m[r28 - 68]{582}
    int local338; 		// m[r28 - 72]{583}
    int local339; 		// m[r28 - 76]{584}
    int local34;
    int local340; 		// m[r28 - 80]{585}
    int local341; 		// m[r28 - 84]{586}
    char local342[0]; 		// m[r28 - 88]{587}
    int local343; 		// m[r28 - 92]{588}
    int local344; 		// m[r28 - 96]{589}
    int local345; 		// m[r28 - 100]{590}
    int local346; 		// m[r28 - 104]{591}
    int local347; 		// m[r28 - 108]{592}
    int local348; 		// m[r28 - 112]{593}
    int local349; 		// m[r28 - 116]{594}
    int local35;
    int local350;
    int local351; 		// m[r28 - 8]{452}
    int local352; 		// m[r28 - 12]{452}
    int local353; 		// m[r28 - 16]{452}
    int local354; 		// m[r28 - 20]{452}
    int local355; 		// m[r28 - 24]{452}
    int local356; 		// m[r28 - 28]{452}
    int local357; 		// m[r28 - 32]{452}
    int local358; 		// m[r28 - 36]{452}
    int local359; 		// m[r28 - 4]{595}
    int local36;
    int local360; 		// %pc{131}
    int local361; 		// %flags{481}
    int local362; 		// %CF{482}
    int local363; 		// m[r28 - 8]{130}
    int local364; 		// %pc{480}
    int local365; 		// m[r28 - 4]{127}
    int local366; 		// m[r28 - 60]{580}
    int local367; 		// r27{126}
    int local368; 		// r28{126}
    int local369; 		// r29{126}
    int local37;
    int local370; 		// r31{84}
    int local371; 		// m[r28 - 40]{99}
    int local372; 		// m[r28 - 44]{101}
    int local373; 		// m[r28 - 48]{103}
    int local374; 		// m[r28 - 52]{105}
    int local375; 		// m[r28 - 56]{107}
    int local376; 		// m[r28 - 64]{111}
    int local377; 		// m[r28 - 68]{113}
    int local378; 		// m[r28 - 72]{115}
    int local379; 		// m[r28 - 76]{117}
    int local38;
    int local380; 		// m[r28 - 80]{119}
    int local381; 		// m[r28 - 84]{121}
    char local382[0]; 		// m[r28 - 88]{124}
    int local383; 		// %pc{125}
    int local384; 		// %flags{94}
    int local385; 		// %CF{94}
    int local386; 		// r25{126}
    int local387; 		// m[r28 - 60]{109}
    int local388; 		// r25{92}
    int local389; 		// r28{92}
    int local39;
    int local390; 		// m[r28 - 40]{90}
    int local391; 		// m[r28 - 36]{87}
    int local392; 		// m[r28 - 32]{85}
    int local393; 		// m[r28 - 28]{82}
    int local394; 		// m[r28 - 24]{78}
    int local395; 		// m[r28 - 20]{76}
    int local396; 		// m[r28 - 16]{74}
    int local397; 		// m[r28 - 12]{72}
    int local398; 		// m[r28 - 8]{68}
    int local399; 		// m[r28 - 4]{66}
    int local4; 		// r28{532}
    int local40;
    int local400; 		// r25{27}
    int local401; 		// r27{27}
    int local402; 		// r30{136}
    int local403; 		// m[r28 - 52]{25}
    int local404; 		// m[r28 - 48]{22}
    int local405; 		// m[r28 - 44]{20}
    int local406; 		// m[r28 - 40]{16}
    int local407; 		// m[r28 - 36]{12}
    int local408; 		// m[r28 - 32]{8}
    int local409; 		// m[r28 - 4]{2}
    int local41;
    int local410; 		// r27{490}
    int local411; 		// r28{213}
    int local412; 		// r29{492}
    int local413; 		// r31{494}
    int local414; 		// m[r28 - 56]{596}
    int local415; 		// m[r28 - 64]{598}
    int local416; 		// m[r28 - 68]{599}
    int local417; 		// m[r28 - 72]{600}
    int local418; 		// m[r28 - 76]{601}
    int local419; 		// m[r28 - 80]{602}
    int local42;
    int local420; 		// m[r28 - 84]{603}
    int local421; 		// m[r28 - 88]{604}
    int local422; 		// m[r28 - 92]{605}
    int local423; 		// m[r28 - 96]{606}
    int local424; 		// m[r28 - 100]{607}
    char local425[0]; 		// m[r28 - 104]{608}
    int local426; 		// m[r28 - 108]{609}
    int local427; 		// m[r28 - 112]{610}
    int local428; 		// m[r28 - 116]{611}
    int local429; 		// m[r28 - 4]{612}
    int local43;
    char local430[0]; 		// %pc{212}
    int local431; 		// %flags{498}
    int local432; 		// %CF{499}
    int local433; 		// r25{213}
    int local434; 		// m[r28 - 8]{211}
    int local435; 		// %pc{497}
    int local436; 		// m[r28 - 4]{208}
    int local437; 		// m[r28 - 60]{597}
    int local438; 		// r27{207}
    int local439; 		// r28{207}
    int local44;
    int local440; 		// r29{207}
    int local441; 		// m[r28 - 56]{180}
    int local442; 		// m[r28 - 64]{184}
    int local443; 		// m[r28 - 68]{186}
    int local444; 		// m[r28 - 76]{190}
    int local445; 		// m[r28 - 80]{192}
    int local446; 		// m[r28 - 84]{194}
    int local447; 		// m[r28 - 88]{196}
    int local448; 		// m[r28 - 92]{198}
    int local449; 		// m[r28 - 96]{200}
    int local45; 		// m[r28 - 64]{446}
    int local450; 		// m[r28 - 100]{202}
    char local451[0]; 		// m[r28 - 104]{205}
    int local452; 		// %pc{206}
    int local453; 		// r25{207}
    int local454; 		// m[r28 - 72]{188}
    int local455; 		// m[r28 - 60]{182}
    int local456; 		// r27{284}
    int local457; 		// r28{289}
    int local458; 		// r29{284}
    int local459; 		// m[r28 - 68]{257}
    int local46; 		// m[r28 - 72]{446}
    int local460; 		// m[r28 - 76]{261}
    int local461; 		// m[r28 - 80]{263}
    int local462; 		// m[r28 - 84]{265}
    int local463; 		// m[r28 - 88]{267}
    int local464; 		// m[r28 - 92]{269}
    int local465; 		// m[r28 - 96]{271}
    int local466; 		// m[r28 - 100]{273}
    int local467; 		// m[r28 - 104]{275}
    int local468; 		// m[r28 - 108]{277}
    int local469; 		// m[r28 - 112]{279}
    int local47; 		// m[r28 - 76]{446}
    int local470; 		// m[r28 - 116]{282}
    int local471; 		// m[r28 - 4]{287}
    char local472[0]; 		// %pc{288}
    int local473; 		// r25{289}
    int local474; 		// r25{284}
    int local475; 		// m[r28 - 72]{259}
    int local476; 		// local319{473}
    int local477; 		// local8{474}
    int local478; 		// local321{475}
    int local479; 		// local322{477}
    int local48; 		// m[r28 - 80]{446}
    char local480[0]; 		// local364{480}
    int local481; 		// local361{481}
    int local482; 		// local362{482}
    int local483; 		// local330{574}
    int local484; 		// local331{575}
    int local485; 		// local332{576}
    int local486; 		// local333{577}
    int local487; 		// local334{578}
    int local488; 		// local335{579}
    int local489; 		// local336{581}
    int local49; 		// m[r28 - 84]{446}
    int local490; 		// local337{582}
    int local491; 		// local338{583}
    int local492; 		// local339{584}
    int local493; 		// local340{585}
    int local494; 		// local341{586}
    int local495; 		// local342{587}
    int local496; 		// local343{588}
    int local497; 		// local344{589}
    int local498; 		// local345{590}
    char local499[0]; 		// local346{591}
    int local5; 		// r28{518}
    int local50; 		// m[r28 - 88]{446}
    int local500; 		// local347{592}
    int local501; 		// local348{593}
    int local502; 		// local349{594}
    int local503; 		// local359{595}
    int local504; 		// local410{490}
    int local505; 		// local6{491}
    int local506; 		// local412{492}
    int local507; 		// local413{494}
    char local508[0]; 		// local435{497}
    int local509; 		// local431{498}
    int local51; 		// m[r28 - 92]{446}
    int local510; 		// local432{499}
    int local511; 		// local414{596}
    int local512; 		// local415{598}
    int local513; 		// local416{599}
    int local514; 		// local418{601}
    int local515; 		// local419{602}
    int local516; 		// local420{603}
    int local517; 		// local421{604}
    int local518; 		// local422{605}
    int local519; 		// local423{606}
    int local52; 		// m[r28 - 96]{446}
    int local520; 		// local424{607}
    int local521; 		// local425{608}
    int local522; 		// local426{609}
    int local523; 		// local427{610}
    int local524; 		// local428{611}
    int local525; 		// local429{612}
    char local526; 		// local145{613}
    int local527; 		// local203{517}
    int local528; 		// local5{518}
    int local529; 		// local204{519}
    int local53; 		// m[r28 - 100]{446}
    int local530; 		// local192{520}
    int local531; 		// local233{522}
    int local532; 		// local140{614}
    int local533; 		// local141{615}
    int local534; 		// local142{616}
    int local535; 		// local172{617}
    int local536; 		// local173{618}
    int local537; 		// local174{619}
    int local538; 		// local175{620}
    int local539; 		// local176{621}
    int local54; 		// m[r28 - 104]{446}
    int local540; 		// local177{622}
    int local541; 		// local178{623}
    int local542; 		// local179{624}
    int local543; 		// local180{625}
    int local544; 		// local181{626}
    int local545; 		// local182{627}
    int local546; 		// local183{628}
    char local547[0]; 		// local184{629}
    int local548; 		// local190{531}
    int local549; 		// local4{532}
    int local55; 		// m[r28 - 108]{446}
    int local550; 		// local191{533}
    int local551; 		// local194{534}
    int local552; 		// local76{542}
    int local553; 		// local77{544}
    int local554; 		// local7{545}
    int local555; 		// local79{546}
    int local556; 		// local81{548}
    int local557; 		// local129{551}
    int local558; 		// local130{552}
    int local559; 		// local131{553}
    int local56; 		// m[r28 - 112]{446}
    int local560; 		// local82{630}
    int local561; 		// local83{631}
    int local562; 		// local84{632}
    int local563; 		// local85{633}
    char local564; 		// local86{634}
    char local565; 		// local87{635}
    int local566; 		// local88{636}
    int local567; 		// local89{637}
    int local568; 		// local90{638}
    int local569; 		// local91{639}
    int local57; 		// m[r28 - 116]{446}
    int local570; 		// local92{640}
    int local571; 		// local93{641}
    int local572; 		// local94{642}
    int local573; 		// local95{643}
    int local574; 		// local96{644}
    int local575; 		// local97{645}
    int local576; 		// local98{647}
    int local577; 		// local99{648}
    int local578; 		// local100{649}
    int local579; 		// local101{650}
    int local58;
    int local580; 		// local102{651}
    int local581; 		// local103{652}
    char local582[0]; 		// local104{653}
    int local583; 		// local105{654}
    int local584; 		// local106{655}
    int local585; 		// local107{656}
    int local586; 		// local108{657}
    int local587; 		// local109{658}
    int local588; 		// local110{659}
    int local589; 		// local111{660}
    int local59;
    int local590; 		// local112{661}
    int local591; 		// local113{662}
    int local592; 		// local114{663}
    int local593; 		// local115{664}
    int local594; 		// local116{665}
    int local595; 		// local117{666}
    int local596; 		// local118{667}
    int local597; 		// local119{668}
    int local598; 		// local120{669}
    int local599; 		// local121{670}
    int local6; 		// r28{491}
    int local60;
    int local600; 		// local122{671}
    int local601; 		// local123{672}
    int local602; 		// local124{673}
    int local603; 		// local125{674}
    char local604[0]; 		// local126{675}
    int local605; 		// local127{676}
    int local606; 		// r30{566}
    int local607; 		// r0
    int local608; 		// r8
    int local609; 		// r11
    int local61;
    int local610; 		// r24
    int local611; 		// r25
    int local612; 		// r26
    int local613; 		// r28
    int local62;
    int local63;
    int local64;
    int local65;
    int local66;
    int local67;
    int local68;
    int local69;
    int local7; 		// r28{545}
    int local70; 		// m[r28 - 56]{446}
    int local71; 		// m[r28 - 60]{446}
    int local72; 		// m[r28 - 4]{446}
    void *local73; 		// m[r28 - 8]{450}
    int local74; 		// r28{446}
    int local75; 		// m[r28 - 4]{447}
    int local76; 		// r25{542}
    int local77; 		// r27{544}
    int local78; 		// r29{27}
    int local79; 		// r29{546}
    int local8; 		// r28{474}
    int local80; 		// r30{27}
    int local81; 		// r31{548}
    int local82; 		// m[r30 + 97]{630}
    int local83; 		// m[r30 + 100]{631}
    int local84; 		// m[r30 + 104]{632}
    int local85; 		// m[r30 + 84]{633}
    char local86; 		// m[r30 + 88]{634}
    char local87; 		// m[r30 + 89]{635}
    int local88; 		// m[r30 + 120]{636}
    int local89; 		// m[r30 + 124]{637}
    int local9; 		// r29{446}
    int local90; 		// m[r30 + 128]{638}
    int local91; 		// m[r30 + 132]{639}
    int local92; 		// m[m[r29 + 16] + 28]{640}
    int local93; 		// m[r28 - 40]{641}
    int local94; 		// m[r28 - 44]{642}
    int local95; 		// m[r28 - 48]{643}
    int local96; 		// m[r28 - 52]{644}
    int local97; 		// m[r28 - 56]{645}
    int local98; 		// m[r28 - 64]{647}
    int local99; 		// m[r28 - 68]{648}

    local605 = *(int*)(local3 - 4);
    local604 = *(int*)(local2 - 60);
    local603 = *(int*)(local2 - 56);
    local602 = *(int*)(local2 - 52);
    local601 = *(int*)(local2 - 48);
    local600 = *(int*)(local2 - 44);
    local599 = *(int*)(local2 - 40);
    local598 = *(int*)(local2 - 36);
    local597 = *(int*)(local2 - 32);
    local596 = *(int*)(local2 - 28);
    local595 = *(int*)(local2 - 24);
    local594 = *(int*)(local2 - 20);
    local593 = *(int*)(local2 - 16);
    local592 = *(int*)(local2 - 12);
    local591 = *(int*)(local2 - 8);
    local590 = *(int*)(local2 - 4);
    local589 = *(int*)(local1 - 116);
    local588 = *(int*)(local1 - 112);
    local587 = *(int*)(local1 - 108);
    local586 = *(int*)(local1 - 104);
    local585 = *(int*)(local1 - 100);
    local584 = *(int*)(local1 - 96);
    local583 = *(int*)(local1 - 92);
    local582 = *(int*)(local1 - 88);
    local581 = *(int*)(local1 - 84);
    local580 = *(int*)(local1 - 80);
    local579 = *(int*)(local1 - 76);
    local569 = *(int*)(local11 + 132);
    local568 = *(int*)(local11 + 128);
    local567 = *(int*)(local11 + 124);
    local566 = *(int*)(local11 + 120);
    local565 = *(int*)(local11 + 89);
    local564 = *(int*)(local11 + 88);
    local563 = *(int*)(local11 + 84);
    local562 = *(int*)(local10 + 104);
    local561 = *(int*)(local10 + 100);
    local560 = *(int*)(local10 + 97);
    local547 = *(int*)(local2 - 60);
    local546 = *(int*)(local2 - 56);
    local545 = *(int*)(local2 - 52);
    local544 = *(int*)(local2 - 48);
    local543 = *(int*)(local2 - 44);
    local542 = *(int*)(local2 - 40);
    local534 = *(int*)(local10 + 104);
    local533 = *(int*)(local10 + 100);
    local525 = *(int*)(local3 - 4);
    local524 = *(int*)(local1 - 116);
    local523 = *(int*)(local1 - 112);
    local522 = *(int*)(local1 - 108);
    local503 = *(int*)(local3 - 4);
    local502 = *(int*)(local1 - 116);
    local501 = *(int*)(local1 - 112);
    local500 = *(int*)(local1 - 108);
    local499 = *(int*)(local1 - 104);
    local498 = *(int*)(local1 - 100);
    local497 = *(int*)(local1 - 96);
    local496 = *(int*)(local1 - 92);
    local483 = *(int*)(*(int*)(local78 + 16) + 28);
    local409 = param1;
    local408 = param2;
    local407 = local613 - 12;
    local406 = local613 - 20;
    local405 = local613 - 28;
    local404 = param3;
    local80 = proc4(local613 - 4, param4, param5); /* Warning: also results in local607, local608, local1, local78, param5 */
    local606 = local80;
    if (local608 != 0) {
        local399 = local80;
        local398 = param5;
        local397 = local78 + 16;
        local396 = 1;
        local395 = 0;
        local394 = 22;
        local393 = local78 - 16;
        local370 = 136;
        local392 = 136;
        local391 = *(int*)(local78 + 8);
        local610 = IoCreateDevice(*(int*)(local78 + 8), 136, local78 - 16, 22, 0, 1, local78 + 16);
        local479 = local370;
        local384 = LOGICALFLAGS32(local610);
        local481 = local384;
        local482 = local385;
        if (local610 >= 0) {
            local402 = *(int*)(*(int*)(local78 + 16) + 40);
            local317 = 136;
            local316 = 0;
            local315 = local402;
            local314 = IoCreateDevice;
            __imp_memset(local402, 0, 136);
            local311 = *(int*)(local78 + 16);
            local150 = *(int*)(*(int*)(local78 + 16) + 28) | 4;
            local151 = local402 + 4;
            local309 = local402 + 8;
            local152 = local402 + 8;
            local153 = 128;
            local154 = local78 - 24;
            local308 = IoCreateDevice - 0x57c6;
            local610 = IoGetDeviceObjectPointer(local78 - 24, 128, local402 + 8, local402 + 4);
            local483 = local150;
            local484 = local151;
            local485 = local152;
            local486 = local153;
            local487 = local154;
            local507 = local309;
            local570 = local150;
            local571 = local151;
            local572 = local152;
            local573 = local153;
            local574 = local154;
            local304 = LOGICALFLAGS32(local610);
            local509 = local304;
            local510 = local305;
            if (local610 >= 0) {
                local608 = *(int*)(*(int*)(local402 + 4) + 48);
                local303 = local608 + 1;
                local155 = 0x7fffffff;
                local302 = local402 + 12;
                *(int*)(local402 + 12) = local402 + 12;
                local301 = 0;
                local608 = (unsigned char) local402 + 24;
                local156 = local402 + 24;
                local300 = IoGetDeviceObjectPointer;
                KeInitializeSemaphore(local402 + 24, 0, 0x7fffffff);
                local511 = local155;
                local512 = local156;
                local575 = local155;
                local576 = local156;
                local297 = local402;
                local296 = 300;
                local295 = 0;
                local294 = 0;
                local293 = 0;
                local292 = KeInitializeSemaphore;
                local610 = proc7(local402); /* Warning: also results in local11, local284 */
                local507 = local284;
                local288 = LOGICALFLAGS32(local610);
                local509 = local288;
                local510 = local289;
                if (local610 >= 0) {
                    local143 = 0;
                    local144 = 0;
                    local563 = local143;
                    local564 = local144;
                    if (*(int*)(local11 + 60) != 0) {
L14:
                        local286 = 1;
                        local526 = local286;
                    } else {
                        local608 = (unsigned char) *(int*)(local11 + 56);
                        if (*(int*)(local11 + 56) != *(int*)(local11 + 64)) {
                            goto L14;
                        } else {
                            local287 = 0;
                            local526 = local287;
                        }
                    }
                    local145 = local526;
                    local149 = *(int*)(local11 + 132) | -1;
                    local157 = local11;
                    local146 = 0x989680;
                    local147 = 0;
                    local148 = 0xff676980;
                    local158 = KeInitializeSemaphore - 0x7309;
                    local10 = proc8(local11, param6, param7, 0, 0, local78, local11, local284); /* Warning: also results in param6, param7, local609, local257, local2, local258 */
                    local527 = local257;
                    local529 = local258;
                    local565 = local145;
                    local566 = local146;
                    local567 = local147;
                    local568 = local148;
                    local569 = local149;
                    local577 = local157;
                    local578 = local158;
                    local170 = local258 - 16;
                    local608 = (unsigned char) local258 - 8;
                    local171 = local258 - 8;
                    local281 = KeInitializeSemaphore - 0xcc38;
                    IoCreateUnprotectedSymbolicLink();
                    local590 = local170;
                    local591 = local171;
                    local238 = local610;
                    local530 = local238;
                    if (local610 < local257) {
                        local242 = 0x80070010;
                        local243 = local610;
                        local244 = 5;
                        local245 = local257;
                        local246 = local257;
                        local247 = local257;
                        local248 = global20;
                        local239 = local609;
                        local249 = global21;
                        local250 = *(int*)(local10 + 60);
                        local251 = *(int*)(local10 + 56);
                        local252 = *(int*)(local258 + 16);
                        local253 = *(int*)(local258 + 8);
                        local254 = IoCreateUnprotectedSymbolicLink;
                        local255 = IoCreateUnprotectedSymbolicLink - 0x74dc;
                        param8 = proc5(*(int*)(local258 + 8), *(int*)(local258 + 16), *(int*)(local10 + 56), *(int*)(local10 + 60), global21, global20, local257, local257, local257, 5, local610, 0x80070010, local257, local258); /* Warning: also results in param6, local609, local235, local236, local237 */
                        local527 = local235;
                        local528 = local236;
                        local529 = local237;
                        local531 = local255;
                        local532 = local239;
                        local535 = local242;
                        local536 = local243;
                        local537 = local244;
                        local538 = local245;
                        local539 = local246;
                        local540 = local247;
                        local541 = local248;
                        local542 = local249;
                        local543 = local250;
                        local544 = local251;
                        local545 = local252;
                        local546 = local253;
                        local547 = local254;
                    } else {
                        local261 = 1;
                        local262 = *(int*)(local258 - 8);
                        local263 = *(int*)(local258 - 4);
                        local610 = *(unsigned short*)(local258 - 8);
                        local608 = (unsigned char) local610 + 2;
                        local264 = local610 + 2;
                        local265 = *(int*)(local258 - 4);
                        local266 = 1;
                        local267 = *(int*)(local258 - 12);
                        local268 = 0x1877e;
                        local269 = 4;
                        local270 = IoCreateUnprotectedSymbolicLink;
                        local277 = RtlWriteRegistryValue;
                        RtlWriteRegistryValue();
                        local528 = local259;
                        local531 = local277;
                        local532 = local261;
                        local533 = local262;
                        local534 = local263;
                        local535 = local264;
                        local536 = local265;
                        local537 = local266;
                        local538 = local267;
                        local539 = local268;
                        local540 = local269;
                        local541 = local270;
                        local260 = local610;
                        local530 = local260;
                    }
                    local203 = local527;
                    local5 = local528;
                    local204 = local529;
                    local192 = local530;
                    local233 = local531;
                    local140 = local532;
                    local141 = local533;
                    local142 = local534;
                    local172 = local535;
                    local173 = local536;
                    local174 = local537;
                    local175 = local538;
                    local176 = local539;
                    local177 = local540;
                    local178 = local541;
                    local179 = local542;
                    local180 = local543;
                    local181 = local544;
                    local182 = local545;
                    local183 = local546;
                    local184 = local547;
                    local234 = *(int*)(local204 - 4);
                    local232 = local233;
                    local230 = ExFreePool;
                    ExFreePool(*(int*)(local204 - 4));
                    local548 = local203;
                    local549 = local229;
                    local550 = local204;
                    local551 = local230;
                    local560 = local140;
                    local561 = local141;
                    local562 = local142;
                    local592 = local172;
                    local593 = local173;
                    local594 = local174;
                    local595 = local175;
                    local596 = local176;
                    local597 = local177;
                    local598 = local178;
                    local599 = local179;
                    local600 = local180;
                    local601 = local181;
                    local602 = local182;
                    local603 = local183;
                    local604 = local184;
                    local187 = SUBFLAGS32(local192, local203, local192 - local203);
                    local558 = local187;
                    local559 = local188;
                    if (local192 < local203) {
                        local228 = 0x80070011;
                        local227 = local192;
                        local226 = 6;
                        local225 = local203;
                        local224 = local203;
                        local223 = local203;
                        local222 = global20;
                        local221 = global21;
                        local220 = *(int*)(local10 + 60);
                        local219 = *(int*)(local10 + 56);
                        local218 = *(int*)(local204 + 16);
                        local217 = *(int*)(local204 + 8);
                        local216 = ExFreePool;
                        local201 = ExFreePool - 0x7511;
                        param8 = proc5(*(int*)(local5 - 52), *(int*)(local5 - 48), *(int*)(local5 - 44), *(int*)(local5 - 40), *(int*)(local5 - 36), *(int*)(local5 - 32), *(int*)(local5 - 28), *(int*)(local5 - 24), *(int*)(local5 - 20), *(int*)(local5 - 16), *(int*)(local5 - 12), 0x80070011, local203, local204); /* Warning: also results in param6, local609, local198, local199, local200 */
                        local548 = local198;
                        local549 = local199;
                        local550 = local200;
                        local551 = local201;
                    }
                    local190 = local548;
                    local4 = local549;
                    local191 = local550;
                    local194 = local551;
                    local197 = local10;
                    local196 = *(int*)(local191 + 12);
                    local195 = local194;
                    local186 = local194 - 904;
                    local610 = proc9(*(int*)(local4 - 8), local190, local191, local10, local192, param9); /* Warning: also results in local607, local135, local612, local136, local137, local138, local139 */
                    local552 = local135;
                    local553 = local136;
                    local554 = local137;
                    local555 = local138;
                    local556 = local139;
                    local557 = local186;
                } else {
                    local459 = 0xc0070015;
                    local475 = 0;
                    local460 = 4;
                    local461 = 0;
                    local462 = 0;
                    local463 = 0;
                    local464 = global20;
                    local465 = global21;
                    local466 = global20;
                    local467 = global21;
                    local468 = 0;
                    local469 = *(int*)(local78 + 8);
                    local470 = KeInitializeSemaphore - 0x7309;
                    param8 = proc5(*(int*)(local78 + 8), 0, global21, global20, global21, global20, 0, 0, 0, 4, 0, 0xc0070015, 0, local78); /* Warning: also results in param6, local609, local456, local3, local458 */
                    local504 = local456;
                    local506 = local458;
                    local513 = local459;
                    local514 = local460;
                    local515 = local461;
                    local516 = local462;
                    local517 = local463;
                    local518 = local464;
                    local519 = local465;
                    local520 = local466;
                    local521 = local467;
                    local522 = local468;
                    local523 = local469;
                    local524 = local470;
                    local471 = KeInitializeSemaphore - 0xe72f;
                    local472 = ObfDereferenceObject;
                    ObfDereferenceObject(*(int*)local3);
                    local505 = local457;
                    local508 = local472;
                    local525 = local471;
L19:
                    local410 = local504;
                    local6 = local505;
                    local412 = local506;
                    local413 = local507;
                    local435 = local508;
                    local431 = local509;
                    local432 = local510;
                    local414 = local511;
                    local437 = 0;
                    local415 = local512;
                    local416 = local513;
                    local417 = 0;
                    local418 = local514;
                    local419 = local515;
                    local420 = local516;
                    local421 = local517;
                    local422 = local518;
                    local423 = local519;
                    local424 = local520;
                    local425 = local521;
                    local426 = local522;
                    local427 = local523;
                    local428 = local524;
                    local429 = local525;
                    local436 = *(int*)(local412 + 16);
                    local434 = local435;
                    local430 = IoDeleteDevice;
                    IoDeleteDevice(*(int*)(local412 + 16));
                    local476 = local410;
                    local477 = local411;
                    local478 = local412;
                    local479 = local413;
                    local480 = local430;
                    local481 = local431;
                    local482 = local432;
                    local488 = local414;
                    local489 = local415;
                    local490 = local416;
                    local491 = local417;
                    local492 = local418;
                    local493 = local419;
                    local494 = local420;
                    local495 = local421;
                    local496 = local422;
                    local497 = local423;
                    local498 = local424;
                    local499 = local425;
                    local500 = local426;
                    local501 = local427;
                    local502 = local428;
                    local503 = local429;
L18:
                    local608 = (unsigned char) global20;
                    local319 = local476;
                    local8 = local477;
                    local321 = local478;
                    local322 = local479;
                    local364 = local480;
                    local361 = local481;
                    local362 = local482;
                    local330 = local483;
                    local331 = local484;
                    local332 = local485;
                    local333 = local486;
                    local334 = local487;
                    local335 = local488;
                    local366 = 0;
                    local336 = local489;
                    local337 = local490;
                    local338 = local491;
                    local339 = local492;
                    local340 = local493;
                    local341 = local494;
                    local342 = local495;
                    local343 = local496;
                    local344 = local497;
                    local345 = local498;
                    local346 = local499;
                    local347 = local500;
                    local348 = local501;
                    local349 = local502;
                    local359 = local503;
                    local365 = *(int*)(local321 - 4);
                    local363 = local364;
                    local360 = ExFreePool;
                    ExFreePool(*(int*)(local321 - 4));
                    local552 = local318;
                    local553 = local319;
                    local554 = local320;
                    local555 = local321;
                    local556 = local322;
                    local557 = local360;
                    local558 = local361;
                    local559 = local362;
                    local570 = local330;
                    local571 = local331;
                    local572 = local332;
                    local573 = local333;
                    local574 = local334;
                    local575 = local335;
                    local576 = local336;
                    local577 = local337;
                    local578 = local338;
                    local579 = local339;
                    local580 = local340;
                    local581 = local341;
                    local582 = local342;
                    local583 = local343;
                    local584 = local344;
                    local585 = local345;
                    local586 = local346;
                    local587 = local347;
                    local588 = local348;
                    local589 = local349;
                    local605 = local359;
                }
            } else {
                local441 = 0xc0070015;
                local455 = 0;
                local442 = 3;
                local443 = 0;
                local454 = 0;
                local444 = 0;
                local445 = global20;
                local446 = global21;
                local447 = global20;
                local448 = global21;
                local449 = 0;
                local450 = *(int*)(local78 + 8);
                local451 = IoGetDeviceObjectPointer;
                local452 = IoGetDeviceObjectPointer - 0x73b9;
                param8 = proc5(*(int*)(local78 + 8), 0, global21, global20, global21, global20, 0, 0, 0, 3, 0, 0xc0070015, 0, local78); /* Warning: also results in param6, local609, local438, local439, local440 */
                local504 = local438;
                local505 = local439;
                local506 = local440;
                local508 = local452;
                local511 = local441;
                local512 = local442;
                local513 = local443;
                local514 = local444;
                local515 = local445;
                local516 = local446;
                local517 = local447;
                local518 = local448;
                local519 = local449;
                local520 = local450;
                local521 = local451;
                goto L19;
            }
        } else {
            local371 = 0xc0070003;
            local372 = 0;
            local373 = 2;
            local374 = 0;
            local375 = 0;
            local387 = 0;
            local376 = global20;
            local377 = global21;
            local378 = global20;
            local379 = global21;
            local380 = 0;
            local381 = *(int*)(local78 + 8);
            local382 = IoCreateDevice;
            local383 = IoCreateDevice - 0x7350;
            param8 = proc5(*(int*)(local78 + 8), 0, global21, global20, global21, global20, 0, 0, 0, 2, 0, 0xc0070003, 0, local78); /* Warning: also results in param6, local609, local367, local368, local369 */
            local476 = local367;
            local477 = local368;
            local478 = local369;
            local480 = local383;
            local484 = local371;
            local485 = local372;
            local486 = local373;
            local487 = local374;
            local488 = local375;
            local489 = local376;
            local490 = local377;
            local491 = local378;
            local492 = local379;
            local493 = local380;
            local494 = local381;
            local495 = local382;
            goto L18;
        }
        local76 = local552;
        local77 = local553;
        local7 = local554;
        local79 = local555;
        local81 = local556;
        local129 = local557;
        local130 = local558;
        local131 = local559;
        local82 = local560;
        local83 = local561;
        local84 = local562;
        local85 = local563;
        local86 = local564;
        local87 = local565;
        local88 = local566;
        local89 = local567;
        local90 = local568;
        local91 = local569;
        local92 = local570;
        local93 = local571;
        local94 = local572;
        local95 = local573;
        local96 = local574;
        local97 = local575;
        local134 = 0;
        local98 = local576;
        local99 = local577;
        local100 = local578;
        local101 = local579;
        local102 = local580;
        local103 = local581;
        local104 = local582;
        local105 = local583;
        local106 = local584;
        local107 = local585;
        local108 = local586;
        local109 = local587;
        local110 = local588;
        local111 = local589;
        local112 = local590;
        local113 = local591;
        local114 = local592;
        local115 = local593;
        local116 = local594;
        local117 = local595;
        local118 = local596;
        local119 = local597;
        local120 = local598;
        local121 = local599;
        local122 = local600;
        local123 = local601;
        local124 = local602;
        local125 = local603;
        local126 = local604;
        local127 = local605;
        local133 = *(int*)(local79 - 20);
        local132 = local129;
        (*ExFreePool)(local111, local110, local109, local108, local107, local106, local105, local104, local103, local102, local101, local100, local99, local98, 0, local126, local97, local125, pc, local96, local124, param3, local95, local123, local613 - 28, local94, local122, local613 - 20, local93, local121, local613 - 12, *(int*)(local78 + 8), local120, param2, 136, local119, local78 - 16, local118, 22, local117, 0, local116, 1, local115, local78 + 16, local114, local129, param5, local113, *(int*)(local79 - 20), param1, local80, local112, local127, local607, param8, local608, param6, param7, local609, local610, local76, local612, local77, local79, ExFreePool, local81, local82, local83, local84, local85, local86, local87, local88, local89, local90, local91, local92, local130, local131);
        local75 = *(int*)(local9 - 12);
        local73 = local128;
        (*local12)(local57, local56, local55, local54, local53, local52, local51, local50, local49, local48, local47, local46, local45, local44, local71, *(int*)(local5 - 56), local43, local70, local215, local30, local42, local69, local214, local29, local41, local68, local213, local28, local40, local67, local212, local27, local39, local66, local211, local26, local38, local65, local210, local25, local37, local64, local209, local36, local63, local208, local35, local62, local207, local34, local61, local206, local33, local60, local205, *(int*)(local4 - 12), local32, local59, *(int*)(local8 - 8), *(int*)(local7 - 8), *(int*)(local6 - 8), local193, *(int*)(local5 - 8), local31, local58, local128, *(int*)(local8 - 4), *(int*)(local7 - 4), *(int*)(local6 - 4), *(int*)(local5 - 4), *(int*)(local4 - 4), local24, local72, *(int*)(local9 - 12), local607, param8, local608, param6, param7, local609, local610, local0, local612, param2, local9, local12, param5, *(int*)(local611 + 48), *(int*)(local402 + 16), *(int*)(local402 + 48), *(int*)(local402 + 90), *(int*)(local402 + 91), *(int*)(local402 + 92), local13, local14, local15, local16, local17, local18, local19, local20, local21, local22, local23, *(int*)(*(int*)(local78 + 16) + 48), *(int*)local402, param9, flags, NF);
        param5 = *(int*)local613;
        param4 = *(int*)(local613 + 4);
        local613 += 8;
        local606 = param4;
    } else {
        local608 = (unsigned char) global20;
        *(int*)(local1 - 4) = 0xc0070003;
        *(int*)(local1 - 8) = 0;
        *(int*)(local1 - 12) = 1;
        *(int*)(local1 - 16) = 0;
        *(int*)(local1 - 20) = 0;
        *(int*)(local1 - 24) = 0;
        *(int*)(local1 - 28) = global20;
        *(int*)(local1 - 32) = global21;
        *(int*)(local1 - 36) = global20;
        *(int*)(local1 - 40) = global21;
        *(int*)(local1 - 44) = 0;
        *(int*)(local1 - 48) = *(int*)(local78 + 8);
        param8 = proc5(*(int*)(local78 + 8), 0, global21, global20, global21, global20, 0, 0, 0, 1, 0, 0xc0070003, 0, local78); /* Warning: also results in param6, param1 */
    }
    param4 = local606;
    return param4; /* WARNING: Also returning: local607, param8, local608, param6, param7, (unsigned char) *(int*)local613, *(int*)local613, *(int*)param1, param5 */
}

// address: 0x11039
proc3(int param6, int param3, int param4, int param2, int param1, int param5) {
    int local0; 		// m[r29]{14}
    int local3; 		// r28

    *(int*)0 = param1;
    local0 = *(int*)local3;
    return param3; /* WARNING: Also returning: *(int*)local3, param4, param5, param6 */
}

// address: 0x18000
proc4(int param1, int param2, int param3) {
    int local0; 		// r28{319}
    int local1; 		// r28{308}
    int local10; 		// r28{45}
    int local100; 		// m[r28 - 104]{400}
    int local1000;
    int local1001;
    int local1002;
    int local1003;
    int local1004;
    int local1005;
    int local1006;
    int local1007;
    int local1008; 		// m[r28 - 20]{67}
    int local1009; 		// m[r28 - 24]{67}
    int local101; 		// m[r28 - 108]{400}
    int local1010; 		// m[r28 - 28]{67}
    int local1011; 		// m[r28 - 32]{67}
    int local1012;
    int local1013;
    int local1014;
    int local1015; 		// m[r28 - 16]{67}
    int local1016;
    int local1017;
    int local1018;
    int local1019;
    int local102; 		// m[r28 - 112]{400}
    int local1020;
    int local1021;
    int local1022;
    int local1023;
    int local1024;
    int local1025;
    int local1026;
    int local1027;
    int local1028;
    int local1029;
    int local103; 		// m[r28 - 116]{400}
    int local1030;
    int local1031;
    int local1032;
    int local1033; 		// m[r28 - 12]{67}
    int local1034; 		// m[r28 - 4]{67}
    int local1035; 		// m[r28 - 8]{67}
    int local1036; 		// m[m[r29 + 20]]{67}
    int local1037; 		// m[m[r29 + 16]]{67}
    int local1038; 		// m[m[r29 + 12]]{67}
    void *local1039; 		// %pc{67}
    int local104; 		// m[r28 - 120]{400}
    void *local1040; 		// m[r28 - 16]{112}
    int local1041; 		// m[r28 - 12]{109}
    int local1042; 		// m[r28 - 8]{107}
    int local1043; 		// m[r28 - 4]{105}
    int local1044; 		// m[r29 - 12]{101}
    short local1045; 		// m[r29 - 14]{97}
    short local1046; 		// m[r29 - 16]{92}
    int local1047; 		// m[r28 - 4]{90}
    int local1048; 		// m[r29 - 4]{85}
    short local1049; 		// m[r29 - 6]{81}
    int local105;
    short local1050; 		// m[r29 - 8]{76}
    int local1051; 		// m[r28 - 4]{74}
    int local1052; 		// r29{56}
    int local1053; 		// m[m[r29 + 20] + 2]{56}
    int local1054; 		// m[m[r29 + 20] + 4]{56}
    int local1055; 		// m[m[r29 + 16] + 2]{56}
    int local1056; 		// m[m[r29 + 16] + 4]{56}
    int local1057; 		// m[m[r29 + 12] + 2]{56}
    int local1058; 		// m[m[r29 + 12] + 4]{56}
    int local1059;
    int local106;
    int local1060; 		// m[r28 - 104]{56}
    int local1061; 		// m[r28 - 108]{56}
    int local1062; 		// m[r28 - 112]{56}
    int local1063; 		// m[r28 - 116]{56}
    int local1064; 		// m[r28 - 120]{56}
    int local1065;
    int local1066;
    int local1067;
    int local1068;
    int local1069;
    int local107;
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
    int local108;
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
    int local1093; 		// m[r28 - 20]{56}
    int local1094; 		// m[r28 - 24]{56}
    int local1095; 		// m[r28 - 28]{56}
    int local1096; 		// m[r28 - 32]{56}
    int local1097;
    int local1098;
    int local1099;
    int local11; 		// r28{34}
    int local110;
    int local1100;
    int local1101;
    int local1102;
    int local1103;
    int local1104; 		// m[r28 - 16]{56}
    int local1105;
    int local1106;
    int local1107;
    int local1108;
    int local1109;
    int local111;
    int local1110;
    int local1111;
    int local1112;
    int local1113;
    int local1114;
    int local1115;
    int local1116;
    int local1117;
    int local1118;
    int local1119; 		// m[r28 - 12]{56}
    int local112;
    int local1120; 		// m[r28 - 4]{56}
    int local1121; 		// m[r28 - 8]{56}
    int local1122; 		// m[r29 - 4]{56}
    int local1123; 		// m[r29 - 6]{56}
    int local1124; 		// m[r29 - 8]{56}
    int local1125; 		// m[r29 - 12]{56}
    int local1126; 		// m[r29 - 14]{56}
    int local1127; 		// m[r29 - 16]{56}
    int local1128; 		// m[m[r29 + 20]]{56}
    int local1129; 		// m[m[r29 + 16]]{56}
    int local113;
    int local1130; 		// m[m[r29 + 12]]{56}
    void *local1131; 		// %pc{56}
    int local1132; 		// %flags{56}
    int local1133; 		// %CF{56}
    void *local1134; 		// m[r28 - 12]{65}
    int local1135; 		// m[r28 - 8]{62}
    int local1136; 		// m[r28 - 4]{57}
    int local1137; 		// r29{45}
    int local1138; 		// m[m[r29 + 20] + 2]{45}
    int local1139; 		// m[m[r29 + 20] + 4]{45}
    int local114;
    int local1140; 		// m[m[r29 + 16] + 2]{45}
    int local1141; 		// m[m[r29 + 16] + 4]{45}
    int local1142; 		// m[m[r29 + 12] + 2]{45}
    int local1143; 		// m[m[r29 + 12] + 4]{45}
    int local1144;
    int local1145; 		// m[r28 - 104]{45}
    int local1146; 		// m[r28 - 108]{45}
    int local1147; 		// m[r28 - 112]{45}
    int local1148; 		// m[r28 - 116]{45}
    int local1149; 		// m[r28 - 120]{45}
    int local115;
    int local1150;
    int local1151;
    int local1152;
    int local1153;
    int local1154;
    int local1155;
    int local1156;
    int local1157;
    int local1158;
    int local1159;
    int local116;
    int local1160;
    int local1161;
    int local1162;
    int local1163;
    int local1164;
    int local1165;
    int local1166;
    int local1167;
    int local1168;
    int local1169;
    int local117;
    int local1170;
    int local1171;
    int local1172;
    int local1173;
    int local1174;
    int local1175;
    int local1176;
    int local1177;
    int local1178; 		// m[r28 - 20]{45}
    int local1179; 		// m[r28 - 24]{45}
    int local118;
    int local1180; 		// m[r28 - 28]{45}
    int local1181; 		// m[r28 - 32]{45}
    int local1182;
    int local1183;
    int local1184;
    int local1185;
    int local1186;
    int local1187;
    int local1188;
    int local1189; 		// m[r28 - 16]{45}
    int local119;
    int local1190;
    int local1191;
    int local1192;
    int local1193;
    int local1194;
    int local1195;
    int local1196;
    int local1197;
    int local1198;
    int local1199;
    int local12; 		// r28{23}
    int local120;
    int local1200;
    int local1201;
    int local1202;
    int local1203;
    int local1204; 		// m[r28 - 12]{45}
    int local1205; 		// m[r28 - 4]{45}
    int local1206; 		// m[r28 - 8]{45}
    int local1207; 		// m[r29 - 4]{45}
    int local1208; 		// m[r29 - 6]{45}
    int local1209; 		// m[r29 - 8]{45}
    int local121;
    int local1210; 		// m[r29 - 12]{45}
    int local1211; 		// m[r29 - 14]{45}
    int local1212; 		// m[r29 - 16]{45}
    int local1213; 		// m[m[r29 + 20]]{45}
    int local1214; 		// m[m[r29 + 16]]{45}
    int local1215; 		// m[m[r29 + 12]]{45}
    void *local1216; 		// %pc{45}
    int local1217; 		// %flags{45}
    int local1218; 		// %CF{45}
    void *local1219; 		// m[r28 - 12]{54}
    int local122;
    int local1220; 		// m[r28 - 8]{51}
    int local1221; 		// m[r28 - 4]{46}
    int local1222; 		// r29{34}
    int local1223; 		// m[m[r29 + 20] + 2]{34}
    int local1224; 		// m[m[r29 + 20] + 4]{34}
    int local1225; 		// m[m[r29 + 16] + 2]{34}
    int local1226; 		// m[m[r29 + 16] + 4]{34}
    int local1227; 		// m[m[r29 + 12] + 2]{34}
    int local1228; 		// m[m[r29 + 12] + 4]{34}
    int local1229;
    int local123;
    int local1230; 		// m[r28 - 104]{34}
    int local1231; 		// m[r28 - 108]{34}
    int local1232; 		// m[r28 - 112]{34}
    int local1233; 		// m[r28 - 116]{34}
    int local1234; 		// m[r28 - 120]{34}
    int local1235;
    int local1236;
    int local1237;
    int local1238;
    int local1239;
    int local124;
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
    int local125;
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
    int local126;
    int local1260;
    int local1261;
    int local1262;
    int local1263; 		// m[r28 - 20]{34}
    int local1264; 		// m[r28 - 24]{34}
    int local1265; 		// m[r28 - 28]{34}
    int local1266; 		// m[r28 - 32]{34}
    int local1267;
    int local1268;
    int local1269;
    int local127;
    int local1270;
    int local1271;
    int local1272;
    int local1273;
    int local1274; 		// m[r28 - 16]{34}
    int local1275;
    int local1276;
    int local1277;
    int local1278;
    int local1279;
    int local128;
    int local1280;
    int local1281;
    int local1282;
    int local1283;
    int local1284;
    int local1285;
    int local1286;
    int local1287;
    int local1288;
    int local1289; 		// m[r28 - 12]{34}
    int local129;
    int local1290; 		// m[r28 - 4]{34}
    int local1291; 		// m[r28 - 8]{34}
    int local1292; 		// m[r29 - 4]{34}
    int local1293; 		// m[r29 - 6]{34}
    int local1294; 		// m[r29 - 8]{34}
    int local1295; 		// m[r29 - 12]{34}
    int local1296; 		// m[r29 - 14]{34}
    int local1297; 		// m[r29 - 16]{34}
    int local1298; 		// m[m[r29 + 20]]{34}
    int local1299; 		// m[m[r29 + 16]]{34}
    int local13; 		// r28{400}
    int local130;
    int local1300; 		// m[m[r29 + 12]]{34}
    void *local1301; 		// %pc{34}
    int local1302; 		// %flags{34}
    int local1303; 		// %CF{34}
    void *local1304; 		// m[r28 - 12]{43}
    int local1305; 		// m[r28 - 8]{40}
    int local1306; 		// m[r28 - 4]{35}
    int local1307; 		// r29{23}
    int local1308; 		// m[m[r29 + 20] + 2]{23}
    int local1309; 		// m[m[r29 + 20] + 4]{23}
    int local131;
    int local1310; 		// m[m[r29 + 16] + 2]{23}
    int local1311; 		// m[m[r29 + 16] + 4]{23}
    int local1312; 		// m[m[r29 + 12] + 2]{23}
    int local1313; 		// m[m[r29 + 12] + 4]{23}
    int local1314;
    int local1315; 		// m[r28 - 104]{23}
    int local1316; 		// m[r28 - 108]{23}
    int local1317; 		// m[r28 - 112]{23}
    int local1318; 		// m[r28 - 116]{23}
    int local1319; 		// m[r28 - 120]{23}
    int local132;
    int local1320;
    int local1321;
    int local1322;
    int local1323;
    int local1324;
    int local1325;
    int local1326;
    int local1327;
    int local1328;
    int local1329;
    int local133; 		// m[r28 - 20]{400}
    int local1330;
    int local1331;
    int local1332;
    int local1333;
    int local1334;
    int local1335;
    int local1336;
    int local1337;
    int local1338;
    int local1339;
    int local134; 		// m[r28 - 24]{400}
    int local1340;
    int local1341;
    int local1342;
    int local1343;
    int local1344;
    int local1345;
    int local1346;
    int local1347;
    int local1348; 		// m[r28 - 20]{23}
    int local1349; 		// m[r28 - 24]{23}
    int local135; 		// m[r28 - 28]{400}
    int local1350; 		// m[r28 - 28]{23}
    int local1351; 		// m[r28 - 32]{23}
    int local1352;
    int local1353;
    int local1354;
    int local1355;
    int local1356;
    int local1357;
    int local1358;
    int local1359; 		// m[r28 - 16]{23}
    int local136; 		// m[r28 - 32]{400}
    int local1360;
    int local1361;
    int local1362;
    int local1363;
    int local1364;
    int local1365;
    int local1366;
    int local1367;
    int local1368;
    int local1369;
    int local137;
    int local1370;
    int local1371;
    int local1372;
    int local1373;
    int local1374; 		// m[r28 - 12]{23}
    int local1375; 		// m[r28 - 4]{23}
    int local1376; 		// m[r28 - 8]{23}
    int local1377; 		// m[r29 - 4]{23}
    int local1378; 		// m[r29 - 6]{23}
    int local1379; 		// m[r29 - 8]{23}
    int local138;
    int local1380; 		// m[r29 - 12]{23}
    int local1381; 		// m[r29 - 14]{23}
    int local1382; 		// m[r29 - 16]{23}
    int local1383; 		// m[m[r29 + 20]]{23}
    int local1384; 		// m[m[r29 + 16]]{23}
    int local1385; 		// m[m[r29 + 12]]{23}
    void *local1386; 		// %pc{23}
    int local1387; 		// %flags{23}
    int local1388; 		// %CF{23}
    void *local1389; 		// m[r28 - 12]{32}
    int local139;
    int local1390; 		// m[r28 - 8]{29}
    int local1391; 		// m[r28 - 4]{24}
    int local1392; 		// r29{319}
    void *local1393; 		// %pc{411}
    int local1394; 		// m[r28 - 120]{21}
    void *local1395; 		// %pc{364}
    int local1396; 		// m[r28 - 116]{18}
    int local1397; 		// m[r28 - 112]{13}
    int local1398; 		// m[r28 - 108]{11}
    int local1399; 		// m[r28 - 104]{8}
    int local14; 		// r28{364}
    int local140;
    int local1400; 		// m[r28 - 4]{2}
    int local1401; 		// r28{444}
    int local1402; 		// r29{445}
    int local1403; 		// r28{459}
    int local1404; 		// r29{460}
    int local1405; 		// r0
    int local1406; 		// r8
    int local1407; 		// r24
    int local1408; 		// r25
    int local1409; 		// r26
    int local141;
    int local1410; 		// r27
    int local1411; 		// r28
    int local142;
    int local143;
    int local144; 		// m[r28 - 16]{400}
    int local145;
    int local146;
    int local147;
    int local148;
    int local149;
    int local15; 		// r29{228}
    int local150;
    int local151;
    int local152;
    int local153;
    int local154;
    int local155;
    int local156;
    int local157;
    int local158;
    int local159; 		// m[r28 - 12]{400}
    int local16; 		// r29{138}
    int local160; 		// m[r28 - 4]{400}
    int local161; 		// m[r28 - 8]{400}
    int local162; 		// m[r29 - 4]{400}
    int local163; 		// m[r29 - 6]{400}
    int local164; 		// m[r29 - 8]{400}
    int local165; 		// m[r29 - 12]{400}
    int local166; 		// m[r29 - 14]{400}
    int local167; 		// m[r29 - 16]{400}
    int local168; 		// m[m[r29 + 20]]{400}
    int local169; 		// m[m[r29 + 16]]{400}
    int local17; 		// r29{67}
    int local170; 		// m[m[r29 + 12]]{400}
    void *local171; 		// %pc{400}
    int local172; 		// %flags{400}
    int local173; 		// %CF{400}
    void *local174; 		// m[r28 - 12]{409}
    int local175; 		// m[r28 - 8]{406}
    int local176; 		// m[r28 - 4]{404}
    int local177; 		// r24{352}
    int local178; 		// m[m[r29 + 16] + 2]{319}
    int local179; 		// m[m[r29 + 16] + 4]{319}
    int local18; 		// r29{411}
    int local180; 		// m[m[r29 + 12] + 2]{319}
    int local181; 		// m[m[r29 + 12] + 4]{319}
    int local182;
    int local183; 		// m[r28 - 104]{319}
    int local184; 		// m[r28 - 108]{319}
    int local185; 		// m[r28 - 112]{319}
    int local186; 		// m[r28 - 116]{319}
    int local187; 		// m[r28 - 120]{319}
    int local188;
    int local189;
    int local19;
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
    int local2; 		// r28{297}
    int local20; 		// m[r28 - 104]{411}
    int local200;
    int local201;
    int local202;
    int local203;
    int local204;
    int local205;
    int local206;
    int local207;
    int local208;
    int local209; 		// m[r28 - 20]{319}
    int local21; 		// m[r28 - 108]{411}
    int local210; 		// m[r28 - 24]{319}
    int local211; 		// m[r28 - 28]{319}
    int local212; 		// m[r28 - 32]{319}
    int local213;
    int local214;
    int local215;
    int local216;
    int local217;
    int local218;
    int local219;
    int local22; 		// m[r28 - 112]{411}
    int local220; 		// m[r28 - 16]{319}
    int local221;
    int local222;
    int local223;
    int local224;
    int local225;
    int local226;
    int local227;
    int local228;
    int local229;
    int local23; 		// m[r28 - 116]{411}
    int local230;
    int local231;
    int local232;
    int local233;
    int local234;
    int local235;
    int local236;
    int local237;
    int local238; 		// m[r28 - 12]{319}
    int local239; 		// m[r28 - 4]{319}
    int local24; 		// m[r28 - 120]{411}
    int local240; 		// m[r28 - 8]{319}
    int local241; 		// m[r29 - 4]{319}
    int local242; 		// m[r29 - 6]{319}
    int local243; 		// m[r29 - 8]{319}
    int local244; 		// m[r29 - 12]{319}
    int local245; 		// m[r29 - 14]{319}
    int local246; 		// m[r29 - 16]{319}
    int local247; 		// m[m[r29 + 16]]{319}
    int local248; 		// m[m[r29 + 12]]{319}
    int local249; 		// m[r28 - 24]{398}
    int local25;
    int local250; 		// m[r28 - 20]{395}
    int local251; 		// m[r28 - 16]{393}
    int local252; 		// r24{386}
    int local253; 		// r28{386}
    int local254; 		// m[r28 - 28]{384}
    int local255; 		// m[r28 - 24]{381}
    int local256; 		// m[r28 - 20]{379}
    int local257; 		// m[r28 - 16]{377}
    int local258; 		// r29{364}
    int local259;
    int local26;
    int local260; 		// m[r28 - 104]{364}
    int local261; 		// m[r28 - 108]{364}
    int local262; 		// m[r28 - 112]{364}
    int local263; 		// m[r28 - 116]{364}
    int local264; 		// m[r28 - 120]{364}
    int local265;
    int local266;
    int local267;
    int local268;
    int local269;
    int local27;
    int local270;
    int local271;
    int local272;
    int local273;
    int local274;
    int local275;
    int local276;
    int local277;
    int local278;
    int local279;
    int local28;
    int local280;
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
    int local293; 		// m[r28 - 20]{364}
    int local294; 		// m[r28 - 24]{364}
    int local295; 		// m[r28 - 28]{364}
    int local296; 		// m[r28 - 32]{364}
    int local297;
    int local298;
    int local299;
    int local3; 		// r28{228}
    int local30;
    int local300;
    int local301;
    int local302;
    int local303;
    int local304; 		// m[r28 - 16]{364}
    int local305;
    int local306;
    int local307;
    int local308;
    int local309;
    int local31;
    int local310;
    int local311;
    int local312;
    int local313;
    int local314;
    int local315;
    int local316;
    int local317;
    int local318;
    int local319;
    int local32;
    int local320; 		// m[r28 - 4]{364}
    int local321; 		// m[r28 - 8]{364}
    int local322; 		// m[r28 - 12]{364}
    int local323; 		// m[r29 - 4]{364}
    int local324; 		// m[r29 - 6]{364}
    int local325; 		// m[r29 - 8]{364}
    int local326; 		// m[r29 - 12]{364}
    int local327; 		// m[r29 - 14]{364}
    int local328; 		// m[r29 - 16]{364}
    void *local329; 		// m[r28 - 8]{368}
    int local33;
    int local330; 		// m[r28 - 4]{365}
    int local331;
    int local332;
    int local333; 		// m[r28 - 20]{362}
    int local334; 		// m[r28 - 16]{358}
    int local335; 		// m[m[r29 + 20] + 4]{354}
    int local336; 		// r28{352}
    void *local337; 		// m[r28 - 16]{350}
    void *local338; 		// %pc{319}
    int local339; 		// m[r28 - 12]{347}
    int local34;
    int local340; 		// m[r28 - 8]{345}
    int local341; 		// m[r28 - 4]{343}
    int local342; 		// m[m[r29 + 20] + 2]{339}
    short local343; 		// m[m[r29 + 20]]{326}
    int local344; 		// r29{308}
    int local345; 		// m[m[r29 + 20] + 2]{308}
    int local346; 		// m[m[r29 + 20] + 4]{308}
    int local347; 		// m[m[r29 + 16] + 2]{308}
    int local348; 		// m[m[r29 + 16] + 4]{308}
    int local349; 		// m[m[r29 + 12] + 2]{308}
    int local35;
    int local350; 		// m[m[r29 + 12] + 4]{308}
    int local351;
    int local352; 		// m[r28 - 104]{308}
    int local353; 		// m[r28 - 108]{308}
    int local354; 		// m[r28 - 112]{308}
    int local355; 		// m[r28 - 116]{308}
    int local356; 		// m[r28 - 120]{308}
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
    int local383; 		// m[r28 - 20]{308}
    int local384; 		// m[r28 - 24]{308}
    int local385; 		// m[r28 - 28]{308}
    int local386; 		// m[r28 - 32]{308}
    int local387;
    int local388;
    int local389;
    int local39;
    int local390;
    int local391;
    int local392;
    int local393;
    int local394; 		// m[r28 - 16]{308}
    int local395;
    int local396;
    int local397;
    int local398;
    int local399;
    int local4; 		// r28{217}
    int local40;
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
    int local41;
    int local410;
    int local411;
    int local412; 		// m[r28 - 12]{308}
    int local413; 		// m[r28 - 4]{308}
    int local414; 		// m[r28 - 8]{308}
    int local415; 		// m[r29 - 4]{308}
    int local416; 		// m[r29 - 6]{308}
    int local417; 		// m[r29 - 8]{308}
    int local418; 		// m[r29 - 12]{308}
    int local419; 		// m[r29 - 14]{308}
    int local42;
    int local420; 		// m[r29 - 16]{308}
    int local421; 		// m[m[r29 + 20]]{308}
    int local422; 		// m[m[r29 + 16]]{308}
    int local423; 		// m[m[r29 + 12]]{308}
    void *local424; 		// %pc{308}
    int local425; 		// %flags{308}
    int local426; 		// %CF{308}
    void *local427; 		// m[r28 - 12]{317}
    int local428; 		// m[r28 - 8]{314}
    int local429; 		// m[r28 - 4]{312}
    int local43;
    int local430; 		// r29{297}
    int local431; 		// m[m[r29 + 20] + 2]{297}
    int local432; 		// m[m[r29 + 20] + 4]{297}
    int local433; 		// m[m[r29 + 16] + 2]{297}
    int local434; 		// m[m[r29 + 16] + 4]{297}
    int local435; 		// m[m[r29 + 12] + 2]{297}
    int local436; 		// m[m[r29 + 12] + 4]{297}
    int local437;
    int local438; 		// m[r28 - 104]{297}
    int local439; 		// m[r28 - 108]{297}
    int local44;
    int local440; 		// m[r28 - 112]{297}
    int local441; 		// m[r28 - 116]{297}
    int local442; 		// m[r28 - 120]{297}
    int local443;
    int local444;
    int local445;
    int local446;
    int local447;
    int local448;
    int local449;
    int local45;
    int local450;
    int local451;
    int local452;
    int local453;
    int local454;
    int local455;
    int local456;
    int local457;
    int local458;
    int local459;
    int local46;
    int local460;
    int local461;
    int local462;
    int local463;
    int local464;
    int local465;
    int local466;
    int local467;
    int local468; 		// m[r28 - 20]{297}
    int local469; 		// m[r28 - 24]{297}
    int local47;
    int local470; 		// m[r28 - 28]{297}
    int local471; 		// m[r28 - 32]{297}
    int local472;
    int local473;
    int local474;
    int local475;
    int local476;
    int local477;
    int local478;
    int local479; 		// m[r28 - 16]{297}
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
    int local497; 		// m[r28 - 12]{297}
    int local498; 		// m[r28 - 4]{297}
    int local499; 		// m[r28 - 8]{297}
    int local5; 		// r28{206}
    int local50;
    int local500; 		// m[r29 - 4]{297}
    int local501; 		// m[r29 - 6]{297}
    int local502; 		// m[r29 - 8]{297}
    int local503; 		// m[r29 - 12]{297}
    int local504; 		// m[r29 - 14]{297}
    int local505; 		// m[r29 - 16]{297}
    int local506; 		// m[m[r29 + 20]]{297}
    int local507; 		// m[m[r29 + 16]]{297}
    int local508; 		// m[m[r29 + 12]]{297}
    void *local509; 		// %pc{297}
    int local51;
    int local510; 		// %flags{297}
    int local511; 		// %CF{297}
    void *local512; 		// m[r28 - 12]{306}
    int local513; 		// m[r28 - 8]{303}
    int local514; 		// m[r28 - 4]{301}
    int local515; 		// r24{261}
    int local516; 		// m[m[r29 + 20] + 2]{228}
    int local517; 		// m[m[r29 + 20] + 4]{228}
    int local518; 		// m[m[r29 + 12] + 2]{228}
    int local519; 		// m[m[r29 + 12] + 4]{228}
    int local52;
    int local520;
    int local521; 		// m[r28 - 104]{228}
    int local522; 		// m[r28 - 108]{228}
    int local523; 		// m[r28 - 112]{228}
    int local524; 		// m[r28 - 116]{228}
    int local525; 		// m[r28 - 120]{228}
    int local526;
    int local527;
    int local528;
    int local529;
    int local53; 		// m[r28 - 20]{411}
    int local530;
    int local531;
    int local532;
    int local533;
    int local534;
    int local535;
    int local536;
    int local537;
    int local538;
    int local539;
    int local54; 		// m[r28 - 24]{411}
    int local540;
    int local541;
    int local542;
    int local543;
    int local544;
    int local545;
    int local546;
    int local547;
    int local548;
    int local549; 		// m[r28 - 20]{228}
    int local55; 		// m[r28 - 28]{411}
    int local550; 		// m[r28 - 24]{228}
    int local551; 		// m[r28 - 28]{228}
    int local552; 		// m[r28 - 32]{228}
    int local553;
    int local554;
    int local555;
    int local556;
    int local557;
    int local558;
    int local559;
    int local56; 		// m[r28 - 32]{411}
    int local560; 		// m[r28 - 16]{228}
    int local561;
    int local562;
    int local563;
    int local564;
    int local565;
    int local566;
    int local567;
    int local568;
    int local569;
    int local57;
    int local570;
    int local571;
    int local572;
    int local573;
    int local574;
    int local575;
    int local576;
    int local577;
    int local578; 		// m[r28 - 12]{228}
    int local579; 		// m[r28 - 4]{228}
    int local58;
    int local580; 		// m[r28 - 8]{228}
    int local581; 		// m[r29 - 4]{228}
    int local582; 		// m[r29 - 6]{228}
    int local583; 		// m[r29 - 8]{228}
    int local584; 		// m[r29 - 12]{228}
    int local585; 		// m[r29 - 14]{228}
    int local586; 		// m[r29 - 16]{228}
    int local587; 		// m[m[r29 + 20]]{228}
    int local588; 		// m[m[r29 + 12]]{228}
    int local589; 		// m[0x160c8]{228}
    int local59;
    int local590; 		// m[r28 - 24]{295}
    int local591; 		// m[r28 - 20]{292}
    int local592; 		// m[r28 - 16]{290}
    int local593; 		// r24{283}
    int local594; 		// r28{283}
    int local595; 		// m[r28 - 28]{281}
    int local596; 		// m[r28 - 24]{278}
    int local597; 		// m[r28 - 20]{276}
    int local598; 		// m[r28 - 16]{274}
    int local599; 		// m[m[r29 + 16] + 4]{262}
    int local6; 		// r28{138}
    int local60;
    int local600; 		// r28{261}
    void *local601; 		// m[r28 - 16]{259}
    void *local602; 		// %pc{228}
    int local603; 		// m[r28 - 12]{256}
    int local604; 		// m[r28 - 8]{254}
    int local605; 		// m[r28 - 4]{252}
    int local606; 		// m[m[r29 + 16] + 2]{248}
    short local607; 		// m[m[r29 + 16]]{235}
    int local608; 		// r29{217}
    int local609; 		// m[m[r29 + 20] + 2]{217}
    int local61;
    int local610; 		// m[m[r29 + 20] + 4]{217}
    int local611; 		// m[m[r29 + 16] + 2]{217}
    int local612; 		// m[m[r29 + 16] + 4]{217}
    int local613; 		// m[m[r29 + 12] + 2]{217}
    int local614; 		// m[m[r29 + 12] + 4]{217}
    int local615;
    int local616; 		// m[r28 - 104]{217}
    int local617; 		// m[r28 - 108]{217}
    int local618; 		// m[r28 - 112]{217}
    int local619; 		// m[r28 - 116]{217}
    int local62;
    int local620; 		// m[r28 - 120]{217}
    int local621;
    int local622;
    int local623;
    int local624;
    int local625;
    int local626;
    int local627;
    int local628;
    int local629;
    int local63;
    int local630;
    int local631;
    int local632;
    int local633;
    int local634;
    int local635;
    int local636;
    int local637;
    int local638;
    int local639;
    int local64; 		// m[r28 - 16]{411}
    int local640;
    int local641;
    int local642;
    int local643;
    int local644;
    int local645;
    int local646; 		// m[r28 - 20]{217}
    int local647; 		// m[r28 - 24]{217}
    int local648; 		// m[r28 - 28]{217}
    int local649; 		// m[r28 - 32]{217}
    int local65;
    int local650;
    int local651;
    int local652;
    int local653;
    int local654;
    int local655;
    int local656;
    int local657; 		// m[r28 - 16]{217}
    int local658;
    int local659;
    int local66;
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
    int local67;
    int local670;
    int local671;
    int local672;
    int local673;
    int local674;
    int local675; 		// m[r28 - 12]{217}
    int local676; 		// m[r28 - 4]{217}
    int local677; 		// m[r28 - 8]{217}
    int local678; 		// m[r29 - 4]{217}
    int local679; 		// m[r29 - 6]{217}
    int local68;
    int local680; 		// m[r29 - 8]{217}
    int local681; 		// m[r29 - 12]{217}
    int local682; 		// m[r29 - 14]{217}
    int local683; 		// m[r29 - 16]{217}
    int local684; 		// m[m[r29 + 20]]{217}
    int local685; 		// m[m[r29 + 16]]{217}
    int local686; 		// m[m[r29 + 12]]{217}
    void *local687; 		// %pc{217}
    int local688; 		// %flags{217}
    int local689; 		// %CF{217}
    int local69;
    void *local690; 		// m[r28 - 12]{226}
    int local691; 		// m[r28 - 8]{223}
    int local692; 		// m[r28 - 4]{221}
    int local693; 		// r29{206}
    int local694; 		// m[m[r29 + 20] + 2]{206}
    int local695; 		// m[m[r29 + 20] + 4]{206}
    int local696; 		// m[m[r29 + 16] + 2]{206}
    int local697; 		// m[m[r29 + 16] + 4]{206}
    int local698; 		// m[m[r29 + 12] + 2]{206}
    int local699; 		// m[m[r29 + 12] + 4]{206}
    int local7; 		// r28{114}
    int local70;
    int local700;
    int local701; 		// m[r28 - 104]{206}
    int local702; 		// m[r28 - 108]{206}
    int local703; 		// m[r28 - 112]{206}
    int local704; 		// m[r28 - 116]{206}
    int local705; 		// m[r28 - 120]{206}
    int local706;
    int local707;
    int local708;
    int local709;
    int local71;
    int local710;
    int local711;
    int local712;
    int local713;
    int local714;
    int local715;
    int local716;
    int local717;
    int local718;
    int local719;
    int local72;
    int local720;
    int local721;
    int local722;
    int local723;
    int local724;
    int local725;
    int local726;
    int local727;
    int local728;
    int local729;
    int local73;
    int local730;
    int local731; 		// m[r28 - 20]{206}
    int local732; 		// m[r28 - 24]{206}
    int local733; 		// m[r28 - 28]{206}
    int local734; 		// m[r28 - 32]{206}
    int local735;
    int local736;
    int local737;
    int local738;
    int local739;
    int local74;
    int local740;
    int local741;
    int local742; 		// m[r28 - 16]{206}
    int local743;
    int local744;
    int local745;
    int local746;
    int local747;
    int local748;
    int local749;
    int local75;
    int local750;
    int local751;
    int local752;
    int local753;
    int local754;
    int local755;
    int local756;
    int local757;
    int local758;
    int local759;
    int local76;
    int local760; 		// m[r28 - 12]{206}
    int local761; 		// m[r28 - 4]{206}
    int local762; 		// m[r28 - 8]{206}
    int local763; 		// m[r29 - 4]{206}
    int local764; 		// m[r29 - 6]{206}
    int local765; 		// m[r29 - 8]{206}
    int local766; 		// m[r29 - 12]{206}
    int local767; 		// m[r29 - 14]{206}
    int local768; 		// m[r29 - 16]{206}
    int local769; 		// m[m[r29 + 20]]{206}
    int local77;
    int local770; 		// m[m[r29 + 16]]{206}
    int local771; 		// m[m[r29 + 12]]{206}
    void *local772; 		// %pc{206}
    int local773; 		// %flags{206}
    int local774; 		// %CF{206}
    void *local775; 		// m[r28 - 12]{215}
    int local776; 		// m[r28 - 8]{212}
    int local777; 		// m[r28 - 4]{210}
    int local778; 		// r24{176}
    int local779; 		// m[m[r29 + 20] + 2]{138}
    int local78;
    int local780; 		// m[m[r29 + 20] + 4]{138}
    int local781; 		// m[m[r29 + 16] + 2]{138}
    int local782; 		// m[m[r29 + 16] + 4]{138}
    int local783;
    int local784; 		// m[r28 - 104]{138}
    int local785; 		// m[r28 - 108]{138}
    int local786; 		// m[r28 - 112]{138}
    int local787; 		// m[r28 - 116]{138}
    int local788; 		// m[r28 - 120]{138}
    int local789;
    int local79; 		// m[r28 - 12]{411}
    int local790;
    int local791;
    int local792;
    int local793;
    int local794;
    int local795;
    int local796;
    int local797;
    int local798;
    int local799;
    int local8; 		// r28{67}
    int local80; 		// m[r28 - 4]{411}
    int local800;
    int local801;
    int local802;
    int local803;
    int local804;
    int local805;
    int local806;
    int local807;
    int local808;
    int local809;
    int local81; 		// m[r28 - 8]{411}
    int local810;
    int local811;
    int local812;
    int local813;
    int local814;
    int local815;
    int local816;
    int local817;
    int local818;
    int local819;
    int local82; 		// m[r29 - 4]{411}
    int local820;
    int local821; 		// m[r28 - 16]{138}
    int local822;
    int local823;
    int local824;
    int local825;
    int local826;
    int local827;
    int local828;
    int local829;
    int local83; 		// m[r29 - 6]{411}
    int local830;
    int local831;
    int local832;
    int local833;
    int local834;
    int local835;
    int local836;
    int local837;
    int local838;
    int local839; 		// m[r28 - 12]{138}
    int local84; 		// m[r29 - 8]{411}
    int local840; 		// m[r28 - 4]{138}
    int local841; 		// m[r28 - 8]{138}
    int local842; 		// m[r29 - 4]{138}
    int local843; 		// m[r29 - 6]{138}
    int local844; 		// m[r29 - 8]{138}
    int local845; 		// m[r29 - 12]{138}
    int local846; 		// m[r29 - 14]{138}
    int local847; 		// m[r29 - 16]{138}
    int local848; 		// m[m[r29 + 20]]{138}
    int local849; 		// m[m[r29 + 16]]{138}
    int local85; 		// m[r29 - 12]{411}
    int local850; 		// m[0x160c8]{138}
    int local851; 		// m[r28 - 28]{204}
    int local852; 		// m[r28 - 24]{201}
    int local853; 		// m[r28 - 20]{199}
    int local854; 		// r24{191}
    int local855; 		// r28{191}
    int local856; 		// m[r28 - 32]{189}
    int local857; 		// m[r28 - 28]{186}
    int local858; 		// m[r28 - 24]{184}
    int local859; 		// m[r28 - 20]{182}
    int local86; 		// m[r29 - 14]{411}
    int local860; 		// r28{176}
    int local861;
    int local862; 		// m[r28 - 4]{143}
    int local863; 		// m[r28 - 8]{167}
    int local864; 		// m[r28 - 12]{169}
    int local865; 		// m[r28 - 16]{171}
    void *local866; 		// m[r28 - 20]{174}
    int local867; 		// m[r28 - 24]{138}
    int local868; 		// m[r28 - 28]{138}
    int local869; 		// m[r28 - 32]{138}
    int local87; 		// m[r29 - 16]{411}
    int local870; 		// m[m[r29 + 12] + 4]{177}
    void *local871; 		// %pc{138}
    int local872; 		// m[m[r29 + 12] + 2]{163}
    short local873; 		// m[m[r29 + 12]]{150}
    int local874;
    int local875;
    int local876;
    int local877;
    int local878; 		// m[r28 - 20]{138}
    int local879; 		// r29{114}
    void *local88; 		// m[r28 - 12]{420}
    int local880; 		// m[m[r29 + 20] + 2]{114}
    int local881; 		// m[m[r29 + 20] + 4]{114}
    int local882; 		// m[m[r29 + 16] + 2]{114}
    int local883; 		// m[m[r29 + 16] + 4]{114}
    int local884; 		// m[m[r29 + 12] + 2]{114}
    int local885; 		// m[m[r29 + 12] + 4]{114}
    int local886;
    int local887; 		// m[r28 - 104]{114}
    int local888; 		// m[r28 - 108]{114}
    int local889; 		// m[r28 - 112]{114}
    int local89; 		// r28{411}
    int local890; 		// m[r28 - 116]{114}
    int local891; 		// m[r28 - 120]{114}
    int local892;
    int local893;
    int local894;
    int local895;
    int local896;
    int local897;
    int local898;
    int local899;
    int local9; 		// r28{56}
    int local90; 		// m[r28 - 8]{417}
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
    int local91; 		// m[r28 - 4]{415}
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
    int local92; 		// r29{400}
    int local920; 		// m[r28 - 20]{114}
    int local921; 		// m[r28 - 24]{114}
    int local922; 		// m[r28 - 28]{114}
    int local923; 		// m[r28 - 32]{114}
    int local924;
    int local925;
    int local926;
    int local927; 		// m[r28 - 16]{114}
    int local928;
    int local929;
    int local93; 		// m[m[r29 + 20] + 2]{400}
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
    int local94; 		// m[m[r29 + 20] + 4]{400}
    int local940;
    int local941;
    int local942;
    int local943;
    int local944;
    int local945; 		// m[r28 - 12]{114}
    int local946; 		// m[r28 - 4]{114}
    int local947; 		// m[r28 - 8]{114}
    int local948; 		// m[r29 - 4]{114}
    int local949; 		// m[r29 - 6]{114}
    int local95; 		// m[m[r29 + 16] + 2]{400}
    int local950; 		// m[r29 - 8]{114}
    int local951; 		// m[r29 - 12]{114}
    int local952; 		// m[r29 - 14]{114}
    int local953; 		// m[r29 - 16]{114}
    int local954; 		// m[m[r29 + 20]]{114}
    int local955; 		// m[m[r29 + 16]]{114}
    int local956; 		// m[m[r29 + 12]]{114}
    void *local957; 		// %pc{114}
    void *local958; 		// m[r28 - 16]{136}
    int local959; 		// m[r28 - 12]{133}
    int local96; 		// m[m[r29 + 16] + 4]{400}
    int local960; 		// m[r28 - 8]{128}
    int local961; 		// m[r28 - 4]{126}
    int local962;
    int local963;
    int local964;
    int local965;
    int local966;
    int local967;
    int local968; 		// m[m[r29 + 20] + 2]{67}
    int local969; 		// m[m[r29 + 20] + 4]{67}
    int local97; 		// m[m[r29 + 12] + 2]{400}
    int local970; 		// m[m[r29 + 16] + 2]{67}
    int local971; 		// m[m[r29 + 16] + 4]{67}
    int local972; 		// m[m[r29 + 12] + 2]{67}
    int local973; 		// m[m[r29 + 12] + 4]{67}
    int local974;
    int local975; 		// m[r28 - 104]{67}
    int local976; 		// m[r28 - 108]{67}
    int local977; 		// m[r28 - 112]{67}
    int local978; 		// m[r28 - 116]{67}
    int local979; 		// m[r28 - 120]{67}
    int local98; 		// m[m[r29 + 12] + 4]{400}
    int local980;
    int local981;
    int local982;
    int local983;
    int local984;
    int local985;
    int local986;
    int local987;
    int local988;
    int local989;
    int local99;
    int local990;
    int local991;
    int local992;
    int local993;
    int local994;
    int local995;
    int local996;
    int local997;
    int local998;
    int local999;

    local1400 = param1;
    local1399 = param2;
    local1398 = param3;
    local1397 = 0x186ea;
    local1396 = local1411 - 28;
    (*RtlInitUnicodeString)(pc, local1411 - 28, 0x186ea, param3, param2, param1, (unsigned short) local1411 - 28, (unsigned char) local1411 - 28, local1411 - 28, local1411 - 4, RtlInitUnicodeString, param3, SUBFLAGS32(local1411 - 4, 96, local1411 - 100), (unsigned)(local1411 - 4) < 96);
    local1391 = 0x186d0;
    local1390 = local1307 - 48;
    local1389 = local1386;
    (*param2)(local1319, local1318, local1317, local1316, local1315, local1351, local1326, local1338, local1350, local1325, local1337, local1349, local1348, local1324, local1336, local1323, local1335, local1347, local1355, local1359, local1386, local1322, local1329, local1332, local1334, local1341, local1344, local1346, local1354, local1358, local1362, local1365, local1368, local1371, local1374, local1307 - 48, local1321, local1328, local1331, local1333, local1340, local1343, local1345, local1353, local1357, local1361, local1364, local1367, local1370, local1373, local1376, local1375, local1372, local1369, 0x186d0, local1366, local1363, local1360, local1356, local1352, local1342, local1339, local1330, local1327, local1320, local1314, (unsigned short) local1307 - 48, (unsigned char) local1307 - 48, local1307 - 48, local1408, local1409, local1410, local1307, param2, param3, local1308, local1309, local1310, local1311, local1312, local1313, local1377, local1378, local1379, local1380, local1381, local1382, local1383, local1384, local1385, <all>, local1387, local1388);
    local1306 = 0x186b6;
    local1305 = local1222 - 32;
    local1304 = local1301;
    (*param2)(local1234, local1233, local1232, local1231, local1230, local1266, local1241, local1253, local1265, local1240, local1252, local1264, local1263, local1239, local1251, local1238, local1250, local1262, local1270, local1274, local1283, local1301, local1237, local1244, local1247, local1249, local1256, local1259, local1261, local1269, local1273, local1277, local1280, local1286, local1289, local1282, local1222 - 32, local1236, local1243, local1246, local1248, local1255, local1258, local1260, local1268, local1272, local1276, local1279, local1285, local1288, local1291, local1290, local1287, local1284, local1281, 0x186b6, local1278, local1275, local1271, local1267, local1257, local1254, local1245, local1242, local1235, local1229, (unsigned short) local1222 - 32, (unsigned char) local1222 - 32, local1222 - 32, local1408, local1409, local1410, local1222, param2, param3, local1223, local1224, local1225, local1226, local1227, local1228, local1292, local1293, local1294, local1295, local1296, local1297, local1298, local1299, local1300, <all>, local1302, local1303);
    local1221 = 0x186a4;
    local1220 = local1137 - 40;
    local1219 = local1216;
    (*param2)(local1149, local1148, local1147, local1146, local1145, local1181, local1156, local1168, local1180, local1155, local1167, local1179, local1178, local1154, local1166, local1153, local1165, local1177, local1185, local1189, local1198, local1195, local1216, local1152, local1159, local1162, local1164, local1171, local1174, local1176, local1184, local1188, local1192, local1201, local1204, local1197, local1194, local1137 - 40, local1151, local1158, local1161, local1163, local1170, local1173, local1175, local1183, local1187, local1191, local1200, local1203, local1206, local1205, local1202, local1199, local1196, local1193, 0x186a4, local1190, local1186, local1182, local1172, local1169, local1160, local1157, local1150, local1144, (unsigned short) local1137 - 40, (unsigned char) local1137 - 40, local1137 - 40, local1408, local1409, local1410, local1137, param2, param3, local1138, local1139, local1140, local1141, local1142, local1143, local1207, local1208, local1209, local1210, local1211, local1212, local1213, local1214, local1215, <all>, local1217, local1218);
    local1136 = 0x1869c;
    local1135 = local1052 - 56;
    local1134 = local1131;
    (*param2)(local1064, local1063, local1062, local1061, local1060, local1096, local1071, local1083, local1095, local1070, local1082, local1094, local1093, local1069, local1081, local1068, local1080, local1092, local1100, local1104, local1113, local1110, local1107, local1131, local1067, local1074, local1077, local1079, local1086, local1089, local1091, local1099, local1103, local1116, local1119, local1112, local1109, local1106, local1052 - 56, local1066, local1073, local1076, local1078, local1085, local1088, local1090, local1098, local1102, local1115, local1118, local1121, local1120, local1117, local1114, local1111, local1108, local1105, 0x1869c, local1101, local1097, local1087, local1084, local1075, local1072, local1065, local1059, (unsigned short) local1052 - 56, (unsigned char) local1052 - 56, local1052 - 56, local1408, local1409, local1410, local1052, param2, param3, local1053, local1054, local1055, local1056, local1057, local1058, local1122, local1123, local1124, local1125, local1126, local1127, local1128, local1129, local1130, <all>, local1132, local1133);
    local1051 = 20;
    local1050 = 0;
    local1049 = 20;
    local1048 = local17 - 76;
    local1047 = 20;
    local1046 = 0;
    local1045 = 20;
    local1044 = local17 - 96;
    local1043 = local17 - 8;
    local1042 = 10;
    local1041 = *(int*)(local17 + 8);
    local1040 = local1039;
    (**(int*)0x160c4)(local979, local978, local977, local976, local975, local1011, local986, local998, local1010, local985, local997, local1009, local1008, local984, local996, local1039, local983, local995, local1007, local1015, local1027, local1024, local1021, local1018, *(int*)(local17 + 8), local982, local989, local992, local994, local1001, local1004, local1006, local1014, local1030, local1033, local1026, local1023, local1020, local1017, 10, local981, local988, local991, local993, local1000, local1003, local1005, local1013, local1029, local1032, local1035, local1034, local1031, local1028, local1025, local1022, local1019, local1016, 20, local1012, local1002, local999, local990, local987, local980, local974, (unsigned short) local17 - 8, (unsigned char) local17 - 8, local17 - 8, local1408, local1409, local1410, local17, *(int*)0x160c4, *(int*)(local17 + 8), local968, local969, local970, local971, local972, local973, local17 - 76, 20, 0, local17 - 96, 20, 0, local1036, local1037, local1038, <all>, LOGICALFLAGS32(0), LOGICALFLAGS32(0));
    local1401 = local7;
    local1402 = local879;
    if (local1407 >= 0) {
        local961 = local879 - 16;
        local960 = 10;
        local959 = param3 + 1;
        local958 = local957;
        (*param2)(local891, local890, local889, local888, local887, local923, local898, local910, local922, local897, local909, local921, local920, local896, local908, local927, local957, local895, local907, local919, local939, local936, local933, local930, local926, param3 + 1, local894, local901, local904, local906, local913, local916, local918, local942, local945, local938, local935, local932, local929, local925, 10, local893, local900, local903, local905, local912, local915, local917, local941, local944, local947, local946, local943, local940, local937, local934, local931, local928, local924, local879 - 16, local914, local911, local902, local899, local892, local886, (unsigned short) local879 - 16, (unsigned char) local879 - 16, local879 - 16, local1408, local1409, local1410, local879, param2, param3 + 1, local880, local881, local882, local883, local884, local885, local948, local949, local950, local951, local952, local953, local954, local955, local956, <all>, LOGICALFLAGS32(param3 + 1), LOGICALFLAGS32(param3 + 1));
        local1401 = local6;
        local1402 = local16;
        local1404 = local16;
        if (local1407 < 0) {
L1:
            local1411 = local1401;
            param1 = local1402;
            local1406 = 0;
            local1405 = local1405 >> 8 & 0xff | (0);
        } else {
            local862 = local1410;
            local873 = 0;
            local1407 = *(int*)(local16 - 32) + *(int*)(local16 - 24);
            local1407 = local1407 + *(int*)(local16 - 8) + 2;
            local872 = (unsigned short) local1407;
            local1405 = (unsigned short) ((unsigned short) local1407);
            local863 = 0x43726150;
            local864 = ((unsigned short) local1407);
            local865 = 1;
            local866 = local871;
            local778 = ExAllocatePoolWithTag(1, ((unsigned short) local1407), 0x43726150);
            local1403 = local860;
            local870 = local778;
            if (local778 == 0) {
L3:
                local1411 = local1403;
                param1 = local1404;
                local1406 = 0;
                local1405 = local1405 >> 8 & 0xff | (0);
            } else {
                local859 = ((unsigned short) local1407);
                local858 = 0;
                local857 = local778;
                local856 = local850;
                local1408 = __imp_memset(local778, 0, ((unsigned short) local1407)); /* Warning: also results in local1409 */
                local853 = local16 - 24;
                local852 = *(int*)(local16 + 12);
                local851 = local850 - 0x54e3;
                (**(int*)0x160cc)(local788, local787, local786, local785, local784, local850, local850 - 0x54e3, local807, local795, *(int*)(local16 + 12), local806, local794, ((unsigned short) local1407), local805, local793, local821, local817, 1, local804, local792, local839, local836, local833, local830, local827, local824, local820, local816, ((unsigned short) local1407), local813, local810, local803, local801, local798, local791, local841, local838, local835, local832, local829, local826, local823, local819, local815, 0x43726150, local812, local809, local800, local797, local790, local840, local837, local834, local831, local828, local825, local822, local818, local814, local1410, local811, local808, local802, local799, local796, local789, local783, (unsigned short) local16 - 24, (unsigned char) local16 - 24, local16 - 24, local1408, local1409, *(int*)(local16 + 12), local16, *(int*)0x160cc, param3, local779, local780, local781, local782, (unsigned short) local1407, local778, local842, local843, local844, local845, local846, local847, local848, local849, 0, <all>, ADDFLAGS32(local6 - 28, 12, local6 - 16), ADDFLAGS32(local6 - 28, 12, local6 - 16));
                local777 = local693 - 32;
                local776 = local1410;
                local775 = local772;
                (*param2)(local705, local704, local703, local702, local701, local734, local733, local724, local712, local732, local723, local711, local731, local722, local710, local742, local738, local730, local721, local709, local760, local757, local754, local751, local748, local745, local741, local737, local729, local772, local727, local720, local718, local715, local708, local762, local759, local756, local753, local750, local747, local744, local740, local736, local728, local1410, local726, local717, local714, local707, local761, local758, local755, local752, local749, local746, local743, local739, local735, local693 - 32, local725, local719, local716, local713, local706, local700, (unsigned short) local693 - 32, (unsigned char) local693 - 32, local693 - 32, local1408, local1409, local1410, local693, param2, param3, local694, local695, local696, local697, local698, local699, local763, local764, local765, local766, local767, local768, local769, local770, local771, <all>, local773, local774);
                local692 = local608 - 8;
                local691 = local1410;
                local690 = local687;
                (*param2)(local620, local619, local618, local617, local616, local649, local648, local639, local627, local647, local638, local626, local646, local637, local625, local657, local653, local645, local636, local624, local675, local672, local669, local666, local663, local660, local656, local652, local644, local642, local687, local635, local633, local630, local623, local677, local674, local671, local668, local665, local662, local659, local655, local651, local641, local1410, local632, local629, local622, local676, local673, local670, local667, local664, local661, local658, local654, local650, local643, local640, local608 - 8, local634, local631, local628, local621, local615, (unsigned short) local608 - 8, (unsigned char) local608 - 8, local608 - 8, local1408, local1409, local1410, local608, param2, param3, local609, local610, local611, local612, local613, local614, local678, local679, local680, local681, local682, local683, local684, local685, local686, <all>, local688, local689);
                local1404 = local15;
                local607 = 0;
                local1408 = *(int*)(local15 - 40) + *(int*)(local15 - 24);
                local1407 = local1408 + *(int*)(local15 - 8) + 2;
                local606 = (unsigned short) local1407;
                local1405 = (unsigned short) ((unsigned short) local1407);
                local605 = 0x43726150;
                local604 = ((unsigned short) local1407);
                local603 = 1;
                local601 = local602;
                local515 = ExAllocatePoolWithTag(1, ((unsigned short) local1407), 0x43726150);
                local599 = local515;
                if (local515 != 0) {
                    local598 = ((unsigned short) local1407);
                    local597 = 0;
                    local596 = local515;
                    local595 = local589;
                    local1408 = __imp_memset(local515, 0, ((unsigned short) local1407)); /* Warning: also results in local1409 */
                    local592 = local15 - 24;
                    local591 = *(int*)(local15 + 16);
                    local590 = local589 - 0x554c;
                    (*param2)(local525, local524, local523, local522, local521, local552, local551, local589, local532, local550, local589 - 0x554c, local531, local549, *(int*)(local15 + 16), local530, local560, local556, local548, ((unsigned short) local1407), local529, local578, local575, local572, local569, local566, local563, local559, local555, local547, local544, local541, 1, local538, local535, local528, local580, local577, local574, local571, local568, local565, local562, local558, local554, local546, local543, local540, ((unsigned short) local1407), local537, local534, local527, local579, local576, local573, local570, local567, local564, local561, local557, local553, local545, local542, local539, 0x43726150, local536, local533, local526, local520, (unsigned short) local15 - 24, (unsigned char) local15 - 24, local15 - 24, local1408, local1409, local1410, local15, param2, *(int*)(local15 + 16), local516, local517, (unsigned short) local1407, local515, local518, local519, local581, local582, local583, local584, local585, local586, local587, 0, local588, <all>, ADDFLAGS32(local3 - 24, 12, local3 - 12), ADDFLAGS32(local3 - 24, 12, local3 - 12));
                    local514 = local430 - 40;
                    local513 = param3;
                    local512 = local509;
                    (*param2)(local442, local441, local440, local439, local438, local471, local470, local458, local449, local469, local457, local448, local468, local456, local447, local479, local475, local467, local455, local446, local497, local494, local491, local488, local485, local482, local478, local474, local466, local464, local461, local454, local509, local452, local445, local499, local496, local493, local490, local487, local484, local481, local477, local473, local465, local463, local460, local453, param3, local451, local444, local498, local495, local492, local489, local486, local483, local480, local476, local472, local462, local459, local430 - 40, local450, local443, local437, (unsigned short) local430 - 40, (unsigned char) local430 - 40, local430 - 40, local1408, local1409, local1410, local430, param2, param3, local431, local432, local433, local434, local435, local436, local500, local501, local502, local503, local504, local505, local506, local507, local508, <all>, local510, local511);
                    local429 = local344 - 8;
                    local428 = param3;
                    local427 = local424;
                    (*param2)(local356, local355, local354, local353, local352, local386, local385, local373, local363, local384, local372, local362, local383, local371, local361, local394, local390, local382, local370, local360, local412, local409, local406, local403, local400, local397, local393, local389, local381, local379, local376, local369, local366, local424, local359, local414, local411, local408, local405, local402, local399, local396, local392, local388, local378, local375, local368, local365, param3, local358, local413, local410, local407, local404, local401, local398, local395, local391, local387, local380, local377, local374, local367, local364, local344 - 8, local357, local351, (unsigned short) local344 - 8, (unsigned char) local344 - 8, local344 - 8, local1408, local1409, local1410, local344, param2, param3, local345, local346, local347, local348, local349, local350, local415, local416, local417, local418, local419, local420, local421, local422, local423, <all>, local425, local426);
                    local343 = 0;
                    local1407 = *(int*)(local1392 - 56) + *(int*)(local1392 - 48);
                    local1407 = local1407 + *(int*)(local1392 - 16) + 2;
                    local342 = (unsigned short) local1407;
                    local341 = 0x43726150;
                    local340 = ((unsigned short) local1407);
                    local339 = 1;
                    local337 = local338;
                    local177 = ExAllocatePoolWithTag(1, ((unsigned short) local1407), 0x43726150);
                    local335 = local177;
                    if (local177 != 0) {
                        local257 = ((unsigned short) local1407);
                        local256 = 0;
                        local255 = local177;
                        local254 = *(int*)0x160c8;
                        local1408 = __imp_memset(local177, 0, ((unsigned short) local1407)); /* Warning: also results in local1409 */
                        local251 = local1392 - 48;
                        local250 = *(int*)(local1392 + 20);
                        local249 = *(int*)0x160c8 - 0x55bb;
                        (*param2)(local187, local186, local185, local184, local183, local212, local211, local199, *(int*)0x160c8, local210, local198, *(int*)0x160c8 - 0x55bb, local209, local197, *(int*)(local1392 + 20), local220, local216, local208, local196, local1392 - 48, local238, local235, local232, local229, local226, local223, local219, local215, local207, local205, local202, local195, local193, local190, 1, local240, local237, local234, local231, local228, local225, local222, local218, local214, local206, local204, local201, local194, local192, local189, ((unsigned short) local1407), local239, local236, local233, local230, local227, local224, local221, local217, local213, local203, local200, local191, local188, 0x43726150, local182, (unsigned short) local1392 - 48, (unsigned char) local1392 - 48, local1392 - 48, local1408, local1409, local1410, local1392, param2, param3, (unsigned short) local1407, local177, local178, local179, local180, local181, local241, local242, local243, local244, local245, local246, 0, local247, local248, <all>, ADDFLAGS32(local0 - 24, 12, local0 - 12), ADDFLAGS32(local0 - 24, 12, local0 - 12));
                        local176 = local92 - 56;
                        local175 = *(int*)(local92 + 20);
                        local174 = local171;
                        (*param2)(local104, local103, local102, local101, local100, local136, local135, local123, local111, local134, local122, local110, local133, local121, local109, local144, local140, local132, local120, local108, local171, local159, local156, local153, local150, local147, local143, local139, local131, local129, local126, local119, local117, local114, local107, local161, *(int*)(local92 + 20), local158, local155, local152, local149, local146, local142, local138, local130, local128, local125, local118, local116, local113, local106, local160, local92 - 56, local157, local154, local151, local148, local145, local141, local137, local127, local124, local115, local112, local105, local99, (unsigned short) local92 - 56, (unsigned char) local92 - 56, local92 - 56, local1408, local1409, local1410, local92, param2, param3, local93, local94, local95, local96, local97, local98, local162, local163, local164, local165, local166, local167, local168, local169, local170, <all>, local172, local173);
                        local91 = local18 - 16;
                        local90 = *(int*)(local18 + 20);
                        local88 = local1393;
                        (*param2)(local24, local23, local22, local21, local20, local56, local55, local43, local31, local54, local42, local30, local53, local41, local29, local64, local60, local52, local40, local28, local79, local1393, local76, local73, local70, local67, local63, local59, local51, local49, local46, local39, local37, local34, local27, local81, local78, *(int*)(local18 + 20), local75, local72, local69, local66, local62, local58, local50, local48, local45, local38, local36, local33, local26, local80, local77, local18 - 16, local74, local71, local68, local65, local61, local57, local47, local44, local35, local32, local25, local19, (unsigned short) local18 - 16, (unsigned char) local18 - 16, local18 - 16, local1408, local1409, local1410, local18, param2, param3, *(int*)(*(int*)(local1392 + 20) + 2), *(int*)(*(int*)(local1392 + 20) + 4), *(int*)(*(int*)(local15 + 16) + 2), *(int*)(*(int*)(local15 + 16) + 4), *(int*)(*(int*)(local16 + 12) + 2), *(int*)(*(int*)(local16 + 12) + 4), local82, local83, local84, local85, local86, local87, *(int*)*(int*)(local1392 + 20), *(int*)*(int*)(local15 + 16), *(int*)*(int*)(local16 + 12), <all>, flags, NF);
                        local1406 = 1;
                        local1405 = local1405 >> 8 & 0xff | 1;
                    } else {
                        local334 = *(int*)(local1410 + 4);
                        local333 = *(int*)0x160c8;
                        (**(int*)0x160f4)(local187, local186, local185, local184, local183, local212, local211, local199, local332, local210, local198, local331, local209, local197, *(int*)0x160c8, local220, local216, local208, local196, *(int*)(local1410 + 4), local238, local235, local232, local229, local226, local223, local219, local215, local207, local205, local202, local195, local193, local190, 1, local240, local237, local234, local231, local228, local225, local222, local218, local214, local206, local204, local201, local194, local192, local189, ((unsigned short) local1407), local239, local236, local233, local230, local227, local224, local221, local217, local213, local203, local200, local191, local188, 0x43726150, local182, (unsigned short) ((unsigned short) local1407), (unsigned char) ((unsigned short) local1407), local177, *(int*)(local1392 + 20), local1409, local1410, local1392, *(int*)0x160f4, param3, (unsigned short) local1407, local177, local178, local179, local180, local181, local241, local242, local243, local244, local245, local246, 0, local247, local248, <all>, LOGICALFLAGS32(local177), LOGICALFLAGS32(local177));
                        local330 = *(int*)(param3 + 4);
                        local329 = local1395;
                        (*param2)(local264, local263, local262, local261, local260, local296, local295, local283, local271, local294, local282, local270, local293, local281, local269, local304, local300, local292, local280, local268, local322, local319, local316, local313, local310, local307, local303, local299, local291, local289, local286, local279, local277, local274, local267, local1395, local321, local318, local315, local312, local309, local306, local302, local298, local290, local288, local285, local278, local276, local273, local266, local320, local317, *(int*)(param3 + 4), local314, local311, local308, local305, local301, local297, local287, local284, local275, local272, local265, local259, local1405, local1406, local1407, local1408, local1409, local1410, local258, param2, param3, *(int*)(*(int*)(local1392 + 20) + 2), *(int*)(*(int*)(local1392 + 20) + 4), *(int*)(*(int*)(local15 + 16) + 2), *(int*)(*(int*)(local15 + 16) + 4), *(int*)(*(int*)(local16 + 12) + 2), *(int*)(*(int*)(local16 + 12) + 4), local323, local324, local325, local326, local327, local328, *(int*)*(int*)(local1392 + 20), *(int*)*(int*)(local15 + 16), *(int*)*(int*)(local16 + 12), <all>, flags, NF);
                        local1403 = local1411;
                        local1404 = param1;
                        goto L3;
                    }
                } else {
                    *(int*)(local3 - 16) = *(int*)(local1410 + 4);
                    *(int*)(local3 - 20) = local589;
                    ExFreePool(*(int*)(local1410 + 4));
                    local1403 = local1411;
                    goto L3;
                }
            }
            local1411 += 4;
        }
    } else {
        goto L1;
    }
    return *(int*)(local1411 + 4); /* WARNING: Also returning: local1405, local1406, *(int*)param1, *(int*)local1411 */
}

// address: 0x1104a
proc5(int param3, int param2, int param5, int param6, int param7, int param8, int param10, int param11, int param12, int param13, int param14, int param9, int param4, int param1) {
    int local0; 		// r28{54}
    int local1; 		// r28{139}
    int local2; 		// r3
    int local3; 		// r9
    int local4; 		// r11
    int local5; 		// r24
    int local8; 		// r28

    *(int*)(local8 - 4) = param1;
    local5 = param2;
    if (param2 == 0) {
        local5 = param3;
    }
    *(int*)(local8 - 8) = param4;
    param4 = 0;
    local4 = 0;
    local2 = 0;
    if (param5 != 0) {
L10:
        *(int*)(local8 - 12) = 8;
        param4 = 8;
        local4 = 8;
        local2 = 8;
    } else {
        if (param6 != 0) {
            goto L10;
        }
    }
    if (param7 != 0) {
L7:
        local4 = (unsigned char) (param4 + 1) * 8;
        local2 = (unsigned short) (param4 + 1) * 8;
    } else {
        if (param8 != 0) {
            goto L7;
        }
    }
    local3 = (unsigned char) (local4 + 48);
    *(int*)(local8 - 12) = (local4 + 48);
    *(int*)(local8 - 16) = local5;
    IoAllocateErrorLogEntry();
    local1 = local0;
    if (local5 != 0) {
        *(int*)(local5 + 12) = param9;
        *(int*)(local5 + 24) = param10;
        *(int*)local5 = param11;
        *(char*)(local5 + 1) = param12;
        *(int*)(local5 + 16) = param13;
        local3 = (unsigned char) param14;
        *(int*)(local5 + 20) = param14;
        *(short*)(local5 + 2) = local2;
        if (local2 != 0) {
            *(int*)(local5 + 40) = param5;
            local3 = (unsigned char) param6;
            *(int*)(local5 + 44) = param6;
            if ((unsigned)local2 > 8) {
                *(int*)(local5 + 48) = param7;
                local3 = (unsigned char) param8;
                *(int*)(local5 + 52) = param8;
            }
        }
        *(int*)(local8 - 20) = local5;
        *(int*)(local8 - 24) = IoAllocateErrorLogEntry;
        IoWriteErrorLogEntry();
        local1 = local8;
    }
    local8 = local1;
    return (unsigned short) *(int*)local8; /* WARNING: Also returning: local3, (unsigned char) *(int*)local8, *(int*)local8, param3 */
}

// address: 0x12bf0
__imp_memset(int param1, int param2, int param3) {
    int local1; 		// r25
    int local2; 		// r26
    int local3; 		// r28

    memset(param1, param2, param3);
    return local1; /* WARNING: Also returning: local2 */
}

// address: 0x11140
proc7(int param1) {
    int local0; 		// m[r28 - 60]
    int local1; 		// m[r28 - 28]
    int local15; 		// m[r28 - 112]
    int local23; 		// m[r28 - 12]
    int local24; 		// m[r28 - 40]
    int local25; 		// m[r28 - 56]
    int local26; 		// m[r28 - 52]
    int local27; 		// m[r28 - 36]
    int local28; 		// m[r28 - 48]
    int local29; 		// m[r28 - 32]
    int local30; 		// r28{79}
    int local31; 		// r28{61}
    int local32; 		// r28{50}
    int local34; 		// r28{123}
    int local35; 		// r24
    int local38; 		// r28

    KeInitializeEvent(local38 - 28, 0, 0);
    local15 = *(int*)(param1 + 4);
    local35 = IoBuildDeviceIoControlRequest(0x160030, local15, 0, 0, &local0, 32, 1, local38 - 28, local38 - 12);
    local34 = local32;
    if (local35 != 0) {
        local35 = IofCallDriver(0x160030, local15);
        local34 = local31;
        if (local35 >= 0) {
            local35 = KeWaitForSingleObject(&local1, 0, 0, 0, 0);
            local34 = local30;
            local34 = local30;
            local34 = local30;
            if (local35 >= 0) {
                if (local23 < 0) {
L1:
                    local35 = local23;
                } else {
                    *(int*)(param1 + 56) = local0;
                    *(int*)(param1 + 60) = local25;
                    *(int*)(param1 + 72) = local24;
                    *(int*)(param1 + 64) = local26;
                    *(int*)(param1 + 76) = local27;
                    *(int*)(param1 + 68) = local28;
                    *(int*)(param1 + 80) = local29;
                    local35 = 0xc000009a;
                    if ((unsigned)local28 >= 3) {
                        goto L1;
                    }
                }
            }
        }
    } else {
        local35 = 0xc000009a;
    }
    local38 = local34;
    return local35; /* WARNING: Also returning: param1, *(int*)local38 */
}

// address: 0x12b88
proc8(int param2, int param3, int param4, int param8, int param5, int param1, int param6, int param7) {
    int local0; 		// r28{14}
    int local1; 		// r8
    int local2; 		// r24
    int local3; 		// r25
    int local4; 		// r26
    int local5; 		// r28

    *(int*)(local5 - 4) = param1;
    *(int*)(local5 - 8) = 0x43726150;
    *(int*)(local5 - 12) = 16;
    *(int*)(local5 - 16) = 0;
    local2 = ExAllocatePoolWithTag(0, 16, 0x43726150);
    *(int*)(param2 + 92) = local2;
    if (local2 == 0) {
        *(int*)(local5 - 20) = param2;
        *(int*)(local5 - 24) = ExAllocatePoolWithTag;
        param6 = proc10(param2, param3, param4, param5, local5 - 4, param6, param7, *(int*)param7, <all>); /* Warning: also results in param3, param4, param8, param5 */
    } else {
        *(int*)(local2 + 8) = 0x12a48;
        *(int*)(local2 + 12) = param2;
        *(int*)local2 = 0;
        *(int*)(local5 - 20) = 1;
        *(int*)(local5 - 24) = local2;
        *(int*)(local5 - 28) = ExAllocatePoolWithTag;
        ExQueueWorkItem();
    }
    return param6; /* WARNING: Also returning: param3, param4, param8, param5, *(int*)local5 */
}

// address: 0x181dc
proc9(int param5, int param4, int param1, int param2, int param3, int param6) {
    int local0; 		// m[r28 - 24]{95}
    int local1; 		// r28{182}
    int local10;
    int local11;
    int local12; 		// m[r28 - 148]{83}
    int local13; 		// m[r28 - 152]{83}
    int local14; 		// m[r28 - 156]{83}
    int local15; 		// m[r28 - 160]{83}
    int local16; 		// m[r28 - 168]{83}
    int local17; 		// m[r28 - 172]{83}
    int local18; 		// m[r28 - 176]{83}
    int local19; 		// m[r28 - 180]{83}
    int local2; 		// r28{161}
    int local20; 		// m[r28 - 184]{83}
    int local21; 		// m[r28 - 188]{83}
    int local22; 		// m[r28 - 192]{83}
    int local23; 		// m[r30]{83}
    void *local24; 		// %pc{83}
    void *local25; 		// m[r28 - 12]{93}
    int local26; 		// r28{83}
    int local27; 		// m[r28 - 8]{90}
    int local28; 		// m[r28 - 4]{86}
    int local29; 		// r29{95}
    int local3; 		// r28{107}
    int local30; 		// m[r28 - 188]{81}
    int local31; 		// m[r28 - 184]{78}
    int local32; 		// m[r28 - 180]{73}
    int local33; 		// r24{69}
    int local34; 		// r28{69}
    int local35; 		// m[r28 - 192]{67}
    int local36; 		// m[r28 - 188]{64}
    int local37; 		// m[r28 - 184]{62}
    int local38; 		// m[r28 - 180]{60}
    int local39; 		// m[r28 - 176]{58}
    int local4; 		// r28{95}
    int local40; 		// r0{44}
    int local41; 		// r28{52}
    int local42; 		// r29{4}
    int local43; 		// m[r28 - 4]{2}
    int local44; 		// m[r28 - 8]{53}
    int local45; 		// m[r28 - 10]{42}
    short local46; 		// m[r28 - 12]{29}
    int local47; 		// m[r28 - 16]{20}
    int local48; 		// m[r28 - 148]{8}
    int local49; 		// m[r28 - 152]{10}
    int local5; 		// r29{83}
    int local50; 		// m[r28 - 156]{12}
    int local51; 		// m[r28 - 160]{18}
    int local52; 		// m[r28 - 164]{36}
    int local53; 		// m[r28 - 168]{45}
    int local54; 		// m[r28 - 172]{47}
    int local55; 		// m[r28 - 176]{50}
    int local56; 		// m[r28 - 180]{95}
    int local57; 		// m[r28 - 184]{95}
    int local58; 		// m[r28 - 188]{95}
    int local59; 		// m[r28 - 192]{95}
    int local6; 		// r30{149}
    int local60; 		// m[r28 - 4]{83}
    int local61; 		// m[r28 - 8]{83}
    int local62; 		// m[r28 - 12]{83}
    int local63; 		// m[r28 - 16]{83}
    int local64; 		// m[r28 - 20]{83}
    int local65; 		// m[r28 - 24]{83}
    int local66; 		// m[r28 - 28]{83}
    int local67; 		// m[r28 - 4]{95}
    int local68; 		// m[r28 - 8]{95}
    int local69; 		// m[r28 - 12]{95}
    int local7;
    int local70; 		// m[r29 - 60]{83}
    int local71; 		// m[r29 - 64]{83}
    int local72; 		// m[r29 - 68]{83}
    int local73; 		// m[r29 - 72]{83}
    int local74; 		// m[r29 - 76]{83}
    int local75; 		// m[r29 - 80]{83}
    int local76; 		// m[r29 - 88]{83}
    int local77; 		// m[r29 - 92]{83}
    int local78; 		// m[r29 - 96]{83}
    int local79; 		// m[r29 - 100]{83}
    int local8;
    int local80; 		// m[r29 - 104]{83}
    int local81; 		// m[r29 - 108]{83}
    int local82; 		// m[r29 - 116]{83}
    int local83; 		// m[r29 - 120]{83}
    int local84; 		// m[r29 - 124]{83}
    int local85; 		// m[r29 - 128]{83}
    int local86; 		// m[r29 - 132]{83}
    int local87; 		// m[r29 - 136]{83}
    int local88; 		// r0{33}
    int local89; 		// r28{24}
    int local9; 		// m[r28 - 10]{83}
    int local90; 		// m[r28 - 164]{22}
    void *local91; 		// %pc{95}
    int local92; 		// r0{201}
    int local93; 		// r28{206}
    int local94; 		// r29{207}
    int local95; 		// r0
    int local96; 		// r24
    int local97; 		// r25
    int local98; 		// r26
    int local99; 		// r28

    local43 = param1;
    local42 = local99 - 4;
    local48 = param2;
    local49 = param3;
    local50 = 0x18766;
    local51 = local99 - 32;
    local47 = 0;
    RtlInitUnicodeString(local99 - 32, &global18);
    local94 = local42;
    local46 = 0;
    local95 = *(int*)param5;
    local88 = (local95 + *(int*)(local99 - 32));
    local52 = 0x43726150;
    local45 = local88 + 2;
    local40 = (unsigned short) (local88 + 2);
    local53 = (local88 + 2);
    local54 = 1;
    local55 = RtlInitUnicodeString;
    local96 = ExAllocatePoolWithTag(1, (local88 + 2), 0x43726150);
    local92 = local40;
    local93 = local41;
    local44 = local96;
    if (local96 != 0) {
        local39 = param4;
        local38 = (local88 + 2);
        local37 = 0;
        local36 = local96;
        local35 = ExAllocatePoolWithTag;
        local97 = __imp_memset(local96, 0, (local88 + 2)); /* Warning: also results in local98 */
        local32 = param5;
        local31 = local99 - 12;
        local30 = ExAllocatePoolWithTag - 0x5644;
        (*RtlAppendUnicodeStringToString)(ExAllocatePoolWithTag, ExAllocatePoolWithTag - 0x5644, local99 - 12, param5, param4, 1, (local88 + 2), 0x43726150, local99 - 32, 0x18766, param3, param2, 0, 0, local88 + 2, local96, param1, (unsigned short) local99 - 12, local99 - 12, local97, local98, local99 - 4, RtlAppendUnicodeStringToString, 0, ADDFLAGS32(local99 - 188, 12, local99 - 176), ADDFLAGS32(local99 - 188, 12, local99 - 176));
        local28 = local5 - 28;
        local27 = local5 - 8;
        local25 = local24;
        (*param2)(local22, local21, local20, local19, local18, local17, local16, local15, local14, local13, local12, local66, local65, local64, local11, local63, local24, local10, local62, local9, local5 - 8, local8, local61, local60, local5 - 28, local7, (unsigned short) local5 - 8, local5 - 8, local97, local98, param4, local5, param2, param3, *(int*)(*(int*)(local29 + 12) + 89), *(int*)(*(int*)(local29 + 12) + 108), local70, local71, local72, local73, local74, local75, local76, local77, local78, local79, local80, local81, local82, local83, local84, local85, local86, local87, local23, param6, flags, NF);
        local94 = local29;
        *(int*)(local4 - 4) = 112;
        *(int*)(local4 - 8) = param3;
        *(int*)(local4 - 12) = local29 - 140;
        *(int*)(local4 - 16) = local91;
        __imp_memset(local29 - 140, param3, 112);
        *(int*)(local4 - 4) = 32;
        *(int*)(local4 - 4) = 4;
        *(int*)(local29 - 128) = local29 - 20;
        *(int*)(local4 - 4) = param3;
        *(int*)(local4 - 8) = param3;
        *(int*)(local29 - 124) = 4;
        *(int*)(local29 - 120) = local29 - 12;
        *(int*)(local29 - 116) = 4;
        *(int*)(local29 - 96) = 4;
        *(int*)(local29 - 88) = 4;
        *(int*)(local29 - 68) = 4;
        *(int*)(local29 - 60) = 4;
        local95 = (unsigned short) local29 - 140;
        *(int*)(local4 - 12) = local29 - 140;
        *(int*)(local4 - 16) = *(int*)(local29 - 4);
        *(int*)(local29 - 100) = local29 - 16;
        *(int*)(local29 - 136) = 32;
        *(int*)(local29 - 108) = 32;
        *(int*)(local29 - 80) = 32;
        local6 = *(int*)(local29 + 12) + 112;
        *(int*)(local4 - 20) = 0x80000000;
        *(int*)(local29 - 132) = 0x18748;
        *(int*)(local29 - 104) = 0x18728;
        *(int*)(local29 - 92) = local29 - 12;
        *(int*)(local29 - 76) = 0x186fc;
        *(int*)(local29 - 72) = local6;
        *(int*)(local29 - 64) = local29 - 12;
        *(int*)(local4 - 24) = local91 - 0x566d;
        local96 = RtlQueryRegistryValues(0x80000000, *(int*)(local29 - 4), local29 - 140, param3, param3);
        local92 = local95;
        if (local96 < 0) {
L3:
            *(int*)local6 = 15;
        } else {
            if (*(int*)(local29 - 20) != param3) {
                *(char*)(*(int*)(local29 + 12) + 89) = 1;
            }
            if (*(int*)(local29 - 16) != param3) {
                *(char*)(*(int*)(local29 + 12) + 108) = 1;
            }
            if (*(int*)local6 == param3) {
                goto L3;
            }
        }
        *(int*)(local4 - 24) = *(int*)(local29 - 4);
        *(int*)(local4 - 28) = *(int*)0x16028;
        ExFreePool(*(int*)(local29 - 4));
        param4 = local0;
        local99 = local4 - 20;
        local93 = local99;
    }
    local95 = local92;
    local99 = local93;
    param1 = local94;
    return local96; /* WARNING: Also returning: local95, local97, local98, param4, *(int*)param1, *(int*)local99 */
}

// address: 0x12a48
proc10(int param6, int param8, int param7, int param2, int param1, int param3, int param4, int param5, int param9) {
    int local0; 		// r28{200}
    int local1; 		// r28{185}
    int local10; 		// r28{245}
    int local100; 		// r28{20}
    int local101; 		// m[r28 - 56]{18}
    int local102; 		// m[r28 - 60]{157}
    char local103[0]; 		// %pc{19}
    int local104; 		// global12{157}
    void *local105; 		// %pc{157}
    int local106; 		// local11{230}
    char local107[0]; 		// local95{231}
    int local108; 		// local56{303}
    char local109[0]; 		// local57{304}
    int local11; 		// r28{230}
    int local110; 		// local16{235}
    int local111; 		// local36{236}
    int local112; 		// local28{305}
    int local113; 		// local29{306}
    int local114; 		// local10{245}
    int local115; 		// global12{249}
    void *local116; 		// %pc{253}
    int local117; 		// r10{258}
    int local118; 		// local15{264}
    int local119; 		// r29{265}
    int local12; 		// r28{282}
    int local120; 		// local14{270}
    int local121; 		// local13{277}
    int local122; 		// %pc{278}
    int local123; 		// local12{282}
    int local124; 		// r28{292}
    int local125; 		// global12{296}
    int local126; 		// r8
    int local127; 		// r11
    int local128; 		// r24
    int local129; 		// r25
    int local13; 		// r28{277}
    int local130; 		// r26
    int local131; 		// r28
    int local14; 		// r28{270}
    int local15; 		// r28{264}
    int local16; 		// r28{235}
    int local17; 		// r29{246}
    int local18; 		// r30{266}
    int local19;
    int local2; 		// %pc{184}
    int local20; 		// m[r28 - 5]{110}
    int local21;
    int local22; 		// m[r28 - 16]{110}
    int local23; 		// m[r28 - 20]{110}
    int local24; 		// m[r28 - 48]{110}
    int local25; 		// m[r28 - 52]{110}
    int local26; 		// m[r28 - 56]{110}
    int local27; 		// m[r28 - 60]{110}
    int local28; 		// m[r28 - 8]{305}
    int local29; 		// m[r28 - 12]{306}
    int local3; 		// m[r28 - 4]{174}
    int local30; 		// m[r28 - 4]{110}
    int local31; 		// m[r28]{110}
    int local32; 		// m[r28 - 4]{142}
    int local33; 		// r24{141}
    int local34; 		// r28{141}
    int local35; 		// m[r28 - 4]{139}
    int local36; 		// %pc{236}
    int local37; 		// r28{136}
    int local38; 		// m[r28 - 8]{131}
    int local39; 		// m[r28 - 12]{134}
    int local4; 		// m[r28]{250}
    int local40; 		// %pc{135}
    int local41; 		// r24{136}
    int local42; 		// r28{127}
    int local43; 		// m[r28 - 8]{125}
    int local44; 		// m[r28 - 12]{110}
    int local45; 		// %pc{126}
    int local46; 		// m[r28 - 4]{122}
    int local47; 		// m[r29 + 11]{119}
    int local48; 		// r28{118}
    void *local49; 		// m[r28 - 4]{116}
    int local5; 		// m[r28]{163}
    void *local50; 		// %pc{110}
    int local51; 		// m[r29 + 11]{110}
    int local52;
    int local53; 		// m[r28 - 8]{110}
    int local54; 		// global12{110}
    int local55; 		// m[r28 - 16]{90}
    int local56; 		// m[r28 - 56]{303}
    char local57[0]; 		// m[r28 - 60]{304}
    char local58[0]; 		// m[r28 - 76]{108}
    int local59; 		// m[r28 - 20]{106}
    int local6; 		// r10{239}
    int local60; 		// m[r28 - 72]{104}
    int local61; 		// m[r28 - 68]{100}
    int local62; 		// m[r28 - 64]{98}
    int local63; 		// m[r28 - 60]{96}
    int local64; 		// m[r28 - 16]{157}
    int local65; 		// r24{88}
    int local66; 		// r28{88}
    int local67; 		// m[r28 - 52]{83}
    int local68; 		// r28{76}
    int local69; 		// m[r29 + 11]{157}
    int local7; 		// r28{161}
    int local70; 		// m[r28 - 4]{2}
    char local71; 		// m[r28 - 5]{16}
    int local72; 		// m[r28 - 12]{78}
    int local73; 		// m[r28 - 20]{157}
    int local74; 		// m[r28 - 48]{9}
    int local75; 		// m[r28 - 52]{14}
    int local76; 		// m[r28 - 4]{157}
    int local77; 		// m[r28 - 8]{157}
    int local78; 		// m[r28 - 12]{157}
    int local79; 		// global12{22}
    int local8; 		// r10{110}
    char local80[0]; 		// m[r28 - 52]{74}
    int local81; 		// m[r28 - 48]{71}
    int local82; 		// m[r28 - 44]{69}
    int local83; 		// m[r28 - 40]{67}
    int local84; 		// m[r28 - 36]{65}
    int local85; 		// m[r28 - 32]{63}
    int local86; 		// m[r28 - 28]{61}
    int local87; 		// m[r28 - 24]{59}
    int local88; 		// m[r28 - 20]{57}
    int local89; 		// m[r28 - 16]{53}
    int local9; 		// r28{110}
    int local90; 		// r28{49}
    char local91[0]; 		// m[r28 - 16]{47}
    int local92; 		// m[r28 - 12]{44}
    int local93; 		// m[r28 - 8]{40}
    int local94; 		// r28{37}
    char local95[0]; 		// %pc{231}
    int local96; 		// r28{32}
    int local97; 		// m[r28 - 56]{27}
    char local98[0]; 		// m[r28 - 60]{30}
    char local99[0]; 		// %pc{31}

    local109 = *(int*)(local131 - 60);
    local70 = param1;
    local74 = param2;
    local75 = param3;
    local71 = 0;
    local103 = ExAcquireFastMutex;
    ExAcquireFastMutex(param3);
    local106 = local100;
    local107 = local103;
    local108 = local101;
    local79 = global12 + 1;
    local125 = local79;
    if (global12 + 1 == 1) {
        local97 = 0x18586;
        local98 = ExAcquireFastMutex;
        local99 = MmResetDriverPaging;
        MmResetDriverPaging();
        local106 = local96;
        local107 = local99;
        local108 = local97;
        local109 = local98;
    }
    local11 = local106;
    local95 = local107;
    local56 = local108;
    local57 = local109;
    *(int*)(local11 - 4) = local95;
    ExReleaseFastMutex(*(int*)local11);
    *(int*)(local11 - 4) = 0;
    local93 = 0;
    local92 = local131 - 44;
    local91 = ExReleaseFastMutex;
    KeInitializeEvent(local131 - 44, 0, 0);
    local89 = local131 - 28;
    local88 = local131 - 44;
    local87 = 1;
    local86 = 0;
    local85 = 0;
    local84 = 0;
    local83 = 0;
    local82 = *(int*)(param6 + 4);
    local81 = 0x16002c;
    local80 = KeInitializeEvent;
    local128 = IoBuildDeviceIoControlRequest(0x16002c, *(int*)(param6 + 4), 0, 0, 0, 0, 1, local131 - 44, local131 - 28);
    local124 = local68;
    local72 = local128;
    if (local128 != 0) {
        local67 = param4;
        *(int*)(local11 - 56) = IoBuildDeviceIoControlRequest;
        IofCallDriver(param4, 0x16002c);
        local55 = *(int*)(local131 - 16) | -1;
        *(int*)(local11 - 56) = local131 - 20;
        local63 = 0;
        local62 = 0;
        local61 = 0;
        local60 = local131 - 44;
        local59 = 0xfd050f80;
        local58 = IofCallDriver;
        (*KeWaitForSingleObject)(*(int*)0x160b4, local131 - 44, 0, 0, local57, 0, local131 - 20, local56, param4, param3, param2, 0x16002c, *(int*)(param6 + 4), 0, 0, 0, 0, 1, 0xfd050f80, local131 - 44, local55, local131 - 28, local128, local131 - 44, 0, 0, param1, 0, (unsigned char) local131 - 44, 0, local131 - 44, local129, local130, 0, local131 - 4, param6, KeWaitForSingleObject, LOGICALFLAGS32(local55), LOGICALFLAGS32(local55));
        local113 = local44;
        local114 = local9;
        local115 = local54;
        local116 = local50;
        if (local128 == 258) {
            local49 = local50;
            KfRaiseIrql();
            local47 = local126;
            local46 = param1 - 40;
            local43 = *(int*)0x16018;
            local45 = *(int*)0x160a4;
            local128 = KeReadStateEvent(param1 - 40);
            local110 = local42;
            local111 = local45;
            local112 = local43;
            if (local128 == 0) {
                local38 = *(int*)(param1 - 8);
                local39 = *(int*)0x160a4;
                local40 = *(int*)0x1605c;
                IoCancelIrp();
                local110 = local37;
                local111 = local40;
                local112 = local38;
                local113 = local39;
            }
            local16 = local110;
            local36 = local111;
            local28 = local112;
            local29 = local113;
            local35 = local36;
            KfLowerIrql();
            local32 = param2;
            *(int*)(local16 - 8) = param2;
            *(int*)(local16 - 12) = param2;
            *(int*)(local16 - 16) = param2;
            *(int*)(local16 - 20) = param1 - 40;
            *(int*)(local16 - 24) = *(int*)0x16020;
            (*param4)(*(int*)(local11 - 76), *(int*)(local11 - 72), *(int*)(local11 - 68), *(int*)(local11 - 64), local27, *(int*)(local11 - 60), local26, local25, *(int*)(local11 - 52), local24, *(int*)(local11 - 48), *(int*)(local11 - 44), *(int*)(local11 - 40), *(int*)(local11 - 36), *(int*)(local11 - 32), *(int*)(local11 - 28), *(int*)(local11 - 24), *(int*)0x16020, local23, *(int*)(local11 - 20), param1 - 40, local22, *(int*)(local11 - 16), param2, local29, local21, *(int*)(local11 - 12), param2, local28, *(int*)(local11 - 8), *(int*)(local13 - 8), *(int*)(local14 - 8), *(int*)(local15 - 8), param2, local20, param1 - 40, *(int*)(local16 - 4), *(int*)(local14 - 4), *(int*)(local13 - 4), local19, *(int*)(local10 - 4), *(int*)(local12 - 4), local30, (unsigned char) param1 - 40, local126, local8, local127, param1 - 40, local129, local130, param2, param1, param3, param4, local126, *(int*)(local18 + 91), *(int*)(local17 - 1), local31, param9, LOGICALFLAGS32(local128), LOGICALFLAGS32(local128));
            local114 = local131;
            local115 = local104;
            local116 = local105;
        }
        local6 = param7;
        local10 = local114;
        local17 = param1;
        global12 = local115;
        param4 = local4;
        local7 = local10 + 4;
        local117 = local6;
        local118 = local7;
        local119 = local17;
        if (*(int*)(local17 - 24) >= param2) {
            local5 = param3;
            *(char*)(local17 - 1) = 1;
            param3 = proc11(param7, param2, local17, param3, local4, *(int*)local10); /* Warning: also results in param8, param7, local127, param2, param1, param4 */
            local117 = param7;
            local118 = local131;
            local119 = param1;
        }
        param7 = local117;
        local15 = local118;
        param1 = local119;
        local18 = param3;
        *(char*)(local18 + 91) = local127;
        local120 = local15;
        if (*(int*)(param1 - 1) != local127) {
            local3 = local18;
            proc12(*(int*)(local15 - 4), param1, param4);
            local120 = local131;
        }
        local14 = local120;
        *(int*)(local14 - 4) = local18;
        param3 = proc13(); /* Warning: also results in local1 */
        local121 = local1;
        local122 = local2;
        if (*(int*)(param3 + 92) != param2) {
            *(int*)(local14 - 4) = *(int*)(param3 + 92);
            ExFreePool(*(int*)(param3 + 92));
            local121 = local131;
        }
        local13 = local121;
        ExAcquireFastMutex(*(int*)local13);
        local123 = local0;
        global12 = global12 - 1;
        local125 = global12;
        if (*(int*)0x17000 - 1 == 0) {
            *(int*)(local13 - 4) = 0x18586;
            *(int*)(local13 - 8) = *(int*)0x16004;
            MmPageEntireDriver();
            local123 = local131;
        }
        local12 = local123;
        ExReleaseFastMutex(*(int*)local12);
        local124 = local131;
    }
    local131 = local124;
    global12 = local125;
    return *(int*)local131; /* WARNING: Also returning: param8, param7, (unsigned char) param6, param6 */
}

// address: 0x111ea
proc11(int param5, int param6, int param2, int param1, int param3, int param4) {
    int local0; 		// m[r29 + 11]{109}
    int local1; 		// r24{253}
    int local10; 		// r29{328}
    int local100; 		// m[r28 - 8]{27}
    int local101; 		// m[r29 - 1]{27}
    int local102; 		// m[r29 - 8]{27}
    int local103; 		// m[r29 - 12]{27}
    int local104; 		// m[r29 - 16]{27}
    int local105; 		// m[r29 - 20]{27}
    void *local106; 		// %pc{27}
    void *local107; 		// m[r28 - 8]{47}
    int local108; 		// m[r28 - 4]{44}
    char local109; 		// m[r29 + 11]{32}
    int local11; 		// r30{329}
    int local110;
    int local111;
    int local112; 		// r30{109}
    int local113; 		// m[r28 - 44]{25}
    void *local114; 		// %pc{109}
    int local115; 		// m[r28 - 40]{22}
    int local116; 		// m[r28 - 36]{15}
    int local117; 		// m[r28 - 32]{10}
    int local118; 		// m[r28 - 28]{8}
    int local119; 		// m[r28 - 4]{2}
    int local12;
    int local120; 		// local28{327}
    int local121; 		// local10{328}
    int local122; 		// local11{329}
    int local123; 		// local27{334}
    int local124; 		// local15{463}
    int local125; 		// local16{464}
    int local126; 		// local17{465}
    int local127; 		// local18{466}
    int local128; 		// local19{467}
    int local129; 		// local21{469}
    int local13; 		// m[r30 + 90]{109}
    int local130; 		// local22{470}
    int local131; 		// local24{472}
    int local132; 		// local25{473}
    int local133; 		// local26{474}
    void *local134; 		// %pc{349}
    int local135; 		// r28{404}
    int local136; 		// r10{425}
    int local137; 		// r28{431}
    int local138; 		// r29{432}
    int local139; 		// r28{449}
    int local14;
    int local140; 		// r29{450}
    char local141; 		// r8
    char local142; 		// r9
    char local143; 		// r11
    char local144; 		// r24
    char local145; 		// r25
    char local146; 		// r26
    char local147; 		// r28
    int local15; 		// m[r28 - 28]{463}
    int local16; 		// m[r28 - 32]{464}
    int local17; 		// m[r28 - 36]{465}
    int local18; 		// m[r28 - 40]{466}
    int local19; 		// m[r28 - 44]{467}
    int local2; 		// r24{127}
    int local20;
    int local21; 		// m[r28 - 8]{469}
    int local22; 		// m[r28 - 12]{470}
    int local23;
    int local24; 		// m[r28 - 8]{472}
    int local25; 		// m[r28 - 4]{473}
    int local26; 		// m[r28 - 8]{474}
    int local27; 		// %pc{334}
    int local28; 		// r28{327}
    int local29; 		// r28{91}
    int local3; 		// r28{155}
    int local30; 		// r29{79}
    int local31; 		// r30{79}
    int local32; 		// m[r29 + 11]{79}
    int local33;
    int local34; 		// m[r28 - 28]{79}
    int local35; 		// m[r28 - 32]{79}
    int local36; 		// m[r28 - 36]{79}
    int local37; 		// m[r28 - 40]{79}
    int local38; 		// m[r28 - 44]{79}
    int local39;
    int local4; 		// r28{49}
    int local40;
    int local41; 		// m[r28 - 12]{79}
    int local42; 		// m[r28 - 4]{79}
    int local43; 		// m[r28 - 8]{79}
    int local44; 		// m[r28 - 4]{80}
    int local45; 		// m[r28 - 8]{89}
    int local46; 		// %pc{90}
    int local47; 		// r28{85}
    void *local48; 		// m[r28 - 8]{83}
    void *local49; 		// %pc{79}
    int local5; 		// r28{27}
    int local50; 		// r10{49}
    int local51; 		// r29{49}
    int local52; 		// r30{49}
    int local53; 		// m[r29 + 11]{49}
    int local54; 		// m[r30 + 90]{49}
    int local55; 		// m[r28 - 28]{49}
    int local56; 		// m[r28 - 32]{49}
    int local57; 		// m[r28 - 36]{49}
    int local58; 		// m[r28 - 40]{49}
    int local59; 		// m[r28 - 44]{49}
    int local6; 		// r28{79}
    int local60;
    int local61; 		// m[r28 - 4]{49}
    int local62; 		// m[r28 - 8]{49}
    int local63; 		// m[r29 - 1]{49}
    int local64; 		// m[r29 - 8]{49}
    int local65; 		// m[r29 - 12]{49}
    int local66; 		// m[r29 - 16]{49}
    int local67; 		// m[r29 - 20]{49}
    int local68; 		// m[r28 - 12]{77}
    int local69; 		// m[r28 - 8]{74}
    int local7; 		// r28{345}
    int local70; 		// m[r28 - 4]{68}
    int local71; 		// r28{59}
    void *local72; 		// m[r28 - 4]{57}
    void *local73; 		// %pc{49}
    int local74;
    int local75; 		// m[r28 - 12]{49}
    int local76; 		// r10{27}
    int local77; 		// r30{27}
    int local78; 		// m[r29 + 11]{27}
    int local79; 		// m[r30 + 90]{27}
    int local8; 		// r28{389}
    int local80;
    int local81; 		// m[r28 - 28]{27}
    int local82; 		// m[r28 - 32]{27}
    int local83; 		// m[r28 - 36]{27}
    int local84; 		// m[r28 - 40]{27}
    int local85; 		// m[r28 - 44]{27}
    int local86;
    int local87;
    int local88;
    int local89;
    int local9; 		// r29{109}
    int local90;
    int local91;
    int local92;
    int local93;
    int local94;
    int local95;
    int local96; 		// m[r28 - 12]{27}
    int local97; 		// m[r28 - 16]{27}
    int local98; 		// m[r28 - 20]{27}
    int local99; 		// m[r28 - 4]{27}

    local119 = param1;
    local118 = param2;
    local117 = param3;
    local144 = *(int*)(param5 + 64);
    local116 = param4;
    local115 = local144 + 1;
    (*READ_PORT_UCHAR)(pc, local144 + 1, param4, param3, param2, param1, (unsigned char) local144 + 1, local144 + 1, local147 - 4, param5, READ_PORT_UCHAR, LOGICALFLAGS32(local144 + 1), LOGICALFLAGS32(local144 + 1));
    local136 = local76;
    local137 = local5;
    local138 = param1;
    local142 = local141;
    local109 = local141;
    if (*(int*)(local77 + 90) != 0) {
L1:
        param6 = local136;
        local147 = local137;
        param1 = local138;
        local139 = local147;
        local140 = param1;
    } else {
        local144 = *(int*)(local77 + 64) + 1;
        local108 = local144 + 1;
        local107 = local106;
        (*param4)(local85, local84, local83, local82, local81, local98, local97, local96, local93, local88, local100, local95, local92, local90, local87, local106, local99, local91, local80, local144 + 1, local94, local89, local86, (unsigned char) local144 + 1, local141, local76, local143, local144 + 1, local145 >> 8 & 0xffffff | (local141), local146, param2, param1, local77, param4, local141, local78, local79, local101, local102, local103, local104, local105, <all>, LOGICALFLAGS32(local144 + 1), LOGICALFLAGS32(local144 + 1));
        local120 = local4;
        local121 = local51;
        local122 = local52;
        local123 = local73;
        local124 = local55;
        local125 = local56;
        local126 = local57;
        local127 = local58;
        local128 = local59;
        local129 = local74;
        local130 = local75;
        local131 = local60;
        local132 = local61;
        local133 = local62;
        param4 = *(int*)0x16014;
        if ((local141 & 0x4) != 0) {
            local72 = local73;
            KfRaiseIrql();
            local144 = *(int*)(local52 + 64) + 1;
            local70 = 200;
            local69 = local144 + 1;
            local68 = *(int*)0x16018;
            (**(int*)0x16014)(local59, local58, local57, local56, local55, *(int*)(local7 - 20), *(int*)(local7 - 16), *(int*)(local7 - 12), *(int*)(local28 - 12), *(int*)0x16018, *(int*)(local8 - 8), *(int*)(local7 - 8), *(int*)(local28 - 8), local62, local144 + 1, local60, *(int*)(local8 - 4), *(int*)(local28 - 4), local14, local23, *(int*)(local7 - 4), local61, local20, (unsigned char) local144 + 1, 2, local50, local141, local144 + 1, local145, local146, param2 >> 8 & 0xffffff | (local141), local51, local52, *(int*)0x16014, local12, local53, local54, local63, local64, local65, local66, local67, <all>, LOGICALFLAGS32(local144 + 1), LOGICALFLAGS32(local144 + 1));
            local121 = local30;
            local122 = local31;
            local124 = local34;
            local125 = local35;
            local126 = local36;
            local127 = local37;
            local128 = local38;
            local129 = local40;
            local130 = local41;
            local131 = local43;
            local44 = 60;
            local48 = local49;
            KeStallExecutionProcessor(60);
            local132 = local44;
            local142 = local143;
            local45 = *(int*)0x1601c;
            local46 = *(int*)0x16020;
            KfLowerIrql();
            local120 = local29;
            local123 = local46;
            local133 = local45;
        }
        local28 = local120;
        local10 = local121;
        local11 = local122;
        local27 = local123;
        local15 = local124;
        local16 = local125;
        local17 = local126;
        local18 = local127;
        local19 = local128;
        local21 = local129;
        local22 = local130;
        local24 = local131;
        local25 = local132;
        local26 = local133;
        *(int*)(local28 - 4) = 204;
        *(int*)(local28 - 8) = *(int*)(local11 + 64) + 2;
        *(int*)(local28 - 12) = local27;
        (*param4)(local19, local18, local17, local16, local15, *(int*)(local7 - 20), *(int*)(local7 - 16), *(int*)(local7 - 12), local27, local22, *(int*)(local8 - 8), *(int*)(local7 - 8), *(int*)(local11 + 64) + 2, local21, local24, local26, *(int*)(local8 - 4), 204, local14, local23, *(int*)(local7 - 4), local25, local20, (unsigned char) *(int*)(local11 + 64) + 2, local142, param6, local143, *(int*)(local11 + 64) + 2, local145, local146, param2, local10, local11, param4, local12, *(int*)(local9 + 11), *(int*)(local112 + 90), *(int*)(local9 - 1), *(int*)(local9 - 8), *(int*)(local9 - 12), *(int*)(local9 - 16), *(int*)(local9 - 20), <all>, LOGICALFLAGS32(*(int*)(local11 + 64) + 2), LOGICALFLAGS32(*(int*)(local11 + 64) + 2));
        local134 = local114;
        local138 = local9;
        local138 = local9;
        local138 = local9;
        local138 = local9;
        local140 = local9;
        *(int*)(local9 - 12) = *(int*)(local112 + 112);
        *(char*)(local9 - 1) = 0;
        *(int*)(local9 - 8) = *(int*)0x16034;
        *(int*)(local9 - 20) = *(int*)*(int*)0x16034;
        local142 = (unsigned char) *(int*)0x16034;
        local2 = *(int*)(*(int*)0x16034 + 4);
        *(int*)(local9 - 16) = local2;
        if (local2 != *(int*)(*(int*)0x16034 + 8)) {
        }
        do {
            local7 = local147;
            local135 = local7;
            local135 = local7;
            local135 = local7;
            *(int*)(local9 - 8) = *(int*)0x16034;
            param4 = *(int*)(*(int*)0x16034 + 4);
            if (param4 != *(int*)(*(int*)0x16034 + 8)) {
            }
            local144 = KeQueryTimeIncrement();
            param2 = 0;
            local143 = 0;
            param4 = param4 - local2 + ((unsigned)*(int*)*(int*)0x16034 < (unsigned)*(int*)*(int*)0x16034);
            *(int*)(local7 - 4) = param4;
            *(int*)(local7 - 8) = 0;
            *(int*)(local7 - 12) = 0;
            *(int*)(local7 - 16) = local144;
            *(int*)(local7 - 20) = *(int*)0x16030;
            local144 = __imp__allmul(); /* Warning: also results in local146 */
            if (local146 >= *(int*)(local112 + 124)) {
                if (local146 > *(int*)(local112 + 124)) {
L18:
                    *(char*)(local9 - 1) = 1;
                    *(int*)(local9 - 12) = *(int*)(local112 + 112) - 1;
                } else {
                    if ((unsigned)local144 >= (unsigned)*(int*)(local112 + 120)) {
                        goto L18;
                    }
                }
            }
            local8 = local147;
            local139 = local8;
            if (*(int*)(local112 + 112) <= 0) {
                *(char*)(local112 + 90) = 0;
                goto L0;
            }
            local144 = *(int*)(local112 + 64) + 1;
            *(int*)(local8 - 4) = local144;
            READ_PORT_UCHAR(local144);
            local135 = local147;
            *(char*)(local9 + 11) = (unsigned char) local144;
            if (((unsigned char) local144 & 0x8) == 0) {
                continue;
            }
            if (((unsigned char) ((unsigned char) local144) & 0x20) == 0) {
                continue;
            }
        } while (((unsigned char) local144 & 0x80) == 0);
        local147 = local135;
        local142 = local0;
        local141 = local0 & 0x8;
        local137 = local147;
        local137 = local147;
        local137 = local147;
        local137 = local147;
        if (local141 == 0) {
L8:
            local136 = param6;
            local136 = param6;
            local136 = param6;
            if (local141 != 0) {
                local144 = (local0);
                if ((unsigned char) local144 < 0) {
                    if ((local0 & 0x10) == 0) {
L5:
                        *(char*)(local112 + 90) = 1;
                        local136 = param6;
                        goto L1;
                    }
                    goto L1;
                }
                goto L1;
            }
            goto L1;
        } else {
            local146 = (local0);
            param6 = (unsigned char) local146;
            if (((unsigned char) local146 & 0x20) == 0) {
                goto L8;
            } else {
                if (local0 < 0) {
                    goto L5;
                } else {
                    goto L8;
                }
                goto L1;
            }
            goto L1;
        }
        goto L1;
    }
L0:
    local147 = local139;
    param1 = local140;
    return param5; /* WARNING: Also returning: local142, param6, (unsigned char) *(int*)(local147 + 8), *(int*)(local147 + 8), *(int*)param1, *(char*)local147 */
}

// address: 0x1140a
void proc12(int param2, int param1, int param3) {
    int local1; 		// r28

    *(int*)(local1 - 4) = param1;
    *(int*)(local1 - 8) = *(int*)(param2 + 80);
    (**(int*)(param2 + 72))(pc, *(int*)(param2 + 80), param1, param2, local1 - 4, param3);
    return;
}

// address: 0x110e2
proc13() {
    int local0; 		// m[r28 - 28]
    int local14; 		// m[r28 - 80]
    int local22; 		// r28{49}
    int local24; 		// r28{90}
    int local25; 		// r24
    int local28; 		// r28

    KeInitializeEvent(local28 - 28, 0, 0);
    local14 = *(int*)(*(int*)(local28 + 4) + 4);
    local25 = IoBuildDeviceIoControlRequest(0x16003c, local14, 0, 0, 0, 0, 1, local28 - 28, local28 - 12);
    local24 = local22;
    if (local25 != 0) {
        local25 = IofCallDriver(0x16003c, local14);
        local24 = local28;
        if (local25 >= 0) {
            KeWaitForSingleObject(&local0, 0, 0, 0, 0);
            local24 = local28;
        }
    }
    local28 = local24;
    return *(int*)(local28 + 4);
}

// address: 0x12bf6
__imp__allmul() {
    int local0; 		// r24
    int local2; 		// r26

    _allmul();
    return local0; /* WARNING: Also returning: local2 */
}

