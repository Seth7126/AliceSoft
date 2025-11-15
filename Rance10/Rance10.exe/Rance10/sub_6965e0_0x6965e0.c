// 函数: sub_6965e0
// 地址: 0x6965e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7463e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0)
    int32_t __saved_ebp
    int32_t esi_3 =
        (***(arg1 + 0x20))(__security_cookie ^ &__saved_ebp) - *(arg1 + 0x40) - *(arg1 + 0x38)
    int32_t eax_17
    int32_t edx_3
    edx_3:eax_17 = mulu.dp.d(0x10624dd3, *(arg1 + 0x10))
    *arg2 = esi_3 u% 0x3e8 * (edx_3 u>> 6)
else
    int32_t var_14 = 0
    struct thread::CCriticalLock::VTable* const var_20_1 = &thread::CCriticalLock::`vftable'
    void* var_18_1 = arg1 + 0x7c
    EnterCriticalSection(*(arg1 + 0x80) + 4)
    char var_1c_1 = 1
    int32_t var_8_1 = 0
    int32_t* eax_5 = *(arg1 + 0x18)
    
    if ((*(*eax_5 + 0x10))(eax_5, &var_14, 0) != 0)
        LeaveCriticalSection(*(arg1 + 0x80) + 4)
        int32_t eax_9
        eax_9.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    *arg2 = var_14
    LeaveCriticalSection(*(arg1 + 0x80) + 4)

int32_t* eax_13
eax_13.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
