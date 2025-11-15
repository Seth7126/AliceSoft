// 函数: sub_6bc8e0
// 地址: 0x6bc8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t xmm1 = _mm_shuffle_epi32(zx.o(arg8), 0)
int64_t xmm0_2 = _mm_shuffle_ps(arg5, arg5, 0)
int32_t result = arg3
int32_t i = 0
int64_t xmm0_4 = _mm_shuffle_ps(arg4, arg4, 0)
int32_t esi = arg9
int64_t xmm0_6 = _mm_shuffle_epi32(zx.o(result), 0)

if (esi s> 0)
    uint32_t xmm7_1[0x4] = data_79aab0.o
    void* edi_1 = arg6
    
    if (esi u>= 4 && (arg7 u> edi_1 + ((esi - 1) << 2) || arg7 + (esi << 2) - 4 u< edi_1)
            && (arg7 u> arg2 + ((esi - 1) << 2) || arg7 + (esi << 2) - 4 u< arg2))
        int32_t eax_8 = esi & 0x80000003
        
        if (eax_8 s< 0)
            eax_8 = ((eax_8 - 1) | 0xfffffffc) + 1
        
        int32_t xmm2_1[0x4] = _mm_sub_epi32(zx.o(xmm0_6), zx.o(xmm1))
        void* var_18_1 = edi_1
        void* var_8_1 = arg7 + 8
        void* eax_12 = var_8_1
        int64_t* edx_2 = arg2 - edi_1
        int32_t var_48_1[0x4] = xmm2_1
        
        do
            int64_t* esi_1 = var_18_1
            int32_t xmm1_2[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), 0x100000000)
            float xmm0_10[0x2] = *(edx_2 + esi_1)
            int32_t xmm3_2[0x4] = _mm_cmpgt_epi32(zx.o(xmm2_1), xmm1_2)
            float xmm1_5[0x4] = _mm_cvtpd_ps(_mm_div_pd(_mm_and_ps(_mm_cvtps_pd(xmm0_10), xmm7_1), 
                _mm_cvtps_pd(*esi_1)))
            uint32_t xmm4_2[0x4] = _mm_andnot_ps(xmm3_2, xmm0_2)
            uint32_t xmm3_3[0x4] = _mm_and_ps(xmm3_2, xmm0_4)
            uint128_t xmm0_15 = zx.o(*(eax_12 - 8))
            int64_t xmm4_4 = _mm_cmpeq_ps(_mm_or_ps(xmm4_2, xmm3_3), xmm1_5, 2)
            uint128_t xmm4_6 = zx.o(var_48_1[0].q)
            *(eax_12 - 8) = (((0x100000001 & xmm4_4) | (xmm4_4 & (not.o(xmm0_15)).q)) & xmm4_4)
                | (xmm4_4 & (not.o(zx.o(0))).q)
            uint32_t xmm0_16[0x4] = zx.o(i + 2)
            i += 4
            int64_t* eax_15 = var_8_1 + edi_1 - arg7
            int32_t xmm4_7[0x4] =
                _mm_cmpgt_epi32(xmm4_6, _mm_add_epi32(_mm_shuffle_epi32(xmm0_16, 0), 0x100000000))
            float xmm0_19[0x2] = *eax_15
            uint32_t xmm2_12[0x4] = _mm_cvtps_pd(*(eax_15 + edx_2))
            double xmm0_20[0x2] = _mm_cvtps_pd(xmm0_19)
            float xmm1_12[0x4] = _mm_cvtpd_ps(_mm_div_pd(_mm_and_ps(xmm2_12, xmm7_1), xmm0_20))
            uint32_t xmm3_5[0x4] = _mm_andnot_ps(xmm4_7, xmm0_2)
            uint32_t xmm4_8[0x4] = _mm_and_ps(xmm4_7, xmm0_4)
            uint128_t xmm0_23 = zx.o(*var_8_1)
            int64_t xmm3_7 = _mm_cmpeq_ps(_mm_or_ps(xmm3_5, xmm4_8), xmm1_12, 2)
            *var_8_1 = (((0x100000001 & xmm3_7) | (xmm3_7 & (not.o(xmm0_23)).q)) & xmm3_7)
                | (xmm3_7 & (not.o(zx.o(0))).q)
            xmm2_1 = var_48_1
            eax_12 = var_8_1 + 0x10
            var_18_1 = &esi_1[2]
            var_8_1 = eax_12
        while (i s< esi - eax_8)
        
        esi = arg9
        edi_1 = arg6
    
    if (i s< esi)
        result -= arg8
        int32_t result_1 = result
        void* edx_4 = arg7 + (i << 2)
        
        do
            float xmm2_22
            
            if (i s< result)
                xmm2_22 = arg4[0]
            else
                xmm2_22 = arg5[0]
            
            void* eax_17 = edi_1 - arg7 + edx_4
            double xmm0_25 = _mm_cvtps_pd(*eax_17)
            int32_t eax_18
            eax_18.b = xmm2_22 f<=
                _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(*(arg2 - edi_1 + eax_17)), xmm7_1) / xmm0_25)
            i += 1
            *edx_4 = eax_18
            edx_4 += 4
            result = result_1
        while (i s< arg9)

return result
