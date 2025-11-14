// 函数: sub_61f720
// 地址: 0x61f720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce1c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != 0)
    struct thread::CCriticalLock::VTable* const var_18_1 = &thread::CCriticalLock::`vftable'
    void* var_10_1 = arg1 + 0x4c
    EnterCriticalSection(*(arg1 + 0x50) + 4)
    char var_14_1 = 1
    int32_t var_4 = 0
    int32_t* eax_5 = *(arg1 + 0x18)
    (*(*eax_5 + 0x48))(eax_5)
    int32_t* eax_6 = *(arg1 + 0x18)
    (*(*eax_6 + 0x34))(eax_6, 0)
    LeaveCriticalSection(*(arg1 + 0x50) + 4)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
