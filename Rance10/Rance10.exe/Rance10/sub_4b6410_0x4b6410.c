// 函数: sub_4b6410
// 地址: 0x4b6410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_9c = 0xffffffff
int32_t (* var_a0)(void* arg1) = sub_732294
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_98
int32_t eax_2 = __security_cookie ^ &var_98
int32_t var_8 = eax_2
int32_t var_c8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_bc = arg1
int32_t var_ac = 0
sub_409170(&var_98, U"\", "\\")
int32_t var_9c_1 = 1
void var_68
sub_409170(&var_68, U"\n"", "\n")
var_9c_1.b = 2
void var_38
sub_409170(&var_38, U""", "\"")
int32_t var_9c_2 = 3
int32_t var_cc = 0.d
int32_t var_b8 = 0
int32_t var_b4 = 0
int32_t var_b0 = 0
sub_409490(&var_b8, &var_98, &var_8)
var_9c_2.b = 4
sub_6ca500(&var_b8, arg2, arg1, &var_b8)
int32_t var_ac_1 = 1
sub_408f50(&var_b8)
var_9c_2.b = 0
`eh vector vbase constructor iterator'(&var_98, 0x30, 3, sub_408940)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_8 ^ &var_98)
return arg1
