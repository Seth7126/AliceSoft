// 函数: sub_5f47a0
// 地址: 0x5f47a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc168
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

while (true)
    EnterCriticalSection(*(arg1 + 8) + 4)
    char var_21_1
    
    if (*(arg1 + 0x10) == 0)
        var_21_1 = 0
    
    if (*(arg1 + 0x10) != 0 || *(arg1 + 0x2c) != 0)
        var_21_1 = 1
    
    LeaveCriticalSection(*(arg1 + 8) + 4)
    
    if (var_21_1 == 0)
        HANDLE handles = *(arg1 + 0x18)
        int32_t var_1c_1 = *(arg1 + 0x20)
        enum WAIT_EVENT result = WaitForMultipleObjects(2, &handles, 0, 0xffffffff)
        
        if (result == WAIT_OBJECT_0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    struct thread::CCriticalLock::VTable* const var_18_1 = &thread::CCriticalLock::`vftable'
    void* var_10_1 = arg1 + 4
    EnterCriticalSection(*(arg1 + 8) + 4)
    char var_14_1 = 1
    int32_t var_4 = 0
    
    if (*(arg1 + 0x10) != 0)
        int32_t* edi_1 = *(**(arg1 + 0xc) + 8)
        int32_t* edx_1 = **(arg1 + 0xc)
        *edx_1[1] = *edx_1
        *(*edx_1 + 4) = edx_1[1]
        *(arg1 + 0x10) -= 1
        j__free(edx_1)
        *(arg1 + 0x2c) = 1
        char var_14_3 = 0
        LeaveCriticalSection(*(arg1 + 8) + 4)
        (*(*edi_1 + 8))(eax_2)
        (*(*edi_1 + 4))()
        *(arg1 + 0x2c) = 0
        int32_t var_4_2 = 0xffffffff
        struct thread::CCriticalLock::VTable* const var_18_3 = &thread::CCriticalLock::`vftable'
    else
        int32_t var_4_1 = 0xffffffff
        struct thread::CCriticalLock::VTable* const var_18_2 = &thread::CCriticalLock::`vftable'
        char var_14_2 = 0
        LeaveCriticalSection(*(arg1 + 8) + 4)
