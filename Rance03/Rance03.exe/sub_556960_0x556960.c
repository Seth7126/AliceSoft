// 函数: sub_556960
// 地址: 0x556960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = *(arg1 + 4)

if (i != 0)
    *(arg1 + 8) = _mm_cvtepi32_ps(zx.o(arg3)) * arg2 * 0.00100000005f f+ *(arg1 + 8)
    
    if (i == 2)
        float xmm0_6 = *(arg1 + 0x14)
        float temp1_1 = *(arg1 + 0x18)
        xmm0_6 - temp1_1
        i:1.b = (xmm0_6 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, temp1_1) ? 1 : 0) << 2
            | (xmm0_6 < temp1_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            for (i = 0; i s< 0x10000; )
                float xmm0_7 = *(arg1 + 8)
                float xmm1_1 = *(arg1 + 0x18)
                
                if (xmm0_7 < xmm1_1)
                    break
                
                float xmm0_9 = xmm0_7 - xmm1_1 f+ *(arg1 + 0x14)
                *(arg1 + 8) = xmm0_9
                
                if (xmm0_9 < xmm1_1)
                    break
                
                float xmm0_11 = xmm0_9 - xmm1_1 f+ *(arg1 + 0x14)
                *(arg1 + 8) = xmm0_11
                
                if (xmm0_11 < xmm1_1)
                    break
                
                float xmm0_13 = xmm0_11 - xmm1_1 f+ *(arg1 + 0x14)
                *(arg1 + 8) = xmm0_13
                
                if (xmm0_13 < xmm1_1)
                    break
                
                i += 4
                *(arg1 + 8) = xmm0_13 - xmm1_1 f+ *(arg1 + 0x14)
        else
            *(arg1 + 8) = xmm0_6
    
    int32_t xmm1_2 = *(arg1 + 8)
    int32_t xmm0_16 = *(arg1 + 0xc)
    
    if (xmm0_16 f> xmm1_2)
        *(arg1 + 8) = xmm0_16
    else
        xmm0_16 = *(arg1 + 0x10)
        
        if (not(xmm1_2 f<= xmm0_16))
            *(arg1 + 8) = xmm0_16
    
    if (*(arg1 + 4) == 1 && not(*(arg1 + 8) f< *(arg1 + 0x10)))
        *(arg1 + 4) = 0

return i
