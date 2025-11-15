// 函数: ___libm_sse2_powf
// 地址: 0x72553d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint128_t xmm0 = zx.o(arg2)
int32_t var_8 = xmm0
uint32_t eax = _mm_extract_epi16(xmm0, 1)
uint128_t xmm4 = xmm0
double xmm5_1 =
    _mm_or_pd(_mm_and_pd(0xfffffffffffff, _mm_slli_epi64(xmm0, 0x1d)), 0x3ff0000000000000)
double xmm6[0x2] = data_79ebf0
int64_t xmm2 = (data_79ec00).q
int32_t xmm1_1[0x4] = fconvert.d(arg3)
int32_t var_10_1
int32_t eax_4
uint32_t ecx_2
int32_t edx_2

if (((0x7f7f - eax) | (eax - 0x80)) u>= 0x8000)
    uint64_t xmm0_17[0x2] = _mm_srli_epi64(_mm_and_pd(xmm1_1.q, 0x7fffffffffffffff), 0x20)
    int32_t ecx_5 = xmm0_17
    
    if (ecx_5 u< 0x7ff00000)
        if ((xmm1_1 | ecx_5) == 0)
        label_725a87:
            int32_t eax_19 = xmm4
            
            if (eax_19 == 0)
                return eax_19
            
            return xmm4 & 0x7fffffff
        
        int32_t edx_14 = xmm4
        
        if (edx_14 u<= 0x7f7fffff)
            ecx_2 = 0
        label_725876:
            xmm4 = xmm4 f* _mm_insert_epi16(_mm_xor_pd(xmm0_17, xmm0_17), 0x5f80, 1)
            
            if ((xmm4 & 0x7fffffff) != 0)
                eax = _mm_extract_epi16(xmm4, 1)
                uint128_t xmm0_29 = xmm4
                xmm4 = __andps_xmmxud_memxud(xmm4, data_79ec30)
                xmm5_1 = _mm_or_pd(_mm_and_pd(0xfffffffffffff, _mm_slli_epi64(xmm0_29, 0x1d)), 
                    0x3ff0000000000000)
                edx_2 = 0x5f3f
                goto label_7255c6
        else
            ecx_2 = zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(
                _mm_sll_epi64(_mm_or_pd(xmm1_1.q, _mm_slli_epi64(0x7fffffffffffffff, 0x34)), 
                    _mm_max_epi16(_mm_sub_epi32(_mm_srli_epi64(xmm0_17, 0x14), 0x3f3), zx.o(0))), 
                zx.o(0))))
            int32_t edx_15 = edx_14 & 0x7fffffff
            
            if (edx_15 u>= 0x7f800000)
                int32_t edx_27 = xmm4
                
                if (edx_27 == 0x7f800000)
                    return _mm_extract_epi16(xmm1_1, 3) & 0x8000
                
                if ((edx_27 & 0x7fffffff) u> 0x7f800000)
                    return eax
                
                if (ecx_2 == 0xff)
                    _mm_movemask_epi8(_mm_cmpeq_epi32(
                        _mm_sll_epi64(xmm1_1.q, 
                            _mm_sub_epi32(
                                _mm_srli_epi64(__andpd_xmmxuq_memxuq(xmm1_1.q, data_79ec40), 0x34), 
                                0x3f4)), 
                        zx.o(0)))
                
                return _mm_extract_epi16(xmm1_1, 3) & 0x8000
            
            if (ecx_2 == 0xff)
                xmm0_17 = _mm_sub_epi32(
                    _mm_srli_epi64(
                        __andpd_xmmxuq_memxuq(_mm_and_pd(xmm1_1.q, 0x7fffffffffffffff), 
                            data_79ec40), 
                        0x34), 
                    0x3f4)
                ecx_2 = (zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_sll_epi64(xmm1_1.q, xmm0_17), 
                    -0x8000000000000000))) + 0x7f01) & 0x8000
                
                if (edx_15 u< 0x800000)
                    goto label_725876
                
                edx_2 = 0xbf3f
                goto label_7255c6
            
            eax = xmm4
        
        return eax
    
    if ((xmm4 & 0x7fffffff) u> 0x7f800000)
        return eax
else
    edx_2 = 0x3f3f
    ecx_2 = 0
label_7255c6:
    int32_t eax_3 = ((eax & 0x7f) + 1) & 0xfe
    uint64_t xmm7_1[0x2] = *((eax_3 << 2) + &data_79e8e0)
    double xmm1_2 = xmm1_1 f* 32.0
    double xmm7_3 = _mm_slli_epi64(_mm_srli_epi64(xmm7_1, 0x1a), 0x1a)
    double xmm4_4 =
        _mm_cvtepi32_pd(_mm_srai_epi32(_mm_sub_epi32(_mm_srli_epi64(xmm4, 0x10), zx.o(edx_2)), 7))
    double xmm0_3 = *((eax_3 << 2) + &data_79e6d0)
    uint32_t xmm5_3[0x4] = xmm5_1 * (xmm7_1.q f- xmm7_3) + xmm7_3 * xmm5_1 - 1.4426950408889634
    uint32_t xmm7_6[0x4] = _mm_shuffle_epi32(xmm5_3, 0x44)
    double xmm6_1 = _mm_mul_pd(xmm6, xmm7_6)
    double xmm7_7 = _mm_mul_pd(xmm7_6, xmm7_6)
    uint32_t xmm2_1[0x4] = xmm2 f* xmm7_7
    double xmm6_2[0x2] = xmm6_1 + _mm_shuffle_epi32(xmm2_1, 0xee)
    int32_t xmm0_7[0x4] = (xmm0_3 f+ xmm5_3 + xmm4_4 f+ xmm2_1) * xmm1_2
    uint32_t edx_3 = _mm_extract_epi16(xmm0_7, 3)
    uint64_t xmm0_9[0x2] = xmm0_7 f+ 6755399441055744.0 - 6755399441055744.0
    double xmm6_3[0x2] = _mm_mul_pd(xmm6_2, xmm7_7 * xmm7_7)
    int32_t edx_4 = edx_3 & 0x7ff0
    eax_4 = 0x41d0 - edx_4
    
    if (((edx_4 - 0x3e60) | eax_4) u< 0x80000000)
        int32_t eax_5 = int.d(xmm0_9)
        uint64_t xmm6_4[0x2] = xmm6_3 f+ _mm_shuffle_epi32(xmm6_3, 0xee)
        double xmm7_10[0x2] = data_79ec10
        uint64_t xmm1_3[0x2] = xmm1_2 f* xmm6_4
        double xmm2_3[0x2] = data_79ec20
        uint64_t xmm6_5[0x2] = _mm_xor_pd(xmm6_4, xmm6_4)
        uint32_t xmm4_7[0x4] = xmm0_7.q f- xmm0_9 f+ xmm1_3
        uint32_t xmm5_4[0x4] = _mm_shuffle_epi32(xmm4_7, 0x44)
        
        if (((0xfbf - eax_5) | (eax_5 + 0xfa0)) u< 0x80000000)
            int32_t eax_8 = eax_5 & 0x1f
            double xmm3_3 = *((eax_8 << 3) + &data_79eaf0)
            double xmm6_6 =
                _mm_insert_epi16(xmm6_5, (ecx_2 | 0x3ff0) + (eax_5 s>> 1 & 0xfffffff0), 3)
            double xmm2_4[0x2] = _mm_add_pd(xmm2_3, _mm_mul_pd(xmm7_10, xmm5_4))
            _mm_cvtpd_ps((_mm_shuffle_epi32(xmm2_4, 0xee) + xmm5_4 f* xmm5_4 f* xmm2_4)
                * xmm4_7 f* xmm3_3 * xmm6_6 + xmm3_3 * xmm6_6)
            return eax_8
        
        if (eax_5 s>= 0x2000)
            _mm_insert_epi16(_mm_xor_pd(xmm0_9, xmm0_9), ecx_2 | 0x7f7f, 1)
            return eax_5
        
        if (eax_5 s<= 0xffffe000)
            _mm_insert_epi16(_mm_xor_pd(xmm0_9, xmm0_9), ecx_2, 1)
            return 0x800000
        
        uint64_t xmm1_6[0x2] = _mm_xor_pd(xmm1_3, xmm1_3)
        int32_t edx_32 = eax_5 s>> 5
        double xmm3_9 = *(((eax_5 & 0x1f) << 3) + &data_79eaf0)
        int32_t edx_33 = edx_32 s>> 1
        double xmm6_7 = _mm_insert_epi16(xmm6_5, (ecx_2 | 0x3ff0) + (edx_33 << 4), 3)
        double xmm1_7 = _mm_insert_epi16(xmm1_6, (edx_32 - edx_33 + 0x3ff) << 4, 3)
        double xmm2_8[0x2] = _mm_add_pd(xmm2_3, _mm_mul_pd(xmm7_10, xmm5_4))
        return _mm_extract_epi16(
            _mm_cvtpd_ps(((_mm_shuffle_epi32(xmm2_8, 0xee) + xmm5_4 f* xmm5_4 f* xmm2_8)
                * xmm4_7 f* xmm3_9 * xmm6_7 + xmm3_9 * xmm6_7) * xmm1_7), 
            1) & 0x7fff
    
    xmm4 = var_8
    
    if (var_8 == 0x3f800000)
        var_10_1 = arg1 & 0xffffffde
        return eax_4
    
    int32_t eax_28 = arg3 & 0x7fffffff
    
    if (eax_28 u< 0x7f800000)
        if (eax_28 == 0)
            goto label_725a87
        
        uint32_t edx_36 = _mm_extract_epi16(xmm0_9, 3)
        
        if ((edx_36 & 0x7ff0) u<= 0x3e60)
            return edx_36
        
        int32_t eax_7 = edx_36 & 0x8000
        
        if (eax_7 == 0)
            _mm_insert_epi16(_mm_xor_pd(xmm0_9, xmm0_9), ecx_2 | 0x7f7f, 1)
            return eax_7
        
        _mm_insert_epi16(_mm_xor_pd(xmm0_9, xmm0_9), ecx_2, 1)
        return 0x800000
eax_4 = arg3 & 0x7fffffff

if (eax_4 u> 0x7f800000)
    return eax_4

if (xmm4 == 0xbf800000)
    var_10_1 = arg1 & 0xffffffde
    return eax_4

int32_t eax_13

if ((arg3 & 0x80000000) == 0)
    eax_13 = _mm_extract_epi16(xmm4, 1) & 0x7f80
else
    eax_13 = xmm4 & 0x7fffffff

return eax_13
