// 函数: sub_406310
// 地址: 0x406310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &thread::CWorkerThreadManager::`vftable'
sub_4063f0(arg1)
HANDLE hHandle = arg1[0xb]
arg1[0xa] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0xb])
    arg1[0xb] = 0

HANDLE hEvent = arg1[9]
arg1[8] = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[9])
    arg1[9] = 0

HANDLE hEvent_1 = arg1[7]
arg1[6] = &thread::CEvent::`vftable'

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[7])
    arg1[7] = 0

sub_406910(&arg1[3])
int32_t result = sub_403160(arg1[3], 1, 0xc)
arg1[1] = &thread::CCriticalSection::`vftable'
int32_t* ecx_1 = arg1[2]

if (ecx_1 != 0)
    result = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
