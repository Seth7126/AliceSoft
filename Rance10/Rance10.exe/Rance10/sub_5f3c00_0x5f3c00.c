// 函数: sub_5f3c00
// 地址: 0x5f3c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741c31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = (*(**arg1 + 0x14))(arg2)
int32_t* eax_5 = (*(**arg1 + 0x14))(arg3)
int32_t result

if (eax_4 == 0 || eax_5 == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x797e58, 0x1c)
    int32_t var_8_4 = 0
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0
else
    void var_64
    sub_601770(&var_64, (**eax_4)(eax_2))
    int32_t var_8_1 = 1
    void var_50
    sub_601770(&var_50, (**eax_5)())
    int32_t var_8_2 = 2
    int32_t var_3c
    sub_603780(arg1[1], &var_3c, &var_64, &var_3c)
    var_8_2.b = 3
    int32_t* ebx
    ebx.b = sub_602ea0()
    var_8_2.b = 4
    
    if (sub_602c60(&var_3c) != 0)
        void* ecx_9 = data_7fcbb4
        int32_t var_34
        
        if (ecx_9 != 0)
            sub_621db0(ecx_9, var_34)
    
    var_3c = 0xffffffff
    int32_t var_8_3 = 0xffffffff
    `eh vector vbase constructor iterator'(&var_64, 0x14, 2, sub_601b50)
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
