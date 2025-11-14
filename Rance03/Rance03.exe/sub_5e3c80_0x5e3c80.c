// 函数: sub_5e3c80
// 地址: 0x5e3c80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb0d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct filesystem::CFilePath::VTable* const var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_60 = &filesystem::CFilePath::`vftable'
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
int32_t var_4 = 0
sub_401ff0(&var_5c, &data_74f9b4, 0, 0xffffffff)
sub_6047d0(&var_60)
int32_t var_2c
char* eax_5 = sub_402a20(&var_2c, arg2)
var_4.b = 1
char var_44
char* eax_6 = sub_410a80(eax_5.b, eax_5, &var_44, ".DebugA")
var_4.b = 2
sub_604730(&var_60)
sub_403110(&var_5c, eax_6, nullptr, 0xffffffff)
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

var_4.b = 0
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t ebx
ebx.b = sub_4525a0(arg1 + 0xd8, &var_5c)
var_60 = &filesystem::CFilePath::`vftable'

if (var_48 u>= 0x10)
    j__free(var_5c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return ebx.b
