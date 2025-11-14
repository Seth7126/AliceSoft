// 函数: sub_54a370
// 地址: 0x54a370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    void* edi_1 = *i
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x6bca1af3, *(edi_1 + 0x2c) - *(edi_1 + 0x28))
    int32_t edx_2 = edx_1 s>> 5
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0 && *(edi_1 + 0x5a) == 0 && *(edi_1 + 0x5c) == 0)
        float xmm0_1 = *(edi_1 + 0xb0)
        xmm0_1 - 1f
        result:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
            | (xmm0_1 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            result.b = 1
            return result

result.b = 0
return result
