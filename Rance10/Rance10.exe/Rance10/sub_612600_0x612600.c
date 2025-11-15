// 函数: sub_612600
// 地址: 0x612600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7436d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78 = arg2
int32_t result

if (sub_621650(&arg1[0x52], arg2) == 0)
    int32_t result_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, 0x76b6a8, 0x38)
    int32_t var_8_2 = 2
    var_8_2.b = 3
    char var_74
    sub_612230(arg1, 0x76b69c, 
        sub_422a40(&var_78, &var_44, &var_74, &var_78, arg3, sub_621fa0(&arg1[0x52], var_78)))
    int32_t var_60
    
    if (var_60 u>= 0x10)
        sub_403160(var_74.d, var_60 + 1, 1)
    
    result = result_1
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    
    if (result u>= 0x10)
        int32_t var_90_8 = 1
        result = sub_403160(var_44.d, result + 1, 1)
else
    int32_t result_2 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76b718, 0x40)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_5c
    sub_612230(arg1, 0x76b6a4, 
        sub_422a40(&var_78, &var_2c, &var_5c, &var_78, arg3, sub_621fa0(&arg1[0x52], var_78)))
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    result = result_2
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (result u>= 0x10)
        int32_t var_90_4 = 1
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
