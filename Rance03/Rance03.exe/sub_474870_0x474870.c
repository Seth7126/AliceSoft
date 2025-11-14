// 函数: sub_474870
// 地址: 0x474870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9c66
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISoundPlayer::kiwi::CSoundPlayer::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISoundPlayer::kiwi::CSoundPlayer::VTable** var_10_1 = arg1
*arg1 = &kiwi::CSoundPlayer::`vftable'{for `ISoundPlayer'}
arg1[1] = 1
arg1[2] = arg3
arg1[3].b = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &thread::CThread::`vftable'
arg1[8] = 0
int32_t var_4 = 0
arg1[9] = &thread::CEvent::`vftable'
arg1[0xa] = 0
var_4.b = 1
arg1[0xb] = arg2
HANDLE hEvent = arg1[0xa]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0xa])
    arg1[0xa] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg1[0xa] = hEvent_1

if (hEvent_1 == 0)
    sub_455870("CSoundPlayer::\n")
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

ResetEvent(hEvent_1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
