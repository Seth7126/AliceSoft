// 函数: sub_538010
// 地址: 0x538010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm0_1 = *(arg3 + 0xc) f+ *(arg1 + 0xc)
float xmm2_1[0x4] = *(arg3 + 4) f+ *(arg1 + 4)
int64_t xmm1_1 = *(arg3 + 8) f+ *(arg1 + 8)
*arg2 = &sealengine::CEmitterPos::`vftable'
float xmm0_3 = *(arg3 + 0x10) f+ *(arg1 + 0x10)
*(arg2 + 4) = _mm_unpacklo_ps(xmm2_1, xmm1_1)
arg2[3] = xmm0_1
arg2[4] = xmm0_3
arg2[5] = *(arg3 + 0x14) f+ *(arg1 + 0x14)
return arg2
