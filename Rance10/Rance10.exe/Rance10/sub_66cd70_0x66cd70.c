// 函数: sub_66cd70
// 地址: 0x66cd70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_11c
int32_t eax_1 = __security_cookie ^ &var_11c
void var_104
void* edx = &var_104
int16_t* ecx = arg3
int32_t ebp_1 = *(arg1 + 0x12c) - 0x180
int32_t i = 8
float* esi = *(arg2 + 0x54)

do
    int16_t ebx_1 = ecx[8]
    float xmm0_3
    
    if (ebx_1 != 0 || ecx[0x10] != ebx_1 || ecx[0x18] != ebx_1 || ecx[0x20] != ebx_1
            || ecx[0x28] != ebx_1 || ecx[0x30] != ebx_1 || ecx[0x38] != ebx_1)
        int32_t eax_8 = sx.d(ecx[0x10])
        float xmm4_2 = _mm_cvtepi32_ps(zx.o(sx.d(*ecx)))
        int32_t eax_9 = sx.d(ecx[0x20])
        float xmm4_3 = xmm4_2 * *esi
        float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_8))
        int32_t eax_10 = sx.d(ecx[0x30])
        float xmm2_3 = xmm2_2 * esi[0x10]
        float xmm0_6 = _mm_cvtepi32_ps(zx.o(eax_9)) * esi[0x20]
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(eax_10)) * esi[0x30]
        float xmm3_2 = xmm0_6 + xmm4_3
        int32_t eax_12 = sx.d(ecx[0x18])
        float xmm4_4 = xmm4_3 - xmm0_6
        float xmm0_8 = xmm1_3 + xmm2_3
        float xmm7_3 = _mm_cvtepi32_ps(zx.o(sx.d(ebx_1))) * esi[8]
        float xmm1_5 = xmm0_8 + xmm3_2
        float xmm3_3 = xmm3_2 - xmm0_8
        float xmm2_6 = (xmm2_3 - xmm1_3) * 1.41421354f - xmm0_8
        int32_t eax_13 = sx.d(ecx[0x28])
        float xmm0_10 = xmm2_6 + xmm4_4
        float xmm1_8 = _mm_cvtepi32_ps(zx.o(eax_12)) * esi[0x18]
        var_11c = xmm4_4 - xmm2_6
        int32_t eax_14 = sx.d(ecx[0x38])
        float xmm4_8 = _mm_cvtepi32_ps(zx.o(eax_13)) * esi[0x28]
        float xmm4_9 = xmm4_8 - xmm1_8
        float xmm0_13 = _mm_cvtepi32_ps(zx.o(eax_14)) * esi[0x38]
        float xmm2_8 = xmm4_8 + xmm1_8
        float xmm6_2 = xmm0_13 + xmm7_3
        float xmm7_4 = xmm7_3 - xmm0_13
        float xmm3_5 = xmm6_2 + xmm2_8
        float xmm5_3 = (xmm7_4 + xmm4_9) * 1.84775901f
        *edx = xmm3_5 + xmm1_5
        *(edx + 0xe0) = xmm1_5 - xmm3_5
        float xmm1_11 = xmm5_3 - xmm4_9 * 2.61312604f - xmm3_5
        float xmm6_5 = (xmm6_2 - xmm2_8) * 1.41421354f - xmm1_11
        float xmm5_5 = xmm5_3 - xmm7_4 * 1.08239222f - xmm6_5
        *(edx + 0x20) = xmm1_11 + xmm0_10
        float xmm1_12 = var_11c
        *(edx + 0xc0) = xmm0_10 - xmm1_11
        *(edx + 0x40) = xmm6_5 + xmm1_12
        *(edx + 0xa0) = xmm1_12 - xmm6_5
        xmm0_3 = xmm5_5 + xmm3_3
        *(edx + 0x80) = xmm3_3 - xmm5_5
    else
        xmm0_3 = _mm_cvtepi32_ps(zx.o(sx.d(*ecx))) * *esi
        *edx = xmm0_3
        *(edx + 0x20) = xmm0_3
        *(edx + 0x40) = xmm0_3
        *(edx + 0x80) = xmm0_3
        *(edx + 0xa0) = xmm0_3
        *(edx + 0xc0) = xmm0_3
        *(edx + 0xe0) = xmm0_3
    
    *(edx + 0x60) = xmm0_3
    i -= 1
    ecx = &ecx[1]
    esi = &esi[1]
    edx += 4
while (i s> 0)

void var_fc
void* edx_1 = &var_fc
char result

for (int32_t i_1 = 0; i_1 s< 8; )
    float xmm2_13 = *edx_1
    float xmm1_17 = *(edx_1 + 0x10) + xmm2_13
    float xmm3_7 = *(edx_1 - 8) + 512.5f
    char* ecx_2 = *(arg4 + (i_1 << 2)) + arg5
    float xmm4_12 = *(edx_1 + 8) + xmm3_7
    float xmm3_8 = xmm3_7 f- *(edx_1 + 8)
    float xmm2_16 = (xmm2_13 f- *(edx_1 + 0x10)) * 1.41421354f - xmm1_17
    float xmm7_7 = xmm1_17 + xmm4_12
    float xmm1_18 = *(edx_1 - 4)
    float xmm6_7 = *(edx_1 + 0x14) + xmm1_18
    float xmm1_19 = xmm1_18 f- *(edx_1 + 0x14)
    float xmm0_22 = xmm2_16 + xmm3_8
    float xmm3_9 = xmm3_8 - xmm2_16
    float xmm2_17 = *(edx_1 + 4)
    var_11c = xmm4_12 - xmm1_17
    float xmm3_10 = *(edx_1 + 0xc)
    float xmm2_18 = xmm2_17 + xmm3_10
    float xmm3_11 = xmm3_10 f- *(edx_1 + 4)
    float xmm4_15 = xmm6_7 + xmm2_18
    float xmm0_25 = (xmm1_19 + xmm3_11) * 1.84775901f
    float xmm5_8 = xmm0_25 - xmm3_11 * 2.61312604f - xmm4_15
    float xmm6_10 = (xmm6_7 - xmm2_18) * 1.41421354f - xmm5_8
    float xmm0_27 = xmm0_25 - xmm1_19 * 1.08239222f - xmm6_10
    *ecx_2 = (int.d(xmm4_15 + xmm7_7) & 0x3ff)[ebp_1]
    ecx_2[7] = (int.d(xmm7_7 - xmm4_15) & 0x3ff)[ebp_1]
    ecx_2[1] = (int.d(xmm5_8 + xmm0_22) & 0x3ff)[ebp_1]
    ecx_2[6] = (int.d(xmm0_22 - xmm5_8) & 0x3ff)[ebp_1]
    ecx_2[2] = (int.d(xmm6_10 + xmm3_9) & 0x3ff)[ebp_1]
    ecx_2[5] = (int.d(xmm3_9 - xmm6_10) & 0x3ff)[ebp_1]
    float xmm2_19 = var_11c
    i_1 += 1
    edx_1 += 0x20
    ecx_2[3] = (int.d(xmm0_27 + xmm2_19) & 0x3ff)[ebp_1]
    result = (int.d(xmm2_19 - xmm0_27) & 0x3ff)[ebp_1]
    ecx_2[4] = result

@__security_check_cookie@4(eax_1 ^ &var_11c)
return result
