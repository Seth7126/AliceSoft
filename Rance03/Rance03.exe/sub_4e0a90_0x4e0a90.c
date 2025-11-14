// 函数: sub_4e0a90
// 地址: 0x4e0a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 0x8c)
float xmm0_2

if (*(arg1 + 0x30) == 0)
    xmm0_2 = _mm_cvtepi32_ps(zx.o(*(eax + 0x17c))) f+ *(eax + 0x7c)
else
    xmm0_2 = _mm_cvtepi32_ps(zx.o(*(eax + 0x180))) f+ *(eax + 0x80)

int32_t esi = *(arg1 + 0x204)
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(esi)
return sub_4aab20(arg1 + 0xb4, 
    (_mm_cvtepi32_ps(zx.o(*(arg1 + 0xa0))) - xmm0_2 - _mm_cvtepi32_ps(zx.o((eax_2 - edx) s>> 1)))
        / _mm_cvtepi32_ps(zx.o(*(arg1 + 0xe8) - *(arg1 + 0xf4) - *(arg1 + 0xf0) - esi))) __tailcall
