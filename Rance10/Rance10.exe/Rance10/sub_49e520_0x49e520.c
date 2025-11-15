// 函数: sub_49e520
// 地址: 0x49e520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CMenu::VTable* const var_38 = &win32only::CMenu::`vftable'
int32_t var_8_1 = 0
HMENU var_34_1 = GetSubMenu(GetMenu((*(*arg1 + 0x38))(0, eax_2, var_38, 0, 1)))
char var_30_1 = 0
sub_6ce270(&var_38, 3)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x760f60, 0x12)
sub_6ce160(&var_38, 4, &var_2c, 0xa803)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

sub_6ce270(&var_38, 5)
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x760f48, 0x17)
sub_6ce160(&var_38, 6, &var_2c, 0xa804)

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t result_1 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x760ff8, 0x21)
sub_6ce160(&var_38, 7, &var_2c, 0xa805)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
