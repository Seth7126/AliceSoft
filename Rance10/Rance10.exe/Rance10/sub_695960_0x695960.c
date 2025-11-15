// 函数: sub_695960
// 地址: 0x695960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734218
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
(*(*arg1 + 0x14))(__security_cookie ^ &__saved_ebp)
int32_t* ecx = arg1[7]
arg1[0xd] = 0
arg1[0x16] = 0

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[7] = 0

int32_t* ecx_1 = arg1[0x11]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    arg1[0x11] = 0

struct thread::CCriticalLock::VTable* const var_1c = &thread::CCriticalLock::`vftable'
void* var_14 = &arg1[0x1f]
EnterCriticalSection(arg1[0x20] + 4)
char var_18 = 1
int32_t var_8_1 = 0
int32_t* ecx_2 = arg1[6]

if (ecx_2 != 0)
    (*(*ecx_2 + 8))(ecx_2)
    arg1[6] = 0

int32_t var_8_2 = 0xffffffff
LeaveCriticalSection(arg1[0x20] + 4)
(*(*arg1 + 0x2c))(0)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
