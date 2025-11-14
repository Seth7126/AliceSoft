// 函数: sub_464c70
// 地址: 0x464c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx_1
int32_t edx_1
float xmm0_1

if (*(arg1 + 4) == 2 || *(arg3 + 4) == 2)
    edx_1 = 2
    xmm0_1 = *(arg3 + 0xc) f* *(arg1 + 0xc)
    ecx_1 = int.d(xmm0_1)
else
    ecx_1 = *(arg3 + 8) * *(arg1 + 8)
    edx_1 = 1
    xmm0_1 = _mm_cvtepi32_ps(zx.o(ecx_1))

*arg2 = &exfile::CNumeral::`vftable'
arg2[2] = ecx_1
arg2[3] = xmm0_1
arg2[1] = edx_1
return arg2
