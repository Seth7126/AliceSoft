// 函数: ___libm_sse2_pow
// 地址: 0x6af617
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint64_t xmm7[0x2] = _mm_and_pd(0xfffffffffffff, arg1)
int32_t xmm4[0x4] = arg1.q
uint64_t xmm0[0x2] = _mm_srli_epi64(arg1, 0x2c)
char eax = _mm_extract_epi16(xmm0, 0)
double xmm7_1 = _mm_or_pd(xmm7, 0x3ff0000000000000)
uint32_t ecx = _mm_extract_epi16(xmm4, 3)
int32_t eax_3 = (zx.d(eax) + 1) & 0x1fe
uint64_t xmm7_2[0x2] = xmm7_1 f* *((eax_3 << 2) + &data_70e3e0)
double xmm5 = *((eax_3 << 2) + &data_70e3e0)
double xmm6[0x2] = *(eax_3 * 8 + &data_70e7f0)
int32_t eax_47
int32_t eax_50
int32_t ecx_3
uint32_t edx_2
int32_t xmm1_3[0x4]
uint64_t xmm2_17[0x2]
int32_t edx_1

if (((ecx - 0x10) | (0x7fef - ecx)) u>= 0x80000000)
    uint64_t xmm1_10[0x2] = arg2
    xmm2_17 = xmm1_10.q
    xmm1_3 = _mm_srli_epi64(_mm_and_pd(xmm1_10, 0x7fffffffffffffff), 0x20)
    int32_t ecx_7 = xmm1_3
    uint32_t eax_29
    
    if (ecx_7 u< 0x7ff00000)
        if ((xmm1_10 | ecx_7) == 0)
            return xmm4 | (_mm_srli_epi64(xmm4, 0x20) & 0x7fffffff)
        
        int32_t eax_34
        uint64_t xmm2_25[0x2]
        
        if (0x7fef - ecx s>= 0)
            ecx_3 = 0
        label_6afaac:
            xmm7_2 = 0xfffffffffffff
            xmm2_25 = 0x3ff0000000000000
            xmm0 = _mm_insert_epi16(_mm_xor_pd(xmm0, xmm0), 0x43f0, 3) f* xmm4
            eax_34 = _mm_srli_epi64(xmm4, 0x20)
            
            if (xmm4 != 0 || (eax_34 & 0x7fffffff) != 0)
            label_6afad2:
                uint64_t xmm7_15[0x2] = _mm_and_pd(xmm7_2, xmm0)
                xmm4 = xmm0.q
                xmm0 = _mm_srli_epi64(__andpd_xmmxuq_memxuq(xmm0, data_711c90), 0x2c)
                int32_t eax_38 = (zx.d(_mm_extract_epi16(xmm0, 0)) + 1) & 0x1fe
                xmm7_2 = _mm_or_pd(xmm7_15, xmm2_25) f* *((eax_38 << 2) + &data_70e3e0)
                xmm5 = *((eax_38 << 2) + &data_70e3e0)
                xmm6 = *(eax_38 * 8 + &data_70e7f0)
                edx_1 = 0x43e7f
                goto label_6af6aa
        else
            uint64_t xmm2_18[0x2] = _mm_or_pd(xmm2_17, _mm_slli_epi64(0x7fffffffffffffff, 0x34))
            uint64_t xmm1_14[0x2] =
                _mm_max_epi16(_mm_sub_epi32(_mm_srli_epi64(xmm1_3, 0x14), 0x3f3), zx.o(0))
            eax_29 = _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_sll_epi64(xmm2_18, xmm1_14), zx.o(0)))
            int32_t edx_10 = (neg.d(0x7fef - ecx) + 0x7fef) & 0x7fff
            
            if (edx_10 u>= 0x7ff0)
                if (zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_xor_pd(xmm1_14, xmm1_14), 
                        _mm_and_pd(0xfffffffffffff, xmm4)))) != 0xff)
                    return eax_29
                
                if ((_mm_extract_epi16(xmm4, 3) & 0x8000) == 0)
                    eax_47 = _mm_extract_epi16(arg2, 3) & 0x8000
                    
                    if (eax_47 == 0)
                        return eax_47
                    
                    _mm_xor_pd(xmm0, xmm0)
                    return eax_47
                
                uint32_t eax_44
                
                if ((eax_29 & 0xff) == 0xff)
                    eax_44 = zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(
                        _mm_sll_epi64(arg2, 
                            _mm_sub_epi32(
                                _mm_srli_epi64(__andpd_xmmxuq_memxuq(arg2, data_711c90), 0x34), 
                                0x3f4)), 
                        zx.o(0))))
                
                if ((eax_29 & 0xff) == 0xff && eax_44 != 0xff)
                    return _mm_extract_epi16(arg2, 3) & 0x8000
                
                eax_47 = _mm_extract_epi16(arg2, 3) & 0x8000
                
                if (eax_47 == 0)
                    return eax_47
                
                _mm_xor_pd(xmm0, xmm0)
                return eax_47
            
            if ((eax_29 & 0xff) == 0xff)
                ecx_3 = (0x3ff01 + zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(
                    _mm_sll_epi64(arg2, 
                        _mm_sub_epi32(
                            _mm_srli_epi64(__andpd_xmmxuq_memxuq(arg2, data_711c90), 0x34), 
                            0x3f4)), 
                    -0x8000000000000000)))) & 0x40000
                
                if (edx_10 u< 0x10)
                    goto label_6afaac
                
                edx_1 = 0xbfe7f
                goto label_6af6aa
            
            uint64_t xmm2_30[0x2] = arg1
            xmm2_25 = _mm_srli_epi64(xmm2_30, 0x20)
            eax_34 = xmm2_30 | (xmm2_25 & 0x7fffffff)
            ecx_3 = 0
            
            if (eax_34 != 0)
                return eax_34
            
            if ((eax_34 & 0x7fffffff) != 0)
                goto label_6afad2
        
        if ((arg2:4.d & 0x80000000) != 0)
            int32_t eax_40 = eax_34 & ecx_3 << 0xd
            _mm_slli_epi64(0x7ff00000 | zx.o(eax_40), 0x20)
            return eax_40
        
        int32_t eax_41 = eax_34 & ecx_3 << 0xd
        
        if (eax_41 != 0)
            return eax_41
        
        _mm_xor_pd(xmm0, xmm0)
        return eax_41
    
    uint64_t xmm7_13[0x2] = arg1
    edx_2 = xmm7_13
    int32_t xmm7_14 = _mm_srli_epi64(xmm7_13, 0x20)
    ecx_3 = xmm7_14
    eax_29 = xmm7_14 & 0x7fffffff
    
    if (eax_29 u>= 0x7ff00000 && (eax_29 u> 0x7ff00000 || edx_2 u> 0))
        return eax_29
else
    ecx_3 = 0
    edx_1 = 0x3fe7f
label_6af6aa:
    double xmm0_3 = _mm_cvtepi32_pd(_mm_srli_epi64(_mm_sub_epi64(xmm0, zx.o(edx_1)), 8))
    char eax_5 = _mm_extract_epi16(_mm_srli_epi64(xmm7_2, 0x26), 0)
    uint64_t xmm4_1[0x2] = __andpd_xmmxuq_memxuq(xmm4, data_711c70)
    int32_t eax_8 = (zx.d(eax_5) + 1) & 0x1fe
    uint64_t xmm3_2[0x2] = xmm7_2.q f* *((eax_8 << 2) + &data_70f000)
    double xmm5_1 = xmm5 f* *((eax_8 << 2) + &data_70f000)
    double xmm6_1 = __addpd_xmmpd_mempd(xmm6, *(eax_8 * 8 + &data_70f410))
    uint64_t xmm4_2[0x2] = __orpd_xmmxuq_memxuq(xmm4_1, data_711c80)
    double xmm1_1 = _mm_and_pd(-0x8000000, xmm4_2)
    double xmm4_3 = xmm4_2 f- xmm1_1
    int32_t eax_13 = ((_mm_extract_epi16(_mm_srli_epi64(xmm3_2, 0x1f), 0) & 0x1ff) + 1) & 0x3fe
    uint64_t xmm5_2[0x2] = xmm5_1 f* *((eax_13 << 2) + &data_70fc20)
    double xmm2_2 = xmm3_2.q f* *((eax_13 << 2) + &data_70fc20)
    double xmm6_3 = __addpd_xmmpd_mempd(xmm6_1 + xmm0_3, *((eax_13 << 3) + &data_710430))
    double xmm0_4 = _mm_and_pd(-0x8000000, xmm5_2)
    double xmm5_3 = xmm5_2 f- xmm0_4
    double xmm7_4 = -1.4426949024200439 + xmm2_2
    int32_t xmm6_4[0x4] = xmm6_3 + xmm7_4
    xmm1_3 = arg2
    uint32_t eax_14 = _mm_extract_epi16(xmm1_3, 3)
    edx_2 = _mm_extract_epi16(xmm6_4, 3)
    double xmm2_6 = xmm2_2 - xmm0_4 * xmm1_1 - xmm1_1 * xmm5_3 - xmm0_4 * xmm4_3 - xmm4_3 * xmm5_3
    double xmm4_5[0x2] = xmm6_4.q
    xmm0 = xmm6_3 f- xmm6_4 + xmm7_4
    double xmm7_5[0x2] = xmm7_4 - xmm2_6
    uint64_t xmm6_5[0x2] = xmm6_4 f- xmm2_6
    double xmm7_6[0x2] = _mm_unpacklo_pd(xmm7_5, xmm7_5)
    int32_t eax_15 = eax_14 & 0x7ff0
    
    if (eax_15 u< 0x7ff0)
        int32_t eax_17 = eax_15 - 0x3ff0 + (edx_2 & 0x7ff0)
        int32_t eax_67
        
        if (((0x40a0 - eax_17) | (eax_17 - 0x3c70)) u>= 0x80000000)
            xmm4_5 = _mm_mul_pd(_mm_shuffle_epi32(xmm1_3, 0x44), xmm6_5)
            eax_67 = _mm_extract_epi16(xmm4_5, 3) & 0x7ff0
        
        int32_t eax_21
        
        if (((0x40a0 - eax_17) | (eax_17 - 0x3c70)) u< 0x80000000
                || ((0x40a0 - eax_67) | (eax_67 - 0x3c70)) u< 0x80000000)
            uint64_t xmm2_7[0x2] = xmm2_6 - (xmm4_5 f- xmm6_5)
            double xmm3_6 = _mm_and_pd(-0x8000000, xmm1_3)
            double xmm4_7 = _mm_and_pd(-0x8000000, xmm6_5)
            double xmm0_8 = xmm0 f- xmm2_7
            double xmm6_6 = xmm6_5 f- xmm4_7
            double xmm1_4 = xmm1_3 f- xmm3_6
            double xmm3_8 =
                xmm3_6 * xmm4_7 * _mm_insert_epi16(_mm_xor_pd(xmm2_7, xmm2_7), 0x4060, 3)
            double xmm2_10[0x2] = data_711440
            int32_t eax_19 = int.d(xmm3_8)
            uint32_t xmm6_7[0x4] = xmm6_6 * xmm1_4
            xmm1_3 = data_711450
            double xmm4_9 = _mm_shuffle_epi32(xmm6_7, 0xee)
            double xmm5_7 = xmm3_6 * xmm6_6 + xmm4_7 * xmm1_4 f+ xmm6_7
            eax_21 = eax_19
            
            if (((0x1ff7f - eax_19) | (eax_19 + 0x1e1ff)) s> 0)
                double xmm2_11[0x2] = _mm_mul_pd(xmm2_10, xmm7_6)
                double xmm7_7[0x2] = _mm_mul_pd(xmm7_6, xmm7_6)
                void* eax_26 = (eax_21 & 0x7f) * 0x10
                double xmm3_9[0x2] = *(eax_26 + 0x711460)
                double xmm6_8[0x2] = data_711ca0
                double xmm2_12[0x2] = _mm_add_pd(xmm2_11, _mm_mul_pd(xmm1_3, xmm7_7))
                double xmm1_6 = _mm_shuffle_epi32(xmm2_12, 0xee)
                double xmm0_11 = (float.d(eax_21) - xmm3_8)
                    * _mm_insert_epi16(_mm_xor_pd(xmm7_7, xmm7_7), 0xbf80, 3)
                uint32_t xmm1_9[0x4] = _mm_shuffle_epi32(
                    _mm_slli_epi64(zx.o(((ecx_3 + eax_21) & 0xffffff80) + 0x1ff80), 0x2d), 0x44)
                double xmm7_10[0x2] = data_711cb0
                double xmm3_10[0x2] = _mm_mul_pd(xmm3_9, xmm1_9)
                double xmm0_12[0x2] =
                    xmm0_11 + xmm5_7 + (xmm2_12 f* xmm7_7 + xmm1_6 + xmm4_9 + xmm0_8) * arg2
                double xmm0_13[0x2] = _mm_unpacklo_pd(xmm0_12, xmm0_12)
                double xmm6_9[0x2] = _mm_mul_pd(xmm6_8, xmm0_13)
                double xmm0_14[0x2] = _mm_mul_pd(xmm0_13, xmm0_13)
                _mm_shuffle_epi32(_mm_mul_pd(_mm_add_pd(xmm7_10, xmm6_9), xmm0_14), 0xee)
                _mm_shuffle_epi32(xmm3_10, 0xee)
                return eax_26
            
            int32_t var_1c
            int32_t var_18
            int32_t ecx_18
            int32_t edx_27
            int32_t esi
            int32_t edi
            uint32_t edi_1
            
            if (eax_21 s> 0)
                if (eax_21 u>= 0x40000)
                    goto label_6afffc
                
                var_18 = esi
                ecx_18 = ecx_3 + 0x3ff00
                edx_27 = (eax_21 - 0x80) & 0xffffff80
                var_1c = edi
                edi_1 = 0x3ff0
                goto label_6afe7a
            
            if (eax_21 s> 0xfffc0200)
                var_18 = esi
                ecx_18 = ecx_3 + 0x80
                edx_27 = (eax_21 & 0xffffff80) + 0x3fe80
                var_1c = edi
                edi_1 = 0
            label_6afe7a:
                double xmm2_32[0x2] = _mm_mul_pd(xmm2_10, xmm7_6)
                double xmm7_17[0x2] = _mm_mul_pd(xmm7_6, xmm7_6)
                double xmm3_19[0x2] = *((eax_21 & 0x7f) * 0x10 + 0x711460)
                double xmm6_12[0x2] = data_711ca0
                double xmm2_33[0x2] = _mm_add_pd(xmm2_32, _mm_mul_pd(xmm1_3, xmm7_17))
                double xmm2_36 =
                    xmm2_33 f* xmm7_17 + _mm_shuffle_epi32(xmm2_33, 0xee) + xmm4_9 + xmm0_8
                double xmm0_43 = (float.d(eax_21) - xmm3_8)
                    * _mm_insert_epi16(_mm_xor_pd(xmm7_17, xmm7_17), 0xbf80, 3)
                uint32_t xmm1_40[0x4] = _mm_shuffle_epi32(_mm_slli_epi64(zx.o(edx_27), 0x2d), 0x44)
                double xmm7_20[0x2] = data_711cb0
                double xmm3_20[0x2] = _mm_mul_pd(xmm3_19, xmm1_40)
                double xmm0_44[0x2] = xmm0_43 + xmm5_7 + xmm2_36 * arg2
                double xmm0_45[0x2] = _mm_unpacklo_pd(xmm0_44, xmm0_44)
                double xmm6_13[0x2] = _mm_mul_pd(xmm6_12, xmm0_45)
                double xmm0_46[0x2] = _mm_mul_pd(xmm0_45, xmm0_45)
                double xmm7_22[0x2] = _mm_mul_pd(_mm_add_pd(xmm7_20, xmm6_13), xmm0_46)
                double xmm6_14 = _mm_shuffle_epi32(xmm7_22, 0xee)
                double xmm5_11 = _mm_shuffle_epi32(xmm3_20, 0xee)
                uint64_t xmm6_15[0x2] = xmm6_14 f* xmm3_20
                int32_t xmm4_23[0x4] = 0.69314718055994529 f* xmm0_45 f* xmm3_20
                _mm_slli_epi64(zx.o(ecx_18), 0x2d)
                uint64_t xmm2_38[0x2] = zx.o((neg.d(edx_27 - 0x1ff80) s>> 7) + 2
                    + (((neg.d(edx_27 - 0x1ff80) s>> 7) + 2) & 0x20))
                double xmm1_43 =
                    _mm_and_pd(_mm_sll_epi64(_mm_cmpeq_epi32(xmm1_40, xmm1_40), xmm2_38), xmm3_20)
                uint64_t xmm6_16[0x2] = _mm_xor_pd(xmm6_15, xmm6_15)
                _mm_and_pd(xmm1_43 + xmm0_46 f* xmm3_20 f* xmm7_22 + xmm5_11 f+ xmm6_15 f+ xmm4_23, 
                    _mm_sll_epi64(_mm_cmpeq_epi32(xmm4_23, xmm4_23), xmm2_38))
                _mm_insert_epi16(xmm6_16, edi_1, 3)
                return 0xbf80
        else
            if (eax_67 - 0x3c70 u>= 0x80000000)
                _mm_slli_epi64(zx.o(ecx_3) | 0x1ff80, 0x2d)
                return eax_67 - 0x3c70
            
            int32_t edx_39 = (_mm_extract_epi16(arg1, 3) & 0x7ff0) - 0x3ff0
            eax_21 = (_mm_extract_epi16(xmm1_3, 3) ^ edx_39) & 0x8000
            
            if (eax_21 == 0)
            label_6afffc:
                uint64_t xmm0_62[0x2] = _mm_insert_epi16(_mm_xor_pd(xmm1_3, xmm1_3), 0xffef, 3)
                
                if (ecx_3 != 0)
                    _mm_srli_epi64(_mm_slli_epi64(xmm0_62, 1), 1)
                
                return 0xffef
        
        _mm_or_pd(2.2250738585072014e-308 * 2.2250738585072014e-308, 
            _mm_slli_epi64(zx.o(ecx_3), 0x2d))
        return eax_21
    
    uint64_t xmm4_15[0x2] = arg1
    xmm2_17 = arg2
    eax_50 = xmm4_15
    
    if (eax_50 == 0)
        edx_2 = _mm_srli_epi64(xmm4_15, 0x20)
        
        if (edx_2 == 0x3ff00000)
            return eax_50
        
        if (edx_2 == 0xbff00000)
            return _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_xor_pd(xmm1_3, xmm1_3), 
                _mm_and_pd(0xfffffffffffff, xmm2_17)))
int32_t xmm1_32[0x4] =
    _mm_cmpeq_epi32(_mm_xor_pd(xmm1_3, xmm1_3), _mm_and_pd(0xfffffffffffff, xmm2_17))
uint32_t eax_51 = zx.d(_mm_movemask_epi8(xmm1_32))

if (eax_51 != 0xff)
    return eax_51

int32_t xmm4_17[0x4] = arg1
eax_50 = _mm_extract_epi16(xmm2_17, 3) & 0x8000

if ((edx_2 | (ecx_3 ^ 0xbff00000)) == 0)
    return eax_50

if (eax_50 == 0)
    eax_47 = _mm_extract_epi16(xmm4_17, 3) & 0x7ff0
    
    if (eax_47 u< 0x3ff0)
        _mm_xor_pd(xmm0, xmm0)
else
    int32_t eax_55 = _mm_extract_epi16(xmm4_17, 3) & 0x7ff0
    
    if (eax_55 u>= 0x3ff0)
        _mm_xor_pd(xmm0, xmm0)
        return eax_55
    
    eax_47 = xmm4_17
    uint64_t xmm4_18[0x2] = _mm_srli_epi64(xmm4_17, 0x20)
    
    if (((xmm4_18 & 0x7fffffff) | eax_47) == 0)
        uint64_t xmm1_33[0x2] = _mm_xor_pd(xmm1_32, xmm1_32)
        _mm_xor_pd(xmm4_18, xmm4_18)
        _mm_insert_epi16(xmm1_33, 0x3ff0, 3)
        return 0x3ff0

return eax_47
