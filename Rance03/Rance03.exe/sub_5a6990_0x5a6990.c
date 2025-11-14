// 函数: sub_5a6990
// 地址: 0x5a6990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c8a0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_13c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* edx = (*(esi_1 + 0x50))[arg3]
        
        if (edx != 0 && arg4 s>= 0 && arg4 s< (*(edx + 0x20) - *(edx + 0x1c)) s>> 2)
            void* ebx_2 = (*(edx + 0x1c))[arg4]
            
            if (ebx_2 != 0)
                void* esi_2 = *(ebx_2 + 0x1c0)
                
                if (esi_2 != 0)
                    eax_3 = sub_527000(arg3, arg2)
                    struct _EXCEPTION_REGISTRATION_RECORD** var_128_1 = eax_3
                    
                    if (eax_3 != 0)
                        int32_t edi_1
                        
                        if (esi_2 != 0)
                            eax_3 = var_128_1
                            edi_1 = (*(esi_2 + 0x44) - *(esi_2 + 0x40)) s/ 0x3c
                        else
                            edi_1 = 0
                        
                        sub_5434a0(eax_3)
                        int32_t* eax_9
                        
                        if (edi_1 s> 0)
                            float var_124 = -nanf
                            int32_t* var_d8 = nullptr
                            int32_t var_d4_1 = 0
                            int32_t var_d0_1 = 0
                            sub_42f4d0(&var_d8, edi_1, &var_124)
                            int32_t esi_3 = 0
                            int32_t var_c_1 = 0
                            
                            if (edi_1 s> 0)
                                int32_t* ebx_3 = var_d8
                                
                                do
                                    if (sub_57e3a0(esi_2, esi_3, &var_124) != 0)
                                        float ecx_5 = var_124
                                        
                                        if (ecx_5 s>= 0 && ecx_5 s< (var_d4_1 - ebx_3) s>> 2)
                                            ebx_3[ecx_5] = esi_3
                                    
                                    esi_3 += 1
                                while (esi_3 s< edi_1)
                            
                            int32_t esi_4 = 0
                            
                            if (edi_1 s> 0)
                                int32_t var_48 = 0
                                int32_t var_44_1 = 0
                                int32_t var_40_1 = 0
                                int32_t var_68_1 = 0
                                int32_t var_64_1 = 0
                                int32_t var_60 = 0
                                int32_t var_5c_1 = 0x3f800000
                                int32_t var_58_1 = 0
                                int32_t var_54 = 0
                                int32_t var_50_1 = 0
                                int32_t var_4c_1 = 0x3f800000
                                
                                do
                                    float var_120
                                    sub_53ef50(ebx_2, &var_120, &var_48, esi_4)
                                    int32_t xmm1_1 = 0x3dcccccd
                                    int32_t eax_15 = var_d8[esi_4]
                                    float var_11c
                                    float var_118
                                    int64_t var_10c
                                    
                                    if (eax_15 != 0xffffffff)
                                        int32_t var_3c = 0
                                        int32_t var_38_1 = 0
                                        int32_t var_34_1 = 0
                                        float var_30
                                        float* eax_16 = sub_53ef50(ebx_2, &var_30, &var_3c, eax_15)
                                        float xmm2_1 = var_120
                                        float eax_17 = eax_16[2]
                                        var_10c = *eax_16
                                        float xmm1_3 = var_11c f- var_10c:4.d
                                        float xmm2_2 = xmm2_1 f- var_10c.d
                                        float xmm0_3 = var_118 - eax_17
                                        xmm1_1 = _mm_sqrt_ss(0, 
                                            xmm2_2 * xmm2_2 + xmm1_3 * xmm1_3 + xmm0_3 * xmm0_3)
                                    
                                    int32_t var_6c = xmm1_1
                                    float var_24[0x4]
                                    float* eax_18 = sub_53ef50(ebx_2, &var_24, &var_6c, esi_4)
                                    float eax_19 = eax_18[2]
                                    var_10c = *eax_18
                                    int32_t edi_4
                                    
                                    if (esi_4 != arg5)
                                        edi_4 = 0xc0c0c0
                                        
                                        if (esi_4 == arg6)
                                            edi_4 = 0xff0000
                                    else
                                        edi_4 = 0xc0
                                    
                                    float xmm0_9 = (var_10c.d - var_120) * 0.25f + var_120
                                    float xmm1_8 = (var_10c:4.d - var_11c) * 0.25f + var_11c
                                    var_124 = (eax_19 - var_118) * 0.25f + var_118
                                    float var_9c
                                    sub_53ef50(ebx_2, &var_9c, &var_60, esi_4)
                                    float xmm2_11 = var_9c - var_120
                                    float var_98
                                    float xmm3_2 = var_98 - var_11c
                                    float var_94
                                    float xmm4_2 = var_94 - var_118
                                    float var_74_1 = xmm3_2
                                    float xmm1_12 =
                                        xmm3_2 * xmm3_2 + xmm2_11 * xmm2_11 + xmm4_2 * xmm4_2
                                    float xmm1_13 = _mm_sqrt_ss(xmm1_12, xmm1_12)
                                    xmm1_13 f- 0
                                    float* eax_20
                                    eax_20:1.b = (xmm1_13 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm1_13, 0f) ? 1 : 0) << 2
                                        | (xmm1_13 < 0f ? 1 : 0)
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    float var_114_2
                                    float var_110_2
                                    float var_100_1
                                    float eax_21
                                    int64_t xmm1_14
                                    
                                    if (not(p_2))
                                        eax_21 = xmm4_2
                                        xmm1_14 = xmm2_11.q
                                        var_100_1 = eax_21
                                        var_110_2 = xmm1_14:4.d
                                        var_114_2 = xmm1_14.d
                                    else
                                        float xmm0_14 = 1f / xmm1_13
                                        float xmm2_12 = xmm2_11 * xmm0_14
                                        float xmm3_3 = xmm3_2 * xmm0_14
                                        float xmm4_3 = xmm4_2 * xmm0_14
                                        int64_t var_e8
                                        var_e8.d = xmm2_12
                                        var_e8:4.d = xmm3_3
                                        xmm1_14 = var_e8
                                        eax_21 = xmm4_3
                                        var_114_2 = xmm2_12
                                        var_110_2 = xmm3_3
                                        var_100_1 = xmm4_3
                                    
                                    var_94 = eax_21
                                    var_9c.q = xmm1_14
                                    float var_90
                                    sub_53ef50(ebx_2, &var_90, &var_54, esi_4)
                                    float xmm3_5 = var_90 - var_120
                                    float var_8c
                                    float xmm4_5 = var_8c - var_11c
                                    float var_88
                                    float xmm5_2 = var_88 - var_118
                                    float var_80_1 = xmm4_5
                                    float xmm1_18 =
                                        xmm4_5 * xmm4_5 + xmm3_5 * xmm3_5 + xmm5_2 * xmm5_2
                                    float xmm1_19 = _mm_sqrt_ss(xmm1_18, xmm1_18)
                                    xmm1_19 f- 0
                                    float* eax_22
                                    eax_22:1.b = (xmm1_19 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm1_19, 0f) ? 1 : 0) << 2
                                        | (xmm1_19 < 0f ? 1 : 0)
                                    bool p_4 = unimplemented  {test ah, 0x44}
                                    float eax_23
                                    int64_t xmm0_23
                                    float xmm3_6
                                    float xmm4_6
                                    float xmm5_3
                                    
                                    if (not(p_4))
                                        xmm0_23 = xmm3_5.q
                                        eax_23 = xmm5_2
                                        xmm4_6 = xmm0_23:4.d
                                        xmm3_6 = xmm0_23.d
                                        xmm5_3 = eax_23
                                    else
                                        float xmm0_22 = 1f / xmm1_19
                                        xmm3_6 = xmm3_5 * xmm0_22
                                        xmm4_6 = xmm4_5 * xmm0_22
                                        xmm5_3 = xmm5_2 * xmm0_22
                                        int64_t var_f4
                                        var_f4.d = xmm3_6
                                        var_f4:4.d = xmm4_6
                                        xmm0_23 = var_f4
                                        eax_23 = xmm5_3
                                    
                                    var_88 = eax_23
                                    var_90.q = xmm0_23
                                    float var_c8_1 = var_110_2 * 0.00999999978f + xmm1_8
                                    float var_c4_1 = var_100_1 * 0.00999999978f + var_124
                                    float var_cc = var_114_2 * 0.00999999978f + xmm0_9
                                    float var_b4 = var_114_2 * -0.00999999978f + xmm0_9
                                    float var_b0_1 = var_110_2 * -0.00999999978f + xmm1_8
                                    float xmm7_4 = var_124
                                    float var_a4_1 = xmm4_6 * 0.00999999978f + xmm1_8
                                    float var_ac_1 = var_100_1 * -0.00999999978f + xmm7_4
                                    float var_a8 = xmm3_6 * 0.00999999978f + xmm0_9
                                    float var_a0_1 = xmm5_3 * 0.00999999978f + xmm7_4
                                    float var_c0 = xmm3_6 * -0.00999999978f + xmm0_9
                                    float var_bc_1 = xmm4_6 * -0.00999999978f + xmm1_8
                                    float var_b8_1 = xmm5_3 * -0.00999999978f + xmm7_4
                                    sub_5434e0(var_128_1, &var_cc, edi_4, &var_a8, edi_4)
                                    sub_5434e0(var_128_1, &var_cc, edi_4, &var_c0, edi_4)
                                    sub_5434e0(var_128_1, &var_b4, edi_4, &var_a8, edi_4)
                                    sub_5434e0(var_128_1, &var_b4, edi_4, &var_c0, edi_4)
                                    sub_5434e0(var_128_1, &var_120, edi_4, &var_cc, edi_4)
                                    sub_5434e0(var_128_1, &var_120, edi_4, &var_b4, edi_4)
                                    sub_5434e0(var_128_1, &var_120, edi_4, &var_a8, edi_4)
                                    sub_5434e0(var_128_1, &var_120, edi_4, &var_c0, edi_4)
                                    sub_5434e0(var_128_1, &var_10c, edi_4, &var_cc, edi_4)
                                    sub_5434e0(var_128_1, &var_10c, edi_4, &var_b4, edi_4)
                                    sub_5434e0(var_128_1, &var_10c, edi_4, &var_a8, edi_4)
                                    sub_5434e0(var_128_1, &var_10c, edi_4, &var_c0, edi_4)
                                    esi_4 += 1
                                while (esi_4 s< edi_1)
                            
                            eax_9 = var_d8
                            
                            if (eax_9 != 0)
                                j__free(eax_9)
                        
                        eax_9.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_9

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
