// 函数: ___libm_sse2_atan2
// 地址: 0x72389c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t var_10 = arg1
int32_t eax_2 = (_mm_extract_epi16(arg1, 3) & 0x7ff0) - 0x3870
int64_t var_8 = arg2
int32_t eax_5

if (eax_2 u<= 0xf00)
    eax_5 = (_mm_extract_epi16(arg2, 3) & 0x7ff0) - 0x3870

if (eax_2 u<= 0xf00 && eax_5 u<= 0xf00)
    goto label_7238df

int32_t ecx_9 = _mm_extract_epi16(arg1, 3) & 0x7ff0
int32_t eax_16 = _mm_extract_epi16(arg2, 3) & 0x7ff0
int32_t eax_18

if (ecx_9 == 0x7ff0)
    if (((_mm_srli_epi64(arg1.q, 0x20) & 0xfffff) | arg1) != 0)
        return eax_16
    
    uint64_t xmm0_20[0x2] = _mm_slli_epi64(_mm_srli_epi64(arg1, 0x3f), 0x3f)
    
    if (eax_16 u< 0x7ff0)
        uint32_t xmm5_16[0x4] = data_79d110
        _mm_or_pd(xmm0_20, xmm5_16 f+ _mm_shuffle_epi32(xmm5_16, 0xee))
        return eax_16
    
    eax_18 = arg2
    int32_t xmm2_14 = _mm_srli_epi64(arg2.q, 0x20)
    
    if (((xmm2_14 & 0xfffff) | eax_18) != 0)
        return eax_18
    
    if ((0x80000000 & xmm2_14) != 0)
        double xmm5_21[0x2] = _mm_add_pd(data_79d130, data_79d110)
        _mm_or_pd(xmm0_20, _mm_add_pd(xmm5_21, _mm_shuffle_epi32(xmm5_21, 0xee)))
        return eax_18
    
    uint32_t xmm5_18[0x4] = data_79d130
    _mm_or_pd(xmm0_20, xmm5_18 f+ _mm_shuffle_epi32(xmm5_18, 0xee))
    return eax_18

if (eax_16 == 0x7ff0)
    eax_18 = arg2
    int32_t xmm2_16 = _mm_srli_epi64(arg2.q, 0x20)
    
    if (((xmm2_16 & 0xfffff) | eax_18) != 0)
        return eax_18
    
    uint64_t xmm0_26[0x2] = _mm_slli_epi64(_mm_srli_epi64(arg1, 0x3f), 0x3f)
    
    if ((0x80000000 & xmm2_16) == 0)
        return eax_18
    
    uint32_t xmm5_23[0x4] = data_79d120
    _mm_or_pd(xmm0_26, xmm5_23 f+ _mm_shuffle_epi32(xmm5_23, 0xee))
    return eax_18

arg4 = 0x4360000000000000
int32_t edx_4 = 0x400
arg5 = -0x7ff0000000000001
uint64_t xmm6_13[0x2] = _mm_xor_pd(arg7, arg7)
arg8 = 0x3ff0000000000000

if (ecx_9 == 0)
    edx_4 = 0x90
    arg1 = arg1 f* 36028797018963968.0
    ecx_9 = _mm_extract_epi16(arg1, 3) & 0x7ff0
    
    if (ecx_9 == 0)
        if ((_mm_extract_epi16(arg2, 3) & 0x8000) != 0)
            uint32_t xmm5_25[0x4] = data_79d120
            _mm_or_pd(arg1, xmm5_25 f+ _mm_shuffle_epi32(xmm5_25, 0xee))
        
        return eax_16

if (eax_16 == 0)
    edx_4 += 0x370
    arg2 = arg2 f* 36028797018963968.0
    eax_16 = _mm_extract_epi16(arg2, 3) & 0x7ff0
    
    if (eax_16 == 0)
        uint32_t xmm5_27[0x4] = data_79d110
        _mm_or_pd(_mm_slli_epi64(_mm_srli_epi64(arg1, 0x3f), 0x3f), 
            xmm5_27 f+ _mm_shuffle_epi32(xmm5_27, 0xee))
        return eax_16

int32_t edx_6 = edx_4 + ecx_9 - eax_16

if (edx_6 u<= 0x800)
    arg7 = _mm_insert_epi16(xmm6_13, edx_6 + 0x3bf0, 3)
    uint64_t xmm0_18[0x2] = _mm_and_pd(arg1, -0x7ff0000000000001)
    uint64_t xmm1_11[0x2] = _mm_and_pd(arg2, -0x7ff0000000000001)
    arg1 = _mm_or_pd(xmm0_18, arg7)
    arg2 = _mm_or_pd(xmm1_11, 0x3ff0000000000000)
label_7238df:
    double xmm0[0x2] = _mm_unpacklo_pd(arg1, arg2)
    uint64_t xmm5[0x2] = _mm_xor_pd(arg6, arg6)
    float xmm3_1[0x4] = _mm_rcp_ss(_mm_xor_pd(arg4, arg4), 
        _mm_srli_epi64(_mm_add_epi16(_mm_insert_epi16(xmm5, 0x800, 3), arg2), 0x1d))
    int16_t xmm4_1[0x8] = _mm_insert_epi16(_mm_xor_pd(arg5, arg5), 0x3800, 3)
    int32_t xmm3_4[0x4] = _mm_add_epi16(_mm_slli_epi64(xmm3_1, 0x1d), xmm4_1) f* xmm0
    uint64_t xmm2[0x2] = _mm_xor_pd(arg3, arg3)
    uint64_t xmm6[0x2] = _mm_xor_pd(arg7, arg7)
    uint64_t xmm7[0x2] = _mm_xor_pd(arg8, arg8)
    int32_t xmm6_1[0x4] = _mm_insert_epi16(xmm6, 0x8000, 2)
    int32_t xmm7_1[0x4] = _mm_insert_epi16(xmm7, 0x7fff, 3)
    uint64_t xmm3_6[0x2] = _mm_and_pd(_mm_add_epi32(xmm3_4, xmm6_1), xmm7_1)
    uint32_t eax_6 = _mm_extract_epi16(xmm3_6, 3)
    int64_t xmm2_1 = _mm_insert_epi16(xmm2, 0x4040, 3)
    double xmm3_7[0x2] = _mm_min_sd(xmm3_6, xmm2_1)
    uint32_t edx_1 = _mm_movemask_pd(xmm0)
    uint64_t xmm0_2[0x2] = _mm_srli_epi64(_mm_slli_epi64(xmm0, 1), 1)
    double xmm5_5[0x2] = _mm_cmpeq_sd(xmm3_6.q, xmm2_1, 2)
    uint64_t xmm1_1[0x2] = _mm_srli_epi64(_mm_slli_epi64(arg2, 1), 1)
    double xmm6_3 = _mm_insert_epi16(xmm1_1.q, 0, 0)
    double xmm0_4 = _mm_and_pd(xmm0_2, xmm5_5) - xmm6_3 f* xmm3_7
    double xmm1_2 = _mm_and_pd(xmm1_1, xmm5_5)
    uint64_t xmm4_4[0x2] = xmm0_2.q f* xmm3_7 + xmm1_2
    uint64_t xmm0_5[0x2] = xmm0_4 - (xmm1_1.q f- xmm6_3) f* xmm3_7
    
    if ((eax_6 & 0x7ff0) - 0x3f9e u<= 0x461)
        uint32_t ecx_1 = _mm_extract_epi16(xmm3_7, 3)
        uint32_t eax_9 = _mm_extract_epi16(xmm5_5, 0)
        uint32_t edx_2 = edx_1 * 2
        uint64_t xmm1_3[0x2] = *((edx_2 << 3) + &data_79d190)
        int32_t eax_11 = not.d(eax_9) & 1
        double xmm5_8[0x2] = _mm_add_pd(
            _mm_xor_pd(*((ecx_1 - 0x3f9e + eax_11) * 0x10 + &data_79c6d0), xmm1_3), 
            *((edx_2 << 3) + &data_79d150))
        _mm_unpackhi_pd(xmm5_8, xmm5_8)
        _mm_xor_pd(xmm1_3, xmm0_5 f/ xmm4_4)
        return eax_11
    
    if ((eax_6 & 0x7ff0) - 0x3bf0 u<= 0x3ae)
        double xmm4_9 = _mm_insert_epi16(_mm_xor_pd(xmm4_4, xmm4_4), 0x3ff0, 3) / xmm1_2
        uint32_t edx_3 = edx_1 * 2
        uint64_t xmm6_10[0x2] = *((edx_3 << 3) + &data_79d190)
        double xmm3_11[0x2] = _mm_unpacklo_pd(xmm3_7, xmm3_7)
        double xmm0_9 = _mm_xor_pd(xmm0_5, xmm6_10)
        _mm_xor_pd(xmm0_2.q, xmm6_10)
        uint64_t xmm3_12[0x2] = _mm_xor_pd(xmm3_11, xmm6_10)
        double xmm7_7[0x2] = _mm_add_pd((*((edx_3 << 3) + &data_79d1d0)).q f+ xmm0_9 * xmm4_9, 
            __andpd_xmmxuq_memxuq(xmm3_12, *((edx_3 << 3) + &data_79d210)))
        _mm_unpackhi_pd(xmm7_7, xmm7_7)
        return (eax_6 & 0x7ff0) - 0x3bf0

int32_t xmm1_10[0x4] = var_8
int32_t xmm0_12[0x4] = var_10
int32_t eax_14 = _mm_extract_epi16(xmm1_10, 3) & 0x7ff0

if ((_mm_extract_epi16(xmm0_12, 3) & 0x7ff0) s> eax_14)
    _mm_xor_pd(__andpd_xmmxuq_memxuq(xmm0_12, data_79d140), 0x3ff921fb54442d18)
    return eax_14

if (_mm_extract_epi16(xmm1_10, 3) s<= 0x7fff)
    return eax_14

_mm_xor_pd(__andpd_xmmxuq_memxuq(xmm0_12, data_79d140), 0x400921fb54442d18)
return eax_14
