// 函数: sub_6d5bb6
// 地址: 0x6d5bb6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x20
int32_t (* var_c)(void* arg1) = sub_749581
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_3 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_3
void* const var_44_2 = &data_6d5bc2
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::exception::VTable** var_30 = arg1
void var_2c
sub_403360(&var_2c, arg4)
int32_t var_8 = 0
sub_696d20(arg1, arg2, arg3, &var_2c)
sub_4033f0(&var_2c, 1, nullptr)
*arg1 = &std::system_error::`vftable'{for `std::_System_error'}
@__security_check_cookie@4(eax_3 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d5c01
return arg1
