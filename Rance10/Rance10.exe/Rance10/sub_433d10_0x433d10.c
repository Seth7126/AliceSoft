// 函数: sub_433d10
// 地址: 0x433d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a734
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* result = sub_433c20(arg1, arg2)
int32_t var_8_1 = 0
arg2 = result
arg1 = &result[2]
void* var_18 = &result[2]
var_8_1.b = 1

if (result != 0xfffffff8)
    sub_433dc0(&result[2], arg3)
    var_8_1.b = 2
    sub_433dc0(&result[5], &arg3[3])
    var_8_1.b = 3
    sub_433dc0(&result[8], &arg3[6])

fsbase->NtTib.ExceptionList = ExceptionList
return result
