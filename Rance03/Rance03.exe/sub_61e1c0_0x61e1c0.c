// 函数: sub_61e1c0
// 地址: 0x61e1c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce1c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0x98
EnterCriticalSection(*(arg1 + 0x9c) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* ecx = *(arg1 + 0x18)

if (ecx != 0)
    (*(*ecx + 0x48))(ecx)

LeaveCriticalSection(*(arg1 + 0x9c) + 4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
