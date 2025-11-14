// 函数: sub_53be30
// 地址: 0x53be30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* i_1
void* i_2 = i_1

if (*(arg1 + 0x14) != i_2)
    struct thread::CCriticalLock::VTable* const var_18_1 = &thread::CCriticalLock::`vftable'
    void* var_10_1 = arg1 + 0xc
    EnterCriticalSection(*(arg1 + 0x10) + 4)
    char var_14_1 = 1
    int32_t var_4 = 0
    int32_t* ecx = *(arg1 + 4)
    void* i = *ecx
    i_1 = i
    
    if (i != ecx)
        do
            void* ecx_1 = *(i + 0x28)
            
            if (ecx_1 != 0 && *(ecx_1 + 0x34) != i_2)
                int32_t* eax_6 = *(ecx_1 + 0x10)
                *(ecx_1 + 0x34) = i_2
                
                if (eax_6 != 0 && sub_53a7b0(ecx_1, eax_6) == 0)
                    LeaveCriticalSection(*(arg1 + 0x10) + 4)
                    int32_t eax_12
                    eax_12.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_12
            
            sub_418380(&i_1)
            i = i_1
        while (i != *(arg1 + 4))
    
    LeaveCriticalSection(*(arg1 + 0x10) + 4)
    *(arg1 + 0x14) = i_2

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
