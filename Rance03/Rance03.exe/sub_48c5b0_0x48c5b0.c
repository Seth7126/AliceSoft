// 函数: sub_48c5b0
// 地址: 0x48c5b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6badb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_48 = 0
struct filesystem::CFilePath::VTable* const var_44 = &filesystem::CFilePath::`vftable'
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
sub_6043a0(&var_44)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "Flat", 4)
var_4.b = 1
sub_604730(&var_44)
sub_403110(&var_40, &var_28, nullptr, 0xffffffff)
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

char* eax_5 = sub_402a20(&var_28, arg2)
var_4.b = 2
sub_604730(&var_44)
sub_403110(&var_40, eax_5, nullptr, 0xffffffff)
var_4.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

sub_402d30(arg1, &var_40)
var_44 = &filesystem::CFilePath::`vftable'

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return arg1
