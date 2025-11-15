// 函数: sub_44b360
// 地址: 0x44b360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72aa6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::cgmanager::CCGCache::VTable** var_14 = arg1
arg1[1] = 1
*arg1 = &cgmanager::CCGCache::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
void* var_18 = &arg1[2]
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_3 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_1 = eax_3
*eax_3 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_3[1])
arg1[3] = eax_3
int32_t var_8_1 = 0
void* var_18_2 = &arg1[4]
arg1[4] = 0
arg1[5] = 0
arg1[4] = sub_44b8b0(nullptr, nullptr)
arg1[7] = arg2
arg1[6] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
