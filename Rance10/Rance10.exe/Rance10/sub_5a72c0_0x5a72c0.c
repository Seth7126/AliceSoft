// 函数: sub_5a72c0
// 地址: 0x5a72c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729640
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm3
int32_t var_4c = xmm3
int32_t* var_50 = arg3
int32_t var_54 = 0
int32_t* eax_4 = sub_48b230(*arg2)

if (eax_4.b == 0)
    void* var_44
    int32_t ecx_3 = sub_407d70(eax_4, arg2, &var_44, arg4)
    int32_t var_8_1 = 0
    int32_t var_6c_1 = ecx_3
    int32_t var_74_1 = ecx_3
    char var_2c
    sub_5a7950(&var_4c, arg2, &var_2c, &var_4c, arg6, arg7, arg8, arg9)
    var_8_1.b = 1
    sub_4079d0(&var_2c, &var_44, arg3, &var_2c)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
else
    int32_t var_68 = arg9
    sub_5a7860(&var_4c, arg2, arg3, arg4, &var_4c, arg5, arg6, arg7, arg8)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
