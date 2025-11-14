// 函数: sub_464c20
// 地址: 0x464c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t edx_1
float xmm0_2

if (*(arg1 + 4) == 2 || *(arg3 + 4) == 2)
    xmm0_2 = *(arg1 + 0xc) f- *(arg3 + 0xc)
    ecx = 2
    edx_1 = int.d(xmm0_2)
else
    edx_1 = *(arg1 + 8) - *(arg3 + 8)
    ecx = 1
    xmm0_2 = _mm_cvtepi32_ps(zx.o(edx_1))

*arg2 = &exfile::CNumeral::`vftable'
arg2[2] = edx_1
arg2[3] = xmm0_2
arg2[1] = ecx
return arg2
