// 函数: sub_4c56a0
// 地址: 0x4c56a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x3c) + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 0x40)
int32_t edi_1 = *(arg1 + 0x44)
int32_t result

if (esi == edi_1)
label_4c5713:
    result = 0
else
    while (true)
        if (sub_4c5220(*esi, arg2) != 0)
            (**esi[1])(eax_2)
            result = esi[1]
            break
        
        esi = &esi[2]
        
        if (esi == edi_1)
            goto label_4c5713

LeaveCriticalSection(*(arg1 + 0x3c) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
