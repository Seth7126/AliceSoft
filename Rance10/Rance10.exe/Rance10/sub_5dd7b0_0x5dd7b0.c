// 函数: sub_5dd7b0
// 地址: 0x5dd7b0
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
int32_t* edi_1 = *arg1
void* esi = *edi_1
void* var_18 = esi

if (esi == edi_1)
label_5dd8aa:
    ebx.b = 1
else
    while (true)
        int32_t* ebx_1 = *(esi + 0x18)
        __Smtx_lock_shared(&ebx_1[1])
        int32_t ebx_2 = *ebx_1
        __Smtx_unlock_shared(&ebx_1[1])
        char eax_14
        
        if (ebx_2 != 0)
            __Smtx_lock_shared(&ebx_1[1])
            ebx = *ebx_1
            __Smtx_unlock_shared(&ebx_1[1])
            eax_14 = (*(*ebx + 0x10))(eax_2)
        
        if (ebx_2 == 0 || eax_14 == 0)
            __Smtx_lock_shared(esi + 0x14)
            int32_t eax_15 = *(esi + 0x10)
            __Smtx_unlock_shared(esi + 0x14)
            
            if (sub_5dd340(*(esi + 0x18), eax_15, arg2) == 0)
                ebx.b = 0
                break
            
            if (arg3 != 0)
                goto label_5dd8aa
        
        sub_429080(&var_18)
        esi = var_18
        
        if (esi == edi_1)
            goto label_5dd8aa

LeaveCriticalSection(arg1[3] + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
