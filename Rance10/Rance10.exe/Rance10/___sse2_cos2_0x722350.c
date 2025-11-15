// 函数: ___sse2_cos2
// 地址: 0x722350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

double xmm0[0x2] = arg1 & data_8010a0
double xmm4[0x2] = data_8010c0
double xmm0_2[0x2] = __mulpd_xmmpd_mempd(__addpd_xmmpd_mempd(xmm0, data_801120), data_801000)
double xmm5[0x2] = data_8010d0
double xmm6[0x2] = data_8010e0
double xmm0_3[0x2] = __addpd_xmmpd_mempd(xmm0_2, data_8010b0)
double xmm0_5[0x2] = __subpd_xmmpd_mempd(__subpd_xmmpd_mempd(xmm0_3, data_8010b0), data_801110)
uint32_t result = _mm_movemask_pd(__pcmpgtd_xmmdq_memdq(xmm0, data_801100))
double xmm2_4[0x2]

if (result != 0)
    int128_t xmm0_18 = arg1 & data_8010a0
    double var_70[0x2]
    int32_t eax_1
    int16_t x87control
    int16_t x87control_1
    eax_1, x87control_1 =
        ___common_cos_reduction_LA(x87control, fconvert.d(fconvert.t(xmm0_18.q)), &var_70)
    int32_t var_7c_1 = eax_1
    int32_t var_74_1 =
        ___common_cos_reduction_LA(x87control_1, fconvert.d(fconvert.t(xmm0_18:8.q)), &var_70[1])
    result = 0
    int32_t var_78_1 = 0
    xmm2_4 = var_70
else
    double xmm7_2[0x2] = data_8010f0
    double xmm4_1[0x2] = _mm_mul_pd(xmm4, xmm0_5)
    double xmm5_1[0x2] = _mm_mul_pd(xmm5, xmm0_5)
    double xmm6_1[0x2] = _mm_mul_pd(xmm6, xmm0_5)
    double xmm7_3[0x2] = _mm_mul_pd(xmm7_2, xmm0_5)
    xmm2_4 = _mm_sub_pd(_mm_sub_pd(_mm_sub_pd(_mm_sub_pd(xmm0, xmm4_1), xmm5_1), xmm6_1), xmm7_3)
    _mm_slli_epi64(xmm0_3, 0x3f)

double xmm0_6[0x2] = data_801080
double xmm6_2[0x2] = data_801070
double xmm2_5[0x2] = _mm_mul_pd(xmm2_4, xmm2_4)
double xmm4_3[0x2] = _mm_mul_pd(xmm2_5, xmm2_5)
double xmm2_6[0x2] = _mm_mul_pd(xmm2_5, xmm2_4)
double xmm0_7[0x2] = _mm_mul_pd(xmm0_6, xmm4_3)
double xmm6_3[0x2] = _mm_mul_pd(xmm6_2, xmm4_3)
double xmm0_8[0x2] = __addpd_xmmpd_mempd(xmm0_7, data_801060)
double xmm6_4[0x2] = __addpd_xmmpd_mempd(xmm6_3, data_801050)
double xmm0_9[0x2] = _mm_mul_pd(xmm0_8, xmm4_3)
double xmm6_5[0x2] = _mm_mul_pd(xmm6_4, xmm4_3)
double xmm0_10[0x2] = __addpd_xmmpd_mempd(xmm0_9, data_801040)
double xmm6_6[0x2] = __addpd_xmmpd_mempd(xmm6_5, data_801030)
double xmm0_11[0x2] = _mm_mul_pd(xmm0_10, xmm4_3)
double xmm6_7[0x2] = _mm_mul_pd(xmm6_6, xmm4_3)
double xmm0_12[0x2] = __addpd_xmmpd_mempd(xmm0_11, data_801020)
double xmm6_8[0x2] = __addpd_xmmpd_mempd(xmm6_7, *"UUUUUU")
double xmm0_13[0x2] = _mm_mul_pd(xmm0_12, xmm4_3)
double xmm6_9[0x2] = _mm_mul_pd(xmm6_8, xmm2_6)
_mm_add_pd(_mm_mul_pd(xmm0_13, xmm2_4), _mm_add_pd(xmm6_9, xmm2_4))
return result
