// 函数: sub_62af00
// 地址: 0x62af00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744d10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_48 = arg1
int32_t var_4c = 0
int32_t arg_4

if (arg_4 != 0xffffffff)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "%%.%df", 6)
    int32_t var_8_1 = 0
    void* var_44
    sub_409350(&arg_4, &var_2c, &var_44, &arg_4)
    var_8_1.b = 2
    int32_t eax_4 = var_18_1
    
    if (eax_4 u>= 0x10)
        eax_4 = sub_403160(var_2c.d, eax_4 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_417920(eax_4, &var_44, arg1, arg2)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
else
    *arg2
    sub_6ca450(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
