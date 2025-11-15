// 函数: sub_6952c0
// 地址: 0x6952c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectMusicBuffer::VTable** 
    esi = arg1
*esi =
    &kiwi::CDirectMusicBuffer::`vftable'{for `common::SuicideRefCounter<class kiwi::ISoundBuffer>'}
sub_695960(arg1)
HANDLE hEvent = esi[0x1e]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(esi[0x1e])
    esi[0x1e] = 0

HANDLE hEvent_1 = esi[0x1c]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(esi[0x1c])
    esi[0x1c] = 0

HANDLE hEvent_2 = esi[0x1a]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    CloseHandle(esi[0x1a])
    esi[0x1a] = 0

esi[5] = 0
esi[0x25] = &thread::CCriticalSection::`vftable'
int32_t* ecx = esi[0x26]

if (ecx != 0)
    (**ecx)(1)

esi[0x23] = &thread::CCriticalSection::`vftable'
int32_t* ecx_1 = esi[0x24]

if (ecx_1 != 0)
    (**ecx_1)(1)

esi[0x21] = &thread::CCriticalSection::`vftable'
int32_t* ecx_2 = esi[0x22]

if (ecx_2 != 0)
    (**ecx_2)(1)

esi[0x1f] = &thread::CCriticalSection::`vftable'
int32_t* ecx_3 = esi[0x20]

if (ecx_3 != 0)
    (**ecx_3)(1)

HANDLE hEvent_3 = esi[0x1e]
esi[0x1d] = &thread::CEvent::`vftable'

if (hEvent_3 != 0)
    ResetEvent(hEvent_3)
    CloseHandle(esi[0x1e])
    esi[0x1e] = 0

HANDLE hEvent_4 = esi[0x1c]
esi[0x1b] = &thread::CEvent::`vftable'

if (hEvent_4 != 0)
    ResetEvent(hEvent_4)
    CloseHandle(esi[0x1c])
    esi[0x1c] = 0

HANDLE hEvent_5 = esi[0x1a]
esi[0x19] = &thread::CEvent::`vftable'

if (hEvent_5 != 0)
    ResetEvent(hEvent_5)
    CloseHandle(esi[0x1a])
    esi[0x1a] = 0

BOOL hHandle = esi[0x18]
esi[0x17] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(esi[0x18])
    esi[0x18] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hHandle
