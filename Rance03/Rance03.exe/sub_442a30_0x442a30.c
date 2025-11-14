// 函数: sub_442a30
// 地址: 0x442a30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b69d4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct apeg::CApegPlayer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct apeg::CApegPlayer::VTable** var_10_1 = arg1
*arg1 = &apeg::CApegPlayer::`vftable'
arg1[1] = &thread::CThread::`vftable'
arg1[2] = 0
int32_t var_4 = 0
arg1[3] = &thread::CEvent::`vftable'
arg1[4] = 0
var_4.b = 1
arg1[5] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[6] = edi
var_4.b = 2
sub_441f90(&arg1[7])
int32_t (__fastcall* var_20_2)(struct apeg::CDecodedPicture::VTable** arg1) = sub_443d90
var_4.b = 3
arg1[0x10b] = 0xffffffff
arg1[0x10c] = 0
arg1[0x10d] = 0
sub_69b2ba(&arg1[0x10e], 0x34, 0x1e, sub_443d10)
var_4.b = 4
arg1[0x294] = 0
arg1[0x295] = 0
arg1[0x294] = sub_4203c0()
HANDLE hEvent = arg1[4]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[4])
    arg1[4] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg1[4] = hEvent_1

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
