// 函数: sub_6bff10
// 地址: 0x6bff10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg2
int32_t ebx = 0
int32_t edx = arg3
void* var_58 = result
int32_t var_8 = edx
int32_t ebp_1 = edx * result
int32_t* esi = arg5
int32_t edi = arg4
int32_t var_4c = ebp_1

if (result s> 0)
    int32_t* ecx = edi + (var_4c << 2)
    float* var_48_1 = ecx
    float* var_54_1 = edi + (var_4c << 3)
    float* eax_1 = edi + var_4c * 0xc
    void* i_3 = var_58
    esi = arg5
    float* var_50_1 = eax_1
    void* i
    
    do
        int32_t ecx_1 = ebx << 2
        float xmm2_2 = *ecx + *eax_1
        float xmm1_2 = *(edi + (ebx << 2)) + *var_54_1
        esi[ecx_1] = xmm1_2 + xmm2_2
        int32_t ecx_2 = ecx_1 + (edx << 1)
        esi[ecx_1 + (edx << 2) - 1] = xmm1_2 - xmm2_2
        float* eax_4 = var_54_1
        float xmm0_3 = *(edi + (ebx << 2))
        ebx += edx
        var_54_1 = &var_54_1[edx]
        esi[ecx_2 - 1] = xmm0_3 - *eax_4
        float xmm0_6 = *var_50_1 - *var_48_1
        eax_1 = &var_50_1[edx]
        var_50_1 = eax_1
        esi[ecx_2] = xmm0_6
        ecx = &var_48_1[edx]
        i = i_3
        i_3 -= 1
        var_48_1 = ecx
    while (i != 1)
    ebp_1 = var_4c
    result = var_58

if (edx s>= 2)
    if (edx == 2)
    label_6c02e6:
        int32_t ecx_10 = ebp_1 - 1 + edx
        
        if (result s> 0)
            int32_t eax_40 = edx << 4
            void* ebx_5 = &esi[edx]
            void* edx_2 = &esi[edx * 3]
            float* ebp_6 = edi + ((ecx_10 + (ebp_1 << 1)) << 2)
            result = edi + ((ecx_10 + ebp_1) << 2)
            float* esi_7 = edi + ((ecx_10 - ebp_1) << 2)
            float* edi_5 = edi + (ecx_10 << 2)
            void* i_1
            
            do
                float xmm1_7 = *edi_5
                edi_5 = &edi_5[edx]
                float xmm1_8 = xmm1_7 - *ebp_6
                float xmm2_13 = xmm1_7 + *ebp_6
                ebp_6 = &ebp_6[edx]
                float xmm1_9 = xmm1_8 * 0.707106769f
                float xmm2_14 = xmm2_13 * -0.707106769f
                *(ebx_5 - 4) = xmm1_9 + *esi_7
                float xmm0_27 = *esi_7
                esi_7 = &esi_7[edx]
                *(edx_2 - 4) = xmm0_27 - xmm1_9
                *ebx_5 = xmm2_14 f- *result
                float xmm0_31 = *result
                result += edx << 2
                ebx_5 += eax_40
                *edx_2 = xmm0_31 + xmm2_14
                edx_2 += eax_40
                i_1 = var_58
                var_58 -= 1
            while (i_1 != 1)
    else
        int32_t ebx_1 = 0
        int32_t var_18_1 = 0
        
        if (result s> 0)
            int32_t* var_2c_1 = esi
            int32_t* ecx_4 = esi
            int32_t* var_24_1 = edi + ebp_1 * 0xc
            float* var_28_1 = edi + (ebp_1 << 2)
            void* i_4 = var_58
            void* i_2
            
            do
                int32_t eax_16 = (ebx_1 << 2) + (edx << 1)
                
                if (edx s> 2)
                    float* var_34_1 = &esi[eax_16 + (edx << 1)]
                    int32_t ecx_6 = ebx_1 << 2
                    int32_t* var_40_1 = var_2c_1
                    float* var_30_1 = arg8
                    float* var_48_2 = var_28_1
                    float* var_38_1 = &esi[ecx_6 + (edx << 1)]
                    void* ebp_5 = arg6 + 4
                    int32_t* ebx_3 = arg7 - arg8
                    float* var_54_2 = edi + ((ebx_1 + (var_4c << 1)) << 2)
                    int32_t* edx_1 = &esi[eax_16]
                    int32_t* var_44_1 = var_24_1
                    int32_t* edi_2 = ebx_3
                    int32_t* ebx_4 = ecx_6 + edi
                    int32_t j_1 = ((edx - 3) u>> 1) + 1
                    int32_t j
                    
                    do
                        var_48_2 = &var_48_2[2]
                        ebx_4 = &ebx_4[2]
                        edx_1 -= 8
                        float xmm4_1 = *(ebp_5 - 4)
                        float xmm2_3 = *ebp_5
                        var_54_2 = &var_54_2[2]
                        var_44_1 = &var_44_1[2]
                        var_40_1 = &var_40_1[2]
                        var_38_1 = &var_38_1[2]
                        float xmm5_3 = xmm4_1 * var_48_2[-1] + *var_48_2 * xmm2_3
                        float xmm1_4 = ebx_4[-1]
                        var_34_1 -= 8
                        float xmm4_3 = xmm4_1 * *var_48_2 - xmm2_3 * var_48_2[-1]
                        float xmm2_5 = *(arg7 - arg6 + ebp_5)
                        float xmm3_1 = var_54_2[-1]
                        float xmm7_1 = *(edi_2 + var_30_1)
                        float xmm3_2 = *ebx_4
                        float xmm4_6 = xmm7_1 * xmm3_1 + xmm2_5 * *var_54_2
                        float xmm7_3 = xmm7_1 * *var_54_2 - xmm2_5 * xmm3_1
                        float xmm2_7 = *(arg8 - arg6 + ebp_5)
                        float xmm4_7 = *var_44_1
                        float xmm6_3 = var_44_1[-1] f* *var_30_1 + xmm2_7 * xmm4_7
                        float xmm4_9 = xmm4_7 * *var_30_1 - xmm2_7 f* var_44_1[-1]
                        float xmm2_10 = xmm1_4 + xmm4_6
                        float xmm1_5 = xmm1_4 - xmm4_6
                        float xmm6_4 = xmm6_3 + xmm5_3
                        float xmm0_14 = xmm6_3 - xmm5_3
                        float xmm5_5 = xmm4_9 + xmm4_3
                        float xmm0_16 = xmm4_3 - xmm4_9
                        float xmm4_11 = xmm3_2 + xmm7_3
                        float xmm3_3 = xmm3_2 - xmm7_3
                        var_40_1[-1] = xmm2_10 + xmm6_4
                        *var_40_1 = xmm4_11 + xmm5_5
                        edx_1[-1] = xmm1_5 - xmm0_16
                        *edx_1 = xmm0_14 - xmm3_3
                        var_38_1[-1] = xmm1_5 + xmm0_16
                        var_30_1 = &var_30_1[2]
                        edi_2 = ebx_3
                        *var_38_1 = xmm3_3 + xmm0_14
                        ebp_5 += 8
                        j = j_1
                        j_1 -= 1
                        var_34_1[-1] = xmm2_10 - xmm6_4
                        *var_34_1 = xmm5_5 - xmm4_11
                    while (j != 1)
                    edx = var_8
                    esi = arg5
                    edi = arg4
                    ebx_1 = var_18_1
                    ebp_1 = var_4c
                    ecx_4 = var_2c_1
                
                ecx_4 = &ecx_4[edx * 4]
                var_28_1 = &var_28_1[edx]
                ebx_1 += edx
                var_24_1 = &var_24_1[edx]
                i_2 = i_4
                i_4 -= 1
                var_18_1 = ebx_1
                var_2c_1 = ecx_4
            while (i_2 != 1)
            result = var_58
        
        if ((edx.b & 1) == 0)
            goto label_6c02e6

return result
