// 函数: sub_52ef50
// 地址: 0x52ef50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(arg1 + 4) = 0

int32_t arg_8
int32_t result = (*(*arg_8 + 0x54))(eax_2)
*(arg1 + 4) = result

if (result == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
arg_8 = 1
sub_412de0(&var_18, &arg_8)
arg_8 = 2
sub_412de0(&var_18, &arg_8)
arg_8 = 3
sub_412de0(&var_18, &arg_8)
arg_8 = 4
sub_412de0(&var_18, &arg_8)
arg_8 = 5
sub_412de0(&var_18, &arg_8)
arg_8 = 6
sub_412de0(&var_18, &arg_8)
arg_8 = 7
sub_412de0(&var_18, &arg_8)
arg_8 = 8
sub_412de0(&var_18, &arg_8)
arg_8 = 9
sub_412de0(&var_18, &arg_8)
arg_8 = 0xa
sub_412de0(&var_18, &arg_8)
int32_t esi_1 = var_18
int32_t ebx
ebx.b = (*(**(arg1 + 4) + 8))(arg2, esi_1, (var_14 - esi_1) s>> 2, 1) != 0

if (esi_1 != 0)
    j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
