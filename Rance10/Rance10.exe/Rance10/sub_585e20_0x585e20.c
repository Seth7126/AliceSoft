// 函数: sub_585e20
// 地址: 0x585e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
int32_t var_8c = arg4
int32_t var_5c = arg4
float var_48
float var_20
int16_t top

do
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(i)) * 0.314159274f
    int32_t xmm0_4 = ___libm_sse2_cosf(xmm0_3)
    int32_t xmm0_6 = ___libm_sse2_sinf(xmm0_3)
    int32_t var_d0_1 = xmm0_4
    int32_t var_d8_1 = xmm0_6
    void var_ec
    int32_t var_e8
    sub_5616f0(&var_48, xmm0_4, xmm0_6 ^ (data_79aad0).d, var_ec, var_e8)
    i += 1
    float* eax_1 = arg3
    float var_28
    int64_t xmm2_3 = var_48 * arg2 + var_28 * 0f + *eax_1
    float xmm0_13 = _mm_cvtepi32_ps(zx.o(i))
    float var_40
    float xmm1_5 = var_40 * arg2 + var_20 * 0f + eax_1[2]
    float xmm0_14 = xmm0_13 * 0.314159274f
    int32_t xmm0_15 = ___libm_sse2_cosf(xmm0_14)
    int32_t xmm0_17 = ___libm_sse2_sinf(xmm0_14)
    top += 4
    int32_t var_d0_2 = xmm0_15
    int32_t var_d8_2 = xmm0_17
    sub_5616f0(&var_48, xmm0_15, xmm0_17 ^ (data_79aad0).d)
    float* eax_2 = arg3
    int64_t xmm0_23 = eax_2[1]
    int64_t xmm2_8 = _mm_unpacklo_ps(var_48 * arg2 + var_28 * 0f + *eax_2, xmm0_23)
    float var_90_1 = var_40 * arg2 + var_20 * 0f + eax_2[2]
    float var_60_1 = xmm1_5
    int32_t eax_5 = *(arg1 + 0x234)
    int64_t xmm1_12 = _mm_unpacklo_ps(zx.o(xmm2_3), xmm0_23)
    
    if (eax_5 == *(arg1 + 0x238))
        float* var_bc_1 = &var_48
        sub_571180(arg1 + 0x230)
    
    int128_t* eax_6 = *(arg1 + 0x234)
    
    if (eax_6 != 0)
        *eax_6 = xmm1_12.o
        eax_6[1] = xmm2_8.o
    
    *(arg1 + 0x234) += 0x20
while (i s< 0x14)

int32_t i_1 = 0
int32_t var_4c = arg4
int32_t var_8c_1 = arg4
int64_t var_a0_1
float var_34

do
    float xmm0_28 = _mm_cvtepi32_ps(zx.o(i_1)) * 0.314159274f
    int32_t xmm0_29 = ___libm_sse2_cosf(xmm0_28)
    int32_t xmm0_31 = ___libm_sse2_sinf(xmm0_28)
    int32_t var_d0_3 = xmm0_29
    int32_t var_d4_1 = xmm0_31 ^ (data_79aad0).d
    int32_t var_e0_1 = xmm0_31
    int32_t var_e4_1 = xmm0_29
    sub_561660(&var_48)
    i_1 += 1
    float var_24
    float xmm2_13 = var_34 * arg2 + var_24 * 0f f+ *(arg3 + 4)
    int64_t xmm0_37 = *arg3
    float xmm0_39 = _mm_cvtepi32_ps(zx.o(i_1))
    float var_30
    float xmm1_17 = var_30 * arg2 + var_20 * 0f f+ arg3[1].d
    float xmm0_40 = xmm0_39 * 0.314159274f
    var_a0_1.d = xmm2_13
    int32_t xmm0_41 = ___libm_sse2_cosf(xmm0_40)
    int32_t xmm0_43 = ___libm_sse2_sinf(xmm0_40)
    top += 4
    int32_t var_d0_4 = xmm0_41
    int32_t var_d4_2 = xmm0_43 ^ (data_79aad0).d
    int32_t var_e0_2 = xmm0_43
    int32_t var_e4_2 = xmm0_41
    sub_561660(&var_48)
    float xmm1_22 = var_30 * arg2 + var_20 * 0f f+ arg3[1].d
    uint128_t xmm1_23 = zx.o(xmm0_37)
    int64_t xmm0_50 = _mm_unpacklo_ps(xmm1_23, var_34 * arg2 + var_24 * 0f f+ *(arg3 + 4))
    float var_50_1 = xmm1_22
    int64_t xmm1_24 = _mm_unpacklo_ps(xmm1_23, var_a0_1.d)
    float var_90_2 = xmm1_17
    
    if (*(arg1 + 0x234) == *(arg1 + 0x238))
        float* var_bc_2 = &var_48
        sub_571180(arg1 + 0x230)
    
    int128_t* eax_13 = *(arg1 + 0x234)
    
    if (eax_13 != 0)
        *eax_13 = xmm1_24.o
        eax_13[1] = xmm0_50.o
    
    *(arg1 + 0x234) += 0x20
while (i_1 s< 0x14)

int32_t i_2 = 0
int32_t var_8c_2 = arg4
int32_t var_4c_1 = arg4
int128_t* result

do
    float xmm0_56 = _mm_cvtepi32_ps(zx.o(i_2)) * 0.314159274f
    var_a0_1.d = xmm0_56
    int32_t xmm0_57 = ___libm_sse2_cosf(xmm0_56)
    int32_t xmm0_59 = ___libm_sse2_sinf(var_a0_1.d)
    int32_t var_e4_3 = xmm0_57
    int32_t var_e8_1 = xmm0_59 ^ (data_79aad0).d
    sub_5615e0(&var_48, xmm0_57, xmm0_59)
    i_2 += 1
    float var_38
    int64_t xmm2_23 = var_48 * arg2 + var_38 * 0f f+ *arg3
    int32_t xmm0_65 = arg3[1].d
    float xmm0_67 = _mm_cvtepi32_ps(zx.o(i_2))
    float var_44
    float xmm1_29 = var_44 * arg2 + var_34 * 0f f+ *(arg3 + 4)
    float xmm0_68 = xmm0_67 * 0.314159274f
    var_a0_1.d = xmm0_68
    int32_t xmm0_69 = ___libm_sse2_cosf(xmm0_68)
    int32_t xmm0_71 = ___libm_sse2_sinf(var_a0_1.d)
    top += 4
    int32_t var_e4_4 = xmm0_69
    int32_t var_e8_2 = xmm0_71 ^ (data_79aad0).d
    sub_5615e0(&var_48, xmm0_69, xmm0_71)
    int32_t var_90_3 = arg3[1].d
    int32_t var_50_2 = xmm0_65
    int32_t eax_19 = *(arg1 + 0x234)
    int64_t xmm2_29 = _mm_unpacklo_ps(var_48 * arg2 + var_38 * 0f f+ *arg3, 
        var_44 * arg2 + var_34 * 0f f+ *(arg3 + 4))
    int64_t xmm1_36 = _mm_unpacklo_ps(zx.o(xmm2_23), xmm1_29)
    
    if (eax_19 == *(arg1 + 0x238))
        float* var_bc_3 = &var_48
        sub_571180(arg1 + 0x230)
    
    result = *(arg1 + 0x234)
    
    if (result != 0)
        *result = xmm1_36.o
        result[1] = xmm2_29.o
    
    *(arg1 + 0x234) += 0x20
while (i_2 s< 0x14)

return result
