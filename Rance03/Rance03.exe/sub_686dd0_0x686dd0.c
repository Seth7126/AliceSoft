// 函数: sub_686dd0
// 地址: 0x686dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CListHeaderTab::VTable* var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_34 = &dpsound::CListHeaderTab::`vftable'
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_402110(&var_30, "None", 4)
char var_18 = 1
int32_t var_4 = 0

if (&var_30 != arg2)
    sub_401ff0(&var_30, arg2, 0, 0xffffffff)

int32_t result = sub_686ff0(arg1 + 4, &var_34)
var_34 = &dpsound::CListHeaderTab::`vftable'

if (var_1c u>= 0x10)
    result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
