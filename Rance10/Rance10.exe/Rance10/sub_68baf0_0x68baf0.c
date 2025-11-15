// 函数: sub_68baf0
// 地址: 0x68baf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7473b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_4c = arg1
int32_t var_50 = 0
struct filesystem::CFilePath::VTable* var_30
sub_68b7e0(&var_30)
int32_t var_8_1 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_403490(&var_48, "Renderer", 8)
var_8_1.b = 1
sub_67eaf0(&var_30)
void* var_2c
sub_4055a0(&var_2c, &var_48, 0, 0xffffffff)
var_8_1.b = 0

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

sub_67eaf0(&var_30)
sub_4055a0(&var_2c, arg2, 0, 0xffffffff)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_403590(arg1, &var_2c, 0, 0xffffffff)
var_30 = &filesystem::CFilePath::`vftable'
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
