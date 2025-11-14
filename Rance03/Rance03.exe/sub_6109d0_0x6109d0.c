// 函数: sub_6109d0
// 地址: 0x6109d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_48 = 0
struct filesystem::CFilePath::VTable* var_44
sub_6107b0(&var_44)
int32_t var_4 = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "ShadowMap", 9)
var_4.b = 1
sub_604730(&var_44)
void* var_40
sub_403110(&var_40, &var_28, nullptr, 0xffffffff)
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

sub_604730(&var_44)
sub_403110(&var_40, arg2, nullptr, 0xffffffff)
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401ff0(arg1, &var_40, 0, 0xffffffff)
var_44 = &filesystem::CFilePath::`vftable'
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return arg1
