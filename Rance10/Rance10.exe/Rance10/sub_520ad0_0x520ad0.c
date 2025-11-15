// 函数: sub_520ad0
// 地址: 0x520ad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0xa4)
float xmm0

if (*(arg1 + 0xc) == 0)
    xmm0 = sub_4ed7f0(ecx)
else
    xmm0 = sub_4ed860(ecx)

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(arg1 + 0x228))
return sub_4f7cb0(arg1 + 0xcc, 
    (_mm_cvtepi32_ps(zx.o(*(arg1 + 0xb8))) - xmm0 - _mm_cvtepi32_ps(zx.o((eax_1 - edx) s>> 1))) /
        _mm_cvtepi32_ps(zx.o(*(arg1 + 0x100) - *(arg1 + 0x10c) - *(arg1 + 0x108)
        - *(arg1 + 0x228)))) __tailcall
