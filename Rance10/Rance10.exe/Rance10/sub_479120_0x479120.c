// 函数: sub_479120
// 地址: 0x479120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = (*(*arg1 + 8))(arg2, arg3)
void* eax_3 = (*(*arg4 + 8))(arg5, arg6)
int32_t esi = arg7 << 2
int32_t eax_7 = (*(*arg1 + 0x1c))() - esi
int32_t* eax_10 = (*(*arg4 + 0x1c))() - esi
int32_t* edi_1 = eax_1
void* esi_1 = eax_3
void* result = 0xff
uint32_t xmm7_1[0x4] = _mm_shuffle_epi32(0xff, 0)
int32_t i

do
    int32_t j_1 = arg7
    int32_t j
    
    do
        if (j_1 u>= 4)
            result = edi_1 & 0xf
            
            if (result == 0)
                while (true)
                    uint32_t xmm0_3[0x4] = *esi_1
                    int32_t xmm3_11[0x4] = _mm_srli_epi32(xmm0_3, 8) & xmm7_1
                    int32_t xmm4_11[0x4] = _mm_srli_epi32(xmm0_3, 0x10) & xmm7_1
                    uint32_t xmm0_4[0x4] = _mm_srli_epi32(xmm0_3, 0x19)
                    uint32_t xmm1_4[0x4] = *edi_1
                    int32_t xmm5_4[0x4] = xmm1_4 & xmm7_1
                    int32_t xmm6_6[0x4] = _mm_srli_epi32(xmm1_4, 8) & xmm7_1
                    int32_t xmm1_6[0x4] = _mm_srli_epi32(xmm1_4, 0x10) & xmm7_1
                    int32_t xmm2_11[0x4] = _mm_subs_epi16(xmm0_3 & xmm7_1, xmm5_4)
                    int32_t xmm3_12[0x4] = _mm_subs_epi16(xmm3_11, xmm6_6)
                    int32_t xmm4_12[0x4] = _mm_subs_epi16(xmm4_11, xmm1_6)
                    int32_t xmm2_12[0x4] = _mm_mullo_epi16(xmm2_11, xmm0_4)
                    int32_t xmm3_13[0x4] = _mm_mullo_epi16(xmm3_12, xmm0_4)
                    int32_t xmm4_13[0x4] = _mm_mullo_epi16(xmm4_12, xmm0_4)
                    int32_t xmm2_13[0x4] = _mm_srai_epi16(xmm2_12, 7)
                    int32_t xmm3_14[0x4] = _mm_srai_epi16(xmm3_13, 7)
                    int32_t xmm4_14[0x4] = _mm_srai_epi16(xmm4_13, 7)
                    int32_t xmm2_14[0x4] = _mm_adds_epi16(xmm2_13, xmm5_4)
                    int32_t xmm3_15[0x4] = _mm_adds_epi16(xmm3_14, xmm6_6)
                    int32_t xmm4_15[0x4] = _mm_adds_epi16(xmm4_14, xmm1_6)
                    *edi_1 = xmm2_14 | _mm_slli_epi32(xmm3_15, 8) | _mm_slli_epi32(xmm4_15, 0x10)
                    edi_1 = &edi_1[4]
                    esi_1 += 0x10
                    int32_t j_2 = j_1
                    j_1 -= 4
                    
                    if (j_2 == 4)
                        break
                    
                    if (j_1 u< 4)
                        goto label_47919b
                
                break
        
    label_47919b:
        uint32_t xmm0_1[0x4] = *esi_1
        int32_t xmm3_3[0x4] = _mm_srli_epi32(xmm0_1, 8) & xmm7_1
        int32_t xmm4_3[0x4] = _mm_srli_epi32(xmm0_1, 0x10) & xmm7_1
        uint32_t xmm0_2[0x4] = _mm_srli_epi32(xmm0_1, 0x19)
        uint32_t xmm1_1[0x4] = *edi_1
        int32_t xmm5_2[0x4] = xmm1_1 & xmm7_1
        int32_t xmm6_3[0x4] = _mm_srli_epi32(xmm1_1, 8) & xmm7_1
        int32_t xmm1_3[0x4] = _mm_srli_epi32(xmm1_1, 0x10) & xmm7_1
        int32_t xmm2_3[0x4] = _mm_subs_epi16(xmm0_1 & xmm7_1, xmm5_2)
        int32_t xmm3_4[0x4] = _mm_subs_epi16(xmm3_3, xmm6_3)
        int32_t xmm4_4[0x4] = _mm_subs_epi16(xmm4_3, xmm1_3)
        int32_t xmm2_4[0x4] = _mm_mullo_epi16(xmm2_3, xmm0_2)
        int32_t xmm3_5[0x4] = _mm_mullo_epi16(xmm3_4, xmm0_2)
        int32_t xmm4_5[0x4] = _mm_mullo_epi16(xmm4_4, xmm0_2)
        int16_t xmm2_5[0x8] = _mm_srai_epi16(xmm2_4, 7)
        int16_t xmm3_6[0x8] = _mm_srai_epi16(xmm3_5, 7)
        int16_t xmm4_6[0x8] = _mm_srai_epi16(xmm4_5, 7)
        int32_t xmm2_6 = _mm_adds_epi16(xmm2_5, xmm5_2)
        int32_t xmm3_7[0x4] = _mm_adds_epi16(xmm3_6, xmm6_3)
        int32_t xmm4_7[0x4] = _mm_adds_epi16(xmm4_6, xmm1_3)
        *edi_1 = xmm2_6 | _mm_slli_epi32(xmm3_7, 8) | _mm_slli_epi32(xmm4_7, 0x10)
        edi_1 = &edi_1[1]
        esi_1 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_1 += eax_7
    esi_1 += eax_10
    i = arg8
    arg8 -= 1
while (i != 1)
return result
