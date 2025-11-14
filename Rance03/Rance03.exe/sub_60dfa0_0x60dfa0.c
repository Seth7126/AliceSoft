// 函数: sub_60dfa0
// 地址: 0x60dfa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[7] s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_18
sub_459330(&var_18, &arg1[4])
int32_t var_4 = 0
int32_t edi = var_18
void* edx = *arg1
uint32_t eax_4 = zx.d(arg1[8].b)
int32_t var_14
int32_t ebx

if (edi != var_14)
    if ((*(edx + 0xc))(arg1[7], eax_4, edi) != 0)
        ebx.b = 1
    else
        ebx.b = 0
else if ((*(edx + 8))(arg1[7], eax_4) == 0)
    ebx.b = 0
else
    ebx.b = 1

if (edi != 0)
    j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
