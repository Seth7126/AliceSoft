// 函数: sub_4fa410
// 地址: 0x4fa410
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
    sub_401f60(&var_2c, (**arg2)(eax_4))
    int32_t var_4 = 0
    void* eax_6 = sub_510680(*(result + 0x34), arg4)
    sub_4935a0(eax_6 + 0x38, &var_2c)
    result = *(eax_6 + 0x70)
    void* ecx_6 = *(result + 0xf0)
    
    if (ecx_6 != 0)
        result = sub_490ed0(ecx_6, &var_2c)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
