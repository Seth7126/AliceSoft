// 函数: sub_6b5b80
// 地址: 0x6b5b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t xmm3 = (zx.o(0)).q
int32_t i = 0
int64_t xmm4 = (zx.o(0)).q
int64_t xmm7 = (zx.o(0)).q
int64_t xmm5 = (zx.o(0)).q
int64_t xmm6 = (zx.o(0)).q
int32_t ebx = *arg3
int32_t eax_2 = arg3[arg2 * 0xe - 0xd]

if (arg2 s> 0)
    if (arg2 u>= 4)
        float xmm3_1[0x4] = *(arg6 + 0x454)
        float xmm3_2[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0)
        float var_90_1[0x4] = xmm3_2
        int32_t eax_5 = arg2 & 0x80000003
        
        if (eax_5 s< 0)
            eax_5 = ((eax_5 - 1) | 0xfffffffc) + 1
        
        double xmm7_1[0x2] = zx.o(0)
        double xmm6_1[0x2] = zx.o(0)
        void* eax_8 = &arg3[0x10]
        double var_80_1[0x2]
        __builtin_memset(&var_80_1, 0, 0x70)
        double var_a0_1[0x2] = zx.o(0)
        double var_70_1[0x2]
        double var_60_1[0x2]
        double var_50_1[0x2]
        double var_40_1[0x2]
        double var_30_1[0x2]
        double xmm0_48[0x2]
        double xmm2_38[0x2]
        
        do
            int32_t xmm5_2[0x4] = _mm_unpacklo_epi32(zx.o(*(eax_8 - 0x24)), zx.q(*(eax_8 + 0x14)))
            int32_t xmm1_2[0x4] = _mm_add_epi32(xmm5_2, 0x100000001)
            uint128_t xmm4_1 = zx.o(*(eax_8 - 0xc))
            float xmm1_3[0x4] = _mm_cvtepi32_ps(xmm1_2)
            int64_t xmm0_3 = zx.q(*(eax_8 + 0x2c))
            float xmm2_1[0x4] = _mm_rcp_ps(xmm1_3)
            int32_t xmm4_2[0x4] = _mm_unpacklo_epi32(xmm4_1, xmm0_3)
            float xmm0_5[0x4] = _mm_mul_ps(xmm2_1, xmm2_1)
            float xmm2_3[0x4] = _mm_sub_ps(_mm_add_ps(xmm2_1, xmm2_1), _mm_mul_ps(xmm0_5, xmm1_3))
            float xmm1_5[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(_mm_add_epi32(xmm4_2, xmm5_2)), xmm3_2.q)
            uint64_t xmm0_10 = zx.q(*eax_8)
            float xmm2_4[0x2] = _mm_mul_ps(xmm2_3, xmm1_5)
            int32_t xmm1_7[0x2] = _mm_unpacklo_epi32(zx.o(*(eax_8 - 0x38)), xmm0_10)
            uint64_t xmm0_11 = zx.q(*(eax_8 + 0x18))
            double xmm3_3[0x2] = _mm_cvtps_pd(xmm2_4)
            double xmm2_5[0x2] = _mm_cvtepi32_pd(xmm1_7)
            double xmm3_4[0x2] = __addpd_xmmpd_mempd(xmm3_3, data_79aa40)
            double xmm0_12[0x2] =
                _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(eax_8 - 0x20)), xmm0_11))
            double xmm2_6[0x2] = _mm_mul_pd(xmm2_5, xmm3_4)
            uint128_t xmm1_10 = zx.o(*(eax_8 - 0x34))
            var_30_1 = _mm_add_pd(var_30_1, _mm_add_pd(xmm2_6, xmm0_12))
            int32_t xmm1_11[0x2] = _mm_unpacklo_epi32(xmm1_10, zx.q(*(eax_8 + 4)))
            uint64_t xmm0_16 = zx.q(*(eax_8 + 0x1c))
            double xmm2_8[0x2] = _mm_cvtepi32_pd(xmm1_11)
            double xmm0_17[0x2] =
                _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(eax_8 - 0x1c)), xmm0_16))
            uint128_t xmm1_14 = zx.o(*(eax_8 - 0x30))
            double xmm2_10[0x2] = _mm_add_pd(_mm_mul_pd(xmm2_8, xmm3_4), xmm0_17)
            int64_t xmm0_18 = zx.q(*(eax_8 + 8))
            double xmm2_11[0x2] = __addpd_xmmpd_mempd(xmm2_10, var_60_1)
            int32_t xmm1_15[0x2] = _mm_unpacklo_epi32(xmm1_14, xmm0_18)
            uint64_t xmm0_19 = zx.q(*(eax_8 + 0x20))
            var_60_1 = xmm2_11
            double xmm2_12[0x2] = _mm_cvtepi32_pd(xmm1_15)
            double xmm0_20[0x2] =
                _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(eax_8 - 0x18)), xmm0_19))
            uint128_t xmm1_18 = zx.o(*(eax_8 - 0x28))
            double xmm2_14[0x2] = _mm_add_pd(_mm_mul_pd(xmm2_12, xmm3_4), xmm0_20)
            int32_t xmm1_19[0x2] = _mm_unpacklo_epi32(xmm1_18, zx.q(*(eax_8 + 0x10)))
            uint64_t xmm0_22 = zx.q(*(eax_8 + 0x28))
            xmm7_1 = _mm_add_pd(xmm7_1, xmm2_14)
            double xmm2_15[0x2] = _mm_cvtepi32_pd(xmm1_19)
            double xmm0_23[0x2] =
                _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(eax_8 - 0x10)), xmm0_22))
            double xmm2_16[0x2] = _mm_mul_pd(xmm2_15, xmm3_4)
            double xmm1_22[0x2] = _mm_cvtepi32_pd(xmm5_2)
            uint128_t xmm5_3 = zx.o(*(eax_8 + 0x4c))
            double xmm2_17[0x2] = _mm_add_pd(xmm2_16, xmm0_23)
            double xmm1_23[0x2] = _mm_mul_pd(xmm1_22, xmm3_4)
            double xmm2_18[0x2] = __addpd_xmmpd_mempd(xmm2_17, var_80_1)
            double xmm0_24[0x2] = _mm_cvtepi32_pd(xmm4_2)
            var_80_1 = xmm2_18
            double xmm1_24[0x2] = _mm_add_pd(xmm1_23, xmm0_24)
            int64_t xmm0_25 = zx.q(*(eax_8 + 0x84))
            xmm6_1 = _mm_add_pd(xmm6_1, xmm1_24)
            int32_t xmm5_4[0x4] = _mm_unpacklo_epi32(xmm5_3, xmm0_25)
            int32_t xmm1_26[0x4] = _mm_add_epi32(xmm5_4, 0x100000001)
            uint128_t xmm4_3 = zx.o(*(eax_8 + 0x64))
            float xmm1_27[0x4] = _mm_cvtepi32_ps(xmm1_26)
            i += 4
            int64_t xmm0_27 = zx.q(*(eax_8 + 0x9c))
            float xmm2_19[0x4] = _mm_rcp_ps(xmm1_27)
            int32_t xmm4_4[0x4] = _mm_unpacklo_epi32(xmm4_3, xmm0_27)
            float xmm0_29[0x4] = _mm_mul_ps(xmm2_19, xmm2_19)
            float xmm2_20[0x4] = _mm_add_ps(xmm2_19, xmm2_19)
            int64_t xmm3_5 = var_90_1[0].q
            float xmm2_21[0x4] = _mm_sub_ps(xmm2_20, _mm_mul_ps(xmm0_29, xmm1_27))
            float xmm1_29[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(_mm_add_epi32(xmm4_4, xmm5_4)), xmm3_5)
            uint64_t xmm0_34 = zx.q(*(eax_8 + 0x70))
            float xmm2_22[0x2] = _mm_mul_ps(xmm2_21, xmm1_29)
            int32_t xmm1_31[0x2] = _mm_unpacklo_epi32(zx.o(*(eax_8 + 0x38)), xmm0_34)
            uint64_t xmm0_35 = zx.q(*(eax_8 + 0x88))
            double xmm3_6[0x2] = _mm_cvtps_pd(xmm2_22)
            double xmm2_23[0x2] = _mm_cvtepi32_pd(xmm1_31)
            double xmm3_7[0x2] = __addpd_xmmpd_mempd(xmm3_6, data_79aa40)
            int32_t xmm1_33[0x2] = _mm_unpacklo_epi32(zx.o(*(eax_8 + 0x50)), xmm0_35)
            double xmm2_24[0x2] = _mm_mul_pd(xmm2_23, xmm3_7)
            double xmm0_36[0x2] = _mm_cvtepi32_pd(xmm1_33)
            uint128_t xmm1_34 = zx.o(*(eax_8 + 0x3c))
            double xmm2_25[0x2] = _mm_add_pd(xmm2_24, xmm0_36)
            int64_t xmm0_37 = zx.q(*(eax_8 + 0x74))
            double xmm2_26[0x2] = __addpd_xmmpd_mempd(xmm2_25, var_40_1)
            int32_t xmm1_35[0x2] = _mm_unpacklo_epi32(xmm1_34, xmm0_37)
            uint64_t xmm0_38 = zx.q(*(eax_8 + 0x8c))
            var_40_1 = xmm2_26
            double xmm2_27[0x2] = _mm_cvtepi32_pd(xmm1_35)
            int32_t xmm1_37[0x2] = _mm_unpacklo_epi32(zx.o(*(eax_8 + 0x54)), xmm0_38)
            double xmm2_28[0x2] = _mm_mul_pd(xmm2_27, xmm3_7)
            double xmm0_39[0x2] = _mm_cvtepi32_pd(xmm1_37)
            int32_t xmm1_38[0x4] = zx.o(*(eax_8 + 0x40))
            double xmm2_29[0x2] = _mm_add_pd(xmm2_28, xmm0_39)
            uint64_t xmm0_40 = zx.q(*(eax_8 + 0x78))
            double xmm2_30[0x2] = __addpd_xmmpd_mempd(xmm2_29, var_50_1)
            int32_t xmm1_39[0x2] = _mm_unpacklo_epi32(xmm1_38, xmm0_40)
            int64_t xmm0_41 = zx.q(*(eax_8 + 0x90))
            var_50_1 = xmm2_30
            double xmm2_31[0x2] = _mm_cvtepi32_pd(xmm1_39)
            int32_t xmm1_41[0x2] = _mm_unpacklo_epi32(zx.o(*(eax_8 + 0x58)), xmm0_41)
            double xmm2_32[0x2] = _mm_mul_pd(xmm2_31, xmm3_7)
            double xmm0_42[0x2] = _mm_cvtepi32_pd(xmm1_41)
            int32_t xmm1_42[0x4] = zx.o(*(eax_8 + 0x48))
            double xmm2_33[0x2] = _mm_add_pd(xmm2_32, xmm0_42)
            uint64_t xmm0_43 = zx.q(*(eax_8 + 0x80))
            double xmm2_34[0x2] = __addpd_xmmpd_mempd(xmm2_33, var_70_1)
            int32_t xmm1_43[0x2] = _mm_unpacklo_epi32(xmm1_42, xmm0_43)
            int64_t xmm0_44 = zx.q(*(eax_8 + 0x98))
            var_70_1 = xmm2_34
            double xmm2_35[0x2] = _mm_cvtepi32_pd(xmm1_43)
            uint128_t xmm1_44 = zx.o(*(eax_8 + 0x60))
            eax_8 += 0xe0
            double xmm0_45[0x2] = _mm_cvtepi32_pd(_mm_unpacklo_epi32(xmm1_44, xmm0_44))
            double xmm2_36[0x2] = _mm_mul_pd(xmm2_35, xmm3_7)
            double xmm1_46[0x2] = _mm_cvtepi32_pd(xmm5_4)
            double xmm2_37[0x2] = _mm_add_pd(xmm2_36, xmm0_45)
            double xmm1_47[0x2] = _mm_mul_pd(xmm1_46, xmm3_7)
            double var_20_1[0x2]
            xmm2_38 = __addpd_xmmpd_mempd(xmm2_37, var_20_1)
            xmm3_2 = var_90_1
            var_20_1 = xmm2_38
            xmm0_48 = __addpd_xmmpd_mempd(_mm_add_pd(_mm_cvtepi32_pd(xmm4_4), xmm1_47), var_a0_1)
            var_a0_1 = xmm0_48
        while (i s< arg2 - eax_5)
        
        double xmm5_5[0x2] = var_80_1
        double xmm7_2[0x2] = __addpd_xmmpd_mempd(xmm7_1, var_70_1)
        double xmm4_6[0x2] = __addpd_xmmpd_mempd(var_60_1, var_50_1)
        double xmm3_9[0x2] = __addpd_xmmpd_mempd(var_40_1, var_30_1)
        double xmm6_2[0x2] = _mm_add_pd(xmm6_1, xmm0_48)
        double xmm5_6[0x2] = _mm_add_pd(xmm5_5, xmm2_38)
        xmm6 = xmm6_2 f+ _mm_unpackhi_pd(xmm6_2, xmm6_2)
        xmm5 = xmm5_6 f+ _mm_unpackhi_pd(xmm5_6, xmm5_6)
        xmm7 = xmm7_2 f+ _mm_unpackhi_pd(xmm7_2, xmm7_2)
        xmm4 = xmm4_6 f+ _mm_unpackhi_pd(xmm4_6, xmm4_6)
        xmm3 = xmm3_9 f+ _mm_unpackhi_pd(xmm3_9, xmm3_9)
    
    if (i s< arg2)
        int32_t i_2 = arg2 - i
        void* esi_6 = &arg3[(i * 7 + 4) * 2]
        int32_t i_1
        
        do
            int32_t ecx = *(esi_6 - 4)
            int32_t edx_1 = *(esi_6 + 0x14)
            float xmm1_51[0x2] = _mm_cvtepi32_ps(zx.o(edx_1 + ecx)) f* *(arg6 + 0x454)
                / _mm_cvtepi32_ps(zx.o(ecx + 1))
            uint64_t xmm0_61 = zx.q(*esi_6)
            double xmm2_40 = _mm_cvtps_pd(xmm1_51) + 1.0
            double xmm1_55 =
                _mm_cvtepi32_pd(zx.q(*(esi_6 - 0x18))) * xmm2_40 + _mm_cvtepi32_pd(xmm0_61)
            double xmm0_64 = _mm_cvtepi32_pd(zx.q(*(esi_6 + 4)))
            xmm3 = xmm3 f+ xmm1_55
            double xmm1_59 = _mm_cvtepi32_pd(zx.q(*(esi_6 - 0x14))) * xmm2_40 + xmm0_64
            double xmm0_66 = _mm_cvtepi32_pd(zx.q(*(esi_6 + 8)))
            xmm4 = xmm4 f+ xmm1_59
            double xmm1_63 = _mm_cvtepi32_pd(zx.q(*(esi_6 - 0x10))) * xmm2_40 + xmm0_66
            double xmm0_68 = _mm_cvtepi32_pd(zx.q(*(esi_6 + 0x10)))
            xmm7 = xmm7 f+ xmm1_63
            double xmm1_65 = _mm_cvtepi32_pd(zx.q(*(esi_6 - 8)))
            esi_6 += 0x38
            double xmm0_70 = _mm_cvtepi32_pd(zx.q(edx_1))
            xmm5 = xmm5 f+ xmm1_65 * xmm2_40 + xmm0_68
            xmm6 = xmm6 f+ _mm_cvtepi32_pd(zx.q(ecx)) * xmm2_40 + xmm0_70
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

double xmm1_72 = 1.0
int32_t ecx_1 = *arg4

if (ecx_1 s>= 0)
    xmm6 = xmm6 f+ xmm1_72
    xmm3 = xmm3 f+ _mm_cvtepi32_pd(zx.q(ebx))
    xmm4 = xmm4 f+ _mm_cvtepi32_pd(zx.q(ecx_1))
    xmm7 = xmm7 f+ _mm_cvtepi32_pd(zx.q(ebx * ebx))
    xmm5 = xmm5 f+ _mm_cvtepi32_pd(zx.q(ecx_1 * ebx))

int32_t ecx_3 = *arg5

if (ecx_3 s>= 0)
    xmm6 = xmm6 f+ xmm1_72
    xmm3 = xmm3 f+ _mm_cvtepi32_pd(zx.q(eax_2))
    xmm4 = xmm4 f+ _mm_cvtepi32_pd(zx.q(ecx_3))
    xmm7 = xmm7 f+ _mm_cvtepi32_pd(zx.q(eax_2 * eax_2))
    xmm5 = xmm5 f+ _mm_cvtepi32_pd(zx.q(ecx_3 * eax_2))

double xmm2_43 = xmm6 f* xmm7 - xmm3 f* xmm3

if (xmm2_43 f<= 0)
    *arg4 = 0
    *arg5 = 0
    return 1

double xmm1_73 = xmm1_72 / xmm2_43
double xmm6_5 = (xmm6 f* xmm5 - xmm4 f* xmm3) * xmm1_73
double xmm7_5 = (xmm7 f* xmm4 - xmm5 f* xmm3) * xmm1_73
uint128_t xmm6_6 = 0x4330000000000000
uint128_t xmm7_6 = -0x8000000000000000
uint32_t xmm4_12[0x4] = _mm_cvtepi32_pd(zx.q(ebx)) * xmm6_5 + xmm7_5 + 0.5
uint32_t xmm3_11[0x4] = _mm_and_ps(xmm7_6, xmm4_12)
double xmm2_44 = xmm4_12[0].q
double xmm1_76 =
    _mm_or_ps(_mm_and_ps(xmm6_6, _mm_cmpeq_sd(xmm4_12[0].q ^ xmm3_11[0].q, xmm6_6, 1)), xmm3_11)
double xmm2_46 = xmm2_44 + xmm1_76 - xmm1_76
uint32_t xmm3_12[0x4] = 0x3ff0000000000000
int32_t ecx_5 = int.d(xmm2_46 - _mm_and_ps(_mm_cmpeq_sd(xmm2_46 f- xmm4_12, xmm3_11, 6), xmm3_12))
double xmm2_49 = _mm_cvtepi32_pd(zx.q(eax_2))

if (ecx_5 s> 0x3ff)
    ecx_5 = 0x3ff

*arg4 = ecx_5
uint32_t xmm2_52[0x4] = xmm2_49 * xmm6_5 + xmm7_5 + 0.5
uint32_t xmm7_7[0x4] = _mm_and_ps(xmm7_6, xmm2_52)
double xmm1_77 = xmm2_52[0].q
double xmm6_8 =
    _mm_or_ps(_mm_and_ps(xmm6_6, _mm_cmpeq_sd(xmm2_52[0].q ^ xmm7_7[0].q, xmm6_6, 1)), xmm7_7)
double xmm1_79 = xmm1_77 + xmm6_8 - xmm6_8
int32_t eax_15 = int.d(xmm1_79 - _mm_and_ps(_mm_cmpeq_sd(xmm1_79 f- xmm2_52, xmm7_7, 6), xmm3_12))
*arg5 = eax_15

if (eax_15 s> 0x3ff)
    *arg5 = 0x3ff

if (ecx_5 s< 0)
    *arg4 = 0

if (*arg5 s< 0)
    *arg5 = 0

return 0
