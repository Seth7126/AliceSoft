// 函数: sub_4517c0
// 地址: 0x4517c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_28
int32_t eax_2 = __security_cookie ^ &var_28
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (data_75d4d4 != 0)
    int32_t __saved_esi
    sub_401f60(&var_28, (**arg1)(__security_cookie ^ &__saved_esi))
    int32_t var_4 = 0
    int32_t ebx
    ebx.b = sub_450690(&var_28, arg2)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
