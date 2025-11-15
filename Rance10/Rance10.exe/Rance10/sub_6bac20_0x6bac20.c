// 函数: sub_6bac20
// 地址: 0x6bac20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg5 << 2
int32_t esi_1 = arg4 s>> 1
int32_t* edx = arg3
int32_t* ecx_1 = arg2 - 0x20 + (esi_1 << 2)
int32_t* result = &ecx_1[arg4 - esi_1 + 7]

do
    float xmm2_1 = result[-1]
    float xmm0_1 = *result
    float xmm4_2 = xmm2_1 f- ecx_1[6]
    float xmm3_2 = xmm0_1 f- ecx_1[7]
    result[-1] = xmm2_1 f+ ecx_1[6]
    *result = xmm0_1 f+ ecx_1[7]
    ecx_1[6] = *edx * xmm4_2 + edx[1] f* xmm3_2
    void* edx_1 = &edx[arg5]
    ecx_1[7] = *edx * xmm3_2 - edx[1] f* xmm4_2
    float xmm3_3 = result[-3]
    float xmm0_7 = result[-2]
    float xmm4_4 = xmm3_3 f- ecx_1[4]
    float xmm2_4 = xmm0_7 f- ecx_1[5]
    result[-3] = xmm3_3 f+ ecx_1[4]
    result[-2] = xmm0_7 f+ ecx_1[5]
    ecx_1[4] = *edx_1 * xmm4_4 + *(edx_1 + 4) * xmm2_4
    void* edx_2 = edx_1 + ebp
    ecx_1[5] = *edx_1 * xmm2_4 - *(edx_1 + 4) * xmm4_4
    float xmm3_5 = result[-5]
    float xmm0_13 = result[-4]
    float xmm4_6 = xmm3_5 f- ecx_1[2]
    float xmm2_6 = xmm0_13 f- ecx_1[3]
    result[-5] = xmm3_5 f+ ecx_1[2]
    result[-4] = xmm0_13 f+ ecx_1[3]
    ecx_1[2] = *edx_2 * xmm4_6 + *(edx_2 + 4) * xmm2_6
    void* edx_3 = edx_2 + ebp
    float xmm0_19 = *ecx_1
    ecx_1[3] = *edx_2 * xmm2_6 - *(edx_2 + 4) * xmm4_6
    float xmm4_8 = result[-7] f- xmm0_19
    float xmm3_8 = result[-6] f- ecx_1[1]
    result[-7] = xmm0_19 f+ result[-7]
    result[-6] = ecx_1[1] f+ result[-6]
    result -= 0x20
    *ecx_1 = *edx_3 * xmm4_8 + *(edx_3 + 4) * xmm3_8
    edx = edx_3 + ebp
    ecx_1[1] = *edx_3 * xmm3_8 - *(edx_3 + 4) * xmm4_8
    ecx_1 -= 0x20
while (ecx_1 u>= arg2)

return result
