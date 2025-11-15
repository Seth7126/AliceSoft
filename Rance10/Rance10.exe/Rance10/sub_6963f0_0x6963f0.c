// 函数: sub_6963f0
// 地址: 0x6963f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1c) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct thread::CCriticalLock::VTable* const var_38 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x88) + 4)
char var_34 = 1
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 0x44)
int32_t eax_7 = *(arg1 + 0x34)
int32_t eax_9 = (*(*esi + 0x1c))(eax_2)
int32_t eax_10 = (*(*esi + 0xc))()
void* ebx

if (eax_7 u>= *(arg1 + 0x30) * ((eax_9 * eax_10) u>> 3))
    ebx.b = 1
else if ((*(**(arg1 + 0x1c) + 0x18))(eax_7) != 0)
    int32_t* ecx_7 = *(arg1 + 0x18)
    
    if (ecx_7 != 0)
        int32_t var_28
        (*(*ecx_7 + 0x10))(ecx_7, 0, &var_28)
        uint32_t ecx_8 = *(arg1 + 0x10)
        int32_t eax_15 = var_28
        uint32_t edx_2 = ecx_8 u>> 1
        
        if (eax_15 u>= edx_2)
            edx_2 = ecx_8
            *(arg1 + 0x48) = 0
        else
            *(arg1 + 0x48) = 1
        
        *(arg1 + 0x50) = 0
        *(arg1 + 0x4c) = eax_7 - eax_15
        int32_t* eax_16 = *(arg1 + 0x18)
        void* var_20 = nullptr
        void* var_18 = nullptr
        void* var_1c = nullptr
        void* var_14 = nullptr
        
        if ((*(*eax_16 + 0x2c))(eax_16, 0, edx_2 - eax_15, &var_20, &var_1c, &var_18, &var_14, 1)
                s>= 0)
            void* eax_18 = sub_695a50(arg1)
            uint32_t (* eax_19)[0x4] = sub_695a80(arg1)
            struct thread::CCriticalLock::VTable* var_50
            sub_405ec0(&var_50, arg1 + 0x8c)
            struct thread::CCriticalLock::VTable* var_44
            sub_405ec0(&var_44, arg1 + 0x7c)
            var_8_1.b = 2
            void* ecx_16 = var_20
            
            if (ecx_16 != 0)
                void* eax_20 = var_1c
                
                if (eax_20 != 0)
                    sub_696210(arg1, ecx_16, eax_20, eax_18, eax_19)
                    void* ecx_18 = var_18
                    
                    if (ecx_18 != 0)
                        void* eax_21 = var_14
                        
                        if (eax_21 != 0)
                            sub_696210(arg1, ecx_18, eax_21, eax_18, eax_19)
            
            int32_t* eax_22 = *(arg1 + 0x18)
            (*(*eax_22 + 0x4c))(eax_22, var_20, var_1c, var_18, var_14)
            sub_405f30(&var_44)
            sub_405f30(&var_50)
    
    ebx.b = 1
else
    ebx.b = 0

LeaveCriticalSection(*(arg1 + 0x88) + 4)
int32_t eax_23
eax_23.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_23
