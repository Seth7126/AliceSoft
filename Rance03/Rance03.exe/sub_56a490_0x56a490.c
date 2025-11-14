// 函数: sub_56a490
// 地址: 0x56a490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c60bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_118 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x10) != 0)
    *(arg1 + 0x44) = *(arg1 + 0x40)
    *(arg1 + 0x54) = *(arg1 + 0x50)
    void* ebx_2 = *(arg3 + 0x1d8)
    
    if (ebx_2 != 0)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_2 = edx_1 s>> 6
        int32_t* var_a4
        sub_56eda0(&var_a4, (edx_2 u>> 0x1f) + edx_2)
        int32_t var_4 = 0
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_4 = edx_3 s>> 6
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        sub_42f420(&result_1, (edx_4 u>> 0x1f) + edx_4)
        var_4.b = 1
        int32_t eax_12
        int32_t edx_5
        edx_5:eax_12 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_6 = edx_5 s>> 6
        int32_t* var_5c
        sub_42f420(&var_5c, (edx_6 u>> 0x1f) + edx_6)
        var_4.b = 2
        int32_t eax_16
        int32_t edx_7
        edx_7:eax_16 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_8 = edx_7 s>> 6
        int32_t var_74
        sub_42f420(&var_74, (edx_8 u>> 0x1f) + edx_8)
        var_4.b = 3
        int32_t eax_20
        int32_t edx_9
        edx_9:eax_20 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_10 = edx_9 s>> 6
        int32_t var_8c
        sub_56ee40(&var_8c, (edx_10 u>> 0x1f) + edx_10)
        var_4.b = 4
        int32_t eax_24
        int32_t edx_11
        edx_11:eax_24 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_12 = edx_11 s>> 6
        int32_t var_68
        sub_42f420(&var_68, (edx_12 u>> 0x1f) + edx_12)
        var_4.b = 5
        int32_t eax_28
        int32_t edx_13
        edx_13:eax_28 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_14 = edx_13 s>> 6
        void* var_50
        sub_56ee40(&var_50, (edx_14 u>> 0x1f) + edx_14)
        var_4.b = 6
        int32_t eax_32
        int32_t edx_15
        edx_15:eax_32 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_16 = edx_15 s>> 6
        void* var_98
        sub_56ee40(&var_98, (edx_16 u>> 0x1f) + edx_16)
        var_4.b = 7
        int32_t eax_36
        int32_t edx_17
        edx_17:eax_36 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_18 = edx_17 s>> 6
        int32_t var_80
        sub_42f420(&var_80, (edx_18 u>> 0x1f) + edx_18)
        var_4.b = 8
        int32_t i_1 = 0
        int32_t eax_40
        int32_t edx_19
        edx_19:eax_40 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
        int32_t edx_20 = edx_19 s>> 6
        char var_f9_1
        int32_t var_e8
        int64_t var_dc
        struct sealengine::CEmitterSize::VTable* var_d0
        int128_t var_c0
        
        if ((edx_20 u>> 0x1f) + edx_20 s<= 0)
        label_56a941:
            int32_t* esi_5 = *(arg1 + 0x30)
            
            if (esi_5 == *(arg1 + 0x34))
            label_56a996:
                float* eax_78 = arg6
                float xmm1_4 = *arg7
                float xmm6_1 = *eax_78
                float xmm7_3 = arg7[2] * eax_78[1] - arg7[1] * eax_78[2]
                float xmm1_5 = xmm1_4 * eax_78[1]
                float xmm6_2 = xmm6_1 * arg7[1]
                float xmm2_16 = xmm1_4 * eax_78[2] - xmm6_1 * arg7[2]
                var_d0 = xmm7_3
                float xmm6_3 = xmm6_2 - xmm1_5
                float var_cc_1 = xmm2_16
                float xmm1_9 = xmm7_3 * xmm7_3 + xmm2_16 * xmm2_16 + xmm6_3 * xmm6_3
                float xmm1_10 = _mm_sqrt_ss(xmm1_9, xmm1_9)
                xmm1_10 - 0f
                eax_78:1.b = (xmm1_10 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm1_10, 0f) ? 1 : 0) << 2 | (xmm1_10 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    var_dc = var_d0.q
                    float var_d4_2 = xmm6_3
                else
                    float xmm0_18 = 1f / xmm1_10
                    var_dc.d = xmm7_3 * xmm0_18
                    var_dc:4.d = xmm2_16 * xmm0_18
                    float var_d4_1 = xmm6_3 * xmm0_18
                
                for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
                    void* eax_80 = *i
                    
                    if (eax_80 != 0)
                        int32_t edi_2 = *(eax_80 + 4)
                        
                        if (edi_2 s>= 0)
                            int32_t eax_81
                            int32_t edx_35
                            edx_35:eax_81 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
                            int32_t edx_36 = edx_35 s>> 6
                            
                            if (edi_2 s< (edx_36 u>> 0x1f) + edx_36)
                                int32_t eax_85 = edi_2 * 0x26c
                                float eax_86 = eax_85 + *(ebx_2 + 0x14)
                                float var_f8_2 = eax_86
                                
                                if (eax_85 != neg.d(*(ebx_2 + 0x14)))
                                    eax_86.b = *(eax_86 i+ 0x1fc)
                                    var_e8.b = eax_86.b
                                    int32_t eax_88 = edi_2 << 4
                                    int32_t* ecx_65 = var_50 + eax_88
                                    int32_t* var_11c_19 = ecx_65
                                    float eax_89
                                    eax_89.b = *(var_f8_2 i+ 0x204)
                                    int32_t* var_ec
                                    var_ec.b = eax_89.b
                                    char eax_97 = sub_571cf0(*i, arg2, var_ec.b, arg3, 
                                        *(var_80 + (edi_2 << 2)), result_1[edi_2], var_5c[edi_2], 
                                        *(var_74 + (edi_2 << 2)), *(var_68 + (edi_2 << 2)), ecx_65, 
                                        var_98 + eax_88, var_e8, arg5, arg6, arg7, &var_dc, arg8, 
                                        arg9, arg1 + 0x3c, arg1 + 0x50, arg10)
                                    int16_t top = top + 6
                                    
                                    if (eax_97 == 0)
                                        goto label_56aca7_2
                
                int32_t* esi_6 = *(arg1 + 0x44)
                int32_t* ecx_67 = *(arg1 + 0x40)
                
                if (ecx_67 != esi_6)
                    var_c0.d = 0
                    var_c0:4.d = 0
                    int32_t edi_5 = (esi_6 - ecx_67) s>> 2
                    var_c0:8.d = 0
                    int32_t eax_99
                    int32_t edx_39
                    edx_39:eax_99 = sx.q(edi_5 + 1)
                    var_c0:0xc.d = (eax_99 - edx_39) s>> 1
                    int128_t* var_b0_1 = &var_c0
                    var_4.b = 9
                    sub_55a0a0(&var_c0, esi_6, ecx_67, edi_5, &var_c0, nullptr)
                    var_4.b = 8
                    int32_t eax_103 = var_c0.d
                    
                    if (eax_103 != 0)
                        j__free(eax_103)
                
                int32_t var_11c_21 = arg11
                
                if (sub_559e50(arg1 + 0x3c) == 0)
                labelid_25:
                    var_f9_1 = 0
                else if (sub_55a020(arg1 + 0x3c) == 0)
                labelid_25:
                    var_f9_1 = 0
                else
                    int32_t* eax_106 = *(arg1 + 0x50)
                    
                    if (eax_106 != *(arg1 + 0x54))
                        int32_t* edx_41 = *(arg1 + 0x54)
                        int32_t eax_109 = (edx_41 - eax_106) s>> 2
                        sub_56fa50(eax_109, edx_41, eax_106, eax_109, 0)
                    
                    sub_56b260(arg1, arg2, arg4)
                    var_f9_1 = 1
                    
                    if (sub_56b320(arg1, arg2, arg3, arg11) == 0)
                    label_56aca7:
                        var_f9_1 = 0
            else
                int32_t* edi_1 = var_a4
                
                while (true)
                    void* ecx_60 = *esi_5
                    
                    if (ecx_60 != 0)
                        int32_t eax_74 = *(ecx_60 + 4)
                        
                        if (sub_5718d0(ecx_60, arg2, arg3, &edi_1[eax_74 * 6], 
                                (eax_74 << 4) + var_8c) == 0)
                            break
                    
                    esi_5 = &esi_5[1]
                    
                    if (esi_5 == *(arg1 + 0x34))
                        goto label_56a996
                
            label_56aca7_1:
                var_f9_1 = 0
        else
            int32_t* eax_44 = var_5c
            void* edx_21 = var_50
            int32_t* var_e0_1 = &var_a4[3]
            int32_t* var_f4_1 = eax_44
            int32_t* var_c4_1 = result_1 - eax_44
            int32_t* ecx_34 = var_74 - eax_44
            int32_t var_e4_1 = 0
            int32_t* ecx_36 = var_68 - eax_44
            void* var_f0_1 = edx_21
            int32_t* ecx_38 = var_80 - eax_44
            void* eax_46 = var_8c - edx_21
            var_e8 = var_98 - edx_21
            
            while (i_1 s>= 0)
                int32_t eax_49
                int32_t edx_22
                edx_22:eax_49 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
                int32_t edx_23 = edx_22 s>> 6
                
                if (i_1 s>= (edx_23 u>> 0x1f) + edx_23)
                    break
                
                void* esi_1 = *(ebx_2 + 0x14)
                void* esi_2 = esi_1 + var_e4_1
                
                if (esi_1 == neg.d(var_e4_1))
                    break
                
                void var_28
                struct sealengine::CEmitterPos::VTable** eax_53 =
                    sub_537660(&var_28, *(esi_2 + 0x20))
                *(var_e0_1 - 8) = *(eax_53 + 4)
                *var_e0_1 = eax_53[3]
                int32_t ecx_43 = eax_53[4]
                var_e0_1[1] = ecx_43
                var_e0_1[2] = eax_53[5]
                int32_t var_11c_11 = ecx_43
                int32_t* var_11c_12 = var_c4_1
                struct sealengine::CEmitterSize::VTable* var_30
                *(var_c4_1 + var_f4_1) = sub_56ecd0(&var_30)[1]
                var_30 = &sealengine::CEmitterSize::`vftable'
                int32_t* var_11c_13 = var_f4_1
                struct sealengine::CEmitterSize::VTable* var_38
                *var_f4_1 = sub_56ecd0(&var_38)[1]
                var_38 = &sealengine::CEmitterSize::`vftable'
                *(ecx_34 + var_f4_1) = sub_56ecd0(&var_d0)[1]
                var_d0 = &sealengine::CEmitterSize::`vftable'
                sub_56ef60(esi_2 + 0x1cc, arg2, &var_c0)
                int128_t* ecx_51 = var_f0_1
                int128_t* var_11c_15 = ecx_51
                *(ecx_51 + eax_46) = var_c0
                int32_t* var_11c_16 = ecx_36
                *(ecx_36 + var_f4_1) = sub_56ed40(&var_dc)[1]
                var_dc.d = &sealengine::CFrameMulAlpha::`vftable'
                void* var_11c_17 = esi_2 + 0x1e4
                *var_f0_1 = *(sub_56ed60(&var_28) + 4)
                int128_t* edx_28 = var_f0_1
                i_1 += 1
                var_e4_1 += 0x26c
                *(edx_28 + var_e8) = *(sub_56ed80(&var_28) + 4)
                float* eax_68 = arg5
                float xmm2_10 = var_e0_1[-2] f- *eax_68
                float xmm1_2 = var_e0_1[-1] f- eax_68[1]
                float xmm0_6 = *var_e0_1 - eax_68[2]
                var_f0_1 = &edx_28[1]
                var_e0_1 = &var_e0_1[6]
                *(ecx_38 + var_f4_1) = xmm2_10 * xmm2_10 + xmm1_2 * xmm1_2 + xmm0_6 * xmm0_6
                var_f4_1 = &var_f4_1[1]
                int32_t eax_70
                int32_t edx_30
                edx_30:eax_70 = muls.dp.d(0x1a6d01a7, *(ebx_2 + 0x18) - *(ebx_2 + 0x14))
                int32_t edx_31 = edx_30 s>> 6
                
                if (i_1 s>= (edx_31 u>> 0x1f) + edx_31)
                    goto label_56a941
            
        label_56aca7_2:
            var_f9_1 = 0
        int32_t eax_111 = var_80
        
        if (eax_111 != 0)
            j__free(eax_111)
        
        void* eax_112 = var_98
        
        if (eax_112 != 0)
            j__free(eax_112)
        
        void* eax_113 = var_50
        
        if (eax_113 != 0)
            j__free(eax_113)
        
        int32_t eax_114 = var_68
        
        if (eax_114 != 0)
            j__free(eax_114)
        
        int32_t eax_115 = var_8c
        
        if (eax_115 != 0)
            j__free(eax_115)
        
        int32_t eax_116 = var_74
        
        if (eax_116 != 0)
            j__free(eax_116)
        
        int32_t* eax_117 = var_5c
        
        if (eax_117 != 0)
            j__free(eax_117)
        
        result = result_1
        
        if (result != 0)
            j__free(result)
        
        int32_t var_4_1 = 0xffffffff
        int32_t* ebx_3 = var_a4
        
        if (ebx_3 != 0)
            int32_t* esi_8 = ebx_3
            int32_t var_a0
            
            if (ebx_3 != var_a0)
                do
                    (**esi_8)(0)
                    esi_8 = &esi_8[6]
                while (esi_8 != var_a0)
            
            j__free(ebx_3)
        
        result.b = var_f9_1
    else
        result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
