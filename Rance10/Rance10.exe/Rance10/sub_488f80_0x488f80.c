// 函数: sub_488f80
// 地址: 0x488f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f0a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundChannel::VTable** var_34 = arg1
arg1[1] = arg2
arg1[2] = arg3
int32_t eax_4
eax_4.b = arg4
arg1[3].b = eax_4.b
void* eax_5 = &arg1[6]
*arg1 = &kiwi::CSoundChannel::`vftable'
arg1[4] = 0
arg1[5] = 0x3f800000
*(eax_5 + 0x14) = 0xf
*(eax_5 + 0x10) = 0
struct kiwi::CSoundChannel::VTable** var_38 = arg1

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

*eax_5 = 0
int32_t var_8_1 = 0
arg1[0xc].b = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = &thread::CThread::`vftable'
arg1[0x11] = 0
arg1[0x12] = &thread::CEvent::`vftable'
arg1[0x13] = 0
var_8_1.b = 2
HANDLE hEvent = arg1[0x13]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[0x13])
    arg1[0x13] = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
arg1[0x13] = hEvent_1

if (hEvent_1 == 0)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, "CSoundChannel::\n", 0x35)
    var_8_1.b = 3
    sub_45aae0(&var_30)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
else
    ResetEvent(hEvent_1)
    int32_t ecx
    ecx.b = arg1[3].b == 0
    arg1[4] = ecx + 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
