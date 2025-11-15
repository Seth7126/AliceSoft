// 函数: sub_568b00
// 地址: 0x568b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *arg1
xmm0 f- 0
int128_t xmm3 = arg2
int32_t var_10 = xmm3
int32_t eax
eax:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    float xmm0_1 = arg1[1]
    xmm0_1 f- 0
    eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        float xmm0_2 = arg1[2]
        xmm0_2 f- 0
        eax:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
            | (xmm0_2 < 0f ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (not(p_5))
            float xmm0_3 = arg1[3]
            xmm0_3 f- 0
            eax:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
                | (xmm0_3 < 0f ? 1 : 0)
            bool p_7 = unimplemented  {test ah, 0x44}
            
            if (not(p_7))
                return eax

float xmm7 = 1f
float xmm1 = xmm3.d
int32_t xmm5 = (zx.o(0)).d
int32_t i
float xmm2_4
float xmm6_3

for (i = 0; i s< 0x10; i += 1)
    float xmm2_2 = xmm1 * 3f
    float xmm0_5 = 1f - xmm1
    xmm2_4 = xmm2_2 * xmm1 * xmm0_5
    xmm6_3 = xmm2_2 * xmm0_5 * xmm0_5
    uint32_t xmm3_3[0x4] = xmm3 f- xmm6_3 f* *arg1 - xmm2_4 f* arg1[2] - xmm1 * xmm1 * xmm1
    
    if (9.9999999999999995e-07 > fconvert.d(sub_48b210(xmm3_3)))
        break
    
    if (xmm3_3 f<= 0)
        xmm7 = xmm1
        xmm1 = (xmm1 f- xmm5) * 0.5f f+ xmm5
    else
        xmm5 = xmm1
        xmm1 = xmm1 + (xmm7 - xmm1) * 0.5f
    
    xmm3 = var_10

xmm2_4 f* arg1[3] + xmm6_3 f* arg1[1]
return i
