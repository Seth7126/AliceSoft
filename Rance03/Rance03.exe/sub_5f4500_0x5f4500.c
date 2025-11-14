// 函数: sub_5f4500
// 地址: 0x5f4500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc0db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct thread::CWorkerThreadManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CWorkerThreadManager::VTable** var_10_1 = arg1
*arg1 = &thread::CWorkerThreadManager::`vftable'
arg1[1] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[2] = edi
int32_t var_4 = 0
arg1[3] = 0
arg1[4] = 0
arg1[3] = sub_441d20(nullptr, nullptr)
arg1[5] = &thread::CEvent::`vftable'
arg1[6] = 0
arg1[7] = &thread::CEvent::`vftable'
arg1[8] = 0
arg1[9] = &thread::CThread::`vftable'
arg1[0xa] = 0
arg1[0xb].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
