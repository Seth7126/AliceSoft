// 函数: sub_55e670
// 地址: 0x55e670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c55f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_402110(&var_44, &(*U"===,===,,===,}=,=,=,[]")[9], 1)
int32_t var_4 = 0
char* eax_5 = &var_44

if (var_30 u>= 0x10)
    eax_5 = var_44.d

char result

if (sub_59d180(arg2, eax_5) != 0)
    result = 1
else
    char* eax_6 = &var_44
    
    if (var_30 u>= 0x10)
        eax_6 = var_44.d
    
    char* var_64_1 = eax_6
    int32_t var_68_1 = 0x6e48cc
    void* var_6c_1 = arg2
    sub_561610(arg1)
    result = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result == 0

if (var_30 u>= 0x10)
    j__free(var_44.d)

if (ebx.b == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_4_2 = 1
    int32_t var_48 = 0
    
    if (sub_59ce30(&var_2c, &var_48) == 0 || var_48 != 5)
        ebx.b = 0
    else
        sub_405760(arg3 + 0xb8, &var_2c)
        ebx.b = 1
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
