// 函数: sub_52cb40
// 地址: 0x52cb40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* i = *(arg1 + 4)

if (i == *(arg1 + 8))
    return 

void* esi_1 = i + 0x84

do
    float xmm0_1 = *(esi_1 + 4)
    xmm0_1 f- 0
    float eax
    eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        float xmm2_1 = 1f / xmm0_1
        float xmm0_3 = *(esi_1 - 0x10) * xmm2_1
        *(esi_1 - 8) = _mm_unpacklo_ps(*(esi_1 - 0x18) * xmm2_1, *(esi_1 - 0x14) * xmm2_1)
        *esi_1 = xmm0_3
    else
        *(esi_1 - 8) = 0
        *(esi_1 - 4) = 0
        *esi_1 = 0
    
    i += 0xac
    esi_1 += 0xac
while (i != *(arg1 + 8))
