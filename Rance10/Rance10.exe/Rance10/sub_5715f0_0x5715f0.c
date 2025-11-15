// 函数: sub_5715f0
// 地址: 0x5715f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2 * 3
int32_t ebx = arg5[0x1e]
int32_t ebp = *(ebx + (edi << 3) + 0xc) * 9
int32_t* eax_1 = arg5[0x1b]
int32_t i_1 = (eax_1[ebp + 4] - eax_1[ebp + 3]) s>> 2

if (i_1 == 1)
    float xmm1_1 = *(ebx + (edi << 3))
    float xmm3 = *(ebx + (edi << 3) + 4)
    float xmm2_1 = *(ebx + (edi << 3) + 8)
    float* ecx_4 = (*eax_1[ebp + 3] << 6) + *arg4
    float xmm4_4 = ecx_4[4] * xmm3 + xmm1_1 * *ecx_4 + ecx_4[8] * xmm2_1
    int64_t var_28
    var_28.d = xmm4_4
    float xmm5_3 = ecx_4[1] * xmm1_1 + ecx_4[5] * xmm3 + ecx_4[9] * xmm2_1
    var_28:4.d = xmm5_3
    float xmm6_3 = ecx_4[2] * xmm1_1 + ecx_4[6] * xmm3 + ecx_4[0xa] * xmm2_1
    float xmm0_17 = sub_484cc0(xmm4_4 * xmm4_4 + xmm5_3 * xmm5_3 + xmm6_3 * xmm6_3)
    xmm0_17 - 0f
    int32_t* eax_3
    eax_3:1.b = (xmm0_17 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_17, 0f) ? 1 : 0) << 2
        | (xmm0_17 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        *arg3 = var_28
        arg3[2] = xmm6_3
        return arg3
    
    float xmm1_6 = 1f / xmm0_17
    *arg3 = xmm4_4 * xmm1_6
    arg3[1] = xmm5_3 * xmm1_6
    arg3[2] = xmm6_3 * xmm1_6
    return arg3

int64_t xmm3_1 = data_7fd4d8.q
float edx_1 = data_7fd4e0
float xmm6_5 = xmm3_1:4.d
float xmm7 = xmm3_1.d
float xmm5_5 = edx_1

if (i_1 s> 0)
    float xmm1_7 = *(ebx + (edi << 3) + 4)
    float xmm4_6 = *(ebx + (edi << 3))
    int32_t eax_8 = *arg4
    float* edx_3 = eax_1[ebp + 6]
    int32_t* esi_2 = eax_1[ebp + 3] - edx_3
    float var_34_1 = xmm1_7
    float var_30_1 = xmm4_6
    int32_t i
    
    do
        eax_1 = (*(esi_2 + edx_3) << 6) + eax_8
        float xmm2_5 = eax_1[4] f* xmm1_7 + *eax_1 * xmm4_6 + eax_1[8] f* *(ebx + (edi << 3) + 8)
        float xmm3_5 = eax_1[5] f* xmm1_7 + eax_1[1] f* xmm4_6 + eax_1[9] f* *(ebx + (edi << 3) + 8)
        float var_18_1 = xmm3_5
        float xmm4_10 = eax_1[6] f* xmm1_7 + eax_1[2] f* *(ebx + (edi << 3))
            + eax_1[0xa] f* *(ebx + (edi << 3) + 8)
        float xmm0_35 = sub_484cc0(xmm3_5 * xmm3_5 + xmm2_5 * xmm2_5 + xmm4_10 * xmm4_10)
        xmm0_35 f- 0
        eax_1:1.b = (xmm0_35 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_35, 0f) ? 1 : 0) << 2
            | (xmm0_35 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        float xmm2_6
        float xmm3_6
        float xmm4_11
        
        if (not(p_4))
            int64_t xmm0_36 = xmm2_5.q
            xmm3_6 = xmm0_36:4.d
            xmm2_6 = xmm0_36.d
            xmm4_11 = xmm4_10
        else
            float xmm1_12 = 1f / xmm0_35
            xmm2_6 = xmm2_5 * xmm1_12
            xmm3_6 = xmm3_5 * xmm1_12
            xmm4_11 = xmm4_10 * xmm1_12
        
        float xmm0_37 = *edx_3
        edx_3 = &edx_3[1]
        xmm1_7 = var_34_1
        xmm5_5 = xmm5_5 + xmm4_11 * xmm0_37
        xmm4_6 = var_30_1
        xmm7 = xmm7 + xmm2_6 * xmm0_37
        xmm6_5 = xmm6_5 + xmm3_6 * xmm0_37
        i = i_1
        i_1 -= 1
    while (i != 1)
    edx_1 = xmm5_5
    int64_t var_28_1
    var_28_1:4.d = xmm6_5
    var_28_1.d = xmm7
    xmm3_1 = var_28_1

float xmm0_42 = sub_484cc0(xmm6_5 * xmm6_5 + xmm7 * xmm7 + xmm5_5 * xmm5_5)
xmm0_42 f- 0
eax_1:1.b = (xmm0_42 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_42, 0f) ? 1 : 0) << 2
    | (xmm0_42 < 0f ? 1 : 0)
bool p_6 = unimplemented  {test ah, 0x44}

if (not(p_6))
    *arg3 = xmm3_1
    arg3[2] = edx_1
    return arg3

float xmm2_8 = 1f / xmm0_42
*arg3 = xmm7 * xmm2_8
arg3[1] = xmm6_5 * xmm2_8
arg3[2] = xmm5_5 * xmm2_8
return arg3
