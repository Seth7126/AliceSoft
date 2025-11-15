// 函数: sub_699a70
// 地址: 0x699a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != 0)
    struct thread::CCriticalLock::VTable* const var_1c_1 = &thread::CCriticalLock::`vftable'
    void* var_14_1 = arg1 + 0x54
    EnterCriticalSection(*(arg1 + 0x58) + 4)
    char var_18_1 = 1
    int32_t var_8_1 = 0
    int32_t* eax_5 = *(arg1 + 0x18)
    (*(*eax_5 + 0x48))(eax_5)
    int32_t* eax_6 = *(arg1 + 0x18)
    (*(*eax_6 + 0x34))(eax_6, 0)
    LeaveCriticalSection(*(arg1 + 0x58) + 4)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
