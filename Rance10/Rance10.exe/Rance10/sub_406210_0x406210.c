// 函数: sub_406210
// 地址: 0x406210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CWorkerThreadManager::VTable** var_14 = arg1
*arg1 = &thread::CWorkerThreadManager::`vftable'
struct thread::CCriticalSection::VTable** var_18 = &arg1[1]
arg1[1] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_3 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_1 = eax_3
*eax_3 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_3[1])
struct thread::CCriticalSection::CImpl::VTable** var_18_2 = eax_3
arg1[2] = eax_3
int32_t var_8_1 = 0
void* var_1c = &arg1[3]
arg1[3] = 0
arg1[4] = 0
arg1[3] = sub_406950(nullptr, nullptr)
arg1[5] = 0
arg1[6] = &thread::CEvent::`vftable'
arg1[7] = 0
arg1[8] = &thread::CEvent::`vftable'
arg1[9] = 0
arg1[0xa] = &thread::CThread::`vftable'
arg1[0xb] = 0
arg1[0xc].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
