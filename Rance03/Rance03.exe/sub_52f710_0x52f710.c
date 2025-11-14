// 函数: sub_52f710
// 地址: 0x52f710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = *arg4
int32_t i_1 = (arg4[1] - edi) s>> 2

if (i_1 == 1)
    int32_t* ecx_3 = (*edi << 6) + *arg3
    int32_t* eax_1 = arg2
    float xmm3_1 = eax_1[1]
    float xmm1_1 = *eax_1
    float xmm2_1 = eax_1[2]
    float xmm6_1 = ecx_3[2] f* xmm1_1
    float xmm7_1 = ecx_3[3] f* xmm1_1
    float xmm4_5 = ecx_3[4] f* xmm3_1 + *ecx_3 * xmm1_1 + ecx_3[8] f* xmm2_1 f+ ecx_3[0xc]
    float xmm5_2 = ecx_3[1] f* xmm1_1 + ecx_3[5] f* xmm3_1
    float xmm0_8 = ecx_3[9] f* xmm2_1
    *arg1 = xmm4_5
    float xmm5_4 = xmm5_2 + xmm0_8 f+ ecx_3[0xd]
    float xmm6_3 = xmm6_1 + ecx_3[6] f* xmm3_1 + ecx_3[0xa] f* xmm2_1
    float xmm0_14 = ecx_3[7] f* xmm3_1
    arg1[1] = xmm5_4
    float xmm6_4 = xmm6_3 f+ ecx_3[0xe]
    float xmm0_16 = ecx_3[0xb] f* xmm2_1
    arg1[2] = xmm6_4
    float xmm7_4 = xmm7_1 + xmm0_14 + xmm0_16 f+ ecx_3[0xf]
    xmm7_4 - 1f
    eax_1:1.b = (xmm7_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 1f) ? 1 : 0) << 2
        | (xmm7_4 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm7_4 - 0f
        eax_1:1.b = (xmm7_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 0f) ? 1 : 0) << 2
            | (xmm7_4 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm0_17 = 1f / xmm7_4
            *arg1 = xmm4_5 * xmm0_17
            arg1[1] = xmm5_4 * xmm0_17
            arg1[2] = xmm6_4 * xmm0_17
    
    return arg1

float var_4 = 0f
int32_t xmm6_6 = (zx.o(0)).d
int32_t var_c = 0
int32_t xmm7_5 = (zx.o(0)).d
int32_t var_8 = 0

if (i_1 s> 0)
    int32_t* ecx_4 = arg2
    int32_t ebx_1 = *arg3
    int32_t* xmm1_2 = ecx_4[1]
    float xmm3_2 = *ecx_4
    arg3 = xmm1_2
    float* esi_1 = *arg5
    void* edi_1 = edi - esi_1
    arg2 = xmm3_2
    int32_t i
    
    do
        int32_t* eax_7 = (*(edi_1 + esi_1) << 6) + ebx_1
        float xmm4_11 = eax_7[4] f* xmm1_2 + *eax_7 * xmm3_2 + eax_7[8] f* ecx_4[2] f+ eax_7[0xc]
        float xmm2_6 = eax_7[5] f* xmm1_2 + eax_7[1] f* xmm3_2 + eax_7[9] f* ecx_4[2] f+ eax_7[0xd]
        float xmm3_7 =
            eax_7[6] f* xmm1_2 + eax_7[2] f* *ecx_4 + eax_7[0xa] f* ecx_4[2] f+ eax_7[0xe]
        float xmm1_7 =
            eax_7[7] f* ecx_4[1] + eax_7[3] f* *ecx_4 + eax_7[0xb] f* ecx_4[2] f+ eax_7[0xf]
        xmm1_7 - 1f
        eax_7:1.b = (xmm1_7 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_7, 1f) ? 1 : 0) << 2
            | (xmm1_7 < 1f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            xmm1_7 f- 0
            eax_7:1.b = (xmm1_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_7, 0f) ? 1 : 0) << 2
                | (xmm1_7 < 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                float xmm0_34 = 1f / xmm1_7
                xmm4_11 = xmm4_11 * xmm0_34
                xmm2_6 = xmm2_6 * xmm0_34
                xmm3_7 = xmm3_7 * xmm0_34
        
        float xmm0_35 = *esi_1
        esi_1 = &esi_1[1]
        xmm6_6 = xmm6_6 f+ xmm0_35 * xmm4_11
        xmm1_2 = arg3
        xmm7_5 = xmm7_5 f+ xmm2_6 * xmm0_35
        var_4 = xmm3_7 * xmm0_35 + var_4
        xmm3_2 = arg2
        i = i_1
        i_1 -= 1
    while (i != 1)
    var_c = xmm6_6
    int32_t var_8_1 = xmm7_5

*arg1 = var_c.q
arg1[2] = var_4
return arg1
