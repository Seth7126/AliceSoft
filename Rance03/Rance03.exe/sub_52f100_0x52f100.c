// 函数: sub_52f100
// 地址: 0x52f100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg4 + 0x58)
int32_t edi = *(arg4 + 0x64)
int32_t esi = arg2 * 3
int32_t edx = *(edi + (esi << 3) + 0xc) * 9
int32_t i_1 = (*(ebx + (edx << 2) + 0x10) - *(ebx + (edx << 2) + 0xc)) s>> 2
float var_2c
float var_24
float* result

if (i_1 != 1)
    float xmm5_5 = (zx.o(0)).d
    int32_t xmm6_4 = (zx.o(0)).d
    var_2c = 0f
    float xmm7_1 = (zx.o(0)).d
    int32_t var_28_1 = 0
    var_24 = 0f
    
    if (i_1 s> 0)
        float* edx_1 = *(ebx + (edx << 2) + 0x18)
        float xmm1_7 = *(edi + (esi << 3) + 4)
        float xmm4_6 = *(edi + (esi << 3))
        float var_34_1 = xmm1_7
        float var_30_1 = xmm4_6
        int32_t eax_6 = *arg3
        int32_t* eax_8 = *(ebx + (edx << 2) + 0xc) - edx_1
        int32_t* var_3c_2 = eax_8
        int32_t i
        
        do
            int32_t* eax_11 = (*(eax_8 + edx_1) << 6) + eax_6
            float xmm2_5 =
                eax_11[4] f* xmm1_7 + *eax_11 * xmm4_6 + eax_11[8] f* *(edi + (esi << 3) + 8)
            float xmm3_5 =
                eax_11[5] f* xmm1_7 + eax_11[1] f* xmm4_6 + eax_11[9] f* *(edi + (esi << 3) + 8)
            float var_1c_1 = xmm3_5
            float xmm4_10 = eax_11[6] f* xmm1_7 + eax_11[2] f* *(edi + (esi << 3))
                + eax_11[0xa] f* *(edi + (esi << 3) + 8)
            float xmm1_11 = xmm3_5 * xmm3_5 + xmm2_5 * xmm2_5 + xmm4_10 * xmm4_10
            float xmm1_12 = _mm_sqrt_ss(xmm1_11, xmm1_11)
            xmm1_12 f- 0
            eax_11:1.b = (xmm1_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_12, 0f) ? 1 : 0) << 2
                | (xmm1_12 < 0f ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            float xmm2_6
            float xmm3_6
            float xmm4_11
            
            if (not(p_3))
                int64_t xmm0_37 = xmm2_5.q
                xmm3_6 = xmm0_37:4.d
                xmm2_6 = xmm0_37.d
                xmm4_11 = xmm4_10
            else
                float xmm0_36 = 1f / xmm1_12
                xmm2_6 = xmm2_5 * xmm0_36
                xmm3_6 = xmm3_5 * xmm0_36
                xmm4_11 = xmm4_10 * xmm0_36
            
            float xmm0_38 = *edx_1
            edx_1 = &edx_1[1]
            xmm1_7 = var_34_1
            eax_8 = var_3c_2
            xmm7_1 = xmm7_1 + xmm4_11 * xmm0_38
            xmm4_6 = var_30_1
            xmm5_5 = xmm5_5 + xmm2_6 * xmm0_38
            xmm6_4 = xmm6_4 f+ xmm3_6 * xmm0_38
            i = i_1
            i_1 -= 1
        while (i != 1)
        var_2c = xmm5_5
        int32_t var_28_2 = xmm6_4
        var_24 = xmm7_1
    
    float xmm1_16 = xmm6_4 f* xmm6_4 + xmm5_5 * xmm5_5 + xmm7_1 * xmm7_1
    float xmm1_17 = _mm_sqrt_ss(xmm1_16, xmm1_16)
    xmm1_17 f- 0
    bool p_4 = unimplemented  {test ah, 0x44}
    result = arg1
    
    if (p_4)
        float xmm2_8 = 1f / xmm1_17
        *result = xmm5_5 * xmm2_8
        result[1] = xmm6_4 f* xmm2_8
        result[2] = xmm7_1 * xmm2_8
        return result
else
    float xmm1_1 = *(edi + (esi << 3))
    float xmm3_1 = *(edi + (esi << 3) + 4)
    float xmm2_1 = *(edi + (esi << 3) + 8)
    float* ecx_5 = (**(ebx + (edx << 2) + 0xc) << 6) + *arg3
    float xmm4_4 = ecx_5[4] * xmm3_1 + xmm1_1 * *ecx_5 + ecx_5[8] * xmm2_1
    var_2c = xmm4_4
    float xmm6_3 = ecx_5[1] * xmm1_1 + ecx_5[5] * xmm3_1 + ecx_5[9] * xmm2_1
    float var_28 = xmm6_3
    float xmm5_3 = ecx_5[2] * xmm1_1 + ecx_5[6] * xmm3_1 + ecx_5[0xa] * xmm2_1
    var_24 = xmm5_3
    float xmm0_17 = _mm_sqrt_ss(0, xmm4_4 * xmm4_4 + xmm6_3 * xmm6_3 + xmm5_3 * xmm5_3)
    xmm0_17 - 0f
    bool p_1 = unimplemented  {test ah, 0x44}
    result = arg1
    
    if (p_1)
        float xmm1_6 = 1f / xmm0_17
        *result = xmm4_4 * xmm1_6
        result[1] = xmm1_6 * xmm6_3
        result[2] = xmm5_3 * xmm1_6
        return result

*result = var_2c.q
result[2] = var_24
return result
