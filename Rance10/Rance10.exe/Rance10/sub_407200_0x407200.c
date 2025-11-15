// 函数: sub_407200
// 地址: 0x407200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x64) != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    int32_t ebx
    
    if (sub_40f310(arg1 + 0x60, &var_2c, arg2).b == 0)
        if (*(arg1 + 0x68) != 0)
            ebx.b = 0
        else
            *(arg1 + 0x68) = 1
            sub_407000(arg1)
            ebx.b = 1
    else if (*(arg1 + 0x68) == 0)
        ebx.b = 0
    else
        *(arg1 + 0x68) = 0
        sub_407000(arg1)
        ebx.b = 1
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
