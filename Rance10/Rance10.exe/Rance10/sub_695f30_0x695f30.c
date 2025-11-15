// 函数: sub_695f30
// 地址: 0x695f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = arg1 + 0x7c
EnterCriticalSection(*(arg1 + 0x80) + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x18)

if (ecx != 0)
    (*(*ecx + 0x48))(ecx)

LeaveCriticalSection(*(arg1 + 0x80) + 4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
