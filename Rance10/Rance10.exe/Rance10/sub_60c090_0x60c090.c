// 函数: sub_60c090
// 地址: 0x60c090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742ea6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t* eax_3 = arg2
arg2 = &arg1[1]
*arg1 = *eax_3
arg1[1] = 0
arg1[2] = 0
arg1[1] = sub_60daf0(nullptr, nullptr)
int32_t var_8_1 = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
var_8_1.b = 1
int32_t var_24 = 8
*arg1 = 0x3f800000
sub_490d70(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
