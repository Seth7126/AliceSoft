// 函数: sub_4080d0
// 地址: 0x4080d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7271db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_4c = arg1
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
int32_t* var_50 = arg1
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
int32_t var_8_1 = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
struct filesystem::CFilePath::VTable* const var_48 = &filesystem::CFilePath::`vftable'
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
var_8_1.b = 2
sub_403590(&var_44, &data_7fd490, 0, 0xffffffff)
sub_67eb70(&var_48)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "DP", 2)
var_8_1.b = 3
sub_67eaf0(&var_48)
sub_4055a0(&var_44, &var_2c, 0, 0xffffffff)
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, "BreakPointFile.txt", 0x12)
var_8_1.b = 4
sub_67eaf0(&var_48)
sub_4055a0(&var_44, &var_2c, 0, 0xffffffff)
var_8_1.b = 2

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

if (arg1 != &var_44)
    sub_403590(arg1, &var_44, 0, 0xffffffff)

var_48 = &filesystem::CFilePath::`vftable'

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
