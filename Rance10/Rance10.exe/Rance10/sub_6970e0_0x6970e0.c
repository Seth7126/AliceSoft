// 函数: sub_6970e0
// 地址: 0x6970e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = Concurrency::details::_Schedule_chore(arg1)

if (result == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

if (arg1 != 0)
    int32_t var_8_1 = 0
    Concurrency::details::_Release_chore(arg1)
    int32_t var_34_1 = 0x14
    int32_t var_8_2 = 0xffffffff
    operator new(arg1)

struct std::exception::VTable* const var_24 = &std::exception::`vftable'
char const* const var_18 = "Fail to schedule the chore!"
char var_14 = 1
int64_t var_20 = 0
___std_exception_copy(&var_18, &var_20)
var_24 = &std::runtime_error::`vftable'{for `std::exception'}
sub_70021b(&var_24, 0x7de8ec)
noreturn
