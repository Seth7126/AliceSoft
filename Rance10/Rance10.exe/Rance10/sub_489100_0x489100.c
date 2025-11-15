// 函数: sub_489100
// 地址: 0x489100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &kiwi::CSoundChannel::`vftable'
sub_489590(arg1)
(*(arg1[1]->vFunc_0 + 0x14))(eax_2)
(*(arg1[1]->vFunc_0 + 0xc))()
(*(arg1[1]->vFunc_0 + 4))()
HANDLE hEvent = arg1[0x13]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x13])
    arg1[0x13] = 0

HANDLE hEvent_1 = arg1[0x13]
arg1[0x12] = &thread::CEvent::`vftable'

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)
    CloseHandle(arg1[0x13])
    arg1[0x13] = 0

HANDLE hHandle = arg1[0x11]
arg1[0x10] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0x11])
    arg1[0x11] = 0

int32_t eax_7 = arg1[0xb]

if (eax_7 u>= 0x10)
    eax_7 = sub_403160(arg1[6], eax_7 + 1, 1)

arg1[0xb] = 0xf
bool cond:0 = arg1[0xb] u< 0x10
arg1[0xa] = 0

if (cond:0)
    arg1[6].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7

char* eax_8 = arg1[6]
*eax_8 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
