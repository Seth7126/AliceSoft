// 函数: sub_53a360
// 地址: 0x53a360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = &arg1[2]
EnterCriticalSection(arg1[3] + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t temp0 = arg1[1]
arg1[1] -= 1
int32_t result = arg1[1]

if (temp0 != 1)
    LeaveCriticalSection(arg1[3] + 4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

char var_14_1 = 0
LeaveCriticalSection(arg1[3] + 4)
(**arg1)(1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
