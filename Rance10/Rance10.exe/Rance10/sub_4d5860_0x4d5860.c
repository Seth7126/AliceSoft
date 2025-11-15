// 函数: sub_4d5860
// 地址: 0x4d5860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73413e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4063f0(arg1 + 4)
int32_t* ecx_1 = *(arg1 + 0x38)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x38) = 0

struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = arg1 + 0x40
EnterCriticalSection(*(arg1 + 0x44) + 4)
char var_1c = 1
int32_t var_8_1 = 0
int32_t* esi_1 = *(arg1 + 0x48)
void* i = *esi_1
void* i_1 = i

for (; i != esi_1; i = i_1)
    (*(**(i + 0x28) + 4))(eax_2)
    sub_429080(&i_1)

var_8_1.b = 1
sub_432200(*(*(arg1 + 0x48) + 4))
void* eax_8 = *(arg1 + 0x48)
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *(arg1 + 0x48)
*eax_9 = eax_9
void* eax_10 = *(arg1 + 0x48)
*(eax_10 + 8) = eax_10
*(arg1 + 0x4c) = 0
int32_t result = LeaveCriticalSection(*(arg1 + 0x44) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
