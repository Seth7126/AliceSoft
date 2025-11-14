// 函数: sub_451b60
// 地址: 0x451b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b75c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (data_75d4d4 != 0)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    int32_t var_4 = 0
    int32_t var_28
    sub_401f60(&var_28, (**arg1)(eax_4))
    var_4.b = 1
    var_4.b = 0
    int32_t ebx
    ebx.b = sub_450990(&var_28, &var_40) == 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    if (ebx.b == 0)
        char* edx = &var_40
        
        if (var_2c_1 u>= 0x10)
            edx = var_40.d
        
        (*(*arg2 + 4))(edx)
        ebx.b = 1
    else
        ebx.b = 0
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
