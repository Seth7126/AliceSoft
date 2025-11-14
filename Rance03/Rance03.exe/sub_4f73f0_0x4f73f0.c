// 函数: sub_4f73f0
// 地址: 0x4f73f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    int32_t var_28
    sub_401f60(&var_28, (**arg2)(eax_4))
    int32_t var_4 = 0
    int32_t ebx
    ebx.b = sub_50a440(sub_5101c0(result[0xd], arg7), &var_28, arg4, arg5, arg6).b
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
