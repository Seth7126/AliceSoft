// 函数: sub_5fe8e0
// 地址: 0x5fe8e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(arg1 + 4) = 0

int32_t arg_4
int32_t ecx_1 = arg_4
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
int32_t eax_5 = (*(*ecx_1 + 0x54))(eax_2)
*(arg1 + 4) = eax_5

if (eax_5 == 0)
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
arg_4 = 0
sub_412de0(&var_18, &arg_4)
arg_4 = 4
sub_412de0(&var_18, &arg_4)
arg_4 = 6
sub_412de0(&var_18, &arg_4)
int32_t edi = var_18
int32_t ebx

if ((*(**(arg1 + 4) + 8))(arg2, edi, (var_14 - edi) s>> 2, 1).b != 0)
    *(arg1 + 8) = arg2
    int32_t eax_13
    int32_t edx_2
    edx_2:eax_13 = sx.q(arg2)
    *(arg1 + 0xc) = arg2 s/ 3
    *(arg1 + 0x10) = arg2 - 2
    ebx.b = 1
    *(arg1 + 0x14) = (eax_13 - edx_2) s>> 1
else
    ebx.b = 0

if (edi != 0)
    j__free(edi)

int32_t eax_10
eax_10.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
