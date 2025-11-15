// 函数: __dtol3
// 地址: 0x7221cf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx_1 = 5

if ((_mm_bsrli_si128(arg2, 4) & 0x7fffffff) u< 0x7ff00000)
    uint64_t xmm1_4[0x2] = _mm_srli_epi64(_mm_slli_epi64(arg2, 1), 1)
    
    if (not(xmm1_4 f<= 0x47effffff0000000))
        int32_t ecx
        int16_t x87control
        int80_t st0_1
        st0_1, ecx, x87control = __ftol3_except(5, 1, arg1, arg2.q)
        int80_t st0_2
        st0_2, ecx_1, arg1 = __ftol3_except(ecx, 0x10, x87control, arg2.q)
    
    uint128_t xmm2_2 = 0x380ffffff0000000
    
    if (not(xmm1_4 f>= xmm2_2))
        if (not(xmm1_4 f== _mm_xor_pd(xmm2_2, xmm2_2)))
            int32_t ecx_3
            int16_t x87control_2
            int80_t st0_5
            st0_5, ecx_3, x87control_2 = __ftol3_except(ecx_1, 2, arg1, arg2.q)
            int80_t st0_6
            st0_6, ecx_1, arg1 = __ftol3_except(ecx_3, 0x10, x87control_2, arg2.q)
        
        goto label_722099
    
    uint128_t xmm3_1 = arg2
    
    if (ecx_1 == 4)
        double xmm2_4[0x2] = 0x43e0000000000000
        
        if (not(xmm3_1 f< xmm2_4))
            xmm3_1 = _mm_sub_pd(xmm3_1, xmm2_4)
    
    int80_t st0_7
    
    if (_mm_srli_epi64(_mm_slli_epi64(xmm3_1, 0x23), 0x23) != 0)
        st0_7, ecx_1, arg1 = __ftol3_except(ecx_1, 0x10, arg1, arg2.q)
    
    if (not(arg2 f>= 0x43e0000000000000) && not(arg2 f< -0x3c20000000000000))
    label_722099:
        uint64_t xmm6_3[0x2] = _mm_xor_pd(arg3, arg3)
        
        if (not(xmm1_4 f== xmm6_3))
            int32_t xmm5_1[0x4] = 0x433
            double xmm6_1[0x2] = _mm_cmpeq_sd(arg2.q, xmm1_4, 0)
            int32_t xmm2_11[0x4] = (xmm1_4 & 0xfffffffffffff) | 0x10000000000000
            uint64_t xmm1_7[0x2] = _mm_srli_epi64(xmm1_4, 0x34)
            uint64_t xmm3_4[0x2] = _mm_sll_epi64(xmm2_11, _mm_sub_epi64(xmm1_7, xmm5_1))
            int32_t xmm4_8[0x4] = _mm_sub_epi64(xmm5_1, xmm1_7)
            uint64_t xmm7_2[0x2] = _mm_srl_epi64(xmm2_11, xmm4_8)
            int32_t xmm1_8[0x4] = _mm_cmpgt_epi32(xmm1_7, xmm5_1)
            int32_t xmm1_9[0x4] = _mm_unpacklo_epi32(xmm1_8, xmm1_8)
            int32_t xmm1_11[0x4] = (xmm1_9 & not.o(xmm7_2)) | (xmm3_4 & xmm1_9)
            xmm6_3 = (xmm6_1 & not.o(_mm_sub_epi64(zx.o(0), xmm1_11))) | (xmm1_11 & xmm6_1)
            
            if (xmm4_8 s> 0)
                uint128_t xmm2_12 = xmm2_11 ^ _mm_sll_epi64(xmm7_2, xmm4_8)
                
                if ((xmm2_12 | _mm_bsrli_si128(xmm2_12, 4)) != 0)
                    __ftol3_except(ecx_1, 0x10, arg1, arg2.q)
        
        _mm_bsrli_si128(xmm6_3, 4)
        return 

__ftol3_except(ecx_1, 8, arg1, arg2.q)
