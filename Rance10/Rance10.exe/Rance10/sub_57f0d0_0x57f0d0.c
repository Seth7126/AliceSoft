// 函数: sub_57f0d0
// 地址: 0x57f0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d1b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2

if (arg1[4] != ebx)
    struct thread::CCriticalLock::VTable* const var_24_1 = &thread::CCriticalLock::`vftable'
    EnterCriticalSection(arg1[3] + 4)
    char var_20_1 = 1
    int32_t var_8_1 = 0
    int32_t* esi_1 = *arg1
    void* i = *esi_1
    void* i_1 = i
    
    for (; i != esi_1; i = i_1)
        int32_t* edi_1 = *(i + 0x28)
        
        if (edi_1 != 0 && edi_1[0xb] != ebx)
            edi_1[0xb] = ebx
            __Smtx_lock_shared(&edi_1[1])
            int32_t ebx_1 = *edi_1
            __Smtx_unlock_shared(&edi_1[1])
            
            if (ebx_1 != 0 && sub_57daf0(edi_1) == 0)
                LeaveCriticalSection(arg1[3] + 4)
                int32_t eax_16
                eax_16.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_16
            
            ebx = arg2
        
        sub_429080(&i_1)
    
    LeaveCriticalSection(arg1[3] + 4)
    arg1[4] = ebx

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
