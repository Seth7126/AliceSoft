// 函数: sub_5eaab0
// 地址: 0x5eaab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb850
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
char var_5c[0x10]
int32_t var_2c
char* eax_7 = sub_4028a0(&var_5c, sub_410930(&ExceptionList, arg1 + 4, &var_2c, "InstallInfo"))
var_4.b = 1
int32_t var_44
sub_410a80(eax_7.b, eax_7, &var_44, "SaveFolderSetting.ini")
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c[0].d)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c[0] = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

struct sys40::CSaveFolderSetting::VTable* const var_64 = &sys40::CSaveFolderSetting::`vftable'
int32_t var_60 = 0
var_4.b = 5
sub_5e8dd0(&var_64, &var_44)
int32_t* result

if (var_60 == 0)
    result = sub_5eabf0(arg1, arg2)
else if (var_60 == 1)
    result = sub_5ead60(arg1, arg2)
else
    result = var_60 - 2
    
    if (var_60 != 2)
        result = sub_5eabf0(arg1, arg2)
    else if (arg1 + 0x34 != arg1 + 4)
        result = sub_401ff0(arg1 + 0x34, arg1 + 4, result, 0xffffffff)

int32_t var_30

if (var_30 u>= 0x10)
    result = j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
