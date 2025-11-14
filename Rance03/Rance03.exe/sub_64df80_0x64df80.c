// 函数: sub_64df80
// 地址: 0x64df80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cea84
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** var_10_1 = arg1
arg1[1] = &IJaffaDebugPlugin::`vftable'{for `IInterface'}
*arg1 = &dplogviewer::COutputLog::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &dplogviewer::COutputLog::`vftable'{for `IJaffaDebugPlugin'}
arg1[2] = 1
arg1[3] = &win32only::CWindow::`vftable'
int32_t* eax_3 = sub_69adc6(0x88)
int32_t* eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_698990(eax_3)

arg1[4] = eax_4
int32_t var_4 = 0
arg1[5] = 0
sub_64f070(&arg1[6])
arg1[0x50] = 0
arg1[0x51] = 0
arg1[0x52] = 0
var_4.b = 2
arg1[0x53] = sub_64e610(arg1, "Asra")
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
