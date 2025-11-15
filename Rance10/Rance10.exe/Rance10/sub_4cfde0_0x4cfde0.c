// 函数: sub_4cfde0
// 地址: 0x4cfde0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729640
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_50 = arg3
int32_t var_54 = 0
int32_t* eax_5
int32_t ecx_1
eax_5, ecx_1 = sub_48b230(*arg2)
void arg_8

if (eax_5.b == 0)
    void* var_44
    sub_407d70(eax_5, arg2, &var_44, arg4)
    int32_t var_8_1 = 0
    char var_2c
    sub_4cffa0(&arg_8, arg2, &var_2c, &arg_8, arg5, arg6, arg7)
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
    int32_t var_68 = ecx_1
    sub_4d00c0(&arg_8, arg2, arg3, arg4, &arg_8, arg5, arg6, arg7)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
