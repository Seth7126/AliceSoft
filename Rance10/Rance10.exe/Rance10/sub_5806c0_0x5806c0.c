// 函数: sub_5806c0
// 地址: 0x5806c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm5 = *(arg1 + 0x18)
float xmm0_1 = *(arg1 + 0x1c) - xmm5
float xmm2 = *(arg1 + 0x20)
float xmm4_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x28)))
float xmm3 = 1f / xmm0_1
float xmm0_3 = *(arg6 + 4) - xmm5
float xmm1_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
int32_t esi = int.d(xmm0_3 * xmm4_1 * xmm3)
float xmm6 = 1f / (*(arg1 + 0x24) - xmm2)
int32_t edx = int.d((*(arg6 + 0xc) - xmm2) * xmm1_1 * xmm6)
int32_t ecx = int.d((*(arg6 + 0x10) - xmm5) * xmm4_1 * xmm3)
float xmm0_17 = *(arg6 + 0x18) - xmm2
int32_t eax_1 = ecx

if (esi s< ecx)
    eax_1 = esi

if (esi s> ecx)
    ecx = esi

*arg2 = eax_1
*arg3 = ecx
int32_t ebx = int.d(xmm0_17 * xmm1_1 * xmm6)
int32_t eax_2 = ebx

if (edx s< ebx)
    eax_2 = edx

if (edx s> ebx)
    ebx = edx

*arg4 = eax_2
*arg5 = ebx

if (*arg2 s>= *(arg1 + 0x28) || *arg3 s< 0 || *arg4 s>= *(arg1 + 0x2c) || ebx s< 0)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

if (*arg2 s< 0)
    *arg2 = 0

int32_t eax_4 = *(arg1 + 0x28)

if (*arg3 s>= eax_4)
    *arg3 = eax_4 - 1

if (*arg4 s< 0)
    *arg4 = 0

int32_t eax_6 = *(arg1 + 0x2c)

if (*arg5 s>= eax_6)
    *arg5 = eax_6 - 1

eax_6.b = 1
return eax_6
