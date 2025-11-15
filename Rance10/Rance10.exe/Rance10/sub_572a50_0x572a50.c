// 函数: sub_572a50
// 地址: 0x572a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c879
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
__builtin_memset(&arg1[3], 0, 0x1c)
arg1[0xa] = 0x80
arg1[0xb] = 0x80
__builtin_memset(&arg1[0xc], 0, 0x18)
var_8_1.b = 3
sub_572b20(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
