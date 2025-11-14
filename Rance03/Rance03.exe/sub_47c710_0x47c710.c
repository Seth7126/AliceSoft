// 函数: sub_47c710
// 地址: 0x47c710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 u> 0x1d)
    int32_t eax_56
    eax_56.b = 0
    return eax_56

uint32_t ecx
int32_t mxcsr
int32_t xmm0_28
float xmm1_3
int80_t x87_r0
bool cond:0

switch (arg1)
    case 0
        *arg3 = ___libm_sse2_cosf(*arg2 * 3.14159274f * 0.00555555569f, x87_r0)
        int32_t* eax_1
        eax_1.b = 1
        return eax_1
    case 1
        *arg3 = ___libm_sse2_sinf(*arg2 * 3.14159274f * 0.00555555569f, x87_r0)
        int32_t* eax_3
        eax_3.b = 1
        return eax_3
    case 2
        *arg3 = ___libm_sse2_tanf(*arg2 * 3.14159274f * 0.00555555569f, x87_r0)
        int32_t* eax_5
        eax_5.b = 1
        return eax_5
    case 3
        float xmm0_12 = *arg2
        *arg3 = _mm_sqrt_ss(xmm0_12, xmm0_12)
        int32_t* eax_7
        eax_7.b = 1
        return eax_7
    case 4
        *arg3 = ___libm_sse2_asinf(*arg2)
        int32_t* eax_9
        eax_9.b = 1
        return eax_9
    case 5
        *arg3 = ___libm_sse2_acosf(*arg2)
        int32_t* eax_11
        eax_11.b = 1
        return eax_11
    case 6
        uint64_t xmm1[0x2]
        uint64_t xmm4[0x2]
        *arg3 = ___libm_sse2_atanf(*arg2, xmm1, xmm4)
        int32_t* eax_13
        eax_13.b = 1
        return eax_13
    case 7
        *arg3 = fconvert.s(__fpatan(fconvert.t(arg2[1]), fconvert.t(*arg2)))
        float* eax_15
        eax_15.b = 1
        return eax_15
    case 8
        ecx = *arg2
        
        if (ecx s>= 0)
            goto label_47ca0f
        
        *arg3 = neg.d(ecx)
        int32_t* eax_17
        eax_17.b = 1
        return eax_17
    case 9
        int128_t xmm1_1 = *arg2
        
        if (not(0 f<= xmm1_1))
            xmm1_1 ^= data_7094c0
        
        *arg3 = xmm1_1
        int32_t* eax_19
        eax_19.b = 1
        return eax_19
    case 0xa
        *arg3 = ___libm_sse2_powf(mxcsr, *arg2, arg2[1])
        int32_t* eax_21
        eax_21.b = 1
        return eax_21
    case 0xb
        float __saved_esi_1 = *arg2
        sub_47cb30(data_75d4f0)
        int32_t eax_23
        eax_23.b = 1
        return eax_23
    case 0xc
        sub_47cd40()
        void* eax_24
        eax_24.b = 1
        return eax_24
    case 0xd
        *arg3 = sub_47cda0()
        int32_t eax_25
        eax_25.b = 1
        return eax_25
    case 0xe
        *arg3 = sub_47cdd0()
        int32_t* eax_26
        eax_26.b = 1
        return eax_26
    case 0xf
        float __saved_esi_2 = *arg2
        sub_47c5b0(data_75d4f4)
        int32_t eax_28
        eax_28.b = 1
        return eax_28
    case 0x10
        sub_47ce20()
        int32_t eax_29
        eax_29.b = 1
        return eax_29
    case 0x11
        *arg3 = sub_47c600(data_75d4f4) u>> 1
        int32_t eax_31
        eax_31.b = 1
        return eax_31
    case 0x12, 0x13
        int32_t eax_32 = sub_47c600(data_75d4f4)
        *arg3 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_32)) f+ *((eax_32 u>> 0x1f << 3) + &data_709480))
            * 2.32830644e-10f
        int32_t* eax_34
        eax_34.b = 1
        return eax_34
    case 0x14
        float ecx_8 = arg2[1]
        float eax_36 = *arg2
        
        if (eax_36 s< ecx_8)
            ecx_8 = eax_36
        
        *arg3 = ecx_8
        float* eax_37
        eax_37.b = 1
        return eax_37
    case 0x15
        xmm0_28 = *arg2
        xmm1_3 = arg2[1]
        cond:0 = xmm1_3 f> xmm0_28
    label_47c930:
        
        if (not(cond:0))
            xmm0_28 = xmm1_3
        
        *arg3 = xmm0_28
        int32_t* eax_39
        eax_39.b = 1
        return eax_39
    case 0x16
        float ecx_9 = arg2[1]
        float eax_41 = *arg2
        
        if (eax_41 s> ecx_9)
            ecx_9 = eax_41
        
        *arg3 = ecx_9
        float* eax_42
        eax_42.b = 1
        return eax_42
    case 0x17
        xmm0_28 = *arg2
        xmm1_3 = arg2[1]
        cond:0 = xmm0_28 f> xmm1_3
        goto label_47c930
    case 0x18
        int32_t __saved_esi_5
        int32_t __saved_esi_3 = __saved_esi_5
        int32_t* esi = arg2[1]
        float ecx_10 = *arg2
        int32_t edx_1 = *ecx_10
        *ecx_10 = *esi
        int32_t eax_45
        eax_45.b = 1
        *esi = edx_1
        return eax_45
    case 0x19
        float ecx_11 = *arg2
        int32_t* edx_2 = arg2[1]
        int32_t xmm0_29 = *ecx_11
        *ecx_11 = *edx_2
        int32_t eax_47
        eax_47.b = 1
        *edx_2 = xmm0_29
        return eax_47
    case 0x1a
        *arg3 = ___libm_sse2_logf(*arg2)
        int32_t* eax_49
        eax_49.b = 1
        return eax_49
    case 0x1b
        *arg3 = ___libm_sse2_log10f(*arg2)
        int32_t* eax_51
        eax_51.b = 1
        return eax_51
    case 0x1c
        int16_t x87control
        *arg3 = sub_6b1250(sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(*arg2))))
        int32_t eax_53
        eax_53.b = 1
        return eax_53
    case 0x1d
        int32_t* ecx_13 = arg2
        ecx = zx.d(sub_47cf70(arg1, ecx_13[1], *ecx_13, ecx_13[3], ecx_13[2], ecx_13[4], ecx_13[5]))
    label_47ca0f:
        *arg3 = ecx
        int32_t* eax_55
        eax_55.b = 1
        return eax_55
