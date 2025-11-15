// 函数: sub_56f490
// 地址: 0x56f490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c6e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_24 = &thread::CCriticalLock::`vftable'
void* var_1c = arg1
char var_20 = 1
int32_t var_8_1 = 0
int32_t var_30_1 = arg2
int32_t var_34 = arg2
void* var_18
sub_44e4f0(arg1 + 0x10, &var_18, EnterCriticalSection(*(arg1 + 4) + 4))
int32_t result = LeaveCriticalSection(*(arg1 + 4) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
