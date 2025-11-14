// 函数: sub_61f250
// 地址: 0x61f250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c30d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
void* var_10 = arg1 + 0x4c
EnterCriticalSection(*(arg1 + 0x50) + 4)
char var_14 = 1
int32_t var_4 = 0
int32_t* ebx = *(arg1 + 0x18)
int32_t eax_7

if (ebx != 0)
    eax_7 = (*(*ebx + 0x34))(ebx, sub_4741f0(arg1 + 0x6c, arg2))

if (ebx == 0 || eax_7 s< 0)
    ebx.b = 0
else
    ebx.b = 1

LeaveCriticalSection(*(arg1 + 0x50) + 4)
int32_t eax_8
eax_8.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
