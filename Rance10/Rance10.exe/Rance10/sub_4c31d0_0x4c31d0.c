// 函数: sub_4c31d0
// 地址: 0x4c31d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 4) == *(arg2 + 4) && *(arg1 + 8) == *(arg2 + 8) && *(arg1 + 0xc) == *(arg2 + 0xc)
        && *(arg1 + 0x10) == *(arg2 + 0x10) && *(arg1 + 0x14) == *(arg2 + 0x14)
        && *(arg1 + 0x18) == *(arg2 + 0x18) && *(arg1 + 0x1c) == *(arg2 + 0x1c)
        && *(arg1 + 0x20) == *(arg2 + 0x20) && *(arg1 + 0x24) == *(arg2 + 0x24)
        && *(arg1 + 0x28) == *(arg2 + 0x28) && *(arg1 + 0x2c) == *(arg2 + 0x2c)
        && *(arg1 + 0x30) == *(arg2 + 0x30) && *(arg1 + 0x34) == *(arg2 + 0x34)
        && *(arg1 + 0x38) == *(arg2 + 0x38) && *(arg1 + 0x3c) == *(arg2 + 0x3c)
        && *(arg1 + 0x40) == *(arg2 + 0x40) && *(arg1 + 0x44) == *(arg2 + 0x44)
        && *(arg1 + 0x48) == *(arg2 + 0x48) && *(arg1 + 0x4c) == *(arg2 + 0x4c)
        && *(arg1 + 0x50) == *(arg2 + 0x50) && *(arg1 + 0x54) == *(arg2 + 0x54)
        && *(arg1 + 0x58) == *(arg2 + 0x58) && *(arg1 + 0x5c) == *(arg2 + 0x5c)
        && *(arg1 + 0x64) == *(arg2 + 0x64) && *(arg1 + 0x68) == *(arg2 + 0x68)
        && sub_402fd0(arg1 + 0x6c, arg2 + 0x6c).b == 0)
    float xmm0_1 = *(arg1 + 0x7c)
    float temp1_1 = *(arg2 + 0x7c)
    xmm0_1 - temp1_1
    result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        float xmm0_2 = *(arg1 + 0x80)
        float temp2_1 = *(arg2 + 0x80)
        xmm0_2 - temp2_1
        result:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2 | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (not(p_4) && sub_402fd0(arg1 + 0x84, arg2 + 0x84).b == 0
                && sub_4090e0(arg1 + 0x94, arg2 + 0x94).b == 0
                && sub_4090e0(arg1 + 0xac, arg2 + 0xac).b == 0)
            result.b = *(arg1 + 0xc4)
            result.b = result.b == *(arg2 + 0xc4)
            return result

result.b = 0
return result
