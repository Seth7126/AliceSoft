// 函数: sub_48b510
// 地址: 0x48b510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm4 = arg2[1]
float xmm3 = *arg2
float xmm5 = arg2[2]
float xmm1_3 = xmm3 * xmm3 + xmm4 * xmm4 + xmm5 * xmm5
float xmm1_4 = _mm_sqrt_ss(xmm1_3, xmm1_3)
xmm1_4 f- 0
int32_t eax
eax:1.b =
    (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2 | (xmm1_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    float xmm0_4 = 1f / xmm1_4
    *arg2 = xmm3 * xmm0_4
    arg2[1] = xmm4 * xmm0_4
    arg2[2] = xmm5 * xmm0_4

*(arg3 + 4) += 1

if (*(arg3 + 4) s>= 0x209)
    sub_47cac0(arg3)
    *(arg3 + 4) = 0

int32_t eax_2 = *(arg3 + (*(arg3 + 4) << 2) + 8)
uint32_t eax_3 = eax_2 u>> 0x1f
int32_t xmm0_13[0x4] = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_3 << 3) + &data_709480))
    * 2.3283064370807974e-10) * arg1 * 3.14159274f * 0.00555555569f * 0.5f

if (not(0 f>= xmm0_13))
    int80_t x87_r0
    int32_t xmm0_14 = ___libm_sse2_cosf(xmm0_13, x87_r0)
    float var_c = 0f
    float var_8_1 = 0f
    int32_t edi_1 = 0
    uint32_t var_4_1 = 0
    
    while (true)
        uint32_t eax_4 = sub_48b670(arg3, &var_c)
        
        if (*arg2 * var_c + var_8_1 f* arg2[1] + var_4_1 f* arg2[2] f>= xmm0_14)
            eax_3 = var_4_1
            *arg2 = var_c.q
            arg2[2] = eax_3
            break
        
        edi_1 += 1
        
        if (edi_1 s>= 0x3e8)
            return eax_4

return eax_3
