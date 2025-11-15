// 函数: sub_5e01e0
// 地址: 0x5e01e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7417d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = GetCurrentThreadId()
eax_3.b = data_7fcbac == eax_3

if (data_7e1d50 != 0 && eax_3.b != 0)
    sub_6c52e0(arg1)
    enum MESSAGEBOX_RESULT eax_4
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void** var_14 = &data_7e70c0
EnterCriticalSection(data_7e70c4 + 4)
char var_18 = 1
int32_t var_8_1 = 0
sub_424db0(&data_7fd46c, arg1)
LeaveCriticalSection(data_7e70c4 + 4)
int32_t eax_9
eax_9.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
