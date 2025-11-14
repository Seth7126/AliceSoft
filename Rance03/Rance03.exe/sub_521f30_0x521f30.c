// 函数: sub_521f30
// 地址: 0x521f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_6c
int32_t eax_1 = __security_cookie ^ &var_6c
int32_t* result = arg3
void* ebx = *(arg1 + 0xdc)

if (ebx != 0 && *(arg1 + 8) != 0)
    int32_t* ecx = *(ebx + 8)
    int32_t* var_50_1
    
    if (ecx != 0)
        var_50_1 = (*(*ecx + 0x1c))()
    else
        var_50_1 = ecx
    
    int32_t* ecx_1 = *(ebx + 8)
    int32_t ebx_1
    
    if (ecx_1 != 0)
        ebx_1 = (*(*ecx_1 + 0x20))()
    else
        ebx_1 = 0
    
    if (*(arg1 + 0x60) != 1)
        float edx_1 = *(arg1 + 0x54)
        int32_t var_60_2
        int32_t var_58_1
        int32_t var_54_2
        uint128_t xmm2_6
        uint128_t xmm4_3
        
        if (edx_1 s> 0 || *(arg1 + 0x58) s> 0)
            bool cond:0_1 = edx_1 s>= *(arg1 + 0x18)
            void* ecx_6 = &var_6c
            var_6c = edx_1
            float edx_3 = *(arg1 + 0x58)
            
            if (cond:0_1)
                ecx_6 = arg1 + 0x18
            
            float* ecx_7 = &var_6c
            var_60_2 = *ecx_6
            xmm2_6 = zx.o(var_60_2)
            
            if (edx_3 s>= *(arg1 + 0x1c))
                ecx_7 = arg1 + 0x1c
            
            var_6c = edx_3
            float eax_19 = *ecx_7
            var_6c = eax_19
            xmm4_3 = zx.o(eax_19)
            var_58_1 = *(arg1 + 0x4c)
            var_54_2 = *(arg1 + 0x50)
        else
            var_60_2 = (*(**(arg1 + 8) + 0x10))()
            float eax_15 = (*(**(arg1 + 8) + 0x14))()
            xmm2_6 = zx.o(*(arg1 + 0x18))
            xmm4_3 = zx.o(*(arg1 + 0x1c))
            var_6c = eax_15
            var_58_1 = 0
            var_54_2 = 0
        
        float xmm7_4 = 1f / _mm_cvtepi32_ps(zx.o(arg6))
        int32_t eax_23 = *(*arg8 + 0x9c)
        float xmm5_4 = _mm_cvtepi32_ps(zx.o(arg4)) f+ *(arg1 + 0xc)
        float xmm6_6 = _mm_cvtepi32_ps(zx.o(arg5)) f+ *(arg1 + 0x10)
        float xmm2_8 = _mm_cvtepi32_ps(xmm2_6) + xmm5_4
        float xmm4_5 = _mm_cvtepi32_ps(xmm4_3) + xmm6_6
        float xmm3_2 = 1f / _mm_cvtepi32_ps(zx.o(arg7))
        float var_68_2 = 1f - xmm6_6 * 2f * xmm3_2
        float var_64_2 = 1f - xmm4_5 * 2f * xmm3_2
        float xmm6_7 = xmm5_4 * 2f * xmm7_4 - 1f
        float xmm5_5 = xmm2_8 * 2f * xmm7_4 - 1f
        
        if (eax_23() != 0)
            xmm6_7 = xmm6_7 - xmm7_4
            xmm5_5 = xmm5_5 - xmm7_4
            var_68_2 = xmm3_2 + var_68_2
            var_64_2 = xmm3_2 + var_64_2
        
        float xmm1_23 = 1f / _mm_cvtepi32_ps(zx.o(var_50_1))
        int32_t eax_28 = var_6c i+ var_54_2
        float xmm7_6 = 1f / _mm_cvtepi32_ps(zx.o(ebx_1))
        float xmm2_14 = _mm_cvtepi32_ps(zx.o(var_58_1)) * xmm1_23
        float xmm4_10 = _mm_cvtepi32_ps(zx.o(var_60_2 + var_58_1)) * xmm1_23
        float* eax_29 = *arg2
        float xmm3_4 = _mm_cvtepi32_ps(zx.o(var_54_2))
        *eax_29 = xmm6_7
        float xmm3_5 = xmm3_4 * xmm7_6
        float xmm1_26 = _mm_cvtepi32_ps(zx.o(eax_28)) * xmm7_6
        eax_29[1] = var_68_2
        eax_29[2] = 0x3f000000
        eax_29[3] = xmm2_14
        eax_29[4] = xmm3_5
        eax_29[5] = 0x3f800000
        eax_29[6] = 0
        eax_29[7] = xmm5_5
        eax_29[8] = var_68_2
        eax_29[9] = 0x3f000000
        eax_29[0xa] = xmm4_10
        eax_29[0xb] = xmm3_5
        eax_29[0xc] = 0x3f800000
        eax_29[0xd] = 0
        eax_29[0xe] = xmm6_7
        eax_29[0xf] = var_64_2
        eax_29[0x10] = 0x3f000000
        eax_29[0x11] = xmm2_14
        eax_29[0x12] = xmm1_26
        eax_29[0x13] = 0x3f800000
        eax_29[0x14] = 0
        eax_29[0x15] = xmm6_7
        eax_29[0x16] = var_64_2
        eax_29[0x17] = 0x3f000000
        eax_29[0x18] = xmm2_14
        eax_29[0x19] = xmm1_26
        eax_29[0x1a] = 0x3f800000
        eax_29[0x1b] = 0
        eax_29[0x1c] = xmm5_5
        eax_29[0x1d] = var_68_2
        eax_29[0x1e] = 0x3f000000
        eax_29[0x1f] = xmm4_10
        eax_29[0x20] = xmm3_5
        eax_29[0x21] = 0x3f800000
        eax_29[0x22] = 0
        eax_29[0x23] = xmm5_5
        eax_29[0x24] = var_64_2
        eax_29[0x25] = 0x3f000000
        eax_29[0x26] = xmm4_10
        eax_29[0x27] = xmm1_26
        eax_29[0x28] = 0x3f800000
        eax_29[0x29] = 0
        *arg2 = &eax_29[0x2a]
    else
        int32_t i = 0
        int128_t var_1c
        __builtin_memcpy(&var_1c, 
            "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x03\x00\x"
        "00\x00", 
            0x18)
        float xmm5_1 = 1f / (_mm_cvtepi32_ps(zx.o(arg7)) * 0.5f)
        float xmm4_1 = 1f / (_mm_cvtepi32_ps(zx.o(arg6)) * 0.5f)
        float xmm1_4 = 1f / _mm_cvtepi32_ps(zx.o(var_50_1))
        float xmm2_1 = 1f / _mm_cvtepi32_ps(zx.o(ebx_1))
        float xmm6_2 = _mm_cvtepi32_ps(zx.o(arg4))
        float xmm7_2 = _mm_cvtepi32_ps(zx.o(arg5))
        float var_5c_1 = xmm4_1
        float var_60_1 = xmm5_1
        var_6c = xmm1_4
        
        do
            int32_t ebx_2 = *(&var_1c + (i << 2))
            float xmm1_6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc4)))
            float xmm2_2[0x4] = *(arg1 + ebx_2 * 0x10 + 0x64)
            int96_t var_3c_1 = xmm2_2[0].12
            int32_t eax_9 = *(*arg8 + 0x9c)
            float xmm2_3 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
            float xmm0_15 = xmm2_3
                - (xmm7_2 * xmm2_3 - _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc8))) * 0.5f f* var_3c_1:4.d)
                * xmm5_1
            float xmm3_1 = (xmm1_6 * 0.5f f* xmm2_2 + xmm6_2 * xmm2_3) * xmm4_1 - xmm2_3
            xmm5_1 = var_60_1
            float xmm0_19
            
            if (eax_9() == 0)
                xmm0_19 = xmm0_15
            else
                float xmm1_17 = xmm2_3 * 0.5f
                xmm3_1 = xmm3_1 - xmm1_17 * var_5c_1
                xmm0_19 = xmm0_15 + xmm1_17 * xmm5_1
            
            i += 1
            float xmm2_5 = *(arg1 + (ebx_2 << 3) + 0xa4) * var_6c
            void* eax_11 = *arg2
            float xmm1_20 = *(arg1 + (ebx_2 << 3) + 0xa8) * xmm2_1
            *eax_11 = xmm3_1
            *(eax_11 + 4) = xmm0_19
            *(eax_11 + 8) = var_3c_1:8.d
            *(eax_11 + 0xc) = xmm2_5
            *(eax_11 + 0x10) = xmm1_20
            *(eax_11 + 0x14) = xmm2_3
            xmm4_1 = var_5c_1
            *(eax_11 + 0x18) = 0
            *arg2 = eax_11 + 0x1c
            xmm6_2 = _mm_cvtepi32_ps(zx.o(arg4))
            xmm7_2 = _mm_cvtepi32_ps(zx.o(arg5))
        while (i s< 6)
    
    int32_t* result_1 = result
    result = *result_1
    *(arg1 + 0xd8) = result
    *result_1 += 6

sub_69a5bc(eax_1 ^ &var_6c)
return result
