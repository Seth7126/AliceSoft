// 函数: sub_45fe90
// 地址: 0x45fe90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b60d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_esi
int32_t var_38 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, 0x6da19f, nullptr)
int32_t var_4 = 0
*arg1 = &exfile::CToken::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_401ff0(&arg1[1], &var_2c, 0, 0xffffffff)
arg1[7] = 0
arg1[8] = 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return arg1
