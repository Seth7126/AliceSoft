// 函数: sub_4d5c20
// 地址: 0x4d5c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7341e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x44) + 4)
char var_20 = 1
int32_t var_8_1 = 0
void** esi_1 = sub_432330(arg1 + 0x48, arg2)
char eax_8

if (esi_1 != *(arg1 + 0x48))
    eax_8 = sub_412ca0(arg2, &esi_1[4])

if (esi_1 == *(arg1 + 0x48) || eax_8 != 0)
    esi_1 = *(arg1 + 0x48)

int32_t* result

if (esi_1 == *(arg1 + 0x48))
    void** var_18
    sub_4cf9f0(arg1 + 0x48, &var_18, arg2)
    result = arg3
    var_18[0xa] = result
    (**result)(eax_2)
else
    (**esi_1[0xa])(eax_2)
    (*(*arg3 + 4))()
    result = esi_1[0xa]

LeaveCriticalSection(*(arg1 + 0x44) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
