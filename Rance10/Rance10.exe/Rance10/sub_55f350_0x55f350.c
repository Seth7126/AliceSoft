// 函数: sub_55f350
// 地址: 0x55f350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72be88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t i = 0
char var_2c = 0
sub_403590(&var_2c, arg3, 0, 0xffffffff)
int32_t var_8_1 = 0

while (i != 0)
    int32_t* var_44
    sub_55d6a0(arg1, &var_44, &var_2c)
    var_8_1.b = 1
    int32_t var_30
    
    if (*(arg1 + 0xc4) != 0)
        int32_t* ecx_2 = &var_44
        int32_t eax_4 = 1
        
        if (var_30 u>= 0x10)
            ecx_2 = var_44
        
        int32_t var_34
        
        if (var_34 u< 1)
            eax_4 = var_34
        
        if (sub_406ac0(eax_4, 0x767888, ecx_2, eax_4) == 0)
            int32_t eax_6
            
            if (var_34 u>= 1)
                eax_6 = neg.d(sbb.d(1, 1, 1 u< var_34))
            else
                eax_6 = 0xffffffff
            
            if (eax_6 == 0)
                int32_t var_48_1 = 0xf
                int32_t var_4c_1 = eax_6
                char var_5c = eax_6.b
                sub_403490(&var_5c, U" ", 1)
                var_8_1.b = 2
                sub_431bd0(arg2, &var_5c)
                var_8_1.b = 1
                
                if (var_48_1 u>= 0x10)
                    sub_403160(var_5c.d, var_48_1 + 1, 1)
    
    sub_424db0(arg2, &var_44)
    var_8_1.b = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
