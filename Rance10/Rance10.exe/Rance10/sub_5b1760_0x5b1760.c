// 函数: sub_5b1760
// 地址: 0x5b1760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = *arg1
float xmm1 = *(edx + 0x3b0)
float xmm2 = *(edx + 0x3ac)
float xmm0 = *(edx + 0x3b4)
float xmm2_3 = xmm2 * xmm2 + xmm1 * xmm1 + xmm0 * xmm0
xmm2_3 f- 0
int32_t eax
eax:1.b =
    (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2 | (xmm2_3 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    int64_t* ecx = arg1[2]
    int32_t ecx_1 = ecx[1].d
    *arg2 = *ecx
    arg2[1].d = ecx_1
    return arg2

float xmm3 = *(edx + 0x3b0)
int32_t* eax_3 = arg1[1] + 0x80
float xmm1_2 = *(edx + 0x3ac)
float xmm2_4 = *(edx + 0x3b4)
float xmm5_4 = eax_3[4] f* xmm3 + *eax_3 * xmm1_2 + eax_3[8] f* xmm2_4 f+ eax_3[0xc]
float var_c = xmm5_4
float xmm6_4 = eax_3[1] f* xmm1_2 + eax_3[5] f* xmm3 + eax_3[9] f* xmm2_4 f+ eax_3[0xd]
float var_8 = xmm6_4
float xmm4_4 = eax_3[2] f* xmm1_2 + eax_3[6] f* xmm3 + eax_3[0xa] f* xmm2_4 f+ eax_3[0xe]
float var_4 = xmm4_4
float xmm7_4 = eax_3[3] f* xmm1_2 + eax_3[7] f* xmm3 + eax_3[0xb] f* xmm2_4 f+ eax_3[0xf]
xmm7_4 - 1f
eax_3:1.b =
    (xmm7_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 1f) ? 1 : 0) << 2 | (xmm7_4 < 1f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    xmm7_4 f- 0
    eax_3:1.b = (xmm7_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 0f) ? 1 : 0) << 2
        | (xmm7_4 < 0f ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        float xmm1_3 = 1f / xmm7_4
        xmm4_4 = xmm4_4 * xmm1_3
        xmm5_4 = xmm5_4 * xmm1_3
        var_c = xmm5_4
        var_4 = xmm4_4
        xmm6_4 = xmm1_3 * xmm6_4
        float var_8_1 = xmm6_4

float xmm0_25 = sub_484cc0(xmm5_4 * xmm5_4 + xmm6_4 * xmm6_4 + xmm4_4 * xmm4_4)
xmm0_25 f- 0
eax_3:1.b = (xmm0_25 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_25, 0f) ? 1 : 0) << 2
    | (xmm0_25 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}

if (not(p_7))
    *arg2 = var_c.q
    arg2[1].d = var_4
    return arg2

float xmm2_5 = 1f / xmm0_25
arg2[1].d = xmm4_4 * xmm2_5
*arg2 = xmm2_5 * xmm5_4
*(arg2 + 4) = xmm2_5 * xmm6_4
return arg2
