// 函数: sub_596cb0
// 地址: 0x596cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = *arg1

if (i != 0)
    arg1[1] = _mm_cvtepi32_ps(zx.o(arg3)) * arg2 * 0.00100000005f f+ arg1[1]
    
    if (i == 2)
        float xmm0_6 = arg1[4]
        float temp1_1 = arg1[5]
        xmm0_6 - temp1_1
        i:1.b = (xmm0_6 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, temp1_1) ? 1 : 0) << 2
            | (xmm0_6 < temp1_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            for (i = 0; i s< 0x10000; )
                float xmm1_1 = arg1[5]
                float xmm0_7 = arg1[1]
                
                if (xmm0_7 < xmm1_1)
                    break
                
                float xmm0_9 = xmm0_7 - xmm1_1 f+ arg1[4]
                arg1[1] = xmm0_9
                
                if (xmm0_9 < xmm1_1)
                    break
                
                float xmm0_11 = xmm0_9 - xmm1_1 f+ arg1[4]
                arg1[1] = xmm0_11
                
                if (xmm0_11 < xmm1_1)
                    break
                
                float xmm0_13 = xmm0_11 - xmm1_1 f+ arg1[4]
                arg1[1] = xmm0_13
                
                if (xmm0_13 < xmm1_1)
                    break
                
                i += 4
                arg1[1] = xmm0_13 - xmm1_1 f+ arg1[4]
        else
            arg1[1] = xmm0_6
    
    int32_t xmm1_2 = arg1[1]
    int32_t xmm0_16 = arg1[2]
    
    if (xmm0_16 f> xmm1_2)
        arg1[1] = xmm0_16
    else
        xmm0_16 = arg1[3]
        
        if (not(xmm1_2 f<= xmm0_16))
            arg1[1] = xmm0_16
    
    if (*arg1 == 1 && not(arg1[1] f< arg1[3]))
        *arg1 = 0

return i
