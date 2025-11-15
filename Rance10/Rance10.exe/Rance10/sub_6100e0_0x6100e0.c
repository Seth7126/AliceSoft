// 函数: sub_6100e0
// 地址: 0x6100e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result
char var_2c
int32_t* ebx

if (arg3 != 0)
    if (sub_610440(arg1, arg2) == 0)
        sub_403360(&var_2c, "MainSystem")
        int32_t var_8_2 = 1
        goto label_610145
    
    if (sub_61e9a0(&arg1[0xa]) != 0)
        if (sub_6104b0(arg1, arg2) == 0)
            sub_403360(&var_2c, 0x76b610)
            int32_t var_8_4 = 3
            goto label_6101ad
        
        if ((**arg3)(eax_2) != 0)
            void var_44
            sub_403360(&var_44, "SystemSuspend.asd")
            int32_t var_8_5 = 4
            sub_563cf0(&var_44)
            int32_t var_8_6 = 0xffffffff
            sub_403320(&var_44)
            
            if (sub_610bf0(arg1) == 0)
                result = 0
            else if (sub_612e20(arg1) == 0)
                result = 0
            else if (sub_610c90(arg1) == 0)
                result = 0
            else
                if (sub_610b60() != 0)
                    int32_t* ecx_18 = arg1[9]
                    arg1[0x7c].b = 0
                    
                    if (ecx_18 != 0 && (**ecx_18)() != 0 && arg1[0x7b] == 0)
                        arg1[0x7b] = 1
                
                result = 1
        else
            result = 0
    else
        sub_403360(&var_2c, 0x76b5e4)
        int32_t var_8_3 = 2
    label_6101ad:
        ebx.b = sub_6c52e0(&var_2c)
        sub_403320(&var_2c)
        result = ebx.b
else
    int32_t var_18 = 0xf
    int32_t* var_1c_1 = arg3
    var_2c = 0
    sub_403490(&var_2c, "MainSystem", 0x32)
    int32_t* var_8_1 = arg3
label_610145:
    ebx.b = sub_612320(arg1, &var_2c)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    result = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
