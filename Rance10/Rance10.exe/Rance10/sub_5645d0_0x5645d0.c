// 函数: sub_5645d0
// 地址: 0x5645d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = arg1 + 8
EnterCriticalSection(*(arg1 + 0xc) + 4)
char var_18 = 1
int32_t var_8_1 = 0
void* ecx = *(arg1 + 0x18)
int32_t ebx

if (ecx != 0)
    ebx.b = sub_574050(ecx, arg2, arg3, arg4)
else
    ebx.b = 0

LeaveCriticalSection(*(arg1 + 0xc) + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
