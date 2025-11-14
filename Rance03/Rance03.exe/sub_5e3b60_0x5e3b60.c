// 函数: sub_5e3b60
// 地址: 0x5e3b60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_esi
int32_t var_54 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFilePath::VTable* const var_44 = &filesystem::CFilePath::`vftable'
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
sub_401ff0(&var_40, &data_74f9b4, 0, 0xffffffff)
sub_6047d0(&var_44)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "AliceStart.ini", 0xe)
var_4.b = 1
sub_604730(&var_44)
sub_403110(&var_40, &var_28, nullptr, 0xffffffff)
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

bool cond:0 = sub_651510(arg1 + 0x18, &var_40) != 0
var_44 = &filesystem::CFilePath::`vftable'
int32_t ebx
ebx.b = cond:0

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return ebx.b
