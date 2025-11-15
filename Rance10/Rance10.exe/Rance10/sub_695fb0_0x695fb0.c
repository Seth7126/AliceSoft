// 函数: sub_695fb0
// 地址: 0x695fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != 0)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x80) + 4
    struct thread::CCriticalLock::VTable* var_1c = &thread::CCriticalLock::`vftable'
    void* var_14_1 = arg1 + 0x7c
    EnterCriticalSection(lpCriticalSection)
    char var_18_1 = 1
    int32_t var_8_1 = 0
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx == 0)
    label_696067:
        LeaveCriticalSection(*(arg1 + 0x80) + 4)
        int32_t eax_12
        eax_12.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12
    
    if ((*(*ecx + 0x34))(ecx, 0) != 0)
        goto label_696067
    
    int32_t* eax_6 = *(arg1 + 0x18)
    
    if ((*(*eax_6 + 0x30))(eax_6, 0, 0, 1) != 0)
        goto label_696067
    
    int32_t var_8_2 = 0xffffffff
    sub_405f30(&var_1c)

*(arg1 + 0x38) = (***(arg1 + 0x20))(eax_2)
int32_t eax_9
eax_9.b = 1
*(arg1 + 0x3c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
