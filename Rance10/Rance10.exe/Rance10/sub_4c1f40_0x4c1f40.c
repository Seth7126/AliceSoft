// 函数: sub_4c1f40
// 地址: 0x4c1f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2

if (*(edi + 0xa8) == 0)
    return 

int32_t ecx
int32_t edx_1
int32_t ebx_1

if (arg1[0x2f].b == 0)
    ebx_1 = arg1[0x30]
    edx_1 = arg1[0x31]
    ecx = arg1[0x32]
else
    ecx = 0xff
    edx_1 = 0xff
    ebx_1 = 0xff

int32_t eax_2 = arg1[0x2d] - ecx
float xmm2_1 = 1f f- *(edi + 0xac)
float xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx))
void* ecx_2 = arg1[0x28] + 0x84
float xmm1_4 = _mm_cvtepi32_ps(zx.o(eax_2)) * xmm2_1 + xmm0_2
float xmm0_4 = _mm_cvtepi32_ps(zx.o(edx_1))
int32_t var_18_1 = int.d(xmm1_4)
float xmm1_8 = _mm_cvtepi32_ps(zx.o(arg1[0x2c] - edx_1)) * xmm2_1 + xmm0_4
float xmm0_6 = _mm_cvtepi32_ps(zx.o(ebx_1))
int32_t var_1c_1 = int.d(xmm1_8)
sub_504150(ecx_2, int.d(_mm_cvtepi32_ps(zx.o(arg1[0x2b] - ebx_1)) * xmm2_1 + xmm0_6))
float xmm0_8 = *(edi + 0xb0) * 255f
int32_t* ecx_3 = &arg2
int32_t var_8 = 0xff
int32_t var_4 = 0
int32_t eax_10 = int.d(xmm0_8)
arg2 = eax_10
int32_t* eax_11 = &var_4

if (eax_10 s>= 0xff)
    ecx_3 = &var_8

if (*ecx_3 s> 0)
    eax_11 = ecx_3

*(arg1[0x28] + 0xb0) = *eax_11
sub_4c2070(arg1)
