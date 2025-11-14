// 函数: sub_10016a30
// 地址: 0x10016a30
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

*arg1 = &CSurfaceRenderer::`vftable'{for `CBaseVideoRenderer'}
arg1[3] = &CSurfaceRenderer::`vftable'{for `IBaseFilter'}
arg1[4] = &CSurfaceRenderer::`vftable'{for `IAMovieSetup'}
arg1[0x38] = &CSurfaceRenderer::`vftable'{for `IQualProp'}
arg1[0x39] = &CSurfaceRenderer::`vftable'{for `IQualityControl'}
int32_t eax = arg1[0x5d]

if (eax != 0)
    int32_t var_8_1 = eax
    sub_10001d52()

int32_t var_8_2 = arg1[0x5a]
arg1[0x5d] = 0
arg1[0x5e] = 0
arg1[0x5f] = 0
sub_10001d52()
return sub_1000e740(arg1) __tailcall
