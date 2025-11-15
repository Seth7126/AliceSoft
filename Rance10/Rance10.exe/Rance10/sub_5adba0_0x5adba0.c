// 函数: sub_5adba0
// 地址: 0x5adba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm0_1[0x4] = *(arg2 + 0x10) * 0.0174532924f
int80_t x87_r0
int32_t xmm0_2 = ___libm_sse2_cosf(xmm0_1, x87_r0)
int80_t x87_r1
int128_t xmm0_4 = ___libm_sse2_sinf(xmm0_1, x87_r1)
int32_t var_88 = xmm0_2
int32_t var_90 = xmm0_4
float var_48
sub_5616f0(&var_48, xmm0_2, xmm0_4 ^ data_79aad0)
float xmm3_1[0x4] = *(arg2 + 0xc)
float xmm2 = var_48
int64_t var_60 = _mm_unpacklo_ps(xmm3_1, 0)
int32_t var_4c = 0
float var_28
*(arg1 + 0x390) = _mm_unpacklo_ps(xmm2 f* xmm3_1 + var_28 * 0f, 0)
float var_40
float var_20
*(arg1 + 0x398) = var_40 f* xmm3_1 + var_20 * 0f
float* result = *(arg1 + 0x28) - 1

if (result u<= 3)
    float var_54
    float xmm0_13
    
    switch (result)
        case nullptr
            result = sub_5b0800(result, arg3, &var_54, *(arg1 + 0x2c), *(arg1 + 0x3c))
            xmm0_13 = *result f+ *(arg1 + 0x390)
        case 1
            result = sub_5b0ac0(result, arg3, &var_54, *(arg1 + 0x2c), *(arg1 + 0x3c))
            xmm0_13 = *(arg1 + 0x390) + *result
        case 2
            var_60.d = *(arg1 + 0x2c)
            var_60:4.d = *(arg1 + 0x30)
            int32_t var_58_1 = *(arg1 + 0x34)
            result = sub_5b0c20(&var_60, arg3, &var_54, &var_60, *(arg1 + 0x3c))
            xmm0_13 = *result f+ *(arg1 + 0x390)
        case 3
            result =
                sub_5b0df0(result, arg3, &var_54, *(arg1 + 0x2c), *(arg1 + 0x30), *(arg1 + 0x3c))
            xmm0_13 = *(arg1 + 0x390) + *result
    
    *(arg1 + 0x390) = xmm0_13
    *(arg1 + 0x394) = result[1] f+ *(arg1 + 0x394)
    *(arg1 + 0x398) = result[2] f+ *(arg1 + 0x398)

return result
