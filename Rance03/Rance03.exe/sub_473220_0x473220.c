// 函数: sub_473220
// 地址: 0x473220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9aeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct thread::CCriticalObject<class std::list<class kiwi::CSoundChannel*> >::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalObject<class std::list<class kiwi::CSoundChannel*> >::VTable** var_10_1 =
    arg1
*arg1 = &thread::CCriticalObject<class std::list<class kiwi::CSoundChannel*> >::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[1] = sub_441d20(nullptr, nullptr)
int32_t var_4 = 0
arg1[3] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_4 = sub_69adc6(0x1c)

if (eax_4 == 0)
    arg1[4] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

*eax_4 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_4[1])
arg1[4] = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
