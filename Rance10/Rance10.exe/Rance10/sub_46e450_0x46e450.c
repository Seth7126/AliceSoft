// 函数: sub_46e450
// 地址: 0x46e450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d618
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
*arg1 = sub_42e780()
int32_t var_8_1 = 0
var_8_1.b = 1
sub_46e560(arg1, arg2, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
