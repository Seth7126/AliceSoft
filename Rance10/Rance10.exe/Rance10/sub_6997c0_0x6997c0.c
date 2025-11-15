// 函数: sub_6997c0
// 地址: 0x6997c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7483f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != 0)
    struct thread::CCriticalLock::VTable* const var_1c_1 = &thread::CCriticalLock::`vftable'
    void* var_14_1 = arg1 + 0x54
    EnterCriticalSection(*(arg1 + 0x58) + 4)
    char var_18_1 = 1
    int32_t var_8_1 = 0
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx == 0)
        LeaveCriticalSection(*(arg1 + 0x58) + 4)
        int32_t eax_7
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    (*(*ecx + 0x48))(ecx)
    
    if (arg2 != 0)
        int32_t* eax_9 = *(arg1 + 0x18)
        (*(*eax_9 + 0x10))(eax_9, arg2, 0)
    
    int32_t var_8_2 = 0xffffffff
    LeaveCriticalSection(*(arg1 + 0x58) + 4)

HANDLE hEvent = *(arg1 + 0x50)

if (hEvent != 0)
    ResetEvent(hEvent)

int32_t* ecx_4 = *(arg1 + 0x10)
*(arg1 + 0x28) = 0xffffffff
int32_t eax_13 = (**ecx_4)(eax_2)
bool cond:0 = *(arg1 + 0x14) == 0
*(arg1 + 0x24) = eax_13

if (not(cond:0))
    struct thread::CCriticalLock::VTable* const var_1c_2 = &thread::CCriticalLock::`vftable'
    void* var_14_2 = arg1 + 0x54
    EnterCriticalSection(*(arg1 + 0x58) + 4)
    char var_18_2 = 1
    int32_t var_8_3 = 1
    int32_t* eax_16 = *(arg1 + 0x18)
    int32_t var_2c_7
    
    if (*(arg1 + 0x20) != 0)
        var_2c_7 = 0
    else
        var_2c_7 = 1
    
    (*(*eax_16 + 0x30))(eax_16, 0, 0, var_2c_7)
    LeaveCriticalSection(*(arg1 + 0x58) + 4)

eax_13.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
