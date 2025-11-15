// 函数: sub_5dd4d0
// 地址: 0x5dd4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734248
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_28 = ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(arg1[3] + 4)
char var_20 = 1
int32_t var_8_1 = 0
int32_t* esi_1 = *arg1
void* eax_6 = *esi_1
void* var_14 = eax_6

if (eax_6 == esi_1)
label_5dd57e:
    ebx.b = 1
else
    while (true)
        int32_t* edi_1 = *(eax_6 + 0x18)
        __Smtx_lock_shared(&edi_1[1])
        int32_t edi_2 = *edi_1
        __Smtx_unlock_shared(&edi_1[1])
        
        if (edi_2 != 0)
            __Smtx_lock_shared(&edi_1[1])
            int32_t* edi_4 = *edi_1
            __Smtx_unlock_shared(&edi_1[1])
            
            if ((*(*edi_4 + 0x10))(eax_2) != 0)
                sub_429080(&var_14)
                eax_6 = var_14
                
                if (eax_6 == esi_1)
                    goto label_5dd57e
                
                continue
        
        ebx.b = 0
        break

LeaveCriticalSection(arg1[3] + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
