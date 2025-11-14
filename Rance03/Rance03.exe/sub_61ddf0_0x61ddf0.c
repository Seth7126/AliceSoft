// 函数: sub_61ddf0
// 地址: 0x61ddf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce200
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1c) != 0)
    int32_t ebx
    
    if (*(arg1 + 0x14) != 0)
        EnterCriticalSection(*(arg1 + 0x9c) + 4)
        ebx.b = *(arg1 + 0x18) != 0
        LeaveCriticalSection(*(arg1 + 0x9c) + 4)
    
    if (*(arg1 + 0x14) == 0 || ebx.b != 0)
        *(arg1 + 0x68) = 0
        *(arg1 + 0x6c) = 0
        *(arg1 + 0x28) = 0
        int32_t eax_9 = (*(*(arg1 + 0x44) + 0x1c))(eax_2)
        int32_t eax_10 = (*(*(arg1 + 0x44) + 0xc))()
        int32_t ebx_2 = *(arg1 + 0x2c) * ((eax_9 * eax_10) u>> 3)
        int32_t esi_5 = (*(*(arg1 + 0x44) + 0x1c))() * (*(*(arg1 + 0x44) + 0xc))()
        int32_t eax_15 = *(arg1 + 0x30) * (esi_5 u>> 3)
        
        if (eax_15 u> ebx_2)
            if ((*(**(arg1 + 0x1c) + 0x24))() != 0xffffffff)
                *(arg1 + 0x64) = 0
                struct thread::CCriticalLock::VTable* var_18
                sub_5f40d0(&var_18, arg1 + 0xa8)
                int32_t var_4 = 0
                struct thread::CCriticalLock::VTable** ecx_9 = &var_18
                
                if (sub_61e330(arg1) == 0)
                label_61df0d:
                    sub_5f4140(ecx_9)
                    int32_t eax_18
                    eax_18.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_18
                
                int32_t var_4_1 = 0xffffffff
                sub_5f4140(ecx_9)
                
                if (sub_61e250(arg1).b != 0)
                    *(arg1 + 0x64) = 1
                    sub_5f40d0(&var_18, arg1 + 0xa8)
                    int32_t var_4_2 = 1
                    ecx_9 = &var_18
                    
                    if (sub_61e330(arg1) == 0)
                        goto label_61df0d
                    
                    sub_5f4140(ecx_9)
                    *(arg1 + 0x64) = 0
                    int32_t eax_20
                    eax_20.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_20
        else
            int32_t var_30_3 = eax_15
            int32_t var_34_1 = ebx_2
            sub_455870(0x6ecd2c)

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
