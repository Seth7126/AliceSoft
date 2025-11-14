// 函数: sub_4f4740
// 地址: 0x4f4740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_4a8880(data_75d4fc + 0x174, arg1)

if (result != 0)
    sub_401f60(&var_28, (**arg2)(eax_4))
    int32_t var_4 = 0
    result = sub_4aac00(&result[0x2d], &var_28)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
