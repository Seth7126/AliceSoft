// 函数: sub_4a4290
// 地址: 0x4a4290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_4c = arg3
int32_t var_50 = 0
int32_t* eax_3 = sub_406b20(*arg2)
void arg_8

if (eax_3.b == 0)
    void* var_48
    sub_407d70(eax_3, arg2, &var_48, arg4)
    int32_t var_64_2 = arg7
    int32_t var_8_1 = 0
    char var_30
    sub_4a4390(&arg_8, arg2, &var_30, &arg_8, arg5, arg6)
    var_8_1.b = 1
    sub_4079d0(&var_30, &var_48, arg3, &var_30)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
else
    int32_t var_64 = arg7
    sub_4a4490(&arg_8, arg2, arg3, arg4, &arg_8, arg5, arg6)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
