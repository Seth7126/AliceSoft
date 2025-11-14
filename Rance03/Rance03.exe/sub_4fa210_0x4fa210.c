// 函数: sub_4fa210
// 地址: 0x4fa210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b56d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    int32_t var_28
    sub_401f60(&var_28, (**arg4)(eax_4))
    int32_t var_4 = 0
    char var_40
    sub_401f60(&var_40, (**arg2)())
    var_4.b = 1
    void* eax_8 = sub_510680(*(result + 0x34), arg5)
    sub_493380(eax_8 + 0x38, &var_40, &var_28)
    result = *(eax_8 + 0x70)
    void* ecx_8 = *(result + 0xf0)
    
    if (ecx_8 != 0)
        result = sub_490ed0(ecx_8, &var_40)
    
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        result = j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
