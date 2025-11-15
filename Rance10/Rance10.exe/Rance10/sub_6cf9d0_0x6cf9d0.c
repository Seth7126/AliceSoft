// 函数: sub_6cf9d0
// 地址: 0x6cf9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_a0
int32_t eax_1 = __security_cookie ^ &var_a0
var_a0 = 0
int32_t var_84 = 0
int32_t var_98 = 0
int32_t var_9c = 0
int32_t edx = sub_6cf950(&var_a0, arg2, 0, &var_a0, &var_84, &var_98, &var_9c)
int64_t var_47 = 0
int32_t var_48 = var_84
var_47:3.d = var_9c
int32_t var_3f = 0
var_47:7.d = var_98
var_3f:3.b = 0
int32_t var_6c = 0
uint32_t (* var_94)[0x4] = nullptr
var_98 = 0
var_9c = 0
int32_t edx_1 = sub_6cf950(&var_6c, edx, 1, &var_6c, &var_94, &var_9c, &var_98)
int32_t eax_8 = var_98
uint32_t ebx
ebx.b = 0
char var_54 = (eax_8 u>> 0x19).b & 1
int32_t eax_10 = var_9c
int32_t var_8c
int32_t var_88

if (var_a0 u>= 7)
    var_8c = 0
    var_a0 = 0
    var_88 = 0
    var_94 = nullptr
    edx_1 = sub_6cf950(&var_8c, edx_1, 7, &var_8c, &var_a0, &var_88, &var_94)
    ebx.b = (var_a0 u>> 5).b & 1

var_a0 = 0
var_8c = 0
var_88 = 0
var_94 = nullptr
sub_6cf950(&var_a0, edx_1, 0x80000000, &var_a0, &var_8c, &var_88, &var_94)
int32_t var_38
uint32_t (* eax_14)[0x4]
int32_t edx_2
eax_14, edx_2 = _memset(&var_38, 0, 0x31)

if (var_a0 u>= 0x80000004)
    var_a0 = 0
    var_98 = 0
    var_9c = 0
    __builtin_memset(&var_8c, 0, 0x20)
    var_94 = nullptr
    int32_t var_80
    int32_t var_7c
    int32_t var_78
    int32_t var_74
    int32_t var_70
    sub_6cf950(&var_70, 
        sub_6cf950(&var_80, 
            sub_6cf950(&var_a0, edx_2, 0x80000002, &var_a0, &var_98, &var_9c, &var_84), 0x80000003, 
            &var_80, &var_7c, &var_78, &var_74), 
        0x80000004, &var_70, &var_8c, &var_88, &var_94)
    var_38 = var_a0
    int32_t var_34_1 = var_98
    int32_t var_30_1 = var_9c
    int32_t var_2c_1 = var_84
    int32_t var_28_1 = var_80
    int32_t var_24_1 = var_7c
    int32_t var_20_1 = var_78
    int32_t var_1c_1 = var_74
    int32_t var_18_1 = var_70
    int32_t var_14_1 = var_8c
    int32_t var_10_1 = var_88
    uint32_t (* var_c_1)[0x4] = var_94
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

sub_403490(arg3, &var_48, ecx_15)
*arg2 = var_6c
uint32_t ecx_24 = (((((zx.d(ebx.b) * 2) | (zx.d((eax_10 u>> 0x1c).b) & 1)) * 2)
    | (zx.d((eax_10 u>> 0x14).b) & 1)) * 2) | (zx.d((eax_10 u>> 0x13).b) & 1)
uint32_t ecx_32 = (((((((ecx_24 * 2) | (zx.d((eax_10 u>> 9).b) & 1)) * 2) | (zx.d(eax_10.b) & 1))
    * 2) | (zx.d((eax_8 u>> 0x1a).b) & 1)) * 2) | zx.d(var_54)
bool cond:1 = var_38.b != 0
*arg4 = (ecx_32 * 2) | (zx.d((eax_8 u>> 0x17).b) & 1)
void* eax_46

if (cond:1)
    char* eax_47 = &var_38
    uint32_t ecx_34
    
    do
        ecx_34.b = *eax_47
        eax_47 = &eax_47[1]
    while (ecx_34.b != 0)
    eax_46 = eax_47 - &var_38:1
else
    eax_46 = nullptr

int32_t* result = sub_403490(arg5, &var_38, eax_46)
@__security_check_cookie@4(eax_1 ^ &var_a0)
return result
