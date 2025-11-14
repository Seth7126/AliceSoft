// 函数: sub_5f45f0
// 地址: 0x5f45f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc137
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct thread::CWorkerThreadManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CWorkerThreadManager::VTable** var_10_1 = arg1
*arg1 = &thread::CWorkerThreadManager::`vftable'
int32_t var_4 = 4
sub_5f46d0(arg1)
HANDLE hHandle = arg1[0xa]
arg1[9] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0xa])
    arg1[0xa] = 0

HANDLE hEvent = arg1[8]
arg1[7] = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[8])
    arg1[8] = 0

HANDLE hEvent_1 = arg1[6]
arg1[5] = &thread::CEvent::`vftable'

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[6])
    arg1[6] = 0

int32_t result = sub_441ce0(&arg1[3])
int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = arg1[2]
arg1[1] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    result = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
