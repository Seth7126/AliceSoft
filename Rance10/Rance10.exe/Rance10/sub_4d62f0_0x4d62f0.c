// 函数: sub_4d62f0
// 地址: 0x4d62f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7342c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x3c) == 0)
label_4d63ba:
    int32_t* ecx_8 = *(arg1 + 0x38)
    
    if (ecx_8 != 0)
        result = (*(*ecx_8 + 0x10))(3)
    
    if (ecx_8 == 0 || result == 0)
        result.b = 0
    else
        if (esi[5] u>= 0x10)
            esi = *esi
        
        result.b = (*result)->__offset(0x10).d(esi).b != 0
else
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    void* var_48
    int32_t ebx
    ebx.b = sub_4d6470(arg1, sub_4d55d0(&var_48, esi)).b
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
    
    if (ebx.b == 0)
        int32_t var_8_3 = 1
        int32_t var_8_4 = 0xffffffff
        char var_30
        ebx.b = sub_4d6470(arg1, sub_4d5470(&var_30, esi)).b
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30.d, var_1c + 1, 1)
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        var_30 = 0
        
        if (ebx.b == 0)
            goto label_4d63ba
        
        result.b = 1
    else
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
