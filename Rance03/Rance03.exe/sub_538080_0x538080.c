// 函数: sub_538080
// 地址: 0x538080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg2 = &sealengine::CEmitterPos::`vftable'
float xmm0_1 = *(arg1 + 0xc) f- *(arg3 + 0xc)
float xmm0_3 = *(arg1 + 0x10) f- *(arg3 + 0x10)
*(arg2 + 4) = _mm_unpacklo_ps(*(arg1 + 4) f- *(arg3 + 4), *(arg1 + 8) f- *(arg3 + 8))
arg2[3] = xmm0_1
arg2[4] = xmm0_3
arg2[5] = *(arg1 + 0x14) f- *(arg3 + 0x14)
return arg2
