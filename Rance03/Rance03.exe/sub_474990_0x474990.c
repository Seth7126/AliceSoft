// 函数: sub_474990
// 地址: 0x474990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9ca6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISoundPlayer::kiwi::CSoundPlayer::VTable** esi = arg1
struct ISoundPlayer::kiwi::CSoundPlayer::VTable** var_10_1 = esi
*esi = &kiwi::CSoundPlayer::`vftable'{for `ISoundPlayer'}
int32_t var_4 = 1
sub_474c90(arg1)
(*esi)->vFunc_5(eax_2)
(*(esi[0xb]->vFunc_0 + 0xc))()
(*(esi[0xb]->vFunc_0 + 4))()
HANDLE hEvent = esi[0xa]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(esi[0xa])
    esi[0xa] = 0

HANDLE hEvent_1 = esi[0xa]
esi[9] = &thread::CEvent::`vftable'

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(esi[0xa])
    esi[0xa] = 0

BOOL hHandle = esi[8]
esi[7] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(esi[8])
    esi[8] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hHandle
