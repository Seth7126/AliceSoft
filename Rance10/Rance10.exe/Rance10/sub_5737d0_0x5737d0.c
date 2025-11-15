// 函数: sub_5737d0
// 地址: 0x5737d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
float xmm3 = *(arg1 + 0x18)
int32_t ebp = *(arg1 + 0x28)
float* esi = arg6 + 4
float* eax = esi
float xmm1 = 1f / (*(arg1 + 0x1c) - xmm3)
bool cond:0 = *esi > *(arg6 + 0x10)
float xmm2_1 = _mm_cvtepi32_ps(zx.o(ebp))

if (cond:0)
    eax = arg6 + 0x10

int32_t eax_1 = int.d((*eax - xmm3) * xmm2_1 * xmm1)
bool cond:1 = *(arg6 + 0x10) > *esi
*arg2 = eax_1

if (cond:1)
    esi = arg6 + 0x10

int32_t* edx_1 = arg6 + 0xc
int32_t esi_1 = *(arg1 + 0x2c)
float xmm2_2 = *(arg1 + 0x20)
float xmm0_11 = (*esi - xmm3) * xmm2_1 * xmm1
float xmm1_2 = _mm_cvtepi32_ps(zx.o(esi_1))
int32_t eax_2 = int.d(xmm0_11)
float xmm0_13 = *(arg1 + 0x24) - xmm2_2
*arg3 = eax_2
int32_t* eax_3 = edx_1
float xmm4 = 1f / xmm0_13

if (*edx_1 f> *(arg6 + 0x18))
    eax_3 = arg6 + 0x18

int32_t edi_1 = int.d((*eax_3 - xmm2_2) * xmm1_2 * xmm4)
bool cond:2 = *(arg6 + 0x18) f> *edx_1
*arg4 = edi_1

if (cond:2)
    edx_1 = arg6 + 0x18

int32_t ecx_3 = int.d((*edx_1 - xmm2_2) * xmm1_2 * xmm4)
*arg5 = ecx_3
int32_t result

if (eax_1 s>= ebp || eax_2 s< 0 || edi_1 s>= esi_1 || ecx_3 s< 0)
    result.b = 0
    return result

if (eax_1 s< 0)
    *arg2 = 0

if (eax_2 s>= ebp)
    *arg3 = ebp - 1

if (edi_1 s< 0)
    *arg4 = 0

if (ecx_3 s>= esi_1)
    *arg5 = esi_1 - 1

result.b = 1
return result
