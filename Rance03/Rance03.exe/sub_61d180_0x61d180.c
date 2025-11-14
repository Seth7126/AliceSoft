// 函数: sub_61d180
// 地址: 0x61d180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce0c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::ISoundBuffer::kiwi::CDirectMusicBuffer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::ISoundBuffer::kiwi::CDirectMusicBuffer::VTable** var_10_1 = arg1
arg1[3] = arg4
arg1[5] = arg2
*arg1 = &kiwi::CDirectMusicBuffer::`vftable'{for `kiwi::ISoundBuffer'}
arg1[1] = 1
arg1[2] = 0
arg1[4] = 1
arg1[6] = 0
arg1[7] = 0
arg1[8] = arg3
__builtin_memset(&arg1[9], 0, 0x20)
arg1[0x11] = &kiwi::CWaveFormat::`vftable'{for `IWaveFormat'}
arg1[0x12] = 1
__builtin_memset(&arg1[0x13], 0, 0x18)
int32_t var_4 = 0
arg1[0x1c].b = 0
arg1[0x1d] = 0
arg1[0x1e] = &thread::CThread::`vftable'
arg1[0x1f] = 0
arg1[0x20] = &thread::CEvent::`vftable'
arg1[0x21] = 0
arg1[0x22] = &thread::CEvent::`vftable'
arg1[0x23] = 0
arg1[0x24] = &thread::CEvent::`vftable'
arg1[0x25] = 0
var_4.b = 4
arg1[0x26] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[0x27] = edi
var_4.b = 5
arg1[0x28] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi_1 = sub_69adc6(0x1c)

if (edi_1 == 0)
    edi_1 = nullptr
else
    *edi_1 = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi_1[1])

arg1[0x29] = edi_1
var_4.b = 6
arg1[0x2a] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi_2 = sub_69adc6(0x1c)

if (edi_2 == 0)
    edi_2 = nullptr
else
    *edi_2 = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi_2[1])

arg1[0x2b] = edi_2
var_4.b = 7
arg1[0x2c] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi_3 = sub_69adc6(0x1c)

if (edi_3 == 0)
    edi_3 = nullptr
else
    *edi_3 = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi_3[1])

arg1[0x2d] = edi_3
var_4.b = 8
HANDLE hEvent = arg1[0x21]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x21])
    arg1[0x21] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg1[0x21] = hEvent_1

if (hEvent_1 == 0)
    sub_455870("CDirectMusicBuffer::\n")
else
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = arg1[0x23]
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(arg1[0x23])
        arg1[0x23] = 0
    
    HANDLE hEvent_3 = CreateEventA(nullptr, 0, 0, nullptr)
    arg1[0x23] = hEvent_3
    
    if (hEvent_3 == 0)
        sub_455870("CDirectMusicBuffer::\n")
    else
        ResetEvent(hEvent_3)
        
        if (sub_5f4280(&arg1[0x24]) == 0)
            sub_455870("CDirectMusicBuffer::\n")

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
