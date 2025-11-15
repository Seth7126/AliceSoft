// 函数: sub_5c7480
// 地址: 0x5c7480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740258
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = 0
arg1[1] = 0
*arg1 = sub_461990()
int32_t var_8_1 = 0
void* var_18 = &arg1[2]
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_4 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_1 = eax_4
*eax_4 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_4[1])
arg1[3] = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
