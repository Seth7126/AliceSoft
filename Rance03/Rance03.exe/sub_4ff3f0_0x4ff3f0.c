// 函数: sub_4ff3f0
// 地址: 0x4ff3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (*(arg1 + 4) == *(arg2 + 4) && *(arg1 + 8) == *(arg2 + 8) && *(arg1 + 0xc) == *(arg2 + 0xc)
        && *(arg1 + 0x10) == *(arg2 + 0x10) && *(arg1 + 0x14) == *(arg2 + 0x14)
        && *(arg1 + 0x18) == *(arg2 + 0x18))
    float xmm0_1 = *(arg1 + 0x1c)
    float temp1_1 = *(arg2 + 0x1c)
    xmm0_1 - temp1_1
    result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        float xmm0_2 = *(arg1 + 0x20)
        float temp2_1 = *(arg2 + 0x20)
        xmm0_2 - temp2_1
        result:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2 | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4))
            return sub_4ff290(arg1 + 0x24, arg2 + 0x24) == 0

result.b = 0
return result
