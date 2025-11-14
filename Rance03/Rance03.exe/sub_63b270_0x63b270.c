// 函数: sub_63b270
// 地址: 0x63b270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int64_t xmm3 = (zx.o(0)).q
int32_t i = 0
int64_t xmm5 = (zx.o(0)).q
int64_t xmm7 = (zx.o(0)).q
int64_t xmm4 = (zx.o(0)).q
int64_t xmm6 = (zx.o(0)).q
int32_t ebx = *arg3
int32_t eax_2 = arg3[arg2 * 0xe - 0xd]

if (arg2 s> 0)
    if (arg2 u>= 4)
        float xmm3_1[0x4] = *(arg6 + 0x454)
        float xmm3_2[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0)
        float var_a0_1[0x4] = xmm3_2
        int32_t eax_5 = arg2 & 0x80000003
        
        if (eax_5 s< 0)
            eax_5 = ((eax_5 - 1) | 0xfffffffc) + 1
        
        double xmm7_1[0x2] = zx.o(0)
        double xmm6_1[0x2] = zx.o(0)
        void* eax_8 = &arg3[0x10]
        double var_90_1[0x2]
        __builtin_memset(&var_90_1, 0, 0x80)
        double var_80_1[0x2]
        double var_70_1[0x2]
        double var_60_1[0x2]
        double var_50_1[0x2]
        double var_40_1[0x2]
        double var_30_1[0x2]
        double xmm0_52[0x2]
        double xmm2_38[0x2]
        
        do
            int32_t xmm5_2[0x4] = _mm_unpacklo_epi32(zx.o(*(eax_8 - 0x24)), zx.q(*(eax_8 + 0x14)))
            uint128_t xmm4_1 = zx.o(*(eax_8 - 0xc))
            float xmm1_1[0x4] = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(xmm5_2, data_709230))
            int64_t xmm0_4 = zx.q(*(eax_8 + 0x2c))
            float xmm2_1[0x4] = _mm_rcp_ps(xmm1_1)
            int32_t xmm4_2[0x4] = _mm_unpacklo_epi32(xmm4_1, xmm0_4)
            float xmm0_6[0x4] = _mm_mul_ps(xmm2_1, xmm2_1)
            float xmm2_2[0x4] = _mm_add_ps(xmm2_1, xmm2_1)
            float xmm0_7[0x4] = _mm_mul_ps(xmm0_6, xmm1_1)
            uint128_t xmm1_2 = zx.o(*(eax_8 - 0x38))
            float xmm2_4[0x2] = _mm_mul_ps(_mm_sub_ps(xmm2_2, xmm0_7), 
                _mm_mul_ps(_mm_cvtepi32_ps(_mm_add_epi32(xmm4_2, xmm5_2)), xmm3_2))
            int32_t xmm1_3[0x2] = _mm_unpacklo_epi32(xmm1_2, zx.q(*eax_8))
            uint64_t xmm0_13 = zx.q(*(eax_8 + 0x18))
            double xmm3_3[0x2] = _mm_cvtps_pd(xmm2_4)
            double xmm2_5[0x2] = _mm_cvtepi32_pd(xmm1_3)
            double xmm3_4[0x2] = __addpd_xmmpd_mempd(xmm3_3, data_709460)
            double xmm0_14[0x2] =
                _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(eax_8 - 0x20)), xmm0_13))
            double xmm2_6[0x2] = _mm_mul_pd(xmm2_5, xmm3_4)
            uint128_t xmm1_6 = zx.o(*(eax_8 - 0x34))
            var_70_1 = _mm_add_pd(var_70_1, _mm_add_pd(xmm2_6, xmm0_14))
            int32_t xmm1_7[0x2] = _mm_unpacklo_epi32(xmm1_6, zx.q(*(eax_8 + 4)))
            uint64_t xmm0_18 = zx.q(*(eax_8 + 0x1c))
            double xmm2_8[0x2] = _mm_cvtepi32_pd(xmm1_7)
            double xmm0_19[0x2] =
                _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(eax_8 - 0x1c)), xmm0_18))
            uint128_t xmm1_10 = zx.o(*(eax_8 - 0x30))
            double xmm2_10[0x2] = _mm_add_pd(_mm_mul_pd(xmm2_8, xmm3_4), xmm0_19)
            int64_t xmm0_20 = zx.q(*(eax_8 + 8))
            double xmm2_11[0x2] = __addpd_xmmpd_mempd(xmm2_10, var_80_1)
            int32_t xmm1_11[0x2] = _mm_unpacklo_epi32(xmm1_10, xmm0_20)
            uint64_t xmm0_21 = zx.q(*(eax_8 + 0x20))
            var_80_1 = xmm2_11
            double xmm2_12[0x2] = _mm_cvtepi32_pd(xmm1_11)
            double xmm0_22[0x2] =
                _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(eax_8 - 0x18)), xmm0_21))
            uint128_t xmm1_14 = zx.o(*(eax_8 - 0x28))
            double xmm2_14[0x2] = _mm_add_pd(_mm_mul_pd(xmm2_12, xmm3_4), xmm0_22)
            int32_t xmm1_15[0x2] = _mm_unpacklo_epi32(xmm1_14, zx.q(*(eax_8 + 0x10)))
            uint64_t xmm0_24 = zx.q(*(eax_8 + 0x28))
            xmm7_1 = _mm_add_pd(xmm7_1, xmm2_14)
            double xmm2_15[0x2] = _mm_cvtepi32_pd(xmm1_15)
            double xmm0_25[0x2] =
                _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(eax_8 - 0x10)), xmm0_24))
            double xmm2_16[0x2] = _mm_mul_pd(xmm2_15, xmm3_4)
            double xmm1_18[0x2] = _mm_cvtepi32_pd(xmm5_2)
            uint128_t xmm5_3 = zx.o(*(eax_8 + 0x4c))
            double xmm2_17[0x2] = _mm_add_pd(xmm2_16, xmm0_25)
            double xmm1_19[0x2] = _mm_mul_pd(xmm1_18, xmm3_4)
            var_60_1 = __addpd_xmmpd_mempd(xmm2_17, var_60_1)
            double xmm1_20[0x2] = _mm_add_pd(xmm1_19, _mm_cvtepi32_pd(xmm4_2))
            int32_t xmm5_4[0x4] = _mm_unpacklo_epi32(xmm5_3, zx.q(*(eax_8 + 0x84)))
            int32_t xmm0_29[0x4] = __paddd_xmmdq_memdq(xmm5_4, data_709230)
            xmm6_1 = _mm_add_pd(xmm6_1, xmm1_20)
            float xmm1_21[0x4] = _mm_cvtepi32_ps(xmm0_29)
            uint64_t xmm0_30 = zx.q(*(eax_8 + 0x9c))
            i += 4
            int32_t xmm4_3[0x4] = zx.o(*(eax_8 + 0x64))
            float xmm2_19[0x4] = _mm_rcp_ps(xmm1_21)
            int32_t xmm4_4[0x4] = _mm_unpacklo_epi32(xmm4_3, xmm0_30)
            float xmm0_32[0x4] = _mm_mul_ps(xmm2_19, xmm2_19)
            float xmm2_20[0x4] = _mm_add_ps(xmm2_19, xmm2_19)
            float xmm0_33[0x4] = _mm_mul_ps(xmm0_32, xmm1_21)
            uint128_t xmm1_22 = zx.o(*(eax_8 + 0x38))
            float xmm2_22[0x2] = _mm_mul_ps(_mm_sub_ps(xmm2_20, xmm0_33), 
                __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(xmm4_4, xmm5_4)), var_a0_1))
            int32_t xmm1_23[0x2] = _mm_unpacklo_epi32(xmm1_22, zx.q(*(eax_8 + 0x70)))
            uint64_t xmm0_39 = zx.q(*(eax_8 + 0x88))
            double xmm3_5[0x2] = _mm_cvtps_pd(xmm2_22)
            double xmm2_23[0x2] = _mm_cvtepi32_pd(xmm1_23)
            double xmm3_6[0x2] = __addpd_xmmpd_mempd(xmm3_5, data_709460)
            int32_t xmm1_25[0x2] = _mm_unpacklo_epi32(zx.o(*(eax_8 + 0x50)), xmm0_39)
            double xmm2_24[0x2] = _mm_mul_pd(xmm2_23, xmm3_6)
            double xmm0_40[0x2] = _mm_cvtepi32_pd(xmm1_25)
            uint128_t xmm1_26 = zx.o(*(eax_8 + 0x3c))
            double xmm2_25[0x2] = _mm_add_pd(xmm2_24, xmm0_40)
            int64_t xmm0_41 = zx.q(*(eax_8 + 0x74))
            double xmm2_26[0x2] = __addpd_xmmpd_mempd(xmm2_25, var_50_1)
            int32_t xmm1_27[0x2] = _mm_unpacklo_epi32(xmm1_26, xmm0_41)
            uint64_t xmm0_42 = zx.q(*(eax_8 + 0x8c))
            var_50_1 = xmm2_26
            double xmm2_27[0x2] = _mm_cvtepi32_pd(xmm1_27)
            int32_t xmm1_29[0x2] = _mm_unpacklo_epi32(zx.o(*(eax_8 + 0x54)), xmm0_42)
            double xmm2_28[0x2] = _mm_mul_pd(xmm2_27, xmm3_6)
            double xmm0_43[0x2] = _mm_cvtepi32_pd(xmm1_29)
            uint128_t xmm1_30 = zx.o(*(eax_8 + 0x40))
            double xmm2_29[0x2] = _mm_add_pd(xmm2_28, xmm0_43)
            int64_t xmm0_44 = zx.q(*(eax_8 + 0x78))
            double xmm2_30[0x2] = __addpd_xmmpd_mempd(xmm2_29, var_40_1)
            int32_t xmm1_31[0x2] = _mm_unpacklo_epi32(xmm1_30, xmm0_44)
            uint64_t xmm0_45 = zx.q(*(eax_8 + 0x90))
            var_40_1 = xmm2_30
            double xmm2_31[0x2] = _mm_cvtepi32_pd(xmm1_31)
            int32_t xmm1_33[0x2] = _mm_unpacklo_epi32(zx.o(*(eax_8 + 0x58)), xmm0_45)
            double xmm2_32[0x2] = _mm_mul_pd(xmm2_31, xmm3_6)
            double xmm0_46[0x2] = _mm_cvtepi32_pd(xmm1_33)
            int32_t xmm1_34[0x4] = zx.o(*(eax_8 + 0x48))
            double xmm2_33[0x2] = _mm_add_pd(xmm2_32, xmm0_46)
            int64_t xmm0_47 = zx.q(*(eax_8 + 0x80))
            double xmm2_34[0x2] = __addpd_xmmpd_mempd(xmm2_33, var_30_1)
            int32_t xmm1_35[0x2] = _mm_unpacklo_epi32(xmm1_34, xmm0_47)
            int64_t xmm0_48 = zx.q(*(eax_8 + 0x98))
            var_30_1 = xmm2_34
            double xmm2_35[0x2] = _mm_cvtepi32_pd(xmm1_35)
            uint128_t xmm1_36 = zx.o(*(eax_8 + 0x60))
            eax_8 += 0xe0
            double xmm0_49[0x2] = _mm_cvtepi32_pd(_mm_unpacklo_epi32(xmm1_36, xmm0_48))
            double xmm2_36[0x2] = _mm_mul_pd(xmm2_35, xmm3_6)
            double xmm1_38[0x2] = _mm_cvtepi32_pd(xmm5_4)
            double xmm2_37[0x2] = _mm_add_pd(xmm2_36, xmm0_49)
            double xmm1_39[0x2] = _mm_mul_pd(xmm1_38, xmm3_6)
            xmm3_2 = var_a0_1
            double var_20_1[0x2]
            xmm2_38 = __addpd_xmmpd_mempd(xmm2_37, var_20_1)
            var_20_1 = xmm2_38
            xmm0_52 = __addpd_xmmpd_mempd(_mm_add_pd(_mm_cvtepi32_pd(xmm4_4), xmm1_39), var_90_1)
            var_90_1 = xmm0_52
        while (i s< arg2 - eax_5)
        
        double xmm7_2[0x2] = __addpd_xmmpd_mempd(xmm7_1, var_30_1)
        double xmm5_6[0x2] = __addpd_xmmpd_mempd(var_40_1, var_80_1)
        double xmm3_8[0x2] = __addpd_xmmpd_mempd(var_50_1, var_70_1)
        double xmm6_2[0x2] = _mm_add_pd(xmm6_1, xmm0_52)
        double xmm4_6[0x2] = _mm_add_pd(var_60_1, xmm2_38)
        xmm6 = xmm6_2 f+ _mm_unpackhi_pd(xmm6_2, xmm6_2)
        xmm4 = xmm4_6 f+ _mm_unpackhi_pd(xmm4_6, xmm4_6)
        xmm7 = xmm7_2 f+ _mm_unpackhi_pd(xmm7_2, xmm7_2)
        xmm5 = xmm5_6 f+ _mm_unpackhi_pd(xmm5_6, xmm5_6)
        xmm3 = xmm3_8 f+ _mm_unpackhi_pd(xmm3_8, xmm3_8)
    
    if (i s< arg2)
        int32_t i_2 = arg2 - i
        void* esi_6 = &arg3[(i * 7 + 4) * 2]
        int32_t i_1
        
        do
            int32_t ecx = *(esi_6 - 4)
            int32_t edx_1 = *(esi_6 + 0x14)
            float xmm1_43[0x2] = _mm_cvtepi32_ps(zx.o(edx_1 + ecx)) f* *(arg6 + 0x454)
                / _mm_cvtepi32_ps(zx.o(ecx + 1))
            uint64_t xmm0_65 = zx.q(*esi_6)
            double xmm2_40 = _mm_cvtps_pd(xmm1_43) + 1.0
            double xmm1_47 =
                _mm_cvtepi32_pd(zx.q(*(esi_6 - 0x18))) * xmm2_40 + _mm_cvtepi32_pd(xmm0_65)
            double xmm0_68 = _mm_cvtepi32_pd(zx.q(*(esi_6 + 4)))
            xmm3 = xmm3 f+ xmm1_47
            double xmm1_51 = _mm_cvtepi32_pd(zx.q(*(esi_6 - 0x14))) * xmm2_40 + xmm0_68
            double xmm0_70 = _mm_cvtepi32_pd(zx.q(*(esi_6 + 8)))
            xmm5 = xmm5 f+ xmm1_51
            double xmm1_55 = _mm_cvtepi32_pd(zx.q(*(esi_6 - 0x10))) * xmm2_40 + xmm0_70
            double xmm0_72 = _mm_cvtepi32_pd(zx.q(*(esi_6 + 0x10)))
            xmm7 = xmm7 f+ xmm1_55
            double xmm1_57 = _mm_cvtepi32_pd(zx.q(*(esi_6 - 8)))
            esi_6 += 0x38
            double xmm0_74 = _mm_cvtepi32_pd(zx.q(edx_1))
            xmm4 = xmm4 f+ xmm1_57 * xmm2_40 + xmm0_72
            xmm6 = xmm6 f+ _mm_cvtepi32_pd(zx.q(ecx)) * xmm2_40 + xmm0_74
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        ebx = ebx

double xmm1_64 = 1.0
int32_t ecx_1 = *arg4

if (ecx_1 s>= 0)
    xmm6 = xmm6 f+ xmm1_64
    xmm3 = xmm3 f+ _mm_cvtepi32_pd(zx.q(ebx))
    xmm5 = xmm5 f+ _mm_cvtepi32_pd(zx.q(ecx_1))
    xmm7 = xmm7 f+ _mm_cvtepi32_pd(zx.q(ebx * ebx))
    xmm4 = xmm4 f+ _mm_cvtepi32_pd(zx.q(ecx_1 * ebx))

int32_t ecx_3 = *arg5

if (ecx_3 s>= 0)
    xmm6 = xmm6 f+ xmm1_64
    xmm3 = xmm3 f+ _mm_cvtepi32_pd(zx.q(eax_2))
    xmm5 = xmm5 f+ _mm_cvtepi32_pd(zx.q(ecx_3))
    xmm7 = xmm7 f+ _mm_cvtepi32_pd(zx.q(eax_2 * eax_2))
    xmm4 = xmm4 f+ _mm_cvtepi32_pd(zx.q(ecx_3 * eax_2))

double xmm2_43 = xmm6 f* xmm7 - xmm3 f* xmm3

if (xmm2_43 f<= 0)
    *arg4 = 0
    *arg5 = 0
    return 1

double xmm1_65 = xmm1_64 / xmm2_43
double xmm7_5 = (xmm7 f* xmm5 - xmm4 f* xmm3) * xmm1_65
double xmm6_5 = (xmm6 f* xmm4 - xmm5 f* xmm3) * xmm1_65
uint128_t xmm6_6 = 0x4330000000000000
uint128_t xmm7_6 = -0x8000000000000000
uint64_t xmm4_11[0x2] = _mm_cvtepi32_pd(zx.q(ebx)) * xmm6_5 + xmm7_5 + 0.5
uint64_t xmm3_10[0x2] = _mm_and_pd(xmm7_6, xmm4_11)
int64_t xmm0_96 = _mm_xor_pd(xmm4_11, xmm3_10)
uint64_t xmm2_44 = xmm4_11[0]
double xmm1_68 = _mm_or_pd(_mm_and_pd(xmm6_6, _mm_cmpeq_sd(xmm0_96, xmm6_6, 1)), xmm3_10)
double xmm2_46 = xmm2_44 f+ xmm1_68 - xmm1_68
uint64_t xmm3_11[0x2] = 0x3ff0000000000000
int32_t ecx_5 = int.d(xmm2_46 - _mm_and_pd(_mm_cmpeq_sd(xmm2_46 f- xmm4_11, xmm3_10, 6), xmm3_11))
double xmm2_49 = _mm_cvtepi32_pd(zx.q(eax_2))

if (ecx_5 s> 0x3ff)
    ecx_5 = 0x3ff

*arg4 = ecx_5
uint64_t xmm2_52[0x2] = xmm2_49 * xmm6_5 + xmm7_5 + 0.5
uint64_t xmm7_7[0x2] = _mm_and_pd(xmm7_6, xmm2_52)
int64_t xmm0_103 = _mm_xor_pd(xmm2_52, xmm7_7)
uint64_t xmm1_69 = xmm2_52[0]
double xmm6_8 = _mm_or_pd(_mm_and_pd(xmm6_6, _mm_cmpeq_sd(xmm0_103, xmm6_6, 1)), xmm7_7)
double xmm1_71 = xmm1_69 f+ xmm6_8 - xmm6_8
int32_t eax_15 = int.d(xmm1_71 - _mm_and_pd(_mm_cmpeq_sd(xmm1_71 f- xmm2_52, xmm7_7, 6), xmm3_11))
*arg5 = eax_15

if (eax_15 s> 0x3ff)
    *arg5 = 0x3ff

if (ecx_5 s< 0)
    *arg4 = 0

if (*arg5 s< 0)
    *arg5 = 0

return 0
