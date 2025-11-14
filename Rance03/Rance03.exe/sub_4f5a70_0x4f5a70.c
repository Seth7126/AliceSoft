// 函数: sub_4f5a70
// 地址: 0x4f5a70
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
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4a89a0(data_75d4fc + 0x174, arg1)
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result

if (result_1 != 0)
    sub_401f60(&var_28, (**arg2)(eax_4))
    int32_t var_4 = 0
    result = sub_421cd0(&result_1[0x58], &var_28)
    int32_t* ecx_5 = result_1[0x5d]
    
    if (ecx_5 != 0)
        result = (**ecx_5)()
    
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
