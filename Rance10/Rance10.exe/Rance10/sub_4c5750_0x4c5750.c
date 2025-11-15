// 函数: sub_4c5750
// 地址: 0x4c5750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733467
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = Mod1::QuerySupportsEC(arg1)

if (arg2 != 0)
    struct thread::CCriticalLock::VTable* const var_28_1 = &thread::CCriticalLock::`vftable'
    EnterCriticalSection(*(arg1 + 0x3c) + 4)
    char var_24_1 = 1
    int32_t var_8_1 = 0
    int32_t* esi_1 = *(arg1 + 0x40)
    int32_t edi_1 = *(arg1 + 0x44)
    struct partsengine::CConstructionProcessList::VTable** ebx_1 = arg3
    
    if (esi_1 == edi_1)
    label_4c57d5:
        struct partsengine::CConstructionProcessList::VTable** eax_8 = sub_6e810c(0x10)
        arg3 = eax_8
        var_8_1.b = 1
        *eax_8 = &partsengine::CConstructionProcessList::`vftable'
        sub_4aa260(&eax_8[1], &ebx_1[1])
        var_8_1.b = 0
        struct partsengine::CConstructionProcessList::VTable** var_1c = eax_8
        int32_t* var_18_1 = arg2
        sub_4cb2a0(arg1 + 0x40, &var_1c)
        (**arg2)(eax_2)
    else
        while (sub_4c5220(*esi_1, ebx_1) == 0)
            esi_1 = &esi_1[2]
            
            if (esi_1 == edi_1)
                goto label_4c57d5
    
    result = LeaveCriticalSection(*(arg1 + 0x3c) + 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
