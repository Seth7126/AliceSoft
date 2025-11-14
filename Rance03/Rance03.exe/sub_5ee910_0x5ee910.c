// 函数: sub_5ee910
// 地址: 0x5ee910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (data_75d518 != 0)
    int32_t __saved_ebx
    int32_t var_28
    sub_401f60(&var_28, (**arg1)(__security_cookie ^ &__saved_ebx))
    int32_t var_4 = 0
    int32_t* var_38_2 = &var_28
    int32_t ebx
    ebx.b = sub_5ee550() == 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    result = ebx.b == 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
