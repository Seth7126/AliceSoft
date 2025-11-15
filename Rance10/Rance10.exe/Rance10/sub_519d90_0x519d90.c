// 函数: sub_519d90
// 地址: 0x519d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_555e00(arg3, 0x18, arg6)
float xmm2 = arg5
void* ebx = *(arg3 + (arg6 << 2) + 0x7c)
int32_t esi_1 = 0
float xmm4_1 = xmm2 * 0.300000012f
float xmm3_2 = xmm2 * 0.5f + arg2
int32_t ecx_1 = int.d(xmm2 * 0.200000003f)
float var_14 = xmm4_1
float var_18 = xmm3_2
int32_t edi_1 = int.d(arg4 * 0.300000012f)

if (edi_1 s> 0)
    float xmm2_1 = 1f / _mm_cvtepi32_ps(zx.o(edi_1))
    float xmm5_2 = _mm_cvtepi32_ps(zx.o(ecx_1))
    float var_1c_1 = xmm2_1
    float var_10_1 = xmm5_2
    
    do
        float xmm0_7 = _mm_cvtepi32_ps(zx.o(esi_1))
        int32_t ecx_2 = int.d(xmm0_7 + arg1)
        float xmm1_4 = xmm0_7 * xmm4_1 * xmm2_1 + xmm3_2
        int32_t var_34_1 = ecx_2
        sub_54bec0(ebx, ecx_2, int.d(xmm1_4), ecx_2, int.d(xmm1_4 + xmm5_2), 0, 0, 0)
        xmm2_1 = var_1c_1
        esi_1 += 1
        xmm3_2 = var_18
        xmm4_1 = var_14
        xmm5_2 = var_10_1
    while (esi_1 s< edi_1)
    
    xmm2 = arg5

float xmm3_4 = xmm2 * 0.699999988f
int32_t esi_2 = 0
float xmm2_3 = xmm2 * 0.800000012f + arg2
int32_t edi_2 = int.d(arg4 * 0.699999988f)
float var_10_2 = xmm3_4
arg5 = xmm2_3
int32_t result = int.d(_mm_cvtepi32_ps(zx.o(esi_1)) + arg1)
int32_t result_1 = result

if (edi_2 s> 0)
    float xmm1_5 = 1f / _mm_cvtepi32_ps(zx.o(edi_2))
    float xmm4_5 = _mm_cvtepi32_ps(zx.o(ecx_1))
    float var_c_1 = xmm1_5
    float var_14_1 = xmm4_5
    
    do
        int32_t ecx_4 = esi_2 + result
        int32_t var_34_2 = ecx_4
        float xmm1_7 = xmm2_3 - _mm_cvtepi32_ps(zx.o(esi_2)) * xmm3_4 * xmm1_5
        sub_54bec0(ebx, ecx_4, int.d(xmm1_7), ecx_4, int.d(xmm1_7 + xmm4_5), 0, 0, 0)
        xmm2_3 = arg5
        esi_2 += 1
        xmm1_5 = var_c_1
        xmm3_4 = var_10_2
        xmm4_5 = var_14_1
        result = result_1
    while (esi_2 s< edi_2)

return result
