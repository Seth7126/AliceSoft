// 函数: sub_5d09b0
// 地址: 0x5d09b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74100e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_3c = &thread::CCriticalLock::`vftable'
void* var_34 = arg1
char var_38 = 1
int32_t var_50_1 = EnterCriticalSection(*(arg1 + 4) + 4)
int32_t var_8_1 = 0
int32_t* var_30
sub_5d2810(&var_30, arg1 + 0x10)
var_8_1.b = 1
sub_44e450(*(*(arg1 + 0x10) + 4))
void* eax_6 = *(arg1 + 0x10)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x10)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x10)
*(eax_8 + 8) = eax_8
int32_t* ebx = var_30
*(arg1 + 0x14) = 0
void* eax_9 = *ebx
void* var_18 = eax_9

if (eax_9 != ebx)
    void* edi_1 = arg1 + 8
    void* var_14_1 = edi_1
    
    do
        void** eax_11 = sub_432330(edi_1, eax_9 + 0x10)
        void** edi_2 = *edi_1
        void** esi_1 = eax_11
        char eax_13
        
        if (esi_1 != edi_2)
            eax_13 = sub_412ca0(eax_9 + 0x10, &esi_1[4])
        
        if (esi_1 == edi_2 || eax_13 != 0)
            esi_1 = edi_2
        
        edi_1 = var_14_1
        
        if (esi_1 != *edi_1)
            __Smtx_lock_shared(&esi_1[0xb])
            void* eax_14 = esi_1[0xa]
            __Smtx_unlock_shared(&esi_1[0xb])
            edi_1 = var_14_1
            int32_t* var_24
            
            if (*(eax_14 + 4) == 1)
                sub_5d1c70(edi_1, &var_24, esi_1)
        
        sub_429080(&var_18)
        eax_9 = var_18
    while (eax_9 != ebx)
    
    ebx = var_30

int32_t* var_50_8 = ebx
void var_28
sub_44dce0(&var_30, &var_28, *ebx)
sub_403160(var_30, 1, 0x28)
int32_t result = LeaveCriticalSection(*(arg1 + 4) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
