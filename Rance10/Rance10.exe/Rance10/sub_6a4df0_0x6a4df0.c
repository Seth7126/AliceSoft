// 函数: sub_6a4df0
// 地址: 0x6a4df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_18 = &var_4
int32_t eax = *arg2
int32_t edi_1 = arg2[2] + eax
int32_t edi_2 = edi_1 + arg2[1]

if (edi_1 != neg.d(arg2[1]))
    double xmm0_1 = 100000.0
    double xmm2_1 = 0.5
    uint128_t xmm7_1 = -0x8000000000000000
    uint128_t xmm6_1 = 0x4330000000000000
    int64_t xmm5_1 = -0x3e20000000000000
    uint32_t xmm3_6[0x4]
    
    if (eax == 0)
        xmm3_6 = 0x3ff0000000000000
        *arg1 = 0
    label_6a4edf:
        int32_t eax_2 = arg2[1]
        
        if (eax_2 == 0)
            arg1[1] = 0
        label_6a4f69:
            int32_t edx = arg2[3]
            int32_t ebp_3 = arg2[5] + arg2[4] + edx
            int32_t eax_4 = *arg2
            int32_t eax_5 = arg2[1]
            int32_t eax_6 = sub_6a65c0(eax_5, edx, &arg1[2], 0x186a0, ebp_3)
            
            if (eax_6 != 0 && sub_6a65c0(eax_6, arg2[4], &arg1[3], 0x186a0, ebp_3) != 0)
                int32_t eax_9 = eax_4 + arg2[3]
                int32_t edx_2 = arg2[6]
                int32_t ebp_6 = arg2[8] + arg2[7] + edx_2
                int32_t eax_11 = eax_5 + arg2[4]
                int32_t eax_12 = sub_6a65c0(eax_11, edx_2, &arg1[4], 0x186a0, ebp_6)
                
                if (eax_12 != 0)
                    int32_t eax_13 = sub_6a65c0(eax_12, arg2[7], &arg1[5], 0x186a0, ebp_6)
                    
                    if (eax_13 != 0)
                        int32_t edi_4 = edi_2 + ebp_3 + ebp_6
                        int32_t ebp_8 = eax_11 + arg2[7]
                        int32_t eax_14 =
                            sub_6a65c0(eax_13, eax_9 + arg2[6], &arg1[6], 0x186a0, edi_4)
                        
                        if (eax_14 != 0)
                            int32_t eax_15 = sub_6a65c0(eax_14, ebp_8, &arg1[7], 0x186a0, edi_4)
                            int32_t eax_16 = neg.d(eax_15)
                            *var_18
                            return sbb.d(eax_16, eax_16, eax_15 != 0) + 1
        else
            uint32_t xmm1_8[0x4] =
                _mm_cvtepi32_pd(zx.q(eax_2)) * xmm0_1 / _mm_cvtepi32_pd(zx.q(edi_2)) + xmm2_1
            double xmm7_2[0x2] = _mm_and_ps(xmm7_1, xmm1_8)
            double xmm2_4 = xmm1_8[0].q
            double xmm6_3 = _mm_or_ps(
                _mm_and_ps(xmm6_1, _mm_cmpeq_sd(xmm1_8[0].q ^ xmm7_2[0], xmm6_1, 1)), xmm7_2)
            double xmm2_6 = xmm2_4 + xmm6_3 - xmm6_3
            double xmm2_7 = xmm2_6 - _mm_and_ps(_mm_cmpeq_sd(xmm2_6 f- xmm1_8, xmm7_2, 6), xmm3_6)
            
            if (not(0x41dfffffffc00000 f< xmm2_7) && not(xmm2_7 f< xmm5_1))
                arg1[1] = int.d(xmm2_7)
                goto label_6a4f69
    else
        uint32_t xmm3_5[0x4] =
            _mm_cvtepi32_pd(zx.q(eax)) * xmm0_1 / _mm_cvtepi32_pd(zx.q(edi_2)) + xmm2_1
        uint32_t xmm2_3[0x4] = _mm_and_ps(xmm7_1, xmm3_5)
        double xmm4_1 = xmm3_5[0].q
        double xmm1_3 = _mm_or_ps(
            _mm_and_ps(xmm6_1, _mm_cmpeq_sd(xmm3_5[0].q ^ xmm2_3[0].q, xmm6_1, 1)), xmm2_3)
        double xmm4_3 = xmm4_1 + xmm1_3 - xmm1_3
        xmm3_6 = 0x3ff0000000000000
        double xmm4_4 = xmm4_3 - _mm_and_ps(_mm_cmpeq_sd(xmm4_3 f- xmm3_5, xmm2_3, 6), xmm3_6)
        
        if (not(0x41dfffffffc00000 f< xmm4_4) && not(xmm4_4 f< xmm5_1))
            xmm0_1 = 100000.0
            xmm2_1 = 0.5
            *arg1 = int.d(xmm4_4)
            goto label_6a4edf

*var_18
return 1
