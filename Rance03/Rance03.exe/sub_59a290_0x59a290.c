// 函数: sub_59a290
// 地址: 0x59a290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8638
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0xc)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0)
    result.b = 0
else
    struct sealengine::CWriteVB::VTable* const var_6c_1 = &sealengine::CWriteVB::`vftable'
    int32_t var_4 = 0
    int32_t __saved_edi
    result = (*(*ecx + 0x18))(__security_cookie ^ &__saved_edi)
    
    if (result == 0)
        result.b = 0
    else
        *result = nullptr
        result[1] = 0x3f800000
        result[2] = 0
        result[3] = 0
        result[4] = 0x3f800000
        result[5] = 0
        result[6] = 0
        result[7] = 0
        result[8] = 0
        result[9] = 0x80ff0000
        result[0xa] = 0xffffffff
        __builtin_memset(&result[0xb], 0, 0x2c)
        void* esi_2 = &result[0x16]
        int32_t edi_2 = *(arg1 + 4) - 1
        int32_t var_88_1 = 1
        
        if (edi_2 s> 1)
            int32_t ecx_4
            
            do
                void var_50
                EnumC13Lines::EnumC13Lines(&var_50)
                sub_47b960(&var_50, 
                    _mm_cvtepi32_ps(zx.o(var_88_1)) / _mm_cvtepi32_ps(zx.o(edi_2)) * 180f)
                int16_t top = top + 2
                float var_4c
                float var_3c
                float var_2c
                float var_1c
                float xmm2_5 = var_4c * 0f + var_3c + var_2c * 0f + var_1c
                float var_44
                float var_34
                float var_24
                float var_14
                float xmm1_9 = var_44 * 0f + var_34 + var_24 * 0f + var_14
                xmm1_9 - 1f
                double* eax_4
                eax_4:1.b = (xmm1_9 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_9, 1f) ? 1 : 0) << 2
                    | (xmm1_9 < 1f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    xmm1_9 f- 0
                    eax_4:1.b = (xmm1_9 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_9, 0f) ? 1 : 0) << 2 | (xmm1_9 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        xmm2_5 = 1f / xmm1_9 * xmm2_5
                
                int32_t eax_5 = *(arg1 + 8)
                int32_t edi_3 = 0
                float xmm0_9 = 1f - xmm2_5 * xmm2_5
                float xmm0_10 = _mm_sqrt_ss(xmm0_9, xmm0_9)
                
                if (eax_5 s> 0)
                    float xmm0_11 = xmm0_10 * 0f
                    float xmm2_6 = xmm2_5 * 0f
                    float xmm0_13 = xmm0_11 + xmm2_6 + 1f
                    
                    do
                        int32_t xmm1_19[0x4] = _mm_cvtepi32_ps(zx.o(edi_3)) * 360f
                            / _mm_cvtepi32_ps(zx.o(eax_5)) * 3.14159274f * 0.00555555569f
                        float xmm0_17 = ___libm_sse2_cosf(xmm1_19)
                        double* eax_6
                        float xmm0_19
                        eax_6, xmm0_19 = ___libm_sse2_sinf(xmm1_19)
                        top += 2
                        float xmm3_1 = xmm0_11 + xmm2_5
                        float var_64_1 = xmm3_1
                        float xmm4_4 = xmm0_17 * 0f + xmm2_6 + xmm0_19 * xmm0_10
                        xmm0_13 - 1f
                        float xmm2_11 =
                            (xmm0_19 ^ (data_7094c0).d) * 0f + xmm2_6 + xmm0_17 * xmm0_10
                        float var_68_1 = xmm4_4
                        eax_6:1.b = (xmm0_13 == 1f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_13, 1f) ? 1 : 0) << 2 | (xmm0_13 < 1f ? 1 : 0)
                        float var_60_1 = xmm2_11
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            xmm0_13 f- 0
                            eax_6:1.b = (xmm0_13 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2
                                | (xmm0_13 < 0f ? 1 : 0)
                            bool p_8 = unimplemented  {test ah, 0x44}
                            
                            if (p_8)
                                float xmm1_22 = 1f / xmm0_13
                                xmm3_1 = xmm3_1 * xmm1_22
                                xmm4_4 = xmm4_4 * xmm1_22
                                xmm2_11 = xmm2_11 * xmm1_22
                                var_68_1 = xmm4_4
                                float var_64_2 = xmm3_1
                                var_60_1 = xmm2_11
                        
                        *esi_2 = xmm4_4
                        *(esi_2 + 4) = xmm3_1
                        *(esi_2 + 8) = xmm2_11
                        float xmm1_26 = xmm3_1 * xmm3_1 + xmm4_4 * xmm4_4 + xmm2_11 * xmm2_11
                        float xmm1_27 = _mm_sqrt_ss(xmm1_26, xmm1_26)
                        xmm1_27 f- 0
                        eax_6:1.b = (xmm1_27 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm1_27, 0f) ? 1 : 0) << 2 | (xmm1_27 < 0f ? 1 : 0)
                        bool p_10 = unimplemented  {test ah, 0x44}
                        float xmm2_12
                        float xmm3_2
                        float xmm4_5
                        
                        if (not(p_10))
                            int64_t xmm0_28 = var_68_1.q
                            xmm3_2 = xmm0_28:4.d
                            xmm4_5 = xmm0_28.d
                            xmm2_12 = var_60_1
                        else
                            float xmm0_27 = 1f / xmm1_27
                            xmm4_5 = xmm4_4 * xmm0_27
                            xmm3_2 = xmm3_1 * xmm0_27
                            xmm2_12 = xmm2_11 * xmm0_27
                        
                        *(esi_2 + 0xc) = xmm4_5
                        edi_3 += 1
                        *(esi_2 + 0x10) = xmm3_2
                        *(esi_2 + 0x14) = xmm2_12
                        *(esi_2 + 0x18) = 0
                        *(esi_2 + 0x1c) = 0
                        *(esi_2 + 0x20) = 0
                        *(esi_2 + 0x24) = 0x80ff0000
                        *(esi_2 + 0x28) = 0xffffffff
                        __builtin_memset(esi_2 + 0x2c, 0, 0x2c)
                        esi_2 += 0x58
                        eax_5 = *(arg1 + 8)
                    while (edi_3 s< eax_5)
                
                ecx_4 = var_88_1 + 1
                edi_2 = *(arg1 + 4) - 1
                var_88_1 = ecx_4
            while (ecx_4 s< edi_2)
        
        *esi_2 = 0
        *(esi_2 + 4) = 0xbf800000
        *(esi_2 + 8) = 0
        *(esi_2 + 0xc) = 0
        *(esi_2 + 0x10) = 0xbf800000
        *(esi_2 + 0x14) = 0
        *(esi_2 + 0x18) = 0
        *(esi_2 + 0x1c) = 0
        *(esi_2 + 0x20) = 0
        *(esi_2 + 0x24) = 0x80ff0000
        *(esi_2 + 0x28) = 0xffffffff
        __builtin_memset(esi_2 + 0x2c, 0, 0x2c)
        
        if ((*(**(arg1 + 0xc) + 0x1c))().b == 0)
            result.b = 0
        else
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
