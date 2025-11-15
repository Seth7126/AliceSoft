// 函数: sub_470d70
// 地址: 0x470d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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
