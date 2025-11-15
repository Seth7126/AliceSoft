// 函数: sub_435850
// 地址: 0x435850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct apeg::CApegPlayer::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &apeg::CApegPlayer::`vftable'
sub_435960(arg1)
HANDLE hEvent = arg1[4]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[4])
    arg1[4] = 0

int32_t** eax_3 = arg1[0x279]
sub_4346e0(&arg1[0x279], &var_14, *eax_3, eax_3)
sub_403160(arg1[0x279], 1, 0x18)
`eh vector vbase constructor iterator'(&arg1[0x111], 0x30, 0x1e, sub_436e10)
sub_434080(&arg1[7])
arg1[5] = &thread::CCriticalSection::`vftable'
int32_t* ecx_2 = arg1[6]

if (ecx_2 != 0)
    (**ecx_2)(1)

HANDLE hEvent_1 = arg1[4]
arg1[3] = &thread::CEvent::`vftable'

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[4])
    arg1[4] = 0

BOOL hHandle = arg1[2]
arg1[1] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(arg1[2])
    arg1[2] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hHandle
