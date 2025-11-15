// 函数: sub_5b09b0
// 地址: 0x5b09b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result = arg5 - 1

if (result u<= 3)
    float xmm2_2
    
    switch (result)
        case 0
            float xmm0_1 = sub_4a7840(arg2)
            float xmm0_2
            result, xmm0_2 = sub_4a7840(arg2)
            xmm2_2 = xmm0_1 * xmm0_2
        case 1
            float xmm1_1 = sub_4a7840(arg2) * sub_4a7840(arg2)
            float xmm0_5
            result, xmm0_5 = sub_4a7840(arg2)
            xmm2_2 = xmm0_5 * xmm1_1
        case 2
            float xmm0_6 = sub_4a7840(arg2)
            float xmm0_7
            result, xmm0_7 = sub_4a7840(arg2)
            xmm2_2 = 1f - xmm0_6 * xmm0_7
        case 3
            float xmm1_5 = sub_4a7840(arg2) * sub_4a7840(arg2)
            float xmm0_10
            result, xmm0_10 = sub_4a7840(arg2)
            xmm2_2 = 1f - xmm0_10 * xmm1_5
    
    float xmm0_13 = sub_484cc0(arg4)
    
    if (not(xmm0_13 <= 0f))
        float xmm3_1 = 1f / xmm0_13
        *arg3 = *arg3 * xmm3_1 * xmm2_2
        arg3[1] = arg3[1] f* xmm3_1 * xmm2_2
        arg3[2] = arg3[2] f* xmm3_1 * xmm2_2

return result
