// 函数: sub_629c10
// 地址: 0x629c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bdf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 s>= 0)
    result = *(arg1 + 0x38)
    
    if (result != 0)
        result = (*(result + 0x30) - *(result + 0x2c)) s/ 0x70

if (arg2 s< 0 || arg2 s>= result)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, 0x76d85c, 0x27)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_30)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
