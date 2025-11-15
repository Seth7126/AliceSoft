// 函数: sub_5ccb40
// 地址: 0x5ccb40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_4c = arg3
int32_t var_50 = 0
void* var_48
char* eax_3 = sub_404f20(&var_48, arg2)
int32_t var_8_1 = 0
char var_30
char* eax_4 = sub_417750(eax_3, eax_3, &var_30, arg4)
var_8_1.b = 1
sub_4176f0(eax_4.b, eax_4, arg3, ".mot")
int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_1c_1 = 0xf
int32_t var_20 = 0
var_30 = 0
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
