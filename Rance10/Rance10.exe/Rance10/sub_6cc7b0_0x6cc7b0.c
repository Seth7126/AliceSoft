// 函数: sub_6cc7b0
// 地址: 0x6cc7b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748f1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CAliceRunPatch::VTable** var_4c = arg1
*arg1 = &win32only::CAliceRunPatch::`vftable'
arg1[6] = 0xf
arg1[5] = 0
struct win32only::CAliceRunPatch::VTable** var_50 = arg1
char* eax_3

if (arg1[6] u< 0x10)
    eax_3 = &arg1[1]
else
    eax_3 = arg1[1]

*eax_3 = 0
int32_t var_8_1 = 0
struct filesystem::CFilePath::VTable* const var_30 = &filesystem::CFilePath::`vftable'
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 1
sub_403590(&var_2c, &data_7fd490, 0, 0xffffffff)
sub_67eb70(&var_30)
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_403490(&var_48, "AliceRunPatch.dll", 0x11)
var_8_1.b = 2
sub_67eaf0(&var_30)
sub_4055a0(&var_2c, &var_48, 0, 0xffffffff)
var_8_1.b = 1

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

if (&arg1[1] != &var_2c)
    sub_403590(&arg1[1], &var_2c, 0, 0xffffffff)

var_30 = &filesystem::CFilePath::`vftable'

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
