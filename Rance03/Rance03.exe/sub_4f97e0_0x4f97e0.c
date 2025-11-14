// 函数: sub_4f97e0
// 地址: 0x4f97e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatData::VTable** result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    int32_t var_2c
    sub_401f60(&var_2c, (**arg2)(eax_4))
    int32_t var_4 = 0
    void* eax_7 = sub_510680(result[0xd], arg4)
    int32_t ebx
    
    if (sub_492050(eax_7, &var_2c).b != 0)
        ebx.b = 1
        *(*(eax_7 + 0x70) + 0x169) = 1
    else
        ebx.b = 0
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
