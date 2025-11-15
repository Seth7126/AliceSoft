// 函数: sub_4356c0
// 地址: 0x4356c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a894
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct apeg::CApegPlayer::VTable** var_14 = arg1
*arg1 = &apeg::CApegPlayer::`vftable'
arg1[1] = &thread::CThread::`vftable'
arg1[2] = 0
int32_t var_8_1 = 0
arg1[3] = &thread::CEvent::`vftable'
arg1[4] = 0
var_8_1.b = 1
void* var_18 = &arg1[5]
arg1[5] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_3 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_18_1 = eax_3
*eax_3 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_3[1])
arg1[6] = eax_3
var_8_1.b = 2
sub_433f50(&arg1[7])
void (__fastcall* var_2c_1)(void* arg1) = sub_436e10
var_8_1.b = 3
arg1[0x10b] = 0xffffffff
arg1[0x10c] = 0
arg1[0x10d] = 0
arg1[0x10e] = 0
arg1[0x10f].b = 0
arg1[0x110] = 0
`eh vector constructor iterator'(&arg1[0x111], 0x30, 0x1e, sub_436db0)
var_8_1.b = 4
void* var_18_2 = &arg1[0x279]
arg1[0x279] = 0
arg1[0x27a] = 0
arg1[0x279] = sub_42e780()
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
