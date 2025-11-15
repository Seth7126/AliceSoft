// 函数: sub_5d0240
// 地址: 0x5d0240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result_1 = arg1
struct thread::CCriticalLock::VTable* const var_4c = &thread::CCriticalLock::`vftable'
EnterCriticalSection(&arg1[0x18]->vFunc_1)
char var_48 = 1
int32_t var_8_1 = 0
void** eax_6 = sub_432330(&arg1[0x31], arg2)
void** edi_1 = arg1[0x31]
void** esi_1 = eax_6
char eax_8

if (esi_1 != edi_1)
    eax_8 = sub_412ca0(arg2, &esi_1[4])

if (esi_1 == edi_1 || eax_8 != 0)
    esi_1 = edi_1

struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result_2 = result_1
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result

if (esi_1 == result_2[0x31])
    result_1 = nullptr
    char eax_9 = sub_5cef80(result_2, arg2, &result_1)
    
    if (eax_9 != 0)
        result = result_1
    
    if (eax_9 != 0 && result != 0)
        void var_40
        int32_t* eax_10 = sub_432270(&var_40, result)
        var_8_1.b = 1
        var_8_1.b = 2
        void var_38
        int32_t* eax_12
        void* ecx_4
        eax_12, ecx_4 = sub_5d2a40(sub_5d2690(eax_10, arg2, &var_38, eax_10))
        int32_t* var_6c_8 = eax_12
        void* var_70_3 = &eax_12[4]
        void** var_54
        sub_5d2aa0(&result_2[0x31], &var_54, ecx_4)
        sub_5d0390(&var_38)
        sub_431b10(&var_40)
    else
        result = nullptr
else
    __Smtx_lock_shared(&esi_1[0xb])
    result = esi_1[0xa]
    __Smtx_unlock_shared(&esi_1[0xb])

LeaveCriticalSection(&arg1[0x18]->vFunc_1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
