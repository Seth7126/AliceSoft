// 函数: sub_4d9ee0
// 地址: 0x4d9ee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 =
    &partsengine::CFlatStopMotionData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
arg1[9] = 0
arg1[8] = 0
sub_403490(&arg1[2], 0x75d06f, nullptr)
int32_t eax_3 = arg1[7]

if (eax_3 u>= 0x10)
    eax_3 = sub_403160(arg1[2], eax_3 + 1, 1)

arg1[7] = 0xf
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:0)
    arg1[2].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

char* eax_5 = arg1[2]
*eax_5 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
