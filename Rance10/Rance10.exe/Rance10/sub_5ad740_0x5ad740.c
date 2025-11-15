// 函数: sub_5ad740
// 地址: 0x5ad740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_4

if ((*(arg1 + 0x2a0) - *(arg1 + 0x29c)) s/ 0x1c s> 0)
    eax_4 = **(arg1 + 0x29c)
else
    eax_4 = 0

float xmm0_1 = _mm_cvtepi32_ps(zx.o(eax_4))
int32_t result = sub_578cb0(arg1 + 4)
bool cond:0 = *(arg1 + 0x48) s> 0
float xmm1_1 = _mm_cvtepi32_ps(zx.o(result))
int32_t esi_2

if (cond:0)
    int32_t ebx_1 = *(arg1 + 0x44)
    *arg3 += 1
    
    if (*arg3 s>= 0x209)
        sub_4a7690(arg3)
        *arg3 = 0
    
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = sx.q(*(arg1 + 0x48))
    result = (eax_9 - edx_5) s>> 1
    esi_2 = modu.dp.d(0:(arg3[*arg3 + 1]), *(arg1 + 0x48)) - result + ebx_1
else
    esi_2 = *(arg1 + 0x44)

*(arg1 + 0x3a4) = esi_2
float xmm1_4 = (xmm1_1 - xmm0_1) * arg2 + xmm0_1
float xmm0_3 = _mm_cvtepi32_ps(zx.o(esi_2))
*(arg1 + 0x39c) = xmm1_4
*(arg1 + 0x3a0) = xmm0_3 + xmm1_4
return result
