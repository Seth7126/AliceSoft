// 函数: sub_698bd0
// 地址: 0x698bd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74381e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg3
int32_t var_18 = 0
int32_t var_8_1 = 0
void arg_4
sub_698b20(arg3, &arg_4)
int32_t var_8_2 = 1

if (arg4 != 0)
    (*(*arg4 + 0x10))(arg4 != &arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
