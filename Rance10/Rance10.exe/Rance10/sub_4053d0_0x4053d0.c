// 函数: sub_4053d0
// 地址: 0x4053d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_34 = arg3
int32_t var_38 = 0
int32_t var_8_1 = 0
void* var_30
int32_t* eax_4 = sub_4055a0(sub_405070(&var_30, arg2), arg4, 0, 0xffffffff)
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
sub_403590(arg3, eax_4, 0, 0xffffffff)
int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
