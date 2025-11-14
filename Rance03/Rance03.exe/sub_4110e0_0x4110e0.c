// 函数: sub_4110e0
// 地址: 0x4110e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3a46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IJaffaDebugPlugin::dpanalysis::CApp::VTable** var_10 = arg1
arg1[1] = &IVMTraceCallback::`vftable'
arg1[2] = &dpanalysis::IApp::`vftable'
*arg1 = &dpanalysis::CApp::`vftable'{for `IJaffaDebugPlugin'}
arg1[1] = &dpanalysis::CApp::`vftable'{for `IVMTraceCallback'}
arg1[2] = &dpanalysis::CApp::`vftable'{for `dpanalysis::IApp'}
arg1[3] = 1
arg1[4] = 0
arg1[5] = &dpanalysis::CFuncStackInfo::`vftable'
__builtin_memset(&arg1[6], 0, 0x28)
int32_t var_4 = 0
arg1[0x10] = &dpanalysis::CDebugVM::`vftable'
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16].b = 0
var_4.b = 1
arg1[0x17] = 0
arg1[0x18] = 0xffffffff
arg1[0x19] = 0xffffffff
arg1[0x1a] = 0
arg1[0x1b] = 0
sub_4036b0(&arg1[0x1c], &arg1[0x10])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
