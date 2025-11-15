// 函数: sub_58d540
// 地址: 0x58d540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 8) == *(arg2 + 8))
    float xmm0_1 = *(arg1 + 0x3c)
    float temp1_1 = *(arg2 + 0x3c)
    xmm0_1 - temp1_1
    result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        float xmm0_2 = *(arg1 + 0x40)
        float temp2_1 = *(arg2 + 0x40)
        xmm0_2 - temp2_1
        result:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2 | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4))
            float xmm0_3 = *(arg1 + 0x44)
            float temp3_1 = *(arg2 + 0x44)
            xmm0_3 - temp3_1
            result:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2 | (xmm0_3 < temp3_1 ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (not(p_6))
                float xmm0_4 = *(arg1 + 0x48)
                float temp4_1 = *(arg2 + 0x48)
                xmm0_4 - temp4_1
                result:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2 | (xmm0_4 < temp4_1 ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (not(p_8))
                    float xmm0_5 = *(arg1 + 0x4c)
                    float temp5_1 = *(arg2 + 0x4c)
                    xmm0_5 - temp5_1
                    result:1.b = (xmm0_5 == temp5_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_5, temp5_1) ? 1 : 0) << 2
                        | (xmm0_5 < temp5_1 ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_10))
                        float xmm0_6 = *(arg1 + 0x50)
                        float temp6_1 = *(arg2 + 0x50)
                        xmm0_6 - temp6_1
                        result:1.b = (xmm0_6 == temp6_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_6, temp6_1) ? 1 : 0) << 2
                            | (xmm0_6 < temp6_1 ? 1 : 0)
                        bool p_12 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_12))
                            float xmm0_7 = *(arg1 + 0x54)
                            float temp7_1 = *(arg2 + 0x54)
                            xmm0_7 - temp7_1
                            result:1.b = (xmm0_7 == temp7_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_7, temp7_1) ? 1 : 0) << 2
                                | (xmm0_7 < temp7_1 ? 1 : 0)
                            bool p_14 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_14))
                                float xmm0_8 = *(arg1 + 0x58)
                                float temp8_1 = *(arg2 + 0x58)
                                xmm0_8 - temp8_1
                                result:1.b = (xmm0_8 == temp8_1 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_8, temp8_1) ? 1 : 0) << 2
                                    | (xmm0_8 < temp8_1 ? 1 : 0)
                                bool p_16 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_16))
                                    float xmm0_9 = *(arg1 + 0x60)
                                    float temp9_1 = *(arg2 + 0x60)
                                    xmm0_9 - temp9_1
                                    result:1.b = (xmm0_9 == temp9_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_9, temp9_1) ? 1 : 0) << 2
                                        | (xmm0_9 < temp9_1 ? 1 : 0)
                                    bool p_18 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_18) && *(arg1 + 0x64) == *(arg2 + 0x64))
                                        float xmm0_10 = *(arg1 + 0x70)
                                        float temp10_1 = *(arg2 + 0x70)
                                        xmm0_10 - temp10_1
                                        result:1.b = (xmm0_10 == temp10_1 ? 1 : 0) << 6
                                            | (is_unordered.d(xmm0_10, temp10_1) ? 1 : 0) << 2
                                            | (xmm0_10 < temp10_1 ? 1 : 0)
                                        bool p_20 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_20))
                                            float xmm0_11 = *(arg1 + 0x74)
                                            float temp11_1 = *(arg2 + 0x74)
                                            xmm0_11 - temp11_1
                                            result:1.b = (xmm0_11 == temp11_1 ? 1 : 0) << 6
                                                | (is_unordered.d(xmm0_11, temp11_1) ? 1 : 0) << 2
                                                | (xmm0_11 < temp11_1 ? 1 : 0)
                                            bool p_22 = unimplemented  {test ah, 0x44}
                                            
                                            if (not(p_22))
                                                result.b = 1
                                                return result

result.b = 0
return result
