// 函数: sub_6107b0
// 地址: 0x6107b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd5c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_34 = 0
struct filesystem::CFilePath::VTable** var_30 = arg1
*arg1 = &filesystem::CFilePath::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
int32_t var_4 = 0
var_34 = 1
sub_6043a0(arg1)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, "Shader", 6)
int32_t var_4_1 = 1
sub_604730(arg1)
sub_403110(&arg1[1], &var_2c, nullptr, 0xffffffff)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return arg1
