// 函数: sub_4fa320
// 地址: 0x4fa320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0b20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = sub_4a8b80(data_75d4fc + 0x174, arg2)

if (result != 0)
    int32_t var_28
    sub_401f60(&var_28, (**arg4)(eax_4))
    int32_t var_4 = 0
    char* ecx_5 = sub_4d21e0(result, &var_40, &var_28, arg5)
    var_4.b = 1
    
    if (*(ecx_5 + 0x14) u>= 0x10)
        ecx_5 = *ecx_5
    
    result = (*(*arg3 + 4))(ecx_5)
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
sub_69a5bc(eax_2 ^ &var_40)
return result
