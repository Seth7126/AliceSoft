// 函数: sub_5fba60
// 地址: 0x5fba60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_28 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t var_1c = 1
sub_412de0(&var_18, &var_1c)
var_1c = 2
sub_412de0(&var_18, &var_1c)
var_1c = 3
sub_412de0(&var_18, &var_1c)
var_1c = 4
sub_412de0(&var_18, &var_1c)
var_1c = 5
sub_412de0(&var_18, &var_1c)
var_1c = 6
sub_412de0(&var_18, &var_1c)
var_1c = 7
sub_412de0(&var_18, &var_1c)
var_1c = 8
sub_412de0(&var_18, &var_1c)
var_1c = 9
sub_412de0(&var_18, &var_1c)
var_1c = 0xa
sub_412de0(&var_18, &var_1c)
int32_t esi_1 = var_18
int32_t ebx
ebx.b = (*(**(arg1 + 0x98) + 8))(4, esi_1, (var_14 - esi_1) s>> 2, 1) != 0

if (esi_1 != 0)
    j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
