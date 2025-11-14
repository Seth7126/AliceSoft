// 函数: sub_56f060
// 地址: 0x56f060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_90
int32_t eax_1 = __security_cookie ^ &var_90
int32_t ecx = *arg1
int32_t esi = arg1[1]

if (ecx != esi)
    int32_t esi_2 = 0
    int32_t eax_6 = (esi - ecx) s/ 0x1c
    int128_t xmm0_20
    struct sealengine::CEmitterRotate::VTable* var_88
    float var_58[0x11]
    float var_14
    
    if (eax_6 s<= 0)
    label_56f164:
        float* eax_8 = sub_5383e0(*arg1 + 8, &var_58)
        float xmm3_1 = *eax_8
        float xmm1_1 = eax_8[5]
        float xmm4_1 = eax_8[0xa]
        float xmm0_10 = xmm3_1 + xmm1_1 + xmm4_1 + eax_8[0xf]
        
        if (xmm0_10 < 1f)
            int32_t ebx_4
            ebx_4.b = xmm3_1 <= xmm1_1
            
            if (xmm4_1 > eax_8[ebx_4 * 5])
                ebx_4 = 2
            
            int32_t temp1_1 = mods.dp.d(sx.q(ebx_4 + 1), 3)
            int32_t temp1_2 = mods.dp.d(sx.q(temp1_1 + 1), 3)
            float xmm1_6 =
                _mm_sqrt_ss(0, eax_8[ebx_4 * 5] - eax_8[temp1_1 * 5] - eax_8[temp1_2 * 5] + 1f) * 2f
            float xmm2_3 = 1f / xmm1_6
            (&var_14)[ebx_4] = xmm1_6 * 0.25f
            (&var_14)[temp1_1] =
                (eax_8[ebx_4 + (temp1_1 << 2)] + eax_8[temp1_1 + (ebx_4 << 2)]) * xmm2_3
            (&var_14)[temp1_2] =
                (eax_8[ebx_4 + (temp1_2 << 2)] + eax_8[temp1_2 + (ebx_4 << 2)]) * xmm2_3
            var_88 = var_14
            int32_t var_10
            int32_t var_84_2 = var_10
            int32_t var_c
            int32_t var_80_2 = var_c
            float var_7c_2 =
                (eax_8[temp1_2 + (temp1_1 << 2)] - eax_8[temp1_1 + (temp1_2 << 2)]) * xmm2_3
        else
            float xmm1_3 = _mm_sqrt_ss(0, xmm0_10) * 2f
            float xmm2 = 1f / xmm1_3
            float var_7c_1 = xmm1_3 * 0.25f
            var_88 = (eax_8[6] - eax_8[9]) * xmm2
            float var_84_1 = (eax_8[8] - eax_8[2]) * xmm2
            float var_80_1 = (eax_8[1] - eax_8[4]) * xmm2
        
        xmm0_20 = var_88.o
    else
        int32_t ebx_1 = 3
        int32_t ebp_1 = 2
        var_90 = 1
        void* ecx_1 = nullptr
        void* edx_5 = *arg1
        
        while (true)
            if (_mm_cvtepi32_ps(zx.o(*(ecx_1 + edx_5))) f> arg2)
                goto label_56f164
            
            if (var_90 s< eax_6)
                if (*(ecx_1 + edx_5 + 4) != 0)
                    if (ebp_1 s< eax_6)
                        if (ebx_1 s>= eax_6)
                            int32_t ecx_8 = (esi_2 + 2) * 7
                            
                            if (arg2 f< _mm_cvtepi32_ps(zx.o(*(edx_5 + (ecx_8 << 2)))))
                                int32_t var_a4_6 = ecx_8
                                sub_56f500(arg3, arg1, esi_2, 3, arg2)
                                goto label_56f483
                            
                            int32_t var_a8_2 = ecx_8
                            sub_47c1a0(sub_5383e0(edx_5 + ((ecx_8 + 2) << 2), &var_58), &var_14)
                            xmm0_20 = var_14.o
                            break
                        
                        if (arg2 f< _mm_cvtepi32_ps(zx.o(*(ecx_1 + edx_5 + 0x54))))
                            void* var_a4_3 = ecx_1
                            sub_56f500(arg3, arg1, esi_2, 4, arg2)
                            goto label_56f483
                        
                        var_90 += 3
                        esi_2 += 3
                        ecx_1 += 0x54
                        ebp_1 += 3
                        ebx_1 += 3
                        goto label_56f152
                    
                    int32_t ebx_3 = (esi_2 + 1) * 7
                    int32_t eax_13 = *(edx_5 + (ebx_3 << 2))
                    
                    if (not(arg2 f< _mm_cvtepi32_ps(zx.o(eax_13))))
                        void* var_a8_3 = ecx_1
                        sub_47c1a0(sub_5383e0(edx_5 + 8 + (ebx_3 << 2), &var_58), &var_14)
                        xmm0_20 = var_14.o
                        break
                    
                    int32_t ebp_3 = *(ecx_1 + edx_5)
                    int32_t eax_15 = eax_13 - ebp_3
                    
                    if (eax_15 s> 0)
                        void* esi_4 = edx_5 + 8 + ecx_1
                        float xmm2_2 =
                            (arg2 - _mm_cvtepi32_ps(zx.o(ebp_3))) / _mm_cvtepi32_ps(zx.o(eax_15))
                        float* var_a8_6 = &var_14
                        struct sealengine::CEmitterRotate::VTable* var_78
                        struct sealengine::CEmitterRotate::VTable* var_68
                        sub_47c1a0(
                            sub_5383e0(
                                sub_538210(esi_4, &var_68, 
                                    sub_538290(
                                        sub_538250(edx_5 + 8 + (ebx_3 << 2), &var_78, esi_4), 
                                        xmm2_2, &var_88)), 
                                &var_58), 
                            &var_14)
                        xmm0_20 = var_14.o
                        break
                else if (not(_mm_cvtepi32_ps(zx.o(*(ecx_1 + edx_5 + 0x1c))) f> arg2))
                    var_90 += 1
                    esi_2 += 1
                    ecx_1 += 0x1c
                    ebp_1 += 1
                    ebx_1 += 1
                label_56f152:
                    
                    if (esi_2 s>= eax_6)
                        goto label_56f164
                    
                    continue
            
            void* var_a8_1 = ecx_1
            sub_47c1a0(sub_5383e0(ecx_1 + 8 + edx_5, &var_58), &var_14)
            xmm0_20 = var_14.o
            break
    *arg3 = xmm0_20
else
    *arg3 = 0
    arg3[1] = 0
    arg3[2] = 0
    arg3[3] = 0x3f800000

label_56f483:
sub_69a5bc(eax_1 ^ &var_90)
return arg3
