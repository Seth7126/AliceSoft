// 函数: sub_498920
// 地址: 0x498920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7301d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, "InstallInfo\SaveFolderSetting.ini", 0x21)
int32_t var_8_1 = 0
struct mainsystem::CSaveFolderSetting::VTable* const var_38 =
    &mainsystem::CSaveFolderSetting::`vftable'
int32_t var_34 = 0
var_8_1.b = 1
sub_498520(&var_38, &var_30)

if (var_34 == 0)
    sub_498a10(arg1, arg2)
else if (var_34 == 1)
    sub_498b80(arg1, arg2)
else if (var_34 != 2)
    sub_498a10(arg1, arg2)
else if (arg1 + 0x34 != arg1 + 4)
    sub_403590(arg1 + 0x34, arg1 + 4, 0, 0xffffffff)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_30.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
