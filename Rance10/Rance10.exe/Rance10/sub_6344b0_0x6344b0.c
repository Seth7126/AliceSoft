// 函数: sub_6344b0
// 地址: 0x6344b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745993
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
*arg1 = arg3
arg1[1] = arg3
arg1[2] = arg4
int32_t* var_1c = &arg1[5]
int32_t var_14 = 0
__builtin_memset(&arg1[5], 0, 0x14)
sub_422540(&arg1[5], 0, &var_14)
arg1[8] = 0
int32_t var_8_1 = 0
int32_t var_2c_1 = sub_6028a0(&arg1[5], 0)
int32_t var_8_2 = 1
sub_6359f0(&arg1[9], arg2)
arg1[0xf] = arg2
arg1[0x10] = 1
arg1[0x14] = 0x8775dfb
sub_635790(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
