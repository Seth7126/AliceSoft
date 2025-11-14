// 函数: sub_5801d0
// 地址: 0x5801d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg3

int32_t* ecx = arg3

do
    if (ecx[3] == arg4[3] && ecx[4] == arg4[4] && ecx[5] == arg4[5])
        float xmm0_1 = *ecx
        float temp0_1 = *arg4
        xmm0_1 - temp0_1
        int32_t eax_1
        eax_1:1.b = (xmm0_1 == temp0_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_1, temp0_1) ? 1 : 0) << 2 | (xmm0_1 < temp0_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            float xmm0_2 = ecx[1]
            float temp1_1 = arg4[1]
            xmm0_2 - temp1_1
            eax_1:1.b = (xmm0_2 == temp1_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_2, temp1_1) ? 1 : 0) << 2 | (xmm0_2 < temp1_1 ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (not(p_4))
                float xmm0_3 = ecx[2]
                float temp2_1 = arg4[2]
                xmm0_3 - temp2_1
                eax_1:1.b = (xmm0_3 == temp2_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_3, temp2_1) ? 1 : 0) << 2 | (xmm0_3 < temp2_1 ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (not(p_6))
                    break
    
    ecx = &ecx[6]
while (ecx != arg2)

return ecx
