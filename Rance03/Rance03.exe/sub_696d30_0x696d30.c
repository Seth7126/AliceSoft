// 函数: sub_696d30
// 地址: 0x696d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1a3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CAliceRunPatch::VTable** var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &win32only::CAliceRunPatch::`vftable'
arg1[6] = 0xf
arg1[5] = 0
var_48 = arg1
arg1[1].b = 0
int32_t var_4 = 0
struct filesystem::CFilePath::VTable* const var_44 = &filesystem::CFilePath::`vftable'
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
var_4.b = 1
sub_401ff0(&var_40, &data_74f9b4, 0, 0xffffffff)
sub_6047d0(&var_44)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "AliceRunPatch.dll", 0x11)
var_4.b = 2
sub_604730(&var_44)
sub_403110(&var_40, &var_28, nullptr, 0xffffffff)
var_4.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

if (&arg1[1] != &var_40)
    sub_401ff0(&arg1[1], &var_40, 0, 0xffffffff)

var_44 = &filesystem::CFilePath::`vftable'

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return arg1
