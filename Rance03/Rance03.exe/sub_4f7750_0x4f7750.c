// 函数: sub_4f7750
// 地址: 0x4f7750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    int32_t var_4 = 0
    int32_t var_40_1 = sub_401f60(&var_2c, (**arg2)(eax_4))
    sub_519700(sub_510260(*(result + 0x34), arg4), &var_2c)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
