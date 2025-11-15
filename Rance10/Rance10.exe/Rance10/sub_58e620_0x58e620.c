// 函数: sub_58e620
// 地址: 0x58e620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 4)
int32_t result = *(arg1 + 8)
uint32_t ecx_3 = (result - edx + 3) u>> 2
int32_t esi = 0

if (edx u> result)
    ecx_3 = 0

if (ecx_3 != 0)
    do
        void* edi_1 = *edx
        float xmm4_1 = *(edi_1 + 0x2c)
        float xmm2_1 = *(edi_1 + 0x30)
        float xmm1_1 = *(edi_1 + 0x34)
        float xmm3_5 = xmm4_1 f* *(arg2 + 8) + *(arg2 + 0x18) * xmm2_1
            + xmm1_1 f* *(arg2 + 0x28) f+ *(arg2 + 0x38)
        float xmm4_5 = xmm4_1 f* *(arg2 + 0xc) + xmm2_1 f* *(arg2 + 0x1c)
            + xmm1_1 f* *(arg2 + 0x2c) f+ *(arg2 + 0x3c)
        xmm4_5 - 1f
        result:1.b = (xmm4_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 1f) ? 1 : 0) << 2
            | (xmm4_5 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm4_5 f- 0
            result:1.b = (xmm4_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 0f) ? 1 : 0) << 2
                | (xmm4_5 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                xmm3_5 = xmm3_5 * 1f / xmm4_5
        
        esi += 1
        *(edi_1 + 0x38) = xmm3_5
        edx = &edx[1]
    while (esi != ecx_3)

return result
