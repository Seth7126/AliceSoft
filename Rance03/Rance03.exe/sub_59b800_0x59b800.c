// 函数: sub_59b800
// 地址: 0x59b800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
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
int32_t ebx = arg_4
*(arg1 + 0x28) = 0
int32_t result = (*(*ebx + 0x54))(eax_2)
*(arg1 + 4) = result

if (result == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

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
char eax_9
int32_t ecx_8
eax_9, ecx_8 = (*(**(arg1 + 4) + 8))(4, edi, (var_14 - edi) s>> 2, 0)

if (eax_9 == 0 || *(arg1 + 4) == 0)
    ebx.b = 0
else
    int32_t var_44_1 = ecx_8
    
    if (sub_59b9d0(arg1, arg2, arg3, arg4, arg5, 0xffffffff, arg7, arg8, ebx) == 0)
        ebx.b = 0
    else
        ebx.b = 1
        *(arg1 + 8) = arg2
        *(arg1 + 0xc) = arg3
        *(arg1 + 0x10) = arg4
        *(arg1 + 0x14) = arg5
        *(arg1 + 0x20) = arg7
        *(arg1 + 0x18) = arg6
        *(arg1 + 0x1c) = 0xffffffff
        *(arg1 + 0x24) = arg8
        *(arg1 + 0x28) = 1

if (edi != 0)
    j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
