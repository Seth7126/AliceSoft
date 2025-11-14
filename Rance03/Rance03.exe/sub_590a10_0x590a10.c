// 函数: sub_590a10
// 地址: 0x590a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3018
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t edi = *(arg1 + 0xc)
void** eax_5 = sub_417ed0(arg1 + 0xc, arg2)
char eax_7

if (eax_5 != *(arg1 + 0xc))
    eax_7 = sub_40c3a0(arg2, &eax_5[4])

void** var_1c

if (eax_5 == *(arg1 + 0xc) || eax_7 != 0)
    var_1c = *(arg1 + 0xc)
else
    var_1c = eax_5

int32_t result

if (var_1c == edi)
    EnterCriticalSection(*(arg3 + 0xc) + 4)
    *(arg3 + 4) += 1
    LeaveCriticalSection(*(arg3 + 0xc) + 4)
    *sub_427f90(arg1 + 0xc, arg2) = arg3
    LeaveCriticalSection(*(arg1 + 8) + 4)
    result.b = 1
else
    LeaveCriticalSection(*(arg1 + 8) + 4)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
