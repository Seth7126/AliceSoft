// 函数: sub_62c0e0
// 地址: 0x62c0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744f8a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
std::_Lockit::_Lockit(arg1, 0)
int32_t var_8_1 = 0
arg1[1] = 0
arg1[2].b = 0
arg1[3] = 0
arg1[4].b = 0
arg1[5] = 0
arg1[6].w = 0
arg1[7] = 0
arg1[8].w = 0
arg1[9] = 0
arg1[0xa].b = 0
arg1[0xb] = 0
arg1[0xc].b = 0
var_8_1.b = 6

if (arg2 != 0)
    std::_Locinfo::_Locinfo_ctor(arg1, 0x3f, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

struct std::exception::VTable* const var_28 = &std::exception::`vftable'
char const* const var_1c = "bad locale name"
char var_18 = 1
int64_t var_24 = 0
___std_exception_copy(&var_1c, &var_24)
var_28 = &std::runtime_error::`vftable'{for `std::exception'}
sub_70021b(&var_28, 0x7de8ec)
noreturn
