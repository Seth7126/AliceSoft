// 函数: sub_451900
// 地址: 0x451900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2e50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (data_75d4d4 != 0)
    int32_t __saved_esi
    int32_t var_28
    sub_401f60(&var_28, (**arg2)(__security_cookie ^ &__saved_esi))
    int32_t var_4 = 0
    sub_401f60(&var_40, (**arg1)())
    var_4.b = 1
    int32_t ebx
    ebx.b = sub_4507a0(&var_40, &var_28)
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
