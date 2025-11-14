// 函数: sub_10012280
// 地址: 0x10012280
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_c = arg3
sub_1000e860(&arg1[2], arg2)
arg1[5] = 0
*arg1 = &CPosPassThru::`vftable'{for `IMediaSeeking'}
arg1[1] = &CPosPassThru::`vftable'{for `CMediaPosition'}
arg1[2] = &CPosPassThru::`vftable'{for `CUnknown'}
arg1[6] = arg5

if (arg5 == 0)
    *arg4 = 0x80004003

*arg1 = &CRendererPosPassThru::`vftable'{for `CPosPassThru'}
arg1[1] = &CRendererPosPassThru::`vftable'{for `CMediaPosition'}
arg1[2] = &CRendererPosPassThru::`vftable'{for `CUnknown'}
InitializeCriticalSection(&arg1[7])
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 1
return arg1
