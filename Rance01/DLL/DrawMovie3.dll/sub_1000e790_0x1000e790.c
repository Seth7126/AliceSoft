// 函数: sub_1000e790
// 地址: 0x1000e790
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

struct CBaseRenderer::CBaseVideoRenderer::VTable** result = arg1
*result = &CBaseVideoRenderer::`vftable'{for `CBaseRenderer'}
result[3] = &CBaseVideoRenderer::`vftable'{for `IBaseFilter'}
result[4] = &CBaseVideoRenderer::`vftable'{for `IAMovieSetup'}
result[0x38] = &CBaseVideoRenderer::`vftable'{for `IQualProp'}
result[0x39] = &CBaseVideoRenderer::`vftable'{for `IQualityControl'}
sub_1000dd40(arg1)

if ((arg2 & 1) != 0)
    struct CBaseRenderer::CBaseVideoRenderer::VTable** result_1 = result
    sub_10001d52()

return result
