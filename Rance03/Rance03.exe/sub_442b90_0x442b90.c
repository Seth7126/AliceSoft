// 函数: sub_442b90
// 地址: 0x442b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6a42
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct apeg::CApegPlayer::VTable** var_14 = arg1
*arg1 = &apeg::CApegPlayer::`vftable'
int32_t var_4 = 5
sub_442cb0(arg1)
HANDLE hEvent = arg1[4]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[4])
    arg1[4] = 0

int32_t** eax_3 = arg1[0x294]
void var_10
sub_4200d0(&arg1[0x294], &var_10, *eax_3, eax_3)
j__free(arg1[0x294])
var_4.b = 3
`eh vector vbase constructor iterator'(&arg1[0x10e], 0x34, 0x1e, sub_443d90)
var_4.b = 2
sub_4420b0(&arg1[7])
var_4.b = 1
int32_t* ecx_2 = arg1[6]
arg1[5] = &thread::CCriticalSection::`vftable'

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
