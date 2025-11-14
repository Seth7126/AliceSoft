// 函数: sub_59a0e0
// 地址: 0x59a0e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0xc)
int32_t esi_3 = (*(arg1 + 4) - 2) * *(arg1 + 8) + 2

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(arg1 + 0xc) = 0

int32_t arg_4
int32_t result = (*(*arg_4 + 0x54))(eax_2)
*(arg1 + 0xc) = result

if (result == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
arg_4 = 1
sub_412de0(&var_18, &arg_4)
arg_4 = 2
sub_412de0(&var_18, &arg_4)
arg_4 = 3
sub_412de0(&var_18, &arg_4)
arg_4 = 4
sub_412de0(&var_18, &arg_4)
arg_4 = 5
sub_412de0(&var_18, &arg_4)
arg_4 = 6
sub_412de0(&var_18, &arg_4)
arg_4 = 7
sub_412de0(&var_18, &arg_4)
arg_4 = 8
sub_412de0(&var_18, &arg_4)
arg_4 = 9
sub_412de0(&var_18, &arg_4)
arg_4 = 0xa
sub_412de0(&var_18, &arg_4)
int32_t edi_1 = var_18
int32_t ebx
ebx.b = (*(**(arg1 + 0xc) + 8))(esi_3, edi_1, (var_14 - edi_1) s>> 2, 0) != 0

if (edi_1 != 0)
    j__free(edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
