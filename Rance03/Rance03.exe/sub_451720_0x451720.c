// 函数: sub_451720
// 地址: 0x451720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* var_28
int32_t eax_2 = __security_cookie ^ &var_28
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_75d4d4 != 0)
    sub_401f60(&var_28, (**arg1)(__security_cookie ^ &var_28))
    int32_t var_4 = 0
    result = &var_28
    char* ecx_2 = data_75d4d4 + 4
    
    if (ecx_2 != &var_28)
        result = sub_401ff0(ecx_2, &var_28, 0, 0xffffffff)
    
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
