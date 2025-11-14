// 函数: sub_61ed10
// 地址: 0x61ed10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce342
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::ISoundBuffer::kiwi::CDirectSoundBuffer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::ISoundBuffer::kiwi::CDirectSoundBuffer::VTable** var_10_1 = arg1
arg1[3] = arg4
arg1[4] = arg3
*arg1 = &kiwi::CDirectSoundBuffer::`vftable'{for `kiwi::ISoundBuffer'}
arg1[1] = 1
arg1[2] = 0
arg1[5] = arg2
arg1[6] = 0
arg1[7] = 0
arg1[8] = 1
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = &thread::CThread::`vftable'
arg1[0xe] = 0
int32_t var_4 = 0
arg1[0xf] = &thread::CEvent::`vftable'
arg1[0x10] = 0
arg1[0x11] = &thread::CEvent::`vftable'
arg1[0x12] = 0
var_4.b = 2
arg1[0x13] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[0x14] = edi
arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
arg1[0x1b] = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
arg1[0x1c] = 1
__builtin_memset(&arg1[0x1d], 0, 0x18)
var_4.b = 5
HANDLE hEvent = arg1[0x10]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x10])
    arg1[0x10] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg1[0x10] = hEvent_1

if (hEvent_1 == 0)
    sub_455870("CDirectSoundBuffer::\n")
else
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = arg1[0x12]
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(arg1[0x12])
        arg1[0x12] = 0
    
    HANDLE hEvent_3 = CreateEventA(nullptr, 0, 0, nullptr)
    arg1[0x12] = hEvent_3
    
    if (hEvent_3 == 0)
        sub_455870("CDirectSoundBuffer::\n")
    else
        ResetEvent(hEvent_3)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
