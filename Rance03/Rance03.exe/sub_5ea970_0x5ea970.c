// 函数: sub_5ea970
// 地址: 0x5ea970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb808
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFilePath::VTable* const var_48 = &filesystem::CFilePath::`vftable'
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_4 = 0
sub_401ff0(&var_44, &data_74f9b4, 0, 0xffffffff)
sub_6047d0(&var_48)
int32_t var_2c
char* eax_5 = sub_4028a0(&var_2c, &var_44)

if (arg1 + 4 != eax_5)
    if (*(arg1 + 0x18) u>= 0x10)
        j__free(*(arg1 + 4))
    
    *(arg1 + 0x18) = 0xf
    *(arg1 + 0x14) = 0
    *(arg1 + 4) = 0
    sub_4030b0(arg1 + 4, eax_5)

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

if (arg1 + 0x1c != arg1 + 4)
    sub_401ff0(arg1 + 0x1c, arg1 + 4, 0, 0xffffffff)

sub_5eaab0(arg1, arg2)
var_48 = &filesystem::CFilePath::`vftable'

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
