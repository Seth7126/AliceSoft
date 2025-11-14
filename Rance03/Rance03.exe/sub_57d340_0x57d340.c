// 函数: sub_57d340
// 地址: 0x57d340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1
float var_c = 0f
void* ebx = esi + 0x90
*(ebx + 4) = *(esi + 0x90)
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x38e38e39, *(esi + 0x5c) - *(esi + 0x58))
void* var_28 = esi
int32_t edx_1 = edx s>> 3
int32_t var_8 = 0
int32_t var_4 = 0
int32_t result = sub_57eae0(ebx, (edx_1 u>> 0x1f) + edx_1, &var_c)
int32_t* i = *(esi + 0x4c)
int32_t* i_2 = i

while (i != *(esi + 0x50))
    void* ecx_3 = *i
    result = *(ecx_3 + 0x2c)
    void* ecx_4 = *(ecx_3 + 0x28)
    int32_t result_1 = result
    
    if (ecx_4 != result)
        do
            if (*(ecx_4 + 0xb8) == 0)
                int32_t ebx_1 = *(var_28 + 0x58)
                int32_t edi_1 = *(ecx_4 + 8) * 9
                float xmm5_2 = *(ecx_4 + 0xa0) f- *(ecx_4 + 0x28)
                float xmm4_3 = (*(ecx_4 + 0x64) f- *(ecx_4 + 0x28)) ^ (data_7094c0).d
                int32_t esi_1 = *(ecx_4 + 0x44) * 9
                float xmm0_2 = *(ebx_1 + (esi_1 << 2)) f- *(ebx_1 + (edi_1 << 2))
                int32_t eax_8 = *(ecx_4 + 0x80) * 9
                float xmm6_4 = (*(ebx_1 + (esi_1 << 2) + 4) f- *(ebx_1 + (edi_1 << 2) + 4)) * xmm5_2
                    + (*(ebx_1 + (eax_8 << 2) + 4) f- *(ebx_1 + (edi_1 << 2) + 4)) * xmm4_3
                float xmm4_6 =
                    xmm0_2 * xmm5_2 + (*(ebx_1 + (eax_8 << 2)) f- *(ebx_1 + (edi_1 << 2))) * xmm4_3
                float var_20_1 = xmm0_2
                float var_14_1 = xmm6_4
                float xmm7_4 = (*(ebx_1 + (esi_1 << 2) + 8) f- *(ebx_1 + (edi_1 << 2) + 8)) * xmm5_2
                    + (*(ebx_1 + (eax_8 << 2) + 8) f- *(ebx_1 + (edi_1 << 2) + 8)) * xmm4_3
                xmm4_6 f- 0
                eax_8:1.b = (xmm4_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_6, 0f) ? 1 : 0) << 2
                    | (xmm4_6 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                float xmm4_7
                int32_t xmm6_5
                float xmm7_5
                
                if (p_2)
                label_57d4de:
                    float xmm1_7 = xmm6_4 * xmm6_4 + xmm4_6 * xmm4_6 + xmm7_4 * xmm7_4
                    float xmm1_8 = _mm_sqrt_ss(xmm1_7, xmm1_7)
                    xmm1_8 f- 0
                    eax_8:1.b = (xmm1_8 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_8, 0f) ? 1 : 0) << 2 | (xmm1_8 < 0f ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_8))
                        var_c.q = xmm4_6.q
                        xmm6_5 = var_8
                        xmm4_7 = var_c
                        xmm7_5 = xmm7_4
                    else
                        float xmm0_7 = 1f / xmm1_8
                        xmm4_7 = xmm4_6 * xmm0_7
                        xmm6_5 = xmm6_4 * xmm0_7
                        xmm7_5 = xmm7_4 * xmm0_7
                else
                    xmm6_4 f- 0
                    eax_8:1.b = (xmm6_4 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm6_4, 0f) ? 1 : 0) << 2 | (xmm6_4 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        goto label_57d4de
                    
                    xmm7_4 f- 0
                    eax_8:1.b = (xmm7_4 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm7_4, 0f) ? 1 : 0) << 2 | (xmm7_4 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        goto label_57d4de
                    
                    xmm4_7 = 1f
                    xmm6_5 = (zx.o(0)).d
                    xmm7_5 = (zx.o(0)).d
                
                ebx = var_28 + 0x90
                int32_t esi_2 = *(ecx_4 + 8) * 3
                int32_t eax_11 = *ebx
                *(eax_11 + (esi_2 << 2)) = xmm4_7 f+ *(eax_11 + (esi_2 << 2))
                *(eax_11 + (esi_2 << 2) + 4) = xmm6_5 f+ *(eax_11 + (esi_2 << 2) + 4)
                *(eax_11 + (esi_2 << 2) + 8) = xmm7_5 f+ *(eax_11 + (esi_2 << 2) + 8)
                int32_t esi_3 = *(ecx_4 + 0x44) * 3
                int32_t eax_13 = *ebx
                *(eax_13 + (esi_3 << 2)) = xmm4_7 f+ *(eax_13 + (esi_3 << 2))
                *(eax_13 + (esi_3 << 2) + 4) = *(eax_13 + (esi_3 << 2) + 4) f+ xmm6_5
                *(eax_13 + (esi_3 << 2) + 8) = *(eax_13 + (esi_3 << 2) + 8) + xmm7_5
                int32_t esi_4 = *(ecx_4 + 0x80) * 3
                int32_t eax_15 = *ebx
                *(eax_15 + (esi_4 << 2)) = *(eax_15 + (esi_4 << 2)) + xmm4_7
                *(eax_15 + (esi_4 << 2) + 4) = *(eax_15 + (esi_4 << 2) + 4) f+ xmm6_5
                *(eax_15 + (esi_4 << 2) + 8) = *(eax_15 + (esi_4 << 2) + 8) + xmm7_5
                result = result_1
            
            ecx_4 += 0xbc
        while (ecx_4 != result)
        
        i = i_2
        esi = var_28
    
    i = &i[1]
    i_2 = i

for (int32_t* i_1 = *ebx; i_1 != *(esi + 0x94); i_1 = &i_1[3])
    float xmm5_3 = i_1[1]
    float xmm4_8 = *i_1
    float xmm6_6 = i_1[2]
    float xmm1_12 = xmm4_8 * xmm4_8 + xmm5_3 * xmm5_3 + xmm6_6 * xmm6_6
    float xmm1_13 = _mm_sqrt_ss(xmm1_12, xmm1_12)
    xmm1_13 f- 0
    result:1.b = (xmm1_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_13, 0f) ? 1 : 0) << 2
        | (xmm1_13 < 0f ? 1 : 0)
    bool p_10 = unimplemented  {test ah, 0x44}
    
    if (p_10)
        float xmm0_31 = 1f / xmm1_13
        *i_1 = xmm4_8 * xmm0_31
        i_1[1] = xmm5_3 * xmm0_31
        i_1[2] = xmm6_6 * xmm0_31
    
    float xmm1_14 = i_1[1]
    float xmm2_4 = *i_1
    float xmm0_32 = i_1[2]
    
    if (not(0.25f <= xmm2_4 * xmm2_4 + xmm1_14 * xmm1_14 + xmm0_32 * xmm0_32))
        *i_1 = 0x3f800000
        i_1[1] = 0
        i_1[2] = 0

return result
