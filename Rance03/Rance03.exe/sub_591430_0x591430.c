// 函数: sub_591430
// 地址: 0x591430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 4
EnterCriticalSection(*(arg1 + 8) + 4)
char var_14 = 1
int32_t var_4 = 0
void** eax_5 = sub_417ed0(arg1 + 0xc, arg2)
char eax_7

if (eax_5 != *(arg1 + 0xc))
    eax_7 = sub_40c3a0(arg2, &eax_5[4])

if (eax_5 == *(arg1 + 0xc) || eax_7 != 0)
    arg2 = *(arg1 + 0xc)
else
    arg2 = eax_5

if (arg2 == *(arg1 + 0xc))
    LeaveCriticalSection(*(arg1 + 8) + 4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t* result = arg2[0xa]
(**result)(eax_2)
LeaveCriticalSection(*(arg1 + 8) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
