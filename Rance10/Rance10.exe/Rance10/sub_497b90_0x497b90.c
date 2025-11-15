// 函数: sub_497b90
// 地址: 0x497b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char var_30
char* eax_3 = sub_405070(&var_30, arg2)
int32_t var_8_1 = 0
void* var_48
sub_4176f0(eax_3.b, eax_3, &var_48, ".DebugA")
var_8_1.b = 2
int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_1c_1 = 0xf
int32_t* var_5c = &var_48
int32_t var_20 = 0
var_30 = 0
int32_t ebx
ebx.b = sub_455030(arg1 + 0xd0)
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
