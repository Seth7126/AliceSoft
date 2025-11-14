// 函数: sub_612d40
// 地址: 0x612d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd790
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_88 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_74 = arg19
struct fileimage::CFileImageMaker::VTable* const var_70 = &fileimage::CFileImageMaker::`vftable'
int32_t result_1 = 0
int32_t* var_68 = nullptr
int32_t var_64 = 0
int32_t var_8c = arg1
int32_t var_4 = 0
int32_t* var_2c
void** ecx_14 = sub_4691f0(&var_2c, "static int nShadowMode\t\t= %d;\r\n")
var_4.b = 1
int32_t eax_7 = ecx_14[5]
int32_t esi = ecx_14[4]
void** edx

if (eax_7 u< 0x10)
    edx = ecx_14
else
    edx = *ecx_14

if (eax_7 u>= 0x10)
    ecx_14 = *ecx_14

int32_t* var_8c_1 = var_74
sub_468ff0(&result_1, nullptr, ecx_14, edx + esi)
var_4.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_3 = arg2
void** ecx_16 = sub_4691f0(&var_2c, "static int nBumpMode\t\t= %d;\r\n")
var_4.b = 2
int32_t eax_10 = ecx_16[5]
int32_t esi_1 = ecx_16[4]
void** edx_1

if (eax_10 u< 0x10)
    edx_1 = ecx_16
else
    edx_1 = *ecx_16

if (eax_10 u>= 0x10)
    ecx_16 = *ecx_16

int32_t* var_8c_4 = var_74
sub_468ff0(&result_1, var_68, ecx_16, edx_1 + esi_1)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_6 = arg3
void** ecx_18 = sub_4691f0(&var_2c, "static int nSpecularMode\t= %d;\r\n")
var_4.b = 3
int32_t eax_13 = ecx_18[5]
int32_t esi_2 = ecx_18[4]
void** edx_2

if (eax_13 u< 0x10)
    edx_2 = ecx_18
else
    edx_2 = *ecx_18

if (eax_13 u>= 0x10)
    ecx_18 = *ecx_18

int32_t* var_8c_7 = var_74
sub_468ff0(&result_1, var_68, ecx_18, edx_2 + esi_2)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_9 = arg4
void** ecx_20 = sub_4691f0(&var_2c, "static int nFog\t\t\t\t= %d;\r\n")
var_4.b = 4
int32_t eax_16 = ecx_20[5]
int32_t esi_3 = ecx_20[4]
void** edx_3

if (eax_16 u< 0x10)
    edx_3 = ecx_20
else
    edx_3 = *ecx_20

if (eax_16 u>= 0x10)
    ecx_20 = *ecx_20

int32_t* var_8c_10 = var_74
sub_468ff0(&result_1, var_68, ecx_20, edx_3 + esi_3)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_12 = arg5
void** ecx_22 = sub_4691f0(&var_2c, "static int nLightMap\t\t= %d;\r\n")
var_4.b = 5
int32_t eax_19 = ecx_22[5]
void* esi_4 = ecx_22[4]
void** edx_4

if (eax_19 u< 0x10)
    edx_4 = ecx_22
else
    edx_4 = *ecx_22

if (eax_19 u>= 0x10)
    ecx_22 = *ecx_22

int32_t* var_8c_13 = var_74
sub_468ff0(&result_1, var_68, ecx_22, esi_4 + edx_4)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_15 = arg6
void** ecx_24 = sub_4691f0(&var_2c, "static int nZ\t\t\t\t= %d;\r\n")
var_4.b = 6
int32_t eax_22 = ecx_24[5]
void* esi_5 = ecx_24[4]
void** edx_5

if (eax_22 u< 0x10)
    edx_5 = ecx_24
else
    edx_5 = *ecx_24

if (eax_22 u>= 0x10)
    ecx_24 = *ecx_24

int32_t* var_8c_16 = var_74
sub_468ff0(&result_1, var_68, ecx_24, esi_5 + edx_5)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_18 = arg7
void** ecx_26 = sub_4691f0(&var_2c, "static int nLighting\t\t= %d;\r\n")
var_4.b = 7
int32_t eax_25 = ecx_26[5]
void* esi_6 = ecx_26[4]
void** edx_6

if (eax_25 u< 0x10)
    edx_6 = ecx_26
else
    edx_6 = *ecx_26

if (eax_25 u>= 0x10)
    ecx_26 = *ecx_26

int32_t* var_8c_19 = var_74
sub_468ff0(&result_1, var_68, ecx_26, esi_6 + edx_6)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_21 = arg8
void** ecx_28 = sub_4691f0(&var_2c, "static int nSoftFogEdge\t\t= %d;\r\n")
var_4.b = 8
int32_t eax_28 = ecx_28[5]
int32_t esi_7 = ecx_28[4]
void** edx_7

if (eax_28 u< 0x10)
    edx_7 = ecx_28
else
    edx_7 = *ecx_28

if (eax_28 u>= 0x10)
    ecx_28 = *ecx_28

int32_t* var_8c_22 = var_74
sub_468ff0(&result_1, var_68, ecx_28, edx_7 + esi_7)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_24 = arg9
void** ecx_30 = sub_4691f0(&var_2c, "static int TextureLapping\t= %d;\r\n")
var_4.b = 9
int32_t eax_31 = ecx_30[5]
void* esi_8 = ecx_30[4]
void** edx_8

if (eax_31 u< 0x10)
    edx_8 = ecx_30
else
    edx_8 = *ecx_30

if (eax_31 u>= 0x10)
    ecx_30 = *ecx_30

int32_t* var_8c_25 = var_74
sub_468ff0(&result_1, var_68, ecx_30, esi_8 + edx_8)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_27 = arg10
void** ecx_32 = sub_4691f0(&var_2c, "static int nTexture\t\t\t= %d;\r\n")
var_4.b = 0xa
int32_t eax_34 = ecx_32[5]
int32_t esi_9 = ecx_32[4]
void** edx_9

if (eax_34 u< 0x10)
    edx_9 = ecx_32
else
    edx_9 = *ecx_32

if (eax_34 u>= 0x10)
    ecx_32 = *ecx_32

int32_t* var_8c_28 = var_74
sub_468ff0(&result_1, var_68, ecx_32, edx_9 + esi_9)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_30 = arg11
void** ecx_34 = sub_4691f0(&var_2c, "static int nDebug\t\t\t= %d;\r\n")
var_4.b = 0xb
int32_t eax_37 = ecx_34[5]
int32_t esi_10 = ecx_34[4]
void** edx_10

if (eax_37 u< 0x10)
    edx_10 = ecx_34
else
    edx_10 = *ecx_34

if (eax_37 u>= 0x10)
    ecx_34 = *ecx_34

int32_t* var_8c_31 = var_74
sub_468ff0(&result_1, var_68, ecx_34, edx_10 + esi_10)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_33 = arg12
void** ecx_36 = sub_4691f0(&var_2c, "static int nVertexOperation\t= %d;\r\n")
var_4.b = 0xc
int32_t eax_40 = ecx_36[5]
int32_t esi_11 = ecx_36[4]
void** edx_11

if (eax_40 u< 0x10)
    edx_11 = ecx_36
else
    edx_11 = *ecx_36

if (eax_40 u>= 0x10)
    ecx_36 = *ecx_36

int32_t* var_8c_34 = var_74
sub_468ff0(&result_1, var_68, ecx_36, edx_11 + esi_11)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_36 = arg13
void** ecx_38 = sub_4691f0(&var_2c, "static int nEnvMapping\t\t= %d;\r\n")
var_4.b = 0xd
int32_t eax_43 = ecx_38[5]
int32_t esi_12 = ecx_38[4]
void** edx_12

if (eax_43 u< 0x10)
    edx_12 = ecx_38
else
    edx_12 = *ecx_38

if (eax_43 u>= 0x10)
    ecx_38 = *ecx_38

int32_t* var_8c_37 = var_74
sub_468ff0(&result_1, var_68, ecx_38, edx_12 + esi_12)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_39 = arg14
void** ecx_40 = sub_4691f0(&var_2c, "static int SkyDome\t\t\t= %d;\r\n")
var_4.b = 0xe
int32_t eax_46 = ecx_40[5]
void* esi_13 = ecx_40[4]
void** edx_13

if (eax_46 u< 0x10)
    edx_13 = ecx_40
else
    edx_13 = *ecx_40

if (eax_46 u>= 0x10)
    ecx_40 = *ecx_40

int32_t* var_8c_40 = var_74
sub_468ff0(&result_1, var_68, ecx_40, esi_13 + edx_13)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_42 = arg15
void** ecx_42 = sub_4691f0(&var_2c, "static int ZOffset\t\t\t= %d;\r\n")
var_4.b = 0xf
int32_t eax_49 = ecx_42[5]
void* esi_14 = ecx_42[4]
void** edx_14

if (eax_49 u< 0x10)
    edx_14 = ecx_42
else
    edx_14 = *ecx_42

if (eax_49 u>= 0x10)
    ecx_42 = *ecx_42

int32_t* var_8c_43 = var_74
sub_468ff0(&result_1, var_68, ecx_42, esi_14 + edx_14)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_45 = arg16
void** ecx_44 = sub_4691f0(&var_2c, "static int Grayscale\t\t\t= %d;\r\n")
var_4.b = 0x10
int32_t edx_15 = ecx_44[5]
int32_t esi_15 = ecx_44[4]
void** eax_52

if (edx_15 u< 0x10)
    eax_52 = ecx_44
else
    eax_52 = *ecx_44

if (edx_15 u>= 0x10)
    ecx_44 = *ecx_44

int32_t* var_8c_46 = var_74
sub_468ff0(&result_1, var_68, ecx_44, eax_52 + esi_15)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_8c_48 = arg17
void** ecx_46 = sub_4691f0(&var_2c, "static int Edge\t\t\t\t= %d;\r\n")
var_4.b = 0x11
int32_t edx_16 = ecx_46[5]
int32_t esi_16 = ecx_46[4]
void** eax_55

if (edx_16 u< 0x10)
    eax_55 = ecx_46
else
    eax_55 = *ecx_46

if (edx_16 u>= 0x10)
    ecx_46 = *ecx_46

int32_t* var_8c_49 = var_74
sub_468ff0(&result_1, var_68, ecx_46, eax_55 + esi_16)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

if (arg18 s> 0)
    int32_t var_18_1 = 0xf
    void* var_1c_1 = nullptr
    var_2c.b = 0
    sub_402110(&var_2c, "\r\n#define ALPHATEST\r\n", 0x15)
    var_4.b = 0x12
    int32_t** esi_17 = &var_2c
    int32_t** edx_17 = &var_2c
    int32_t* var_8c_51 = var_74
    
    if (var_18_1 u>= 0x10)
        esi_17 = var_2c
    
    if (var_18_1 u>= 0x10)
        edx_17 = var_2c
    
    sub_468ff0(&result_1, var_68, edx_17, var_1c_1 + esi_17)
    var_4.b = 0
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c)

if (arg8 s> 0)
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c.b = 0
    sub_402110(&var_2c, "\r\n#define SOFTFOGEDGE\r\n", 0x17)
    var_4.b = 0x13
    int32_t** esi_18 = &var_2c
    int32_t* edx_18 = &var_2c
    int32_t* var_8c_53 = var_74
    
    if (var_18_2 u>= 0x10)
        esi_18 = var_2c
    
    if (var_18_2 u>= 0x10)
        edx_18 = var_2c
    
    sub_468ff0(&result_1, var_68, edx_18, var_1c_2 + esi_18)
    var_4.b = 0
    
    if (var_18_2 u>= 0x10)
        j__free(var_2c)

sub_5d18a0(var_74, &result_1)
int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return result
