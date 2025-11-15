// 函数: sub_6e3d70
// 地址: 0x6e3d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 4
int32_t (* var_c)(void* arg1) = sub_74a057
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6e3d7c
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::time_base::std::time_get<char>::VTable** var_14 = arg1
arg1[1] = arg3
int32_t var_8 = 0
*arg1 = &std::time_get<char>::`vftable'{for `std::time_base'}
sub_6e4f9e(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e3da0
return arg1
