// 函数: sub_4ee550
// 地址: 0x4ee550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6f48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg3)(__security_cookie ^ &__saved_edi)
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_6.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_44, edx, ecx)
void* esi_2 = sub_4a9b10(&var_44)

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
void* result

if (esi_2 != 0)
    void* var_2c
    sub_401f60(&var_2c, (**arg2)())
    int32_t var_4 = 0
    int32_t ebx
    
    if (sub_4c9870(esi_2, arg4).b != 0)
        ebx.b = 0
    else if (sub_4c9810(esi_2, &var_2c).b != 0)
        ebx.b = 0
    else
        ebx.b = 1
        *sub_427f90(esi_2 + 8, &var_2c) = arg4
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
