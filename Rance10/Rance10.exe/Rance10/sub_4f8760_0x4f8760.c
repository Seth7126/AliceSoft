// 函数: sub_4f8760
// 地址: 0x4f8760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73662b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64 = 0

if (*(arg1 + 0xe0) != 0)
    void* var_60
    char var_48
    char var_30
    int32_t var_1c
    void** eax_5
    int32_t ebx_1
    
    if (*(arg1 + 0xf8) != 0)
        var_1c = 0xf
        int32_t var_20_1 = 0
        var_30 = 0
        sub_403590(&var_30, arg1 + 0xe8, 0, 0xffffffff)
        eax_5 = &var_30
        int32_t var_8_3 = 2
        ebx_1 = 8
    else
        int32_t* eax_4 = sub_4175e0(arg1 + 0xe8, arg1 + 0xd0, &var_60, 0x76564c)
        int32_t var_8_1 = 0
        int32_t var_64_1 = 2
        eax_5 = sub_417750(eax_4, eax_4, &var_48, arg1 + 4)
        int32_t var_8_2 = 1
        ebx_1 = 6
    
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    int32_t var_64_2 = ebx_1
    *arg2 = 0
    sub_403590(arg2, eax_5, 0, 0xffffffff)
    int32_t ebx_2 = ebx_1 | 1
    
    if ((ebx_2.b & 8) != 0)
        ebx_2 &= 0xfffffff7
        
        if (var_1c u>= 0x10)
            sub_403160(var_30.d, var_1c + 1, 1)
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
    
    if ((ebx_2.b & 4) != 0)
        ebx_2 &= 0xfffffffb
        int32_t var_34
        
        if (var_34 u>= 0x10)
            sub_403160(var_48.d, var_34 + 1, 1)
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
    
    int32_t var_4c
    
    if ((ebx_2.b & 2) != 0 && var_4c u>= 0x10)
        sub_403160(var_60, var_4c + 1, 1)
else
    sub_403360(arg2, 0x75d199)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
