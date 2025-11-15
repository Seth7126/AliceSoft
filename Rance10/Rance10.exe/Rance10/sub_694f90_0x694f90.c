// 函数: sub_694f90
// 地址: 0x694f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747ce9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectMusicBuffer::VTable** 
    var_30 = arg1
arg1[1] = 1
*arg1 =
    &kiwi::CDirectMusicBuffer::`vftable'{for `common::SuicideRefCounter<class kiwi::ISoundBuffer>'}
arg1[2] = 0
arg1[3] = arg4
arg1[5] = arg2
arg1[4] = 1
arg1[6] = 0
arg1[7] = 0
arg1[8] = arg3
__builtin_memset(&arg1[9], 0, 0x31)
arg1[0x16] = 0
struct common::SuicideRefCounter<class kiwi::ISoundBuffer>::kiwi::CDirectMusicBuffer::VTable** 
    var_38 = arg1
arg1[0x17] = &thread::CThread::`vftable'
arg1[0x18] = 0
int32_t var_8_1 = 0
arg1[0x19] = &thread::CEvent::`vftable'
arg1[0x1a] = 0
arg1[0x1b] = &thread::CEvent::`vftable'
arg1[0x1c] = 0
arg1[0x1d] = &thread::CEvent::`vftable'
arg1[0x1e] = 0
var_8_1.b = 3
void* var_30_1 = &arg1[0x1f]
arg1[0x1f] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_6 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_30_2 = eax_6
*eax_6 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_6[1])
arg1[0x20] = eax_6
var_8_1.b = 4
void* var_30_3 = &arg1[0x21]
arg1[0x21] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_8 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_30_4 = eax_8
*eax_8 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_8[1])
arg1[0x22] = eax_8
var_8_1.b = 5
void* var_30_5 = &arg1[0x23]
arg1[0x23] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_10 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_30_6 = eax_10
*eax_10 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_10[1])
arg1[0x24] = eax_10
var_8_1.b = 6
void* var_30_7 = &arg1[0x25]
arg1[0x25] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_12 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_30_8 = eax_12
*eax_12 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_12[1])
arg1[0x26] = eax_12
var_8_1.b = 7
HANDLE hEvent = arg1[0x1a]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x1a])
    arg1[0x1a] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg1[0x1a] = hEvent_1
char var_2c

if (hEvent_1 == 0)
    int32_t var_18 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, "CDirectMusicBuffer::\n", 0x36)
    var_8_1.b = 8
label_695246:
    sub_45aae0(&var_2c)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
else
    ResetEvent(hEvent_1)
    HANDLE hEvent_2 = arg1[0x1c]
    
    if (hEvent_2 != 0)
        ResetEvent(hEvent_2)
        CloseHandle(arg1[0x1c])
        arg1[0x1c] = 0
    
    HANDLE hEvent_3 = CreateEventA(nullptr, 0, 0, nullptr)
    arg1[0x1c] = hEvent_3
    
    if (hEvent_3 == 0)
        sub_403360(&var_2c, "CDirectMusicBuffer::\n")
        var_8_1.b = 9
        goto label_695246
    
    ResetEvent(hEvent_3)
    
    if (sub_406050(&arg1[0x1d]) == 0)
        sub_403360(&var_2c, "CDirectMusicBuffer::\n")
        var_8_1.b = 0xa
        sub_45aae0(&var_2c)
        sub_403320(&var_2c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
