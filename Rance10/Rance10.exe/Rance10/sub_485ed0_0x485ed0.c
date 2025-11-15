// 函数: sub_485ed0
// 地址: 0x485ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
int32_t result

if (sub_5f2400(esi).b == 0)
    result.b = 1
else
    void** ecx_1
    
    if (esi[5] u< 0x10)
        ecx_1 = esi
    else
        ecx_1 = *esi
    
    if ((*(*arg1 + 0xc))(5, ecx_1).b != 0)
        result.b = 1
    else
        if (esi[5] u>= 0x10)
            esi = *esi
        
        void** var_48 = esi
        void* var_44
        sub_403360(&var_44, 0x760114)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_2c
        sub_6c52e0(sub_409240(&var_48, &var_44, &var_2c, &var_48))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
