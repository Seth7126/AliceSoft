// 函数: sub_524ab0
// 地址: 0x524ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0xc
EnterCriticalSection(*(arg1 + 0x10) + 4)
char var_14 = 1
int32_t var_4 = 0
void* ecx = *(arg1 + 0x1c)
int32_t ebx

if (ecx != 0)
    ebx.b = sub_532930(ecx, arg2, arg3, arg4, arg5)
else
    ebx.b = 0

LeaveCriticalSection(*(arg1 + 0x10) + 4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
