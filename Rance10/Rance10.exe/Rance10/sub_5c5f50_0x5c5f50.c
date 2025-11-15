// 函数: sub_5c5f50
// 地址: 0x5c5f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740113
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_3 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18 = eax_3
*eax_3 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_3[1])
arg1[1] = eax_3
int32_t var_8_1 = 0
void* var_18_1 = &arg1[2]
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_4 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_2 = eax_4
*eax_4 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_4[1])
arg1[3] = eax_4
var_8_1.b = 1
arg1[4] = 0
int32_t* var_18_3 = &arg1[4]
arg1[5] = 0
arg1[4] = sub_48a760()
arg1[6] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
