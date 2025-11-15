// 函数: sub_5247b0
// 地址: 0x5247b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7395a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64 = 0
struct filesystem::CFilePath::VTable* const var_48 = &filesystem::CFilePath::`vftable'
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_8_1 = 0
sub_67e8b0(&var_48)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "Activity", 8)
var_8_1.b = 1
sub_67eaf0(&var_48)
sub_4055a0(&var_44, &var_2c, 0, 0xffffffff)
var_8_1.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

var_8_1.b = 2
void* var_60
char* eax_7 = sub_417750(arg1 + 0x1c, sub_405070(&var_60, arg3), &var_2c, arg1 + 0x1c)
var_8_1.b = 3
sub_67eaf0(&var_48)
sub_4055a0(&var_44, eax_7, 0, 0xffffffff)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

var_8_1.b = 0
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_4c

if (var_4c u>= 0x10)
    sub_403160(var_60, var_4c + 1, 1)

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_403590(arg2, &var_44, 0, 0xffffffff)
var_48 = &filesystem::CFilePath::`vftable'

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
