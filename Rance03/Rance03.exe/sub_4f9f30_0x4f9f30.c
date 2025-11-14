// 函数: sub_4f9f30
// 地址: 0x4f9f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a8b80(data_75d4fc + 0x174, arg2)

if (result != 0)
    sub_401f60(&var_28, (**arg4)(eax_4))
    int32_t var_4 = 0
    void* ecx_6 = sub_493110(sub_510680(*(result + 0x34), arg5) + 0x38, &var_28)
    
    if (*(ecx_6 + 0x14) u>= 0x10)
        ecx_6 = *ecx_6
    
    result = (*(*arg3 + 4))(ecx_6)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
