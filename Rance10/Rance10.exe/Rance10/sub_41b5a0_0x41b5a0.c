// 函数: sub_41b5a0
// 地址: 0x41b5a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72898a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
*arg1 =
    &dplogviewer::CDPLogViewer::`vftable'{for `common::SuicideRefCounter<class IJaffaDebugPlugin>'}
arg1[2] = arg2
arg1[3] = 0
struct common::SuicideRefCounter<class IOutputLog>::dplogviewer::CDPLog::VTable** eax_4 =
    sub_6e810c(0x18)
arg2 = eax_4
int32_t var_8_1 = 0
eax_4[1] = 1
*eax_4 = &dplogviewer::CDPLog::`vftable'{for `common::SuicideRefCounter<class IOutputLog>'}
eax_4[2] = 0
eax_4[3] = 0
eax_4[4] = 0
var_8_1.b = 1
eax_4[5] = 0
eax_4[5] = sub_41ae80(eax_4, "Asra")
arg1[4] = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
