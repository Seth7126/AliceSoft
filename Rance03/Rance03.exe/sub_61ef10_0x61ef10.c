// 函数: sub_61ef10
// 地址: 0x61ef10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce3a2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::ISoundBuffer::kiwi::CDirectSoundBuffer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::ISoundBuffer::kiwi::CDirectSoundBuffer::VTable** var_10_1 = arg1
*arg1 = &kiwi::CDirectSoundBuffer::`vftable'{for `kiwi::ISoundBuffer'}
int32_t var_4 = 5
int32_t* ecx = arg1[7]

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    arg1[7] = 0

int32_t* ecx_1 = arg1[6]

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    arg1[6] = 0

arg1[0xb] = 0
arg1[0xc] = 0
arg1[9] = 0
HANDLE hEvent = arg1[0x12]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x12])
    arg1[0x12] = 0

HANDLE hEvent_1 = arg1[0x10]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[0x10])
    arg1[0x10] = 0

arg1[0x1b] = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}

if (arg1[0x1a] u>= 0x10)
    j__free(arg1[0x15])

arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
var_4.b = 2
int32_t* ecx_2 = arg1[0x14]
arg1[0x13] = &thread::CCriticalSection::`vftable'

if (ecx_2 != 0)
    (**ecx_2)(1)

HANDLE hEvent_2 = arg1[0x12]
arg1[0x11] = &thread::CEvent::`vftable'

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)
    CloseHandle(arg1[0x12])
    arg1[0x12] = 0

HANDLE hEvent_3 = arg1[0x10]
arg1[0xf] = &thread::CEvent::`vftable'

if (hEvent_3 != 0)
    ResetEvent(hEvent_3)
    CloseHandle(arg1[0x10])
    arg1[0x10] = 0

BOOL hHandle = arg1[0xe]
arg1[0xd] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(arg1[0xe])
    arg1[0xe] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hHandle
