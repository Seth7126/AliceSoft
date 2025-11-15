// 函数: sub_5b0320
// 地址: 0x5b0320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm2 = *(arg1 + 0x3cc)
float xmm7_3 = (arg2 f- *(arg1 + 0x39c)) * 30f * 0.00100000005f
float xmm5 = xmm7_3
float var_1c = xmm7_3
float xmm6_1 = xmm5 * xmm5
float xmm4 = xmm6_1

if (not(0f <= xmm2))
    float xmm0_3 = (*(arg1 + 0x3c8) / xmm2) ^ (data_79aad0).d
    
    if (not(xmm5 <= xmm0_3))
        xmm5 = xmm0_3
        xmm4 = xmm0_3 * xmm0_3

float xmm1_2 = *(arg1 + 0x3c8) * xmm5 + xmm2 * xmm4 * 0.5f
float xmm2_3 = *(arg1 + 0x3d0)
xmm2_3 f- 0
int32_t eax
eax:1.b =
    (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2 | (xmm2_3 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    float xmm0_4 = *(arg1 + 0x15c)
    xmm0_4 f- 0
    eax:1.b = (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2
        | (xmm0_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
    label_5b04df:
        float xmm0_9
        eax, xmm0_9 = sub_568b00(arg1 + 0x15c, arg3)
        xmm1_2 = xmm0_9 f* *(arg1 + 0x3d0) + xmm1_2
        xmm7_3 = var_1c
    else
        float xmm0_5 = *(arg1 + 0x160)
        xmm0_5 f- 0
        eax:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
            | (xmm0_5 < 0f ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_5b04df
        
        float xmm0_6 = *(arg1 + 0x164)
        xmm0_6 f- 0
        eax:1.b = (xmm0_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2
            | (xmm0_6 < 0f ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_5b04df
        
        float xmm0_7 = *(arg1 + 0x168)
        xmm0_7 f- 0
        eax:1.b = (xmm0_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, 0f) ? 1 : 0) << 2
            | (xmm0_7 < 0f ? 1 : 0)
        bool p_9 = unimplemented  {test ah, 0x44}
        
        if (p_9)
            goto label_5b04df
        
        float xmm4_2 = *(arg1 + 0x3d4)
        
        if (not(xmm4_2 <= 1f))
            long double st0_1
            st0_1, eax = sub_40d0b0(arg3, xmm4_2)
            xmm1_2 = fconvert.s(st0_1 * fconvert.t(xmm2_3) + fconvert.t(xmm1_2))
            xmm7_3 = var_1c
        else if (-1f <= xmm4_2)
            xmm1_2 = xmm1_2 + xmm2_3 * arg3
        else
            long double st0_2
            st0_2, eax = sub_40d0b0(1f - arg3, xmm4_2 ^ (data_79aad0).d)
            xmm1_2 = (1f - fconvert.s(st0_2)) f* *(arg1 + 0x3d0) + xmm1_2
            xmm7_3 = var_1c

bool cond:1 = *(arg1 + 0x16c) == 0
float xmm2_6 = *(arg1 + 0x3b0) * xmm1_2
*arg4 = *(arg1 + 0x3ac) * xmm1_2
float xmm0_15 = *(arg1 + 0x3b4) * xmm1_2
arg4[1] = xmm2_6
arg4[2] = xmm0_15

if (not(cond:1))
    float xmm4_5 = *(arg1 + 0x170)
    float xmm1_6 = *(arg1 + 0x174)
    xmm4_5 f- 0
    eax:1.b = (xmm4_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 0f) ? 1 : 0) << 2
        | (xmm4_5 < 0f ? 1 : 0)
    bool p_11 = unimplemented  {test ah, 0x44}
    
    if (p_11)
        xmm1_6 f- 0
        eax:1.b = (xmm1_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_6, 0f) ? 1 : 0) << 2
            | (xmm1_6 < 0f ? 1 : 0)
        bool p_13 = unimplemented  {test ah, 0x44}
        
        if (p_13)
            float xmm0_16 = 1f / xmm1_6
            float xmm0_18 = ___libm_sse2_expf((xmm1_6 / xmm4_5 * xmm7_3) ^ (data_79aad0).d)
            float xmm2_7 = *(arg1 + 0x170)
            arg4[1] = xmm2_6
                - (var_1c - (1f - xmm0_18) * xmm0_16 * xmm2_7) * xmm2_7 * 9.80665016f * xmm0_16
            return arg4
    
    arg4[1] = xmm2_6 - xmm6_1 * 4.90332508f

return arg4
