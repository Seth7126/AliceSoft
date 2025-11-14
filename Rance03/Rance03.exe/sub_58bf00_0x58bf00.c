// 函数: sub_58bf00
// 地址: 0x58bf00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7b18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 4)

if (ecx == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

if (((*(ecx + 0x1a4) - *(ecx + 0x1a0)) & 0xfffffffc) s<= 4 || *(*(ecx + 0x1a0) + 4) == 0)
    void* eax_6
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_4 = 0
char eax_7 = sub_524db0(ecx + 0x1c4, &var_28)
char eax_8

if (eax_7 != 0)
    int32_t var_38_1 = *(arg1 + 8)
    int128_t var_1c = data_709450
    eax_8 = sub_547cc0(arg1 + 0x4f8, &var_28, &var_1c, 0, 0)

int32_t ebx

if (eax_7 == 0 || eax_8 == 0)
    ebx.b = 0
else
    ebx.b = 1

int32_t var_4_1 = 0xffffffff
sub_4b4d00(&var_28)
int32_t eax_9
eax_9.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
