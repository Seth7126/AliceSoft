// 函数: sub_61e250
// 地址: 0x61e250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce1c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != 0)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x9c) + 4
    struct thread::CCriticalLock::VTable* var_18 = &thread::CCriticalLock::`vftable'
    void* var_10_1 = arg1 + 0x98
    EnterCriticalSection(lpCriticalSection)
    char var_14_1 = 1
    int32_t var_4 = 0
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx == 0)
    label_61e30f:
        LeaveCriticalSection(*(arg1 + 0x9c) + 4)
        int32_t eax_12
        eax_12.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12
    
    if ((*(*ecx + 0x34))(ecx, 0) != 0)
        goto label_61e30f
    
    int32_t* eax_6 = *(arg1 + 0x18)
    
    if ((*(*eax_6 + 0x30))(eax_6, 0, 0, 1) != 0)
        goto label_61e30f
    
    int32_t var_4_1 = 0xffffffff
    sub_5f4140(&var_18)

*(arg1 + 0x38) = (***(arg1 + 0x20))(eax_2)
int32_t eax_9
eax_9.b = 1
*(arg1 + 0x3c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
