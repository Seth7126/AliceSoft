// 函数: sub_5380f0
// 地址: 0x5380f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm3 = *(arg1 + 4)
float xmm1 = *(arg1 + 8)
float xmm0_1 = *(arg1 + 0xc) * arg2
*arg3 = &sealengine::CEmitterPos::`vftable'
arg3[4] = *(arg1 + 0x10) * arg2
float xmm0_5 = *(arg1 + 0x14) * arg2
*(arg3 + 4) = _mm_unpacklo_ps(xmm3 * arg2, xmm1 * arg2)
arg3[3] = xmm0_1
arg3[5] = xmm0_5
return arg3
