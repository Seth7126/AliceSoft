// 函数: sub_61e6e0
// 地址: 0x61e6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1c) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct thread::CCriticalLock::VTable* const var_30 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0xa4) + 4)
char var_2c = 1
int32_t var_4 = 0
int32_t ebp = *(arg1 + 0x34)
int32_t eax_8 = (*(*(arg1 + 0x44) + 0x1c))(eax_2)
int32_t eax_9 = (*(*(arg1 + 0x44) + 0xc))()
void* ebx

if (ebp u>= *(arg1 + 0x30) * ((eax_8 * eax_9) u>> 3))
    ebx.b = 1
else if ((*(**(arg1 + 0x1c) + 0x18))(ebp) != 0)
    int32_t* ecx_7 = *(arg1 + 0x18)
    
    if (ecx_7 != 0)
        int32_t var_34
        (*(*ecx_7 + 0x10))(ecx_7, 0, &var_34)
        uint32_t ecx_8 = *(arg1 + 0x10)
        int32_t eax_14 = var_34
        uint32_t edx_2 = ecx_8 u>> 1
        
        if (eax_14 u>= edx_2)
            edx_2 = ecx_8
            *(arg1 + 0x64) = 0
        else
            *(arg1 + 0x64) = 1
        
        *(arg1 + 0x6c) = 0
        void* var_38 = nullptr
        void* var_40 = nullptr
        int32_t var_3c = 0
        int32_t var_44 = 0
        int32_t* eax_15 = *(arg1 + 0x18)
        *(arg1 + 0x68) = ebp - eax_14
        
        if ((*(*eax_15 + 0x2c))(eax_15, 0, edx_2 - eax_14, &var_38, &var_3c, &var_40, &var_44, 1)
                s>= 0)
            char* eax_17 = sub_61dce0(arg1)
            int32_t eax_18 = sub_61dd10(arg1)
            struct thread::CCriticalLock::VTable* var_18
            sub_5f40d0(&var_18, arg1 + 0xa8)
            struct thread::CCriticalLock::VTable* var_24
            sub_5f40d0(&var_24, arg1 + 0x98)
            var_4.b = 2
            void* ecx_16 = var_38
            
            if (ecx_16 != 0)
                int32_t eax_19 = var_3c
                
                if (eax_19 != 0)
                    int32_t var_5c_5 = eax_18
                    sub_61e4e0(arg1, ecx_16, eax_19, eax_17)
                    void* ecx_18 = var_40
                    
                    if (ecx_18 != 0)
                        int32_t eax_20 = var_44
                        
                        if (eax_20 != 0)
                            int32_t var_5c_6 = eax_18
                            sub_61e4e0(arg1, ecx_18, eax_20, eax_17)
            
            int32_t* eax_21 = *(arg1 + 0x18)
            (*(*eax_21 + 0x4c))(eax_21, var_38, var_3c, var_40, var_44)
            sub_5f4140(&var_24)
            sub_5f4140(&var_18)
    
    ebx.b = 1
else
    ebx.b = 0

LeaveCriticalSection(*(arg1 + 0xa4) + 4)
int32_t eax_22
eax_22.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_22
