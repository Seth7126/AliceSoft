// 函数: sub_6996f0
// 地址: 0x6996f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_a0
int32_t eax_1 = __security_cookie ^ &var_a0
var_a0 = 0
int32_t var_90 = 0
int32_t var_98 = 0
int32_t var_9c = 0
int32_t edx = sub_699670(&var_a0, arg2, 0, &var_a0, &var_90, &var_98, &var_9c)
int64_t var_47 = 0
int32_t var_48 = var_90
var_47:3.d = var_9c
int32_t var_3f = 0
var_47:7.d = var_98
var_3f:3.b = 0
int32_t var_70 = 0
var_98 = 0
var_9c = 0
int32_t var_80
int32_t edx_1 = sub_699670(&var_70, edx, 1, &var_70, &var_80, &var_9c, &var_98)
int32_t eax_8 = var_98
uint32_t ebx
ebx.b = 0
var_80 = eax_8 u>> 0x17 & 0xffffff01
char var_60 = (eax_8 u>> 0x19).b & 1
int32_t eax_10 = var_9c
int32_t var_8c
int32_t var_88
char* var_84

if (var_a0 u>= 7)
    var_a0 = 0
    edx_1 = sub_699670(&var_88, edx_1, 7, &var_88, &var_a0, &var_8c, &var_84)
    ebx.b = (var_a0 u>> 5).b & 1

var_a0 = 0
sub_699670(&var_a0, edx_1, 0x80000000, &var_a0, &var_88, &var_8c, &var_84)
char var_38 = 0
char var_37
char* eax_14
int32_t edx_2
eax_14, edx_2 = _memset(&var_37, 0, 0x30)

if (var_a0 u>= 0x80000004)
    var_a0 = 0
    var_98 = 0
    var_9c = 0
    var_90 = 0
    int32_t var_7c = 0
    int32_t var_68 = 0
    int32_t var_74 = 0
    int32_t var_78 = 0
    int32_t var_6c = 0
    var_88 = 0
    var_8c = 0
    var_84 = nullptr
    sub_699670(&var_6c, 
        sub_699670(&var_7c, 
            sub_699670(&var_a0, edx_2, 0x80000002, &var_a0, &var_98, &var_9c, &var_90), 0x80000003, 
            &var_7c, &var_68, &var_74, &var_78), 
        0x80000004, &var_6c, &var_88, &var_8c, &var_84)
    var_38.d = var_a0
    int32_t var_34_1 = var_98
    int32_t var_30_1 = var_9c
    int32_t var_2c_1 = var_90
    int32_t var_28_1 = var_7c
    int32_t var_24_1 = var_68
    int32_t var_20_1 = var_74
    int32_t var_1c_1 = var_78
    int32_t var_18_1 = var_6c
    int32_t var_14_1 = var_88
    int32_t var_10_1 = var_8c
    char* var_c_1 = var_84
    char var_8_1 = 0

void* ecx_15

if (var_48.b != 0)
    char* ecx_16 = &var_48
    
    do
        eax_14.b = *ecx_16
        ecx_16 = &ecx_16[1]
    while (eax_14.b != 0)
    
    ecx_15 = ecx_16 - &var_48:1
else
    ecx_15 = nullptr

sub_402110(arg3, &var_48, ecx_15)
*arg2 = var_70
int32_t ecx_18
ecx_18.b = ebx.b != 0
int32_t eax_30
eax_30.b = ((eax_10 u>> 0x1c).b & 1) != 0
int32_t eax_31
eax_31.b = ((eax_10 u>> 0x14).b & 1) != 0
int32_t eax_32
eax_32.b = ((eax_10 u>> 0x13).b & 1) != 0
int32_t eax_33
eax_33.b = ((eax_10 u>> 9).b & 1) != 0
int32_t eax_34
eax_34.b = (eax_10.b & 1) != 0
int32_t eax_35
eax_35.b = ((eax_8 u>> 0x1a).b & 1) != 0
int32_t eax_36
eax_36.b = var_60 != 0
int32_t eax_37
eax_37.b = var_80.b != 0
bool cond:1 = var_38 != 0
*arg4 = (((((((((((((((ecx_18 * 2) | eax_30) * 2) | eax_31) * 2) | eax_32) * 2) | eax_33) * 2)
    | eax_34) * 2) | eax_35) * 2) | eax_36) * 2) | eax_37
void* eax_39

if (cond:1)
    char* eax_40 = &var_38
    int32_t ecx_34
    
    do
        ecx_34.b = *eax_40
        eax_40 = &eax_40[1]
    while (ecx_34.b != 0)
    eax_39 = eax_40 - &var_37
else
    eax_39 = nullptr

int32_t* result = sub_402110(arg5, &var_38, eax_39)
sub_69a5bc(eax_1 ^ &var_a0)
return result
