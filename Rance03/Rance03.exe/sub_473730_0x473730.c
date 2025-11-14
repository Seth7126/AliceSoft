// 函数: sub_473730
// 地址: 0x473730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9bd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = 0
struct filesystem::CFilePath::VTable* const var_2c = &filesystem::CFilePath::`vftable'
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
sub_401ff0(&var_28, &data_74f9b4, 0, 0xffffffff)
sub_6047d0(&var_2c)
sub_604730(&var_2c)
sub_403110(&var_28, arg2, nullptr, 0xffffffff)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401ff0(arg1, &var_28, 0, 0xffffffff)
var_2c = &filesystem::CFilePath::`vftable'

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return arg1
