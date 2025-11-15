// 函数: sub_609e30
// 地址: 0x609e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742bc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0
int32_t var_14 = 0
int32_t var_30 = arg4[1]
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
sub_60db90(&var_20, *arg4, var_30)
int32_t var_8_1 = 0
sub_609fa0(arg1, arg2, arg3, &var_20)
sub_6001a0(&var_20)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
