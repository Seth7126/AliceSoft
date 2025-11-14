// 函数: sub_61f480
// 地址: 0x61f480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce3d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != 0)
    struct thread::CCriticalLock::VTable* const var_18_1 = &thread::CCriticalLock::`vftable'
    void* var_10_1 = arg1 + 0x4c
    EnterCriticalSection(*(arg1 + 0x50) + 4)
    char var_14_1 = 1
    int32_t var_4 = 0
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx == 0)
        LeaveCriticalSection(*(arg1 + 0x50) + 4)
        int32_t eax_7
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    (*(*ecx + 0x48))(ecx)
    
    if (arg2 != 0)
        int32_t* eax_9 = *(arg1 + 0x18)
        (*(*eax_9 + 0x10))(eax_9, arg2, 0)
    
    int32_t var_4_1 = 0xffffffff
    LeaveCriticalSection(*(arg1 + 0x50) + 4)

HANDLE hEvent = *(arg1 + 0x48)

if (hEvent != 0)
    ResetEvent(hEvent)

int32_t* ecx_4 = *(arg1 + 0x10)
*(arg1 + 0x28) = 0
int32_t eax_13 = (**ecx_4)(eax_2)
bool cond:0 = *(arg1 + 0x14) == 0
*(arg1 + 0x24) = eax_13

if (not(cond:0))
    struct thread::CCriticalLock::VTable* const var_18_2 = &thread::CCriticalLock::`vftable'
    void* var_10_2 = arg1 + 0x4c
    EnterCriticalSection(*(arg1 + 0x50) + 4)
    char var_14_2 = 1
    int32_t var_4_2 = 1
    int32_t* eax_16 = *(arg1 + 0x18)
    int32_t var_28_7
    
    if (*(arg1 + 0x20) != 0)
        var_28_7 = 0
    else
        var_28_7 = 1
    
    (*(*eax_16 + 0x30))(eax_16, 0, 0, var_28_7)
    LeaveCriticalSection(*(arg1 + 0x50) + 4)

eax_13.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
