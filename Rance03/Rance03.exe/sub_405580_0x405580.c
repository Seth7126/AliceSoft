// 函数: sub_405580
// 地址: 0x405580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x4c) != 0)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    int32_t var_c_1 = 0
    int32_t ebx
    
    if (sub_408150(arg1 + 0x48, &var_34, arg2).b == 0)
        if (*(arg1 + 0x50) != 0)
            ebx.b = 0
        else
            *(arg1 + 0x50) = 1
            sub_4053a0(arg1)
            ebx.b = 1
    else if (*(arg1 + 0x50) == 0)
        ebx.b = 0
    else
        *(arg1 + 0x50) = 0
        sub_4053a0(arg1)
        ebx.b = 1
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
