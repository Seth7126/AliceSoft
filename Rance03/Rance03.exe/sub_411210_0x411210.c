// 函数: sub_411210
// 地址: 0x411210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3a86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IJaffaDebugPlugin::dpanalysis::CApp::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IJaffaDebugPlugin::dpanalysis::CApp::VTable** var_10_1 = arg1
*arg1 = &dpanalysis::CApp::`vftable'{for `IJaffaDebugPlugin'}
arg1[1] = &dpanalysis::CApp::`vftable'{for `IVMTraceCallback'}
arg1[2] = &dpanalysis::CApp::`vftable'{for `dpanalysis::IApp'}
int32_t var_4 = 1
sub_403a10(&arg1[0x1c])
arg1[0x10] = &dpanalysis::CDebugVM::`vftable'
sub_4143d0(&arg1[5])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
