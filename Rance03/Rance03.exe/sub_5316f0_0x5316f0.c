// 函数: sub_5316f0
// 地址: 0x5316f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3b28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_b0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm4 = *(arg1 + 0x1c)
float arg_4
float* esi = arg_4
float xmm5 = *esi
float xmm1 = 1f / (*(arg1 + 0x20) - xmm4)
uint128_t xmm2 = zx.o(*(arg1 + 0x30))
float xmm3_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
float xmm2_1 = _mm_cvtepi32_ps(xmm2)
float xmm4_1 = esi[2]
float xmm3_2 = *(arg1 + 0x24)
int32_t result = int.d((xmm5 - arg2 - xmm4) * xmm3_1 * xmm1)
int32_t edx = int.d((xmm5 + arg2 - xmm4) * xmm3_1 * xmm1)
float xmm1_1 = 1f / (*(arg1 + 0x28) - xmm3_2)
int32_t var_1c = edx
int32_t ecx_1 = int.d((xmm4_1 + arg2 - xmm3_2) * xmm2_1 * xmm1_1)
int32_t edi_1 = int.d((xmm4_1 - arg2 - xmm3_2) * xmm2_1 * xmm1_1)
int32_t var_20 = ecx_1

if (result s< *(arg1 + 0x2c) && edx s>= 0 && edi_1 s< *(arg1 + 0x30) && ecx_1 s>= 0)
    if (result s< 0)
        result = 0
    
    int32_t eax_4 = *(arg1 + 0x2c)
    float esi_3 = arg_4
    
    if (edx s>= eax_4)
        var_1c = eax_4 - 1
    
    if (edi_1 s< 0)
        edi_1 = 0
    
    int32_t eax_6 = *(arg1 + 0x30)
    
    if (ecx_1 s>= eax_6)
        var_20 = eax_6 - 1
    
    int32_t* var_2c = nullptr
    int32_t var_28_1 = 0
    var_2c = sub_4a6eb0()
    int32_t var_4 = 0
    sub_5312f0(arg1, &var_2c, result, var_1c, edi_1, var_20)
    float xmm7_1 = arg2
    int32_t* ecx_3 = var_2c
    int32_t eax_9 = *ecx_3
    arg_4 = xmm7_1 * xmm7_1
    var_20 = eax_9
    
    if (eax_9 != ecx_3)
        int32_t var_24_2 = 3
        
        do
            void* eax_10 = *(eax_9 + 0x10)
            int32_t i = 0
            int32_t i_1 = 0
            float* edi_2 = eax_10 + 4
            int32_t* eax_11 = eax_10 + 0x28
            int32_t* var_14_1 = eax_11
            
            do
                if (*eax_11 == 0)
                    float xmm6_1 = edi_2[2]
                    float eax_14 = mods.dp.d(sx.q(i + 1), var_24_2) * 3
                    float var_34_1 = eax_14
                    float xmm3_4 = *(eax_10 + (eax_14 << 2) + 0xc) - xmm6_1
                    float xmm2_3 = *(eax_10 + (eax_14 << 2) + 4) - *edi_2
                    float xmm4_8 = xmm3_4 * xmm3_4 + xmm2_3 * xmm2_3
                    xmm4_8 f- 0
                    eax_14:1.b = (xmm4_8 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm4_8, 0f) ? 1 : 0) << 2 | (xmm4_8 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        float xmm7_2 = *(esi_3 i+ 8)
                        float xmm6_2 = *edi_2
                        float xmm1_6 =
                            ((xmm7_2 - xmm6_1) * xmm3_4 + (*esi_3 - xmm6_2) * xmm2_3) / xmm4_8
                        float xmm0_22
                        float xmm1_8
                        float xmm5_7
                        float xmm6_5
                        
                        if (not(xmm1_6 f< 0) && not(1f < xmm1_6))
                            xmm5_7 = xmm2_3 * xmm1_6 + xmm6_2
                            xmm6_5 = xmm3_4 * xmm1_6 + edi_2[2]
                            xmm0_22 = xmm5_7 f- *esi_3
                            xmm1_8 = xmm6_5 - xmm7_2
                        
                        if (xmm1_6 f< 0 || 1f < xmm1_6
                                || arg_4 < xmm1_8 * xmm1_8 + xmm0_22 * xmm0_22)
                            xmm7_1 = arg2
                        else
                            int32_t xmm2_4 = xmm2_3 ^ (data_7094c0).d
                            float var_70 = xmm3_4
                            int32_t var_6c_1 = 0
                            int32_t var_68_1 = xmm2_4
                            float var_7c
                            sub_59f780(&var_70, &var_7c)
                            xmm7_1 = arg2
                            i = i_1
                            float var_78
                            *esi_3 = _mm_unpacklo_ps(var_7c * xmm7_1 + xmm5_7, var_78 * xmm7_1)
                            float var_74
                            *(esi_3 i+ 8) = var_74 * xmm7_1 + xmm6_5
                    
                    float xmm6_6 = edi_2[2]
                    float xmm4_9 = *edi_2
                    float xmm3_6 = *(esi_3 i+ 8) - xmm6_6
                    float xmm2_10 = *esi_3 - xmm4_9
                    
                    if (not(arg_4 < xmm3_6 * xmm3_6 + xmm2_10 * xmm2_10))
                        int32_t var_3c_1 = 0
                        float xmm1_18 = xmm3_6 * xmm3_6 + xmm2_10 * xmm2_10
                        float xmm1_19 = _mm_sqrt_ss(xmm1_18, xmm1_18)
                        xmm1_19 f- 0
                        eax_14:1.b = (xmm1_19 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm1_19, 0f) ? 1 : 0) << 2 | (xmm1_19 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        float xmm1_21
                        float xmm2_11
                        float xmm3_7
                        
                        if (not(p_4))
                            int64_t xmm0_34 = xmm2_10.q
                            xmm1_21 = xmm0_34:4.d
                            xmm2_11 = xmm0_34.d
                            xmm3_7 = xmm3_6
                        else
                            float xmm0_33 = 1f / xmm1_19
                            xmm2_11 = xmm2_10 * xmm0_33
                            xmm1_21 = xmm0_33 * 0f
                            xmm3_7 = xmm3_6 * xmm0_33
                        
                        *esi_3 = _mm_unpacklo_ps(xmm4_9 + xmm2_11 * xmm7_1, xmm1_21 * xmm7_1)
                        *(esi_3 i+ 8) = xmm6_6 + xmm3_7 * xmm7_1
                    
                    float xmm6_8 = *(eax_10 + (var_34_1 << 2) + 0xc)
                    float xmm4_12 = *(eax_10 + (var_34_1 << 2) + 4)
                    float xmm3_10 = *(esi_3 i+ 8) - xmm6_8
                    float xmm2_14 = *esi_3 - xmm4_12
                    
                    if (not(arg_4 < xmm2_14 * xmm2_14 + xmm3_10 * xmm3_10))
                        int32_t var_48_1 = 0
                        float xmm1_28 = xmm3_10 * xmm3_10 + xmm2_14 * xmm2_14
                        float xmm1_29 = _mm_sqrt_ss(xmm1_28, xmm1_28)
                        xmm1_29 f- 0
                        float eax_17
                        eax_17:1.b = (xmm1_29 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm1_29, 0f) ? 1 : 0) << 2 | (xmm1_29 < 0f ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        float xmm1_31
                        float xmm2_15
                        float xmm3_11
                        
                        if (not(p_6))
                            int64_t xmm0_41 = xmm2_14.q
                            xmm1_31 = xmm0_41:4.d
                            xmm2_15 = xmm0_41.d
                            xmm3_11 = xmm3_10
                        else
                            float xmm0_40 = 1f / xmm1_29
                            xmm2_15 = xmm2_14 * xmm0_40
                            xmm1_31 = xmm0_40 * 0f
                            xmm3_11 = xmm3_10 * xmm0_40
                        
                        *esi_3 = _mm_unpacklo_ps(xmm4_12 + xmm2_15 * xmm7_1, xmm1_31 * xmm7_1)
                        *(esi_3 i+ 8) = xmm6_8 + xmm3_11 * xmm7_1
                    
                    eax_11 = var_14_1
                
                i += 1
                eax_11 = &eax_11[1]
                edi_2 = &edi_2[3]
                i_1 = i
                var_14_1 = eax_11
            while (i s< 3)
            
            sub_418380(&var_20)
            eax_9 = var_20
            ecx_3 = var_2c
            xmm7_1 = arg2
        while (eax_9 != ecx_3)
    
    sub_4200d0(&var_2c, &arg_4, *ecx_3, ecx_3)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
