// 函数: sub_61d480
// 地址: 0x61d480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce168
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::ISoundBuffer::kiwi::CDirectMusicBuffer::VTable** esi = arg1
struct kiwi::ISoundBuffer::kiwi::CDirectMusicBuffer::VTable** var_10_1 = esi
*esi = &kiwi::CDirectMusicBuffer::`vftable'{for `kiwi::ISoundBuffer'}
int32_t var_4 = 8
sub_61db90(arg1)
HANDLE hEvent = esi[0x25]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(esi[0x25])
    esi[0x25] = 0

HANDLE hEvent_1 = esi[0x23]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(esi[0x23])
    esi[0x23] = 0

HANDLE hEvent_2 = esi[0x21]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    CloseHandle(esi[0x21])
    esi[0x21] = 0

esi[5] = 0
var_4.b = 7
int32_t* ecx = esi[0x2d]
esi[0x2c] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

var_4.b = 6
int32_t* ecx_1 = esi[0x2b]
esi[0x2a] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    (**ecx_1)(1)

var_4.b = 5
int32_t* ecx_2 = esi[0x29]
esi[0x28] = &thread::CCriticalSection::`vftable'

if (ecx_2 != 0)
    (**ecx_2)(1)

var_4.b = 4
int32_t* ecx_3 = esi[0x27]
esi[0x26] = &thread::CCriticalSection::`vftable'

if (ecx_3 != 0)
    (**ecx_3)(1)

HANDLE hEvent_3 = esi[0x25]
esi[0x24] = &thread::CEvent::`vftable'

if (hEvent_3 != 0)
    ResetEvent(hEvent_3)
    CloseHandle(esi[0x25])
    esi[0x25] = 0

HANDLE hEvent_4 = esi[0x23]
esi[0x22] = &thread::CEvent::`vftable'

if (hEvent_4 != 0)
    ResetEvent(hEvent_4)
    CloseHandle(esi[0x23])
    esi[0x23] = 0

HANDLE hEvent_5 = esi[0x21]
esi[0x20] = &thread::CEvent::`vftable'

if (hEvent_5 != 0)
    ResetEvent(hEvent_5)
    CloseHandle(esi[0x21])
    esi[0x21] = 0

BOOL hHandle = esi[0x1f]
esi[0x1e] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(esi[0x1f])
    esi[0x1f] = 0

esi[0x11] = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
fsbase->NtTib.ExceptionList = ExceptionList
return hHandle
