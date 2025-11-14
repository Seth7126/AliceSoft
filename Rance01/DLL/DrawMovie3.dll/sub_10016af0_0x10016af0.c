// 函数: sub_10016af0
// 地址: 0x10016af0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100196e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_1000e6d0(arg1, 0x1001c3fc, "CSurfaceRenderer", 0, arg2)
int32_t var_4 = 0
*arg1 = &CSurfaceRenderer::`vftable'{for `CBaseVideoRenderer'}
arg1[3] = &CSurfaceRenderer::`vftable'{for `IBaseFilter'}
arg1[4] = &CSurfaceRenderer::`vftable'{for `IAMovieSetup'}
arg1[0x38] = &CSurfaceRenderer::`vftable'{for `IQualProp'}
arg1[0x39] = &CSurfaceRenderer::`vftable'{for `IQualityControl'}
arg1[0x58] = 0
arg1[0x59] = 0
void* eax_4 = sub_10001dc9(4)

if (eax_4 == 0)
    eax_4 = nullptr
else
    *eax_4 = &arg1[0x5a]

arg1[0x5a] = eax_4
arg1[0x5d] = 0
arg1[0x5e] = 0
arg1[0x5f] = 0
arg1[0x60].b = 0
arg1[0x61] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
