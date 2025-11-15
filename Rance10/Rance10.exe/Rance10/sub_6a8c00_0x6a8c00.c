// 函数: sub_6a8c00
// 地址: 0x6a8c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char edx = *(arg1 + 0x157)

if ((edx & 4) == 0)
    *(arg1 + 0x7c) &= 0xff7fffff
    *(arg1 + 0x78) &= 0xffffdfff
    
    if (*(arg1 + 0x150) u<= 0)
        *(arg1 + 0x7c) &= 0xfffffe7f

uint32_t result = *(arg1 + 0x7c) & 0x1100

if (result == 0x1100 && (edx & 2) == 0)
    uint32_t eax_1 = zx.d(*(arg1 + 0x158))
    uint32_t result_1 = zx.d(*(arg1 + 0x1c0))
    uint32_t esi_1 = zx.d(*(arg1 + 0x170))
    result = eax_1 - 1
    
    if (eax_1 == 1)
        esi_1 *= 0xff
        result_1 *= 0xff
    else
        uint32_t result_2 = result
        result -= 1
        
        if (result_2 == 1)
            esi_1 *= 0x55
            result_1 *= 0x55
        else
            uint32_t result_3 = result
            result -= 2
            
            if (result_3 == 2)
                esi_1 *= 0x11
                result = result_1
                result_1 = (result_1 << 4) + result
    
    bool cond:0_1 = (*(arg1 + 0x7c) & 0x2000000) != 0
    *(arg1 + 0x16e) = esi_1.w
    *(arg1 + 0x16c) = esi_1.w
    *(arg1 + 0x16a) = esi_1.w
    
    if (not(cond:0_1))
        *(arg1 + 0x1be) = result_1.w
        *(arg1 + 0x1bc) = result_1.w
        *(arg1 + 0x1ba) = result_1.w

return result
