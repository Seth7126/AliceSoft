// 函数: sub_698e10
// 地址: 0x698e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7483b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectSoundBuffer::VTable** 
    var_48 = arg1
arg1[1] = 1
arg1[3] = arg4
arg1[4] = arg3
*arg1 =
    &kiwi::CDirectSoundBuffer::`vftable'{for `common::SuicideRefCounter<class kiwi::ISoundBuffer>'}
arg1[2] = 0
arg1[5] = arg2
arg1[6] = 0
arg1[7] = 0
arg1[8] = 1
arg1[9] = 0xffffffff
arg1[0xa] = 0xffffffff
arg1[0xb] = 0
arg1[0xc] = 0
struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectSoundBuffer::VTable** 
    var_4c = arg1
arg1[0xd] = 0
arg1[0xe].b = 0
int32_t var_8_1 = 0
arg1[0xf] = &thread::CThread::`vftable'
arg1[0x10] = 0
arg1[0x11] = &thread::CEvent::`vftable'
arg1[0x12] = 0
arg1[0x13] = &thread::CEvent::`vftable'
arg1[0x14] = 0
var_8_1.b = 3
void* var_48_1 = &arg1[0x15]
arg1[0x15] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_6 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_48_2 = eax_6
*eax_6 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_6[1])
arg1[0x16] = eax_6
void* eax_8 = &arg1[0x17]
*(eax_8 + 0x14) = 0xf
*(eax_8 + 0x10) = 0

if (*(eax_8 + 0x14) u>= 0x10)
    eax_8 = *eax_8

*eax_8 = 0
var_8_1.b = 5
arg1[0x1d] = 0
HANDLE hEvent = arg1[0x12]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x12])
    arg1[0x12] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg1[0x12] = hEvent_1

if (hEvent_1 == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "CDirectSoundBuffer::\n", 0x36)
    var_8_1.b = 6
    sub_45aae0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        int32_t var_60_8 = 1
        sub_403160(var_2c.d, var_18_1 + 1, 1)
else
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = arg1[0x14]
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(arg1[0x14])
        arg1[0x14] = 0
    
    HANDLE hEvent_3 = CreateEventA(nullptr, 0, 0, nullptr)
    arg1[0x14] = hEvent_3
    
    if (hEvent_3 == 0)
        void* var_44
        sub_403360(&var_44, "CDirectSoundBuffer::\n")
        var_8_1.b = 7
        sub_45aae0(&var_44)
        int32_t var_30
        
        if (var_30 u>= 0x10)
            int32_t var_60_7 = 1
            sub_403160(var_44, var_30 + 1, 1)
    else
        ResetEvent(hEvent_3)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
