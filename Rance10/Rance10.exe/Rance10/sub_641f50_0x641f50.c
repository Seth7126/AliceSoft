// 函数: sub_641f50
// 地址: 0x641f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7463e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_7fcbc4
struct thread::CCriticalLock::VTable* const var_20 = &thread::CCriticalLock::`vftable'
void* var_18 = esi + 0x174
EnterCriticalSection(*(esi + 0x178) + 4)
char var_1c = 1
int32_t var_8_1 = 0

if (esi + 0x158 != arg1)
    sub_403590(esi + 0x158, arg1, 0, 0xffffffff)

int32_t result = LeaveCriticalSection(*(esi + 0x178) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
