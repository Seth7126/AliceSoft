// 函数: sub_4e5810
// 地址: 0x4e5810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0650
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
struct filesystem::CFilePath::VTable* const var_44 = &filesystem::CFilePath::`vftable'
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
sub_6043a0(&var_44)
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_402110(&var_5c, "Activity", 8)
var_4.b = 1
sub_604730(&var_44)
sub_403110(&var_40, &var_5c, nullptr, 0xffffffff)
var_4.b = 0

if (var_48 u>= 0x10)
    j__free(var_5c.d)

var_4.b = 2
int32_t var_28
char* eax_7 = sub_410ad0(arg1 + 0x1c, sub_402a20(&var_28, arg3), &var_5c, arg1 + 0x1c)
var_4.b = 3
sub_604730(&var_44)
sub_403110(&var_40, eax_7, nullptr, 0xffffffff)

if (var_48 u>= 0x10)
    j__free(var_5c.d)

var_4.b = 0
int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_401ff0(arg2, &var_40, 0, 0xffffffff)
var_44 = &filesystem::CFilePath::`vftable'

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return arg2
