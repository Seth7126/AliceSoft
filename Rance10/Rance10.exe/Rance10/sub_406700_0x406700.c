// 函数: sub_406700
// 地址: 0x406700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t* ebx = *(arg1 + 0xc)
void arg_4
int32_t* eax_5 = sub_406980(ebx, ebx[1], &arg_4)
int32_t eax_6 = *(arg1 + 0x10)

if (0x15555554 - eax_6 u< 1)
    sub_6d0927("list<T> too long")
    noreturn

*(arg1 + 0x10) = eax_6 + 1
ebx[1] = eax_5
*eax_5[1] = eax_5
LeaveCriticalSection(*(arg1 + 8) + 4)
BOOL hEvent = *(arg1 + 0x24)

if (hEvent != 0)
    hEvent = SetEvent(hEvent)

fsbase->NtTib.ExceptionList = ExceptionList
return hEvent
