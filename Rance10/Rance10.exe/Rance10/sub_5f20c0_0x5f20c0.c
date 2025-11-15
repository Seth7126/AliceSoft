// 函数: sub_5f20c0
// 地址: 0x5f20c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741ac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_34 = arg1
int32_t var_38 = 0
struct filesystem::CFilePath::VTable* const var_30 = &filesystem::CFilePath::`vftable'
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
sub_403590(&var_2c, &data_7fd490, 0, 0xffffffff)
sub_67eb70(&var_30)
sub_67eaf0(&var_30)
sub_4055a0(&var_2c, arg2, 0, 0xffffffff)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_403590(arg1, &var_2c, 0, 0xffffffff)
var_30 = &filesystem::CFilePath::`vftable'

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
