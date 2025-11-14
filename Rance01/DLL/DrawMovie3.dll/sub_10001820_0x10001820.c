// 函数: sub_10001820
// 地址: 0x10001820
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_10019678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct std::exception::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::exception::std::logic_error::VTable** result = arg1
struct std::exception::std::logic_error::VTable** result_1 = result
sub_10001f0c(arg1, arg2)
int32_t var_4 = 0
*result = &std::logic_error::`vftable'{for `std::exception'}
result[9] = 0xf
result[8] = 0
result[4].b = 0
sub_100012a0(&result[3], arg2 + 0xc, nullptr, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return result
