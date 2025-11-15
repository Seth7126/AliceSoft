// 函数: sub_5bee30
// 地址: 0x5bee30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == arg2)
    return arg3

do
    if (arg3[3] == arg4[3] && arg3[4] == arg4[4] && arg3[5] == arg4[5])
        float xmm0_1 = *arg3
        float temp0_1 = *arg4
        xmm0_1 - temp0_1
        int32_t eax_1
        eax_1:1.b = (xmm0_1 == temp0_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_1, temp0_1) ? 1 : 0) << 2 | (xmm0_1 < temp0_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            float xmm0_2 = arg3[1]
            float temp1_1 = arg4[1]
            xmm0_2 - temp1_1
            eax_1:1.b = (xmm0_2 == temp1_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_2, temp1_1) ? 1 : 0) << 2 | (xmm0_2 < temp1_1 ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (not(p_4))
                float xmm0_3 = arg3[2]
                float temp2_1 = arg4[2]
                xmm0_3 - temp2_1
                eax_1:1.b = (xmm0_3 == temp2_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_3, temp2_1) ? 1 : 0) << 2 | (xmm0_3 < temp2_1 ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (not(p_6))
                    break
    
    arg3 = &arg3[6]
while (arg3 != arg2)

return arg3
