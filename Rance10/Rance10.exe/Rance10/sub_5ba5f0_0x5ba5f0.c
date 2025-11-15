// 函数: sub_5ba5f0
// 地址: 0x5ba5f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
*(arg1 + 0xa8) = *(arg1 + 0xa4)
void* ebp_1 = arg1 + 0xa4
int32_t eax_1
int32_t edx_2
edx_2:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0x70) - *(arg1 + 0x6c))
int32_t edx_3 = edx_2 s>> 3
void* var_3c = arg1
void* var_18 = ebp_1
sub_5bc7c0(ebp_1, (edx_3 u>> 0x1f) + edx_3)
float result = *(arg1 + 0x64)
int32_t* edi = *(arg1 + 0x60)
float result_1 = result
int32_t* var_28 = edi
int64_t var_14

while (edi != result)
    void* ebx_1 = *edi
    int32_t* i = *(ebx_1 + 0x24)
    
    if (i != *(ebx_1 + 0x28))
        int32_t edi_1 = *ebp_1
        int32_t ecx_1 = *(arg1 + 0x6c)
        int32_t var_20_1 = ecx_1
        
        do
            int32_t ebp_2 = *i
            int32_t eax_16 = ebp_2 * 9
            sub_5de260(eax_16, ecx_1 + (eax_16 << 2), &var_14, ecx_1 + i[0xa] * 0x24, 
                ecx_1 + i[0x14] * 0x24, &i[3], &i[0xd], &i[0x17])
            float xmm3_1 = var_14.d
            float xmm2_1 = var_14:4.d
            int32_t eax_18 = ebp_2 * 3
            ecx_1 = var_20_1
            *(edi_1 + (eax_18 << 2)) = xmm3_1 f+ *(edi_1 + (eax_18 << 2))
            *(edi_1 + (eax_18 << 2) + 4) = xmm2_1 f+ *(edi_1 + (eax_18 << 2) + 4)
            float var_c
            *(edi_1 + (eax_18 << 2) + 8) = var_c f+ *(edi_1 + (eax_18 << 2) + 8)
            int32_t eax_20 = i[0xa] * 3
            *(edi_1 + (eax_20 << 2)) = *(edi_1 + (eax_20 << 2)) + xmm3_1
            *(edi_1 + (eax_20 << 2) + 4) = *(edi_1 + (eax_20 << 2) + 4) + xmm2_1
            *(edi_1 + (eax_20 << 2) + 8) = *(edi_1 + (eax_20 << 2) + 8) + var_c
            int32_t eax_21 = i[0x14]
            i = &i[0x1e]
            int32_t eax_22 = eax_21 * 3
            *(edi_1 + (eax_22 << 2)) = *(edi_1 + (eax_22 << 2)) + xmm3_1
            *(edi_1 + (eax_22 << 2) + 4) = *(edi_1 + (eax_22 << 2) + 4) + xmm2_1
            *(edi_1 + (eax_22 << 2) + 8) = *(edi_1 + (eax_22 << 2) + 8) + var_c
        while (i != *(ebx_1 + 0x28))
        
        edi = var_28
        result = result_1
        ebp_1 = var_18
    
    edi = &edi[1]
    var_28 = edi

int32_t edx_5 = *(ebp_1 + 4)

for (int32_t* i_1 = *ebp_1; i_1 != edx_5; i_1 = &i_1[3])
    float xmm2_2 = i_1[1]
    float xmm3_2 = *i_1
    float xmm4_1 = i_1[2]
    float xmm0_23 = sub_484cc0(xmm3_2 * xmm3_2 + xmm2_2 * xmm2_2 + xmm4_1 * xmm4_1)
    xmm0_23 f- 0
    result:1.b = (xmm0_23 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_23, 0f) ? 1 : 0) << 2
        | (xmm0_23 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    int64_t xmm0_28
    
    if (not(p_2))
        xmm0_28 = *i_1
        result = i_1[2]
        var_14 = xmm0_28
    else
        float xmm1_6 = 1f / xmm0_23
        var_14.d = xmm1_6 * xmm3_2
        var_14:4.d = xmm1_6 * xmm2_2
        xmm0_28 = var_14
        result = xmm1_6 * xmm4_1
    
    *i_1 = xmm0_28
    i_1[2] = result
    float xmm1_8 = i_1[1]
    float xmm2_3 = *i_1
    float xmm0_29 = i_1[2]
    
    if (not(0.25f <= xmm2_3 * xmm2_3 + xmm1_8 * xmm1_8 + xmm0_29 * xmm0_29))
        *i_1 = 0x3f800000
        i_1[1] = 0
        i_1[2] = 0

var_4
return result
