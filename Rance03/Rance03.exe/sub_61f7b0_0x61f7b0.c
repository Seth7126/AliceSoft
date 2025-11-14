// 函数: sub_61f7b0
// 地址: 0x61f7b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0x4c
EnterCriticalSection(*(arg1 + 0x50) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_6 = *(arg1 + 0x18)
void var_1c
int32_t ebx

if ((*(*eax_6 + 0x24))(eax_6, &var_1c) s>= 0)
    if (*(arg1 + 0x28) != 0)
        int32_t eax_15 = (***(arg1 + 0x10))(eax_2) - *(arg1 + 0x28)
        *(arg1 + 0x24) += eax_15
        *(arg1 + 0x28) = 0
    
    ebx.b = 0
else
    if (*(arg1 + 0x28) != 0)
        int32_t eax_10 = (***(arg1 + 0x10))(eax_2) - *(arg1 + 0x28)
        *(arg1 + 0x24) += eax_10
    
    *(arg1 + 0x28) = (***(arg1 + 0x10))(eax_2)
    ebx.b = 1

LeaveCriticalSection(*(arg1 + 0x50) + 4)
int32_t eax_16
eax_16.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_16
