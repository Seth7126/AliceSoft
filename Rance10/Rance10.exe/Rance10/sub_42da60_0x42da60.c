// 函数: sub_42da60
// 地址: 0x42da60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c
int32_t* eax_4 = sub_425ab0(arg1, &var_2c, arg3)
int32_t var_8_1 = 0
int32_t* ebx

if (*(arg1 + 0x14) != 5)
    if (sub_42cf90(arg1, arg3, arg4) == 4)
        if (arg2 != &var_2c)
            sub_403590(arg2, &var_2c, 0, 0xffffffff)
        
        ebx.b = 1
    else
        ebx.b = 0
else
    ebx.b = sub_42d540(eax_4, &var_2c, arg2, arg4).b

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
