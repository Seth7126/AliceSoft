// 函数: sub_10001110
// 地址: 0x10001110
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019648
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct std::exception::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::exception::VTable** var_10_1 = arg1
sub_10001e8b(arg1)
int32_t var_4 = 0
*arg1 = &std::logic_error::`vftable'{for `std::exception'}
arg1[8] = 0
arg1[9] = 0xf
arg1[4].b = 0
sub_100012a0(&arg1[3], arg2, nullptr, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
