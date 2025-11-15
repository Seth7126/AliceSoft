// 函数: sub_4d5cf0
// 地址: 0x4d5cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4d5da0(arg1)
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
EnterCriticalSection(*(arg1 + 0x44) + 4)
char var_18 = 1
int32_t var_8_1 = 0
void** esi_1 = sub_432330(arg1 + 0x48, arg2)
char eax_8

if (esi_1 != *(arg1 + 0x48))
    eax_8 = sub_412ca0(arg2, &esi_1[4])

if (esi_1 == *(arg1 + 0x48) || eax_8 != 0)
    esi_1 = *(arg1 + 0x48)

int32_t result

if (esi_1 != *(arg1 + 0x48))
    (**esi_1[0xa])(eax_2)
    result = esi_1[0xa]
else
    result = 0

LeaveCriticalSection(*(arg1 + 0x44) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
