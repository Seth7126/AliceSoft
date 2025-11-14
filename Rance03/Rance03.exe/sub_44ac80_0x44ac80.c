// 函数: sub_44ac80
// 地址: 0x44ac80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6f48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 4) != 0)
    int32_t var_4 = 0
    int32_t var_44
    int32_t var_2c
    sub_402d30(&var_44, sub_402a20(&var_2c, arg2))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    int32_t edi_1 = *(arg1 + 8)
    struct _EXCEPTION_REGISTRATION_RECORD* esi_1 = sub_417ed0(arg1 + 8, &var_44)
    char eax_8
    
    if (esi_1 != *(arg1 + 8))
        eax_8 = sub_40c3a0(&var_44, &esi_1[2])
    
    if (esi_1 == *(arg1 + 8) || eax_8 != 0)
        var_48 = *(arg1 + 8)
    else
        var_48 = esi_1
    
    void* ebx_1
    ebx_1.b = var_48 != edi_1
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
