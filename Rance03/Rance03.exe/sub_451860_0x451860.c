// 函数: sub_451860
// 地址: 0x451860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_ebx
int32_t eax_4 = __security_cookie ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm1
var_2c = xmm1
char result

if (data_75d4d4 != 0)
    int32_t var_28
    sub_401f60(&var_28, (**arg1)(eax_4))
    int32_t var_4 = 0
    int32_t ebx
    ebx.b = sub_450710(var_2c, &var_28)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
