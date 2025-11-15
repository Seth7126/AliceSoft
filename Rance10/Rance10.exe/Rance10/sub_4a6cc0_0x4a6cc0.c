// 函数: sub_4a6cc0
// 地址: 0x4a6cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = 0

if (arg2 u> 0x26)
    sub_602420(arg1)
    return arg1

int32_t* var_20
int32_t* var_1c
float var_18
float var_14
float var_10
float xmm0_22
float xmm0_29
float xmm0_58
long double x87_r7_8

switch (arg2)
    case 0
        *arg3
        sub_603140()
        var_20 = sub_48ca30()
        int32_t* ecx_2 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_2
        return arg1
    case 1
        *arg3
        sub_603140()
        var_20 = sub_484cb0()
        int32_t* ecx_4 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_4
        return arg1
    case 2
        *arg3
        sub_603140()
        var_20 = sub_4a78e0()
        int32_t* ecx_6 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_6
        return arg1
    case 3
        *arg3
        var_20 = ___libm_sse2_asinf(sub_603140())
        int32_t* ecx_8 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_8
        return arg1
    case 4
        *arg3
        var_20 = ___libm_sse2_acosf(sub_603140())
        int32_t* ecx_10 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_10
        return arg1
    case 5
        *arg3
        uint32_t xmm0_13[0x4]
        uint64_t xmm1_1[0x2]
        uint64_t xmm4[0x2]
        xmm0_13, xmm1_1, xmm4 = sub_603140()
        var_20 = ___libm_sse2_atanf(xmm0_13, xmm1_1, xmm4)
        int32_t* ecx_12 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_12
        return arg1
    case 6
        *arg3
        var_20 = sub_603140()
        float xmm0_16 = sub_603140()
        var_20 = sub_4a7880(var_20, xmm0_16)
        int32_t* ecx_15 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_15
        return arg1
    case 7
        *arg3
        int32_t eax_17
        int32_t edx
        edx:eax_17 = sx.q(sub_602ff0())
        *arg1 = 0xa
        arg1[1] = (eax_17 ^ edx) - edx
        return arg1
    case 8
        *arg3
        var_20 = sub_48b210(sub_603140())
        int32_t* ecx_21 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_21
        return arg1
    case 9
        *arg3
        xmm0_22 = sub_4a78b0(sub_603140())
    label_4a6eb2:
        *arg1 = 0xa
        arg1[1] = int.d(xmm0_22)
        return arg1
    case 0xa
        *arg3
        xmm0_22 = sub_49d390(sub_603140())
        goto label_4a6eb2
    case 0xb
        *arg3
        int32_t ecx_26
        int32_t xmm0_24
        ecx_26, xmm0_24 = sub_603140()
        int32_t var_34 = ecx_26
        int32_t var_34_1 = xmm0_24
        arg1[1] = sub_7218a0(_roundf())
        *arg1 = 0xa
        return arg1
    case 0xc
        *arg3
        var_20 = sub_603140()
        float xmm0_26 = sub_603140()
        var_20 = fconvert.s(sub_40d0b0(var_20, xmm0_26))
        int32_t* ecx_30 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_30
        return arg1
    case 0xd
        *arg3
        xmm0_29 = sub_484cc0(sub_603140())
    label_4a6f65:
        var_20 = xmm0_29
    label_4a6f6e:
        int32_t* ecx_32 = var_20
        *arg1 = 0xb
        arg1[1] = ecx_32
        return arg1
    case 0xe
        *arg3
        xmm0_29 = ___libm_sse2_logf(sub_603140())
        goto label_4a6f65
    case 0xf
        *arg3
        xmm0_29 = ___libm_sse2_log10f(sub_603140())
        goto label_4a6f65
    case 0x10
        *arg3
        int32_t eax_34 = sub_602ff0()
        sub_4a7790(data_7fcb94, eax_34)
        *arg1 = 0
        return arg1
    case 0x11
        sub_4a79b0()
        *arg1 = 0
        return arg1
    case 0x12
        int32_t* esi_3 = data_7fcb94
        *esi_3 += 1
        
        if (*esi_3 s>= 0x209)
            sub_4a7690(esi_3)
            *esi_3 = 0
        
        int32_t ecx_39 = esi_3[*esi_3 + 1] & 0x7fffffff
        *arg1 = 0xa
        arg1[1] = ecx_39
        return arg1
    case 0x13
        xmm0_29 = sub_4a7a10()
        goto label_4a6f65
    case 0x14
        *arg3
        int32_t eax_40 = sub_602ff0()
        sub_4a6b50(data_7fcb90, eax_40)
        *arg1 = 0
        return arg1
    case 0x15
        sub_4a7a60()
        *arg1 = 0
        return arg1
    case 0x16
        uint32_t ecx_44 = sub_4a6ba0(data_7fcb90) u>> 1
        *arg1 = 0xa
        arg1[1] = ecx_44
        return arg1
    case 0x17, 0x18
        int32_t eax_45 = sub_4a6ba0(data_7fcb90)
        xmm0_29 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_45)) f+ *((eax_45 u>> 0x1f << 3) + &data_79aa70))
            * 2.32830644e-10f
        goto label_4a6f65
    case 0x19
        *arg3
        int32_t* eax_48 = sub_602ff0()
        var_20 = eax_48
        int32_t* eax_49 = sub_602ff0()
        int32_t** ecx_48 = &var_20
        var_1c = eax_49
        
        if (eax_48 s>= eax_49)
            ecx_48 = &var_1c
        
        *arg1 = 0xa
        arg1[1] = *ecx_48
        return arg1
    case 0x1a
        *arg3
        var_1c = sub_603140()
        int32_t var_34_5 = sub_603140()
        int32_t* var_38_1 = var_1c
        var_1c = fconvert.s(_fminf())
        int32_t* ecx_52 = var_1c
        *arg1 = 0xb
        arg1[1] = ecx_52
        return arg1
    case 0x1b
        *arg3
        float eax_54 = sub_602ff0()
        var_18 = eax_54
        int32_t* eax_55 = sub_602ff0()
        var_1c = eax_55
        int32_t* eax_56 = sub_602ff0()
        var_20 = eax_56
        int32_t** edx_2 = &var_1c
        
        if (eax_55 s>= eax_56)
            edx_2 = &var_20
        
        int32_t** ecx_56 = &var_18
        *arg1 = 0xa
        
        if (eax_54 s>= *edx_2)
            ecx_56 = edx_2
        
        arg1[1] = *ecx_56
        return arg1
    case 0x1c
        *arg3
        var_1c = sub_603140()
        var_18 = sub_603140()
        int32_t var_34_6 = sub_603140()
        float var_38_2 = var_18
        int32_t* var_3c_1 = var_1c
        float var_38_3 = fconvert.s(_fminf())
        var_18 = fconvert.s(_fminf())
        float ecx_61 = var_18
        *arg1 = 0xb
        arg1[1] = ecx_61
        return arg1
    case 0x1d
        var_18 = *arg3
        int32_t* eax_62 = sub_602ff0()
        var_1c = eax_62
        int32_t* eax_63 = sub_602ff0()
        var_20 = eax_63
        float eax_64 = sub_602ff0()
        var_14 = eax_64
        float eax_65 = sub_602ff0()
        var_18 = eax_65
        int32_t** ecx_66 = &var_1c
        
        if (eax_62 s>= eax_63)
            ecx_66 = &var_20
        
        var_10 = ecx_66
        float edx_3 = &var_14
        
        if (eax_64 s>= eax_65)
            edx_3 = &var_18
        
        int32_t* ecx_67 = *ecx_66
        *arg1 = 0xa
        
        if (ecx_67 s< *edx_3)
            edx_3 = var_10
        
        arg1[1] = *edx_3
        return arg1
    case 0x1e
        *arg3
        var_18 = sub_603140()
        var_14 = sub_603140()
        var_10 = sub_603140()
        int32_t var_34_7 = sub_603140()
        float var_38_4 = var_10
        int32_t ecx_73
        long double st0_6
        st0_6, ecx_73 = _fminf()
        float var_34_8 = fconvert.s(st0_6)
        float var_38_5 = var_14
        int32_t var_3c_2 = ecx_73
        float var_3c_3 = var_18
        float var_38_6 = fconvert.s(_fminf())
        x87_r7_8 = _fminf()
    label_4a7318:
        var_10 = fconvert.s(x87_r7_8)
        float ecx_74 = var_10
        *arg1 = 0xb
        arg1[1] = ecx_74
        return arg1
    case 0x1f
        *arg3
        float eax_70 = sub_602ff0()
        var_10 = eax_70
        float eax_71 = sub_602ff0()
        float* ecx_77 = &var_10
        var_14 = eax_71
        
        if (eax_71 s>= eax_70)
            ecx_77 = &var_14
        
        *arg1 = 0xa
        arg1[1] = *ecx_77
        return arg1
    case 0x20
        *arg3
        var_10 = sub_603140()
        int32_t var_34_9 = sub_603140()
        float var_38_7 = var_10
        x87_r7_8 = _fmaxf()
        goto label_4a7318
    case 0x21
        *arg3
        float eax_75 = sub_602ff0()
        var_18 = eax_75
        float eax_76 = sub_602ff0()
        var_10 = eax_76
        float eax_77 = sub_602ff0()
        var_14 = eax_77
        float* edx_5 = &var_10
        
        if (eax_77 s>= eax_76)
            edx_5 = &var_14
        
        float* ecx_84 = &var_18
        *arg1 = 0xa
        
        if (*edx_5 s>= eax_75)
            ecx_84 = edx_5
        
        arg1[1] = *ecx_84
        return arg1
    case 0x22
        *arg3
        var_14 = sub_603140()
        var_10 = sub_603140()
        int32_t var_34_10 = sub_603140()
        float var_38_8 = var_10
        xmm0_58 = var_14
    label_4a7446:
        float var_3c_4 = xmm0_58
        float var_38_9 = fconvert.s(_fmaxf())
        x87_r7_8 = _fmaxf()
        goto label_4a7318
    case 0x23
        var_10 = *arg3
        float eax_82 = sub_602ff0()
        var_14 = eax_82
        float eax_83 = sub_602ff0()
        var_18 = eax_83
        int32_t* eax_84 = sub_602ff0()
        var_1c = eax_84
        float eax_85 = sub_602ff0()
        var_10 = eax_85
        int32_t* ecx_93 = &var_14
        
        if (eax_83 s>= eax_82)
            ecx_93 = &var_18
        
        int32_t* edx_6 = &var_1c
        var_20 = ecx_93
        int32_t* esi_17 = var_20
        
        if (eax_85 s>= eax_84)
            edx_6 = &var_10
        
        *arg1 = 0xa
        
        if (*edx_6 s< *esi_17)
            edx_6 = esi_17
        
        arg1[1] = *edx_6
        return arg1
    case 0x24
        *arg3
        var_18 = sub_603140()
        var_14 = sub_603140()
        var_10 = sub_603140()
        int32_t var_34_11 = sub_603140()
        float var_38_10 = var_10
        int32_t ecx_100
        long double st0_12
        st0_12, ecx_100 = _fmaxf()
        float var_34_12 = fconvert.s(st0_12)
        float var_38_11 = var_14
        xmm0_58 = var_18
        int32_t var_3c_5 = ecx_100
        goto label_4a7446
    case 0x25
        *arg3
        int32_t eax_89 = sub_602ff0()
        int32_t esi_19 = sub_602ff0()
        int32_t eax_91 = sub_602ff0()
        
        if (eax_91 s>= esi_19)
            esi_19 = eax_89
            
            if (eax_91 s< eax_89)
                esi_19 = eax_91
        
        *arg1 = 0xa
        arg1[1] = esi_19
        return arg1
    case 0x26
        *arg3
        var_10 = sub_603140()
        var_14 = sub_603140()
        int32_t xmm0_67 = sub_603140()
        float xmm1_3 = var_14
        float xmm0_68 = var_10
        
        if (xmm1_3 <= xmm0_68)
            xmm0_29 = _mm_min_ss(xmm0_68, xmm0_67)
            goto label_4a6f65
        
        var_20 = xmm1_3
        goto label_4a6f6e
