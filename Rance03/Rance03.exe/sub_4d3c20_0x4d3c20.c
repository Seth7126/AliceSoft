// 函数: sub_4d3c20
// 地址: 0x4d3c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_510540(arg3, arg6)
float xmm2 = arg5
int32_t esi = 0
float xmm4_1 = xmm2 * 0.300000012f
float xmm3_2 = xmm2 * 0.5f + arg2
int32_t ecx_1 = int.d(xmm2 * 0.200000003f)
float var_14 = xmm4_1
float var_18 = xmm3_2
int32_t edi = int.d(arg4 * 0.300000012f)

if (edi s> 0)
    float xmm2_1 = 1f / _mm_cvtepi32_ps(zx.o(edi))
    float xmm5_2 = _mm_cvtepi32_ps(zx.o(ecx_1))
    float var_1c_1 = xmm2_1
    float var_10_1 = xmm5_2
    
    do
        float xmm0_7 = _mm_cvtepi32_ps(zx.o(esi))
        int32_t ecx_2 = int.d(xmm0_7 + arg1)
        float xmm1_4 = xmm0_7 * xmm4_1 * xmm2_1 + xmm3_2
        sub_503b70(eax, ecx_2, int.d(xmm1_4), ecx_2, int.d(xmm5_2 + xmm1_4), 0, 0, 0, 0xff)
        xmm2_1 = var_1c_1
        esi += 1
        xmm3_2 = var_18
        xmm4_1 = var_14
        xmm5_2 = var_10_1
    while (esi s< edi)
    
    xmm2 = arg5

float xmm3_4 = xmm2 * 0.699999988f
int32_t esi_1 = 0
float xmm2_3 = xmm2 * 0.800000012f + arg2
int32_t edi_1 = int.d(arg4 * 0.699999988f)
float var_10_2 = xmm3_4
arg5 = xmm2_3
int32_t result = int.d(_mm_cvtepi32_ps(zx.o(esi)) + arg1)
int32_t result_1 = result

if (edi_1 s> 0)
    float xmm1_5 = 1f / _mm_cvtepi32_ps(zx.o(edi_1))
    float xmm4_5 = _mm_cvtepi32_ps(zx.o(ecx_1))
    float var_c_1 = xmm1_5
    float var_14_1 = xmm4_5
    
    do
        int32_t ecx_4 = esi_1 + result
        float xmm1_7 = xmm2_3 - _mm_cvtepi32_ps(zx.o(esi_1)) * xmm3_4 * xmm1_5
        sub_503b70(eax, ecx_4, int.d(xmm1_7), ecx_4, int.d(xmm1_7 + xmm4_5), 0, 0, 0, 0xff)
        xmm2_3 = arg5
        esi_1 += 1
        xmm1_5 = var_c_1
        xmm3_4 = var_10_2
        xmm4_5 = var_14_1
        result = result_1
    while (esi_1 s< edi_1)

return result
