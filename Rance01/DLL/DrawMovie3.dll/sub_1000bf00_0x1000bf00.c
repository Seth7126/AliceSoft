// 函数: sub_1000bf00
// 地址: 0x1000bf00
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_1001900e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct CBaseFilter::CBaseRenderer::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CBaseFilter::CBaseRenderer::VTable** var_10_1 = arg1
sub_10010f10(arg1, arg3, arg4, &arg1[0x1f], arg2)
int32_t var_4 = 0
*arg1 = &CBaseRenderer::`vftable'{for `CBaseFilter'}
arg1[3] = &CBaseRenderer::`vftable'{for `IBaseFilter'}
arg1[4] = &CBaseRenderer::`vftable'{for `IAMovieSetup'}
arg1[0x14] = 0
sub_10011010(&arg1[0x15], 0, arg5)
var_4.b = 1
sub_10011010(&arg1[0x16], 1, arg5)
var_4.b = 2
sub_10011010(&arg1[0x17], 1, arg5)
__builtin_memset(&arg1[0x18], 0, 0x1c)
InitializeCriticalSection(&arg1[0x1f])
InitializeCriticalSection(&arg1[0x25])
arg1[0x2b] = 0
arg1[0x2c] = 1
arg1[0x2d] = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
InitializeCriticalSection(&arg1[0x31])

if (*arg5 s>= 0)
    SetEvent(arg1[0x17])

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
