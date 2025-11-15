// 函数: sub_551180
// 地址: 0x551180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = _mm_cvtepi32_ps(zx.o(arg4))
int32_t* ecx = *arg8
int32_t edi = *(*arg1 + 0x110)
float xmm1_1 = _mm_cvtepi32_ps(zx.o(arg2 i- arg3))
int32_t eax_4 = arg5 i- arg6
arg2 = xmm1_1 / xmm0
float xmm1_4 = _mm_cvtepi32_ps(zx.o(eax_4))
int32_t eax_5 = *ecx
arg3 = xmm1_4 / _mm_cvtepi32_ps(zx.o(arg7))
int32_t eax_6 = (*(eax_5 + 0x10))()
int32_t eax_7 = (*(**arg8 + 0x14))()
void* ecx_2 = *arg1
float xmm1_6 = 1f
float xmm2

if (edi != 1)
    xmm2 = 1f
else
    xmm2 = *(ecx_2 + 0x104)

int32_t edx_1 = int.d((*(ecx_2 + 0xcc) f- *(ecx_2 + 0xc4)) * xmm2 * arg2)

if (edi == 1)
    xmm1_6 = *(ecx_2 + 0x108)

float xmm0_7 = *(ecx_2 + 0xd8)
arg5 = eax_7 - 1
float xmm0_10 = (xmm0_7 f- *(ecx_2 + 0xd0)) * xmm1_6 * arg3
arg3 = eax_6 - 1
int32_t ecx_3 = int.d(xmm0_10)

if (edi == 1)
    edx_1 = mods.dp.d(sx.q(edx_1), eax_6)

arg2 = edx_1
float* eax_11 = &arg2

if (edx_1 s>= eax_6 - 1)
    eax_11 = &arg3

float ebx_1 = 0f
float eax_12 = *eax_11

if (eax_12 s> 0)
    ebx_1 = eax_12

if (edi == 1)
    ecx_3 = mods.dp.d(sx.q(ecx_3), eax_7)

arg2 = ecx_3
float* esi_2 = &arg2

if (ecx_3 s>= eax_7 - 1)
    esi_2 = &arg5

int32_t eax_17 = (*(**arg8 + 0x1c))()
float esi_3 = *esi_2
int32_t eax_18 = (*(**arg8 + 8))(0, 0)
float ecx_6 = 0f

if (esi_3 s> 0)
    ecx_6 = esi_3

int32_t result
result.b = *(eax_18 + ecx_6 i* eax_17 + (ebx_1 << 2) + 3) != 0
return result
