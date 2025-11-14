// 函数: sub_43b170
// 地址: 0x43b170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b622b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t var_ac = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_68 = 0xf
int32_t var_6c = 0
char var_7c = 0
void* ecx

if (*arg2 != 0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_7c, arg2, ecx)
int32_t var_c_1 = 0
int32_t edx_2 = *(arg1 + 0x18)
int32_t* ecx_3 = *(arg1 + 0x14)
var_9c = 0
int32_t var_b0_1 = var_9c.d
void* ebx

if (sub_43d650(&var_7c, edx_2, ecx_3, &var_7c) == *(arg1 + 0x18))
    struct filesystem::CFilePath::VTable* const var_98 = &filesystem::CFilePath::`vftable'
    int32_t var_80_1 = 0xf
    int32_t var_84_1 = 0
    char var_94 = 0
    var_c_1.b = 1
    sub_401ff0(&var_94, &data_74f9b4, 0, 0xffffffff)
    sub_6047d0(&var_98)
    int32_t var_34
    sub_401f60(&var_34, arg2)
    var_c_1.b = 2
    char var_4c
    char* eax_6 = sub_402a20(&var_4c, &var_34)
    var_c_1.b = 3
    char var_64
    char* eax_7 = sub_410a80(eax_6.b, eax_6, &var_64, ".afa")
    var_c_1.b = 4
    sub_604730(&var_98)
    sub_403110(&var_94, eax_7, nullptr, 0xffffffff)
    int32_t var_50
    
    if (var_50 u>= 0x10)
        j__free(var_64.d)
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    var_c_1.b = 1
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    if (sub_43b880(arg1, &var_94).b != 0)
        sub_421cd0(&arg1[0x14], &var_7c)
        ebx.b = 1
    else
        ebx.b = 0
    
    var_98 = &filesystem::CFilePath::`vftable'
    
    if (var_80_1 u>= 0x10)
        j__free(var_94.d)
    
    int32_t var_80_2 = 0xf
    int32_t var_84_2 = 0
    var_94 = 0
else
    ebx.b = 1

if (var_68 u>= 0x10)
    j__free(var_7c.d)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return result
