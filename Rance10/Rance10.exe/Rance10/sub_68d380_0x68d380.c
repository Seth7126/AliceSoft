// 函数: sub_68d380
// 地址: 0x68d380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_5c = arg2
int32_t* var_48 = arg3
int32_t var_60 = 0
struct fileimage::CFileImageMaker::VTable* var_58 = &fileimage::CFileImageMaker::`vftable'
int32_t var_54 = 0
char* var_50 = nullptr
int32_t var_4c = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "static int nShadowMode\t\t= %d;\r\n", 0x1f)
var_8_1.b = 1
char var_44
char* ecx_2 = sub_409350(&var_5c, &var_2c, &var_44, &var_5c)
var_8_1.b = 2
int32_t edx_1 = *(ecx_2 + 0x14)
int32_t esi = *(ecx_2 + 0x10)
char* eax_5

if (edx_1 u< 0x10)
    eax_5 = ecx_2
else
    eax_5 = *ecx_2

if (edx_1 u>= 0x10)
    ecx_2 = *ecx_2

var_48.b = 0
int32_t* var_70_1 = var_48
sub_6ca200(&var_54, nullptr, ecx_2, &eax_5[esi])
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

var_8_1.b = 0
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, "static int nBumpMode\t\t= %d;\r\n", 0x1d)
var_8_1.b = 3
void arg_4
char* ecx_6 = sub_409350(&arg_4, &var_2c, &var_44, &arg_4)
var_8_1.b = 4
int32_t edx_3 = *(ecx_6 + 0x14)
int32_t esi_1 = *(ecx_6 + 0x10)
char* eax_13

if (edx_3 u< 0x10)
    eax_13 = ecx_6
else
    eax_13 = *ecx_6

if (edx_3 u>= 0x10)
    ecx_6 = *ecx_6

int32_t var_70_3 = 0
sub_6ca200(&var_54, var_50, ecx_6, &eax_13[esi_1])

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

var_8_1.b = 0
int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, "static int nSpecularMode\t= %d;\r\n", 0x20)
var_8_1.b = 5
void arg_8
char* ecx_10 = sub_409350(&arg_8, &var_2c, &var_44, &arg_8)
var_8_1.b = 6
int32_t edx_5 = *(ecx_10 + 0x14)
int32_t esi_2 = *(ecx_10 + 0x10)
char* eax_21

if (edx_5 u< 0x10)
    eax_21 = ecx_10
else
    eax_21 = *ecx_10

if (edx_5 u>= 0x10)
    ecx_10 = *ecx_10

int32_t var_70_5 = 0
sub_6ca200(&var_54, var_50, ecx_10, &eax_21[esi_2])

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

var_8_1.b = 0
int32_t var_30_3 = 0xf
int32_t var_34_2 = 0
var_44 = 0

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_403490(&var_2c, "static int nFog\t\t\t\t= %d;\r\n", 0x1a)
var_8_1.b = 7
void arg_c
char* ecx_14 = sub_409350(&arg_c, &var_2c, &var_44, &arg_c)
var_8_1.b = 8
int32_t edx_7 = *(ecx_14 + 0x14)
int32_t esi_3 = *(ecx_14 + 0x10)
char* eax_29

if (edx_7 u< 0x10)
    eax_29 = ecx_14
else
    eax_29 = *ecx_14

if (edx_7 u>= 0x10)
    ecx_14 = *ecx_14

int32_t var_70_7 = 0
sub_6ca200(&var_54, var_50, ecx_14, &eax_29[esi_3])

if (var_30_3 u>= 0x10)
    sub_403160(var_44.d, var_30_3 + 1, 1)

var_8_1.b = 0
int32_t var_30_4 = 0xf
int32_t var_34_3 = 0
var_44 = 0

if (var_18_3 u>= 0x10)
    sub_403160(var_2c.d, var_18_3 + 1, 1)

int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, "static int nLightMap\t\t= %d;\r\n", 0x1d)
var_8_1.b = 9
void arg_10
char* ecx_18 = sub_409350(&arg_10, &var_2c, &var_44, &arg_10)
var_8_1.b = 0xa
int32_t edx_9 = *(ecx_18 + 0x14)
int32_t esi_4 = *(ecx_18 + 0x10)
char* eax_37

if (edx_9 u< 0x10)
    eax_37 = ecx_18
else
    eax_37 = *ecx_18

if (edx_9 u>= 0x10)
    ecx_18 = *ecx_18

int32_t var_70_9 = 0
sub_6ca200(&var_54, var_50, ecx_18, &eax_37[esi_4])

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

var_8_1.b = 0
int32_t var_30_5 = 0xf
int32_t var_34_4 = 0
var_44 = 0

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, "static int nZ\t\t\t\t= %d;\r\n", 0x18)
var_8_1.b = 0xb
void arg_14
char* ecx_22 = sub_409350(&arg_14, &var_2c, &var_44, &arg_14)
var_8_1.b = 0xc
int32_t edx_11 = *(ecx_22 + 0x14)
int32_t esi_5 = *(ecx_22 + 0x10)
char* eax_45

if (edx_11 u< 0x10)
    eax_45 = ecx_22
else
    eax_45 = *ecx_22

if (edx_11 u>= 0x10)
    ecx_22 = *ecx_22

int32_t var_70_11 = 0
sub_6ca200(&var_54, var_50, ecx_22, &eax_45[esi_5])

if (var_30_5 u>= 0x10)
    sub_403160(var_44.d, var_30_5 + 1, 1)

var_8_1.b = 0
int32_t var_30_6 = 0xf
int32_t var_34_5 = 0
var_44 = 0

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, "static int nLighting\t\t= %d;\r\n", 0x1d)
var_8_1.b = 0xd
void arg_18
char* ecx_26 = sub_409350(&arg_18, &var_2c, &var_44, &arg_18)
var_8_1.b = 0xe
int32_t edx_13 = *(ecx_26 + 0x14)
int32_t esi_6 = *(ecx_26 + 0x10)
char* eax_53

if (edx_13 u< 0x10)
    eax_53 = ecx_26
else
    eax_53 = *ecx_26

if (edx_13 u>= 0x10)
    ecx_26 = *ecx_26

int32_t var_70_13 = 0
sub_6ca200(&var_54, var_50, ecx_26, &eax_53[esi_6])

if (var_30_6 u>= 0x10)
    sub_403160(var_44.d, var_30_6 + 1, 1)

var_8_1.b = 0
int32_t var_30_7 = 0xf
int32_t var_34_6 = 0
var_44 = 0

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_403490(&var_2c, "static int nSoftFogEdge\t\t= %d;\r\n", 0x20)
var_8_1.b = 0xf
int32_t arg_1c
char* ecx_30 = sub_409350(&arg_1c, &var_2c, &var_44, &arg_1c)
var_8_1.b = 0x10
int32_t edx_15 = *(ecx_30 + 0x14)
int32_t esi_7 = *(ecx_30 + 0x10)
char* eax_61

if (edx_15 u< 0x10)
    eax_61 = ecx_30
else
    eax_61 = *ecx_30

if (edx_15 u>= 0x10)
    ecx_30 = *ecx_30

int32_t var_70_15 = 0
sub_6ca200(&var_54, var_50, ecx_30, &eax_61[esi_7])

if (var_30_7 u>= 0x10)
    sub_403160(var_44.d, var_30_7 + 1, 1)

var_8_1.b = 0
int32_t var_30_8 = 0xf
int32_t var_34_7 = 0
var_44 = 0

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, "static int TextureLapping\t= %d;\r\n", 0x21)
var_8_1.b = 0x11
void arg_20
char* ecx_34 = sub_409350(&arg_20, &var_2c, &var_44, &arg_20)
var_8_1.b = 0x12
int32_t edx_17 = *(ecx_34 + 0x14)
int32_t esi_8 = *(ecx_34 + 0x10)
char* eax_69

if (edx_17 u< 0x10)
    eax_69 = ecx_34
else
    eax_69 = *ecx_34

if (edx_17 u>= 0x10)
    ecx_34 = *ecx_34

int32_t var_70_17 = 0
sub_6ca200(&var_54, var_50, ecx_34, &eax_69[esi_8])

if (var_30_8 u>= 0x10)
    sub_403160(var_44.d, var_30_8 + 1, 1)

var_8_1.b = 0
int32_t var_30_9 = 0xf
int32_t var_34_8 = 0
var_44 = 0

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_403490(&var_2c, "static int nTexture\t\t\t= %d;\r\n", 0x1d)
var_8_1.b = 0x13
void arg_24
char* ecx_38 = sub_409350(&arg_24, &var_2c, &var_44, &arg_24)
var_8_1.b = 0x14
int32_t edx_19 = *(ecx_38 + 0x14)
int32_t esi_9 = *(ecx_38 + 0x10)
char* eax_77

if (edx_19 u< 0x10)
    eax_77 = ecx_38
else
    eax_77 = *ecx_38

if (edx_19 u>= 0x10)
    ecx_38 = *ecx_38

int32_t var_70_19 = 0
sub_6ca200(&var_54, var_50, ecx_38, &eax_77[esi_9])

if (var_30_9 u>= 0x10)
    sub_403160(var_44.d, var_30_9 + 1, 1)

var_8_1.b = 0
int32_t var_30_10 = 0xf
int32_t var_34_9 = 0
var_44 = 0

if (var_18_9 u>= 0x10)
    sub_403160(var_2c.d, var_18_9 + 1, 1)

int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_403490(&var_2c, "static int nDebug\t\t\t= %d;\r\n", 0x1b)
var_8_1.b = 0x15
void arg_28
char* ecx_42 = sub_409350(&arg_28, &var_2c, &var_44, &arg_28)
var_8_1.b = 0x16
int32_t edx_21 = *(ecx_42 + 0x14)
int32_t esi_10 = *(ecx_42 + 0x10)
char* eax_85

if (edx_21 u< 0x10)
    eax_85 = ecx_42
else
    eax_85 = *ecx_42

if (edx_21 u>= 0x10)
    ecx_42 = *ecx_42

int32_t var_70_21 = 0
sub_6ca200(&var_54, var_50, ecx_42, &eax_85[esi_10])

if (var_30_10 u>= 0x10)
    sub_403160(var_44.d, var_30_10 + 1, 1)

var_8_1.b = 0
int32_t var_30_11 = 0xf
int32_t var_34_10 = 0
var_44 = 0

if (var_18_10 u>= 0x10)
    sub_403160(var_2c.d, var_18_10 + 1, 1)

int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, "static int nVertexOperation\t= %d;\r\n", 0x23)
var_8_1.b = 0x17
void arg_2c
void** ecx_46 = sub_409350(&arg_2c, &var_2c, &var_44, &arg_2c)
var_8_1.b = 0x18
int32_t edx_23 = ecx_46[5]
int32_t esi_11 = ecx_46[4]
void** eax_93

if (edx_23 u< 0x10)
    eax_93 = ecx_46
else
    eax_93 = *ecx_46

if (edx_23 u>= 0x10)
    ecx_46 = *ecx_46

int32_t var_70_23 = 0
sub_6ca200(&var_54, var_50, ecx_46, eax_93 + esi_11)

if (var_30_11 u>= 0x10)
    sub_403160(var_44.d, var_30_11 + 1, 1)

var_8_1.b = 0
int32_t var_30_12 = 0xf
int32_t var_34_11 = 0
var_44 = 0

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

int32_t var_18_12 = 0xf
int32_t var_1c_12 = 0
var_2c = 0
sub_403490(&var_2c, "static int nEnvMapping\t\t= %d;\r\n", 0x1f)
var_8_1.b = 0x19
void arg_30
void** ecx_50 = sub_409350(&arg_30, &var_2c, &var_44, &arg_30)
var_8_1.b = 0x1a
int32_t edx_25 = ecx_50[5]
int32_t esi_12 = ecx_50[4]
void** eax_101

if (edx_25 u< 0x10)
    eax_101 = ecx_50
else
    eax_101 = *ecx_50

if (edx_25 u>= 0x10)
    ecx_50 = *ecx_50

int32_t var_70_25 = 0
sub_6ca200(&var_54, var_50, ecx_50, eax_101 + esi_12)

if (var_30_12 u>= 0x10)
    sub_403160(var_44.d, var_30_12 + 1, 1)

var_8_1.b = 0
int32_t var_30_13 = 0xf
int32_t var_34_12 = 0
var_44 = 0

if (var_18_12 u>= 0x10)
    sub_403160(var_2c.d, var_18_12 + 1, 1)

int32_t var_18_13 = 0xf
int32_t var_1c_13 = 0
var_2c = 0
sub_403490(&var_2c, "static int SkyDome\t\t\t= %d;\r\n", 0x1c)
var_8_1.b = 0x1b
void arg_34
void** ecx_54 = sub_409350(&arg_34, &var_2c, &var_44, &arg_34)
var_8_1.b = 0x1c
int32_t edx_27 = ecx_54[5]
int32_t esi_13 = ecx_54[4]
void** eax_109

if (edx_27 u< 0x10)
    eax_109 = ecx_54
else
    eax_109 = *ecx_54

if (edx_27 u>= 0x10)
    ecx_54 = *ecx_54

int32_t var_70_27 = 0
sub_6ca200(&var_54, var_50, ecx_54, eax_109 + esi_13)

if (var_30_13 u>= 0x10)
    sub_403160(var_44.d, var_30_13 + 1, 1)

var_8_1.b = 0
int32_t var_30_14 = 0xf
int32_t var_34_13 = 0
var_44 = 0

if (var_18_13 u>= 0x10)
    sub_403160(var_2c.d, var_18_13 + 1, 1)

int32_t var_18_14 = 0xf
int32_t var_1c_14 = 0
var_2c = 0
sub_403490(&var_2c, "static int ZOffset\t\t\t= %d;\r\n", 0x1c)
var_8_1.b = 0x1d
void arg_38
void** ecx_58 = sub_409350(&arg_38, &var_2c, &var_44, &arg_38)
var_8_1.b = 0x1e
int32_t edx_29 = ecx_58[5]
int32_t esi_14 = ecx_58[4]
void** eax_117

if (edx_29 u< 0x10)
    eax_117 = ecx_58
else
    eax_117 = *ecx_58

if (edx_29 u>= 0x10)
    ecx_58 = *ecx_58

int32_t var_70_29 = 0
sub_6ca200(&var_54, var_50, ecx_58, eax_117 + esi_14)

if (var_30_14 u>= 0x10)
    sub_403160(var_44.d, var_30_14 + 1, 1)

var_8_1.b = 0
int32_t var_30_15 = 0xf
int32_t var_34_14 = 0
var_44 = 0

if (var_18_14 u>= 0x10)
    sub_4036a0(var_2c.d, var_18_14 + 1)

int32_t var_18_15 = 0xf
sub_403730(&var_2c, 0)
sub_403360(&var_44, "static int Grayscale\t\t\t= %d;\r\n")
var_8_1.b = 0x1f
var_8_1.b = 0x20
void arg_3c
sub_6ca160(&var_58, sub_409350(&arg_3c, &var_44, &var_2c, &arg_3c))
sub_403320(&var_2c)
var_8_1.b = 0
sub_403320(&var_44)
sub_403360(&var_44, "static int Edge\t\t\t\t= %d;\r\n")
var_8_1.b = 0x21
var_8_1.b = 0x22
void arg_40
sub_6ca160(&var_58, sub_409350(&arg_40, &var_44, &var_2c, &arg_40))
sub_403320(&var_2c)
var_8_1.b = 0
sub_403320(&var_44)

if (arg4 s> 0)
    sub_403360(&var_44, "\r\n#define ALPHATEST\r\n")
    var_8_1.b = 0x23
    sub_6ca160(&var_58, &var_44)
    var_8_1.b = 0
    sub_403320(&var_44)

if (arg5 s> 0)
    sub_403360(&var_44, "\r\n#define DRAWINSTANCING\r\n")
    var_8_1.b = 0x24
    sub_6ca160(&var_58, &var_44)
    var_8_1.b = 0
    sub_403320(&var_44)

if (arg_1c s> 0)
    sub_403360(&var_44, "\r\n#define SOFTFOGEDGE\r\n")
    var_8_1.b = 0x25
    sub_6ca160(&var_58, &var_44)
    var_8_1.b = 0
    sub_403320(&var_44)

sub_4630a0(arg3, &var_54)
sub_6ca060(&var_58)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
