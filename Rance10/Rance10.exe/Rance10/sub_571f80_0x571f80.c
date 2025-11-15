// 函数: sub_571f80
// 地址: 0x571f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = &arg1[9]
int32_t i = 0
int32_t* edx = arg1
int32_t i_1 = 0
int32_t* var_c = edx
int32_t* result_1 = result

do
    if (*result == 0)
        int32_t* ebx = arg2 + 0x24
        void* ebp_1 = arg2 + 8
        int32_t edi_1 = mods.dp.d(sx.q(i + 1), 3) * 3
        
        for (int32_t j = 0; j s< 3; )
            float xmm7_1 = *(ebp_1 - 4)
            int32_t eax_5 = mods.dp.d(sx.q(j + 1), 3) * 3
            float xmm3_1 = var_c[1]
            float xmm4_1 = *var_c
            float xmm5_1 = var_c[2]
            float xmm2_2 = xmm3_1 - xmm7_1
            float xmm1_2 = xmm4_1 f- *(ebp_1 - 8)
            float xmm0_2 = xmm5_1 f- *ebp_1
            float xmm0_5
            float xmm1_5
            float xmm2_7
            
            if (not(0.00100000005f < xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2))
                xmm2_7 = arg1[edi_1] f- *(arg2 + (eax_5 << 2))
                xmm1_5 = arg1[edi_1 + 1] f- *(arg2 + (eax_5 << 2) + 4)
                xmm0_5 = arg1[edi_1 + 2] f- *(arg2 + (eax_5 << 2) + 8)
            
            float xmm0_8
            float xmm1_8
            float xmm2_12
            float xmm3_2
            float xmm4_2
            float xmm5_2
            
            if (0.00100000005f < xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2
                    || not(xmm2_7 * xmm2_7 + xmm1_5 * xmm1_5 + xmm0_5 * xmm0_5 <= 0.00100000005f))
                xmm3_2 = xmm3_1 f- *(arg2 + (eax_5 << 2) + 4)
                xmm4_2 = xmm4_1 f- *(arg2 + (eax_5 << 2))
                xmm5_2 = xmm5_1 f- *(arg2 + (eax_5 << 2) + 8)
                
                if (not(0.00100000005f < xmm3_2 * xmm3_2 + xmm4_2 * xmm4_2 + xmm5_2 * xmm5_2))
                    xmm1_8 = arg1[edi_1 + 1] f- xmm7_1
                    xmm2_12 = arg1[edi_1] f- *(ebp_1 - 8)
                    xmm0_8 = arg1[edi_1 + 2] f- *ebp_1
            
            if ((0.00100000005f < xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2
                    || not(xmm2_7 * xmm2_7 + xmm1_5 * xmm1_5 + xmm0_5 * xmm0_5 <= 0.00100000005f)) && (
                    0.00100000005f < xmm3_2 * xmm3_2 + xmm4_2 * xmm4_2 + xmm5_2 * xmm5_2
                    || 0.00100000005f < xmm2_12 * xmm2_12 + xmm1_8 * xmm1_8 + xmm0_8 * xmm0_8))
                result = result_1
            else
                result = result_1
                *result = arg2
                *ebx = arg1
            
            j += 1
            ebx = &ebx[1]
            ebp_1 += 0xc
        
        edx = var_c
        i = i_1
    
    i += 1
    result = &result[1]
    edx = &edx[3]
    i_1 = i
    result_1 = result
    var_c = edx
while (i s< 3)

return result
