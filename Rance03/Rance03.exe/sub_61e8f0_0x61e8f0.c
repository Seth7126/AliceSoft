// 函数: sub_61e8f0
// 地址: 0x61e8f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0)
    int32_t __saved_edi
    int32_t esi_3 =
        (***(arg1 + 0x20))(__security_cookie ^ &__saved_edi) - *(arg1 + 0x40) - *(arg1 + 0x38)
    int32_t eax_17
    int32_t edx_3
    edx_3:eax_17 = mulu.dp.d(0x10624dd3, *(arg1 + 0x10))
    *arg2 = esi_3 u% 0x3e8 * (edx_3 u>> 6)
else
    int32_t var_1c = 0
    struct thread::CCriticalLock::VTable* const var_18_1 = &thread::CCriticalLock::`vftable'
    void* var_10_1 = arg1 + 0x98
    EnterCriticalSection(*(arg1 + 0x9c) + 4)
    char var_14_1 = 1
    int32_t var_4 = 0
    int32_t* eax_5 = *(arg1 + 0x18)
    
    if ((*(*eax_5 + 0x10))(eax_5, &var_1c, 0) != 0)
        LeaveCriticalSection(*(arg1 + 0x9c) + 4)
        int32_t eax_9
        eax_9.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    *arg2 = var_1c
    LeaveCriticalSection(*(arg1 + 0x9c) + 4)

int32_t* eax_13
eax_13.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
