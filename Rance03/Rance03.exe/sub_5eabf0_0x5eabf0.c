// 函数: sub_5eabf0
// 地址: 0x5eabf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb890
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFilePath::VTable* const var_48 = &filesystem::CFilePath::`vftable'
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_4 = 0
sub_604220(&var_48)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, "AliceSoft", 9)
var_4.b = 1
sub_604730(&var_48)
sub_403110(&var_44, &var_2c, nullptr, 0xffffffff)
var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

sub_604730(&var_48)
sub_403110(&var_44, arg2, nullptr, 0xffffffff)
sub_607ce0(&var_44)
char* result = sub_4028a0(&var_2c, &var_44)

if (arg1 + 0x34 != result)
    if (*(arg1 + 0x48) u>= 0x10)
        j__free(*(arg1 + 0x34))
    
    *(arg1 + 0x48) = 0xf
    *(arg1 + 0x44) = 0
    *(arg1 + 0x34) = 0
    result = sub_4030b0(arg1 + 0x34, result)

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

var_48 = &filesystem::CFilePath::`vftable'

if (var_30 u>= 0x10)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
