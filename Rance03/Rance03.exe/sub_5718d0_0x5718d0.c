// 函数: sub_5718d0
// 地址: 0x5718d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t xmm4 = arg2

if (*(arg1 + 0x21c) == 1 && *(arg3 + 0x128) != 0)
    void* eax_2 = sub_541c40(arg3, **(arg1 + 0x220))
    
    if (eax_2 == 0)
        xmm4 = (zx.o(0)).d
    else if (*(eax_2 + 0x19c) == 0)
        xmm4 = *(eax_2 + 0x12c)
    else
        xmm4 = (zx.o(0)).d

int32_t eax_3 = *(arg1 + 0x38)
float xmm3_3

if (eax_3 s> 0)
    xmm3_3 = (xmm4 f- *(arg1 + 0x2b4)) / _mm_cvtepi32_ps(zx.o(eax_3))

if (eax_3 s<= 0 || 0 f> xmm3_3)
    xmm3_3 = (zx.o(0)).d
else if (not(xmm3_3 <= 1f))
    xmm3_3 = 1f

int32_t eax_4 = *(arg1 + 0xd8)

if (eax_4 u> 3)
    eax_4.b = 0
    return eax_4

float var_f0
float var_dc
float var_80[0x10]
float* eax_10
float xmm0_4
int64_t xmm1_1
float xmm2_2[0x4]

switch (eax_4)
    case 0
        void var_b0
        float* eax_5 = sub_575c50(arg1, xmm4, xmm3_3, &var_b0)
        xmm2_2 = *eax_5 f+ *(arg1 + 0x29c)
        xmm1_1 = eax_5[1] f+ *(arg1 + 0x2a0)
        xmm0_4 = eax_5[2] f+ *(arg1 + 0x2a4)
    case 1
        float xmm0_6 = *(arg1 + 0x2a8) f+ *(arg4 + 4)
        float xmm0_8 = *(arg1 + 0x2ac) f+ *(arg4 + 8)
        float xmm0_10 = *(arg1 + 0x2b0) f+ *(arg4 + 0xc)
        void var_c8
        float* eax_7 = sub_575c50(arg1, xmm4, xmm3_3, &var_c8)
        xmm2_2 = *eax_7 + xmm0_6
        xmm1_1 = eax_7[1] + xmm0_8
        xmm0_4 = eax_7[2] + xmm0_10
    case 2
        void var_8c
        float* eax_8 = sub_575c50(arg1, xmm4, xmm3_3, &var_8c)
        var_dc = *(arg1 + 0x2a8) + *eax_8
        float var_d8_1 = *(arg1 + 0x2ac) + eax_8[1]
        float var_d4_1 = *(arg1 + 0x2b0) + eax_8[2]
        var_f0.q = *(arg1 + 0x29c) f- *(arg1 + 0x2a8)
        float xmm0_21 = *(arg1 + 0x2a0) f- *(arg1 + 0x2ac)
        float xmm0_23 = *(arg1 + 0x2a4) f- *(arg1 + 0x2b0)
        float var_98
        float var_40[0x10]
        eax_10 = sub_47b190(&var_dc, &var_98, sub_47c420(arg5, &var_40))
        xmm1_1 = eax_10[1] + xmm0_21
        xmm0_4 = eax_10[2] + xmm0_23
        xmm2_2 = var_f0 + *eax_10
    case 3
        void var_bc
        float* eax_11 = sub_575c50(arg1, xmm4, xmm3_3, &var_bc)
        var_dc = *eax_11 f+ *(arg1 + 0x2a8)
        float var_d8_2 = *(arg1 + 0x2ac) + eax_11[1]
        float var_d4_2 = *(arg1 + 0x2b0) + eax_11[2]
        float var_a4
        eax_10 = sub_47b190(&var_dc, &var_a4, sub_47c420(arg5, &var_80))
        xmm1_1 = eax_10[1] f+ *(arg4 + 8)
        xmm0_4 = eax_10[2] f+ *(arg4 + 0xc)
        xmm2_2 = *(arg4 + 4) + *eax_10

float var_e8 = xmm0_4
var_f0.q = _mm_unpacklo_ps(xmm2_2, xmm1_1)
float* eax_14 = sub_53f820(arg3, &var_80)
float var_ec
float xmm5_4 = eax_14[4] * var_ec + *eax_14 * var_f0 + eax_14[8] * var_e8 + eax_14[0xc]
float xmm6_4 = eax_14[5] * var_ec + eax_14[1] * var_f0 + eax_14[9] * var_e8 + eax_14[0xd]
float xmm7_4 = eax_14[6] * var_ec + eax_14[2] * var_f0 + eax_14[0xa] * var_e8 + eax_14[0xe]
float xmm4_5 = eax_14[7] * var_ec + eax_14[3] * var_f0 + eax_14[0xb] * var_e8 + eax_14[0xf]
xmm4_5 - 1f
eax_14:1.b =
    (xmm4_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 1f) ? 1 : 0) << 2 | (xmm4_5 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm4_5 - 0f
    eax_14:1.b = (xmm4_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 0f) ? 1 : 0) << 2
        | (xmm4_5 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm1_6 = 1f / xmm4_5
        var_f0 = xmm1_6 * xmm5_4
        float var_ec_2 = xmm1_6 * xmm6_4
        var_e8 = xmm1_6 * xmm7_4
else
    var_f0 = xmm5_4
    float var_ec_1 = xmm6_4
    var_e8 = xmm7_4

*(arg1 + 0x310) = var_f0.q
*(arg1 + 0x318) = var_e8
float eax_15
eax_15.b = 1
return eax_15
