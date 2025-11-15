// 函数: sub_5f4880
// 地址: 0x5f4880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741d69
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = (*(**arg1 + 0x10))(arg2)
int32_t result

if (eax_4 != 0)
    int32_t xmm0_1 = *eax_4
    int32_t var_54 = 0xb
    int32_t var_50_1 = xmm0_1
    int32_t var_8_2 = 1
    int32_t var_40
    sub_603780(arg1[1], &var_40, &var_54, &var_40)
    var_8_2.b = 2
    int32_t ebx
    ebx.b = sub_602ea0()
    var_8_2.b = 3
    
    if (sub_602c60(&var_40) != 0)
        void* ecx_6 = data_7fcbb4
        int32_t var_38
        
        if (ecx_6 != 0)
            sub_621db0(ecx_6, var_38)
    
    var_40 = 0xffffffff
    int32_t var_8_3 = 0xffffffff
    `eh vector vbase constructor iterator'(&var_54, 0x14, 1, sub_601b50)
    result.b = ebx.b
else
    int32_t var_18_1 = 0xf
    int32_t* var_1c_1 = eax_4
    char var_2c = eax_4.b
    sub_403490(&var_2c, 0x797e58, 0x1c)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
