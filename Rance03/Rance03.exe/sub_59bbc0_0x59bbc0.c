// 函数: sub_59bbc0
// 地址: 0x59bbc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int64_t xmm1_3 = (*(arg4 i+ 0x14) f- *(arg1 + 0x14)) * arg2 f+ *(arg1 + 0x14)
float xmm0_3 = (*(arg4 i+ 0x1c) f- *(arg1 + 0x1c)) * arg2 f+ *(arg1 + 0x1c)
float xmm1_7 = (*(arg4 i+ 0x18) f- *(arg1 + 0x18)) * arg2 f+ *(arg1 + 0x18)
void var_14
int128_t xmm0_4 = *sub_5b1f80(arg1 + 4, arg2, &var_14, arg4 i+ 4)
*arg3 = &sealengine::CSQT::`vftable'
*(arg3 + 4) = xmm0_4
*(arg3 + 0x14) = _mm_unpacklo_ps(zx.o(xmm1_3), xmm1_7)
arg3[7] = xmm0_3
return arg3
