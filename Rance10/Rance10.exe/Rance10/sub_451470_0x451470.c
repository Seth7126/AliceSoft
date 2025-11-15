// 函数: sub_451470
// 地址: 0x451470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_98
int32_t eax_1 = __security_cookie ^ &var_98
int32_t* result = arg3
void* ecx = *(arg1 + 0x120)
*(arg1 + 0x128) = 0

if (ecx != 0)
    int32_t* ecx_1 = *(ecx + 8)
    int32_t edi_1
    
    if (ecx_1 != 0)
        edi_1 = (*(*ecx_1 + 0x20))()
    else
        edi_1 = 0
    
    int32_t* ecx_3 = *(*(arg1 + 0x120) + 8)
    int32_t edx_1
    
    if (ecx_3 != 0)
        edx_1 = (*(*ecx_3 + 0x1c))()
    else
        edx_1 = 0
    
    int32_t eax_10 = neg.d(*(arg1 + 0xc0))
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xbc)))
    uint128_t xmm5_1 = zx.o(*(arg4 + 0x14))
    float xmm1_3 = xmm1_2 * 0.5f
    float xmm6_1 = *(arg1 + 0x44)
    float xmm3_1 = *(arg1 + 0x3c)
    float xmm2_2 = *(arg1 + 0x38) * xmm1_3
    int32_t eax_11 = *(arg4 + 0x18)
    float xmm1_5 = _mm_cvtepi32_ps(zx.o(eax_10))
    float xmm4_2 = xmm6_1 ^ (data_79aad0).d
    float xmm1_6 = xmm1_5 * 0.5f
    float xmm5_2 = _mm_cvtepi32_ps(xmm5_1)
    uint128_t xmm1_7 = zx.o(*(arg4 + 0xc))
    float xmm7_2 = _mm_cvtepi32_ps(zx.o(neg.d(eax_11)))
    float xmm1_8 = _mm_cvtepi32_ps(xmm1_7)
    float xmm0_4 = 1f / (xmm5_2 * 0.5f)
    float xmm0_5 = 1f / (xmm7_2 * 0.5f)
    float xmm2_5 = (xmm2_2 + _mm_cvtepi32_ps(zx.o(*(arg4 + 8))) * xmm6_1) * xmm0_4 + xmm4_2
    float xmm0_7 = _mm_cvtepi32_ps(zx.o(edx_1))
    int32_t edx_2 = *(arg1 + 0x110)
    float xmm6_2 = 1f / xmm0_7
    float xmm2_7 = xmm6_2 f* *(arg1 + 0xc4)
    var_98 = xmm2_7
    float eax_15 = var_98
    float xmm1_10 = 1f / _mm_cvtepi32_ps(zx.o(edi_1))
    float xmm0_11 = *(arg1 + 0xc8) * xmm1_10
    float var_6c_1
    float var_68_1
    
    if (edx_2 != 1)
        var_68_1 = xmm0_11
        var_6c_1 = eax_15
    else
        var_6c_1 = *(arg1 + 0x104) * xmm2_7
        var_68_1 = *(arg1 + 0x108) * xmm0_11
    
    uint128_t xmm1_11 = zx.o(*(arg4 + 0xc))
    float xmm5_4 = *(arg1 + 0x54)
    float xmm2_9 = *(arg1 + 0x48) * xmm1_3
    float xmm3_7 = *(arg1 + 0x4c) * xmm1_6
    float xmm4_4 = xmm5_4 ^ (data_79aad0).d
    float xmm7_9 = _mm_cvtepi32_ps(zx.o(*(arg4 + 8)))
    float xmm1_13 = _mm_cvtepi32_ps(xmm1_11) * xmm5_4
    float xmm0_17 = *(arg1 + 0xd0) * xmm1_10
    float xmm1_15 = xmm6_2 f* *(arg1 + 0xcc)
    var_98 = xmm1_15
    float xmm2_12 = (xmm2_9 + xmm7_9 * xmm5_4) * xmm0_4 + xmm4_4
    float xmm3_10 = (xmm3_7 + xmm1_13) * xmm0_5 + xmm5_4
    float var_74_1
    float var_70_1
    
    if (edx_2 != 1)
        var_70_1 = xmm0_17
        var_74_1 = var_98
    else
        var_74_1 = *(arg1 + 0x104) * xmm1_15
        var_70_1 = *(arg1 + 0x108) * xmm0_17
    
    uint128_t xmm1_16 = zx.o(*(arg4 + 0xc))
    float xmm3_11 = *(arg1 + 0x64)
    float xmm4_6 = *(arg1 + 0x5c) * xmm1_6
    float xmm7_11 = *(arg1 + 0x58) * xmm1_3
    float xmm6_3 = xmm6_2 f* *(arg1 + 0xd4)
    var_98 = xmm6_3
    float eax_21 = var_98
    float xmm0_22 = *(arg1 + 0xd8)
    float xmm7_14 = (xmm7_11 + xmm7_9 * xmm3_11) * xmm0_4 + (xmm3_11 ^ 0x80000000)
    float xmm4_9 = (xmm4_6 + _mm_cvtepi32_ps(xmm1_16) * xmm3_11) * xmm0_5 + xmm3_11
    float xmm0_23 = xmm0_22 * xmm1_10
    float var_90_2
    float var_64_1
    
    if (edx_2 != 1)
        var_90_2 = xmm0_23
        var_64_1 = eax_21
    else
        var_64_1 = *(arg1 + 0x104) * xmm6_3
        var_90_2 = *(arg1 + 0x108) * xmm0_23
    
    float xmm1_19 = *(arg1 + 0x74)
    uint128_t xmm2_19 = zx.o(*(arg4 + 8))
    float xmm6_5 = *(arg1 + 0x6c) * xmm1_6
    float xmm5_10 = *(arg1 + 0x68) * xmm1_3
    float xmm3_13 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0xc)))
    float xmm5_12 = (xmm5_10 + _mm_cvtepi32_ps(xmm2_19) * xmm1_19) * xmm0_4
    float xmm1_21 = xmm6_2 f* *(arg1 + 0xdc)
    float xmm0_29 = *(arg1 + 0xe0) * xmm1_10
    var_98 = xmm1_21
    float xmm3_16
    float xmm4_12
    
    if (edx_2 != 1)
        xmm4_12 = xmm0_29
        xmm3_16 = var_98
    else
        xmm4_12 = *(arg1 + 0x108) * xmm0_29
        xmm3_16 = *(arg1 + 0x104) * xmm1_21
    
    int32_t xmm1_22 = *(arg1 + 0x40)
    float* ecx_5 = *arg2
    *ecx_5 = xmm2_5
    ecx_5[1] = (xmm3_1 * xmm1_6 + xmm1_8 * xmm6_1) * xmm0_5 + xmm6_1
    ecx_5[2] = xmm1_22
    ecx_5[3] = var_6c_1
    ecx_5[4] = var_68_1
    ecx_5[5] = *(arg1 + 0x44)
    ecx_5[6] = 0
    int32_t xmm0_34 = *(arg1 + 0x50)
    ecx_5[7] = xmm2_12
    ecx_5[8] = xmm3_10
    ecx_5[9] = xmm0_34
    ecx_5[0xa] = var_74_1
    ecx_5[0xb] = var_70_1
    ecx_5[0xc] = *(arg1 + 0x54)
    ecx_5[0xd] = 0
    int32_t xmm0_37 = *(arg1 + 0x60)
    ecx_5[0xe] = xmm7_14
    ecx_5[0xf] = xmm4_9
    ecx_5[0x10] = xmm0_37
    ecx_5[0x11] = var_64_1
    ecx_5[0x12] = var_90_2
    ecx_5[0x13] = *(arg1 + 0x64)
    ecx_5[0x14] = 0
    int32_t xmm0_39 = *(arg1 + 0x60)
    ecx_5[0x15] = xmm7_14
    ecx_5[0x16] = xmm4_9
    ecx_5[0x17] = xmm0_39
    ecx_5[0x18] = var_64_1
    ecx_5[0x19] = var_90_2
    ecx_5[0x1a] = *(arg1 + 0x64)
    ecx_5[0x1b] = 0
    int32_t xmm0_41 = *(arg1 + 0x50)
    ecx_5[0x1c] = xmm2_12
    ecx_5[0x1d] = xmm3_10
    ecx_5[0x1e] = xmm0_41
    ecx_5[0x1f] = var_74_1
    ecx_5[0x20] = var_70_1
    ecx_5[0x21] = *(arg1 + 0x54)
    ecx_5[0x22] = 0
    int32_t xmm0_44 = *(arg1 + 0x70)
    ecx_5[0x23] = xmm5_12 + (xmm1_19 ^ 0x80000000)
    ecx_5[0x24] = (xmm6_5 + xmm3_13 * xmm1_19) * xmm0_5 + xmm1_19
    ecx_5[0x25] = xmm0_44
    ecx_5[0x26] = xmm3_16
    ecx_5[0x27] = xmm4_12
    ecx_5[0x28] = *(arg1 + 0x74)
    ecx_5[0x29] = 0
    int32_t* result_1 = result
    *arg2 = &ecx_5[0x2a]
    result = *result_1
    *(arg1 + 0x128) = result
    *result_1 += 6

@__security_check_cookie@4(eax_1 ^ &var_98)
return result
