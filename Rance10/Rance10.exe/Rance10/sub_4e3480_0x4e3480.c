// 函数: sub_4e3480
// 地址: 0x4e3480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734fe2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0

if (*(arg1 + 0x60) != 0)
    void* var_48
    char var_30
    int32_t var_1c
    int32_t* eax_4
    int32_t ebx_1
    
    if (*(arg1 + 0x90) != 0)
        var_1c = 0xf
        int32_t var_20_1 = 0
        var_30 = 0
        sub_403590(&var_30, arg1 + 0x80, 0, 0xffffffff)
        eax_4 = &var_30
        int32_t var_8_2 = 1
        ebx_1 = 4
    else
        eax_4 = sub_4175e0(arg1 + 0x80, arg1 + 0x50, &var_48, 0x764a94)
        int32_t var_8_1 = 0
        ebx_1 = 2
    
    int32_t var_4c_1 = ebx_1
    sub_4175e0(eax_4, eax_4, arg2, 0x764a8c)
    int32_t ebx_2 = ebx_1 | 1
    
    if ((ebx_2.b & 4) != 0)
        ebx_2 &= 0xfffffffb
        
        if (var_1c u>= 0x10)
            sub_403160(var_30.d, var_1c + 1, 1)
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
    
    int32_t var_34
    
    if ((ebx_2.b & 2) != 0 && var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
else
    sub_403360(arg2, 0x75d10e)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
