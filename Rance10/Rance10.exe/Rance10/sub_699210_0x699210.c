// 函数: sub_699210
// 地址: 0x699210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x1c)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0x1c) = 0

struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = arg1 + 0x54
EnterCriticalSection(*(arg1 + 0x58) + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    *(arg1 + 0x18) = 0

int32_t var_8_2 = 0xffffffff
LeaveCriticalSection(*(arg1 + 0x58) + 4)
int32_t* ecx_2 = *(arg1 + 0x74)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    *(arg1 + 0x74) = 0

*(arg1 + 0x2c) = 0
int32_t result
result.b = 1
*(arg1 + 0x30) = 0
*(arg1 + 0x24) = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return result
