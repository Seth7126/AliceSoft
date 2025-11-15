// 函数: sub_56ba60
// 地址: 0x56ba60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
void* ecx = *arg1

if (ecx == edx)
    return 

void* esi_1 = ecx + 0xa0

do
    float xmm0_1 = *(esi_1 + 0x14)
    xmm0_1 f- 0
    float eax
    eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        float xmm2_1 = 1f / xmm0_1
        float xmm0_4 = *esi_1 * xmm2_1
        *(esi_1 + 8) = _mm_unpacklo_ps(*(esi_1 - 8) * xmm2_1, *(esi_1 - 4) * xmm2_1)
        eax = xmm0_4
    else
        *(esi_1 + 8) = data_7fd4d8.q
        eax = data_7fd4e0
    
    *(esi_1 + 0x10) = eax
    ecx += 0xd8
    esi_1 += 0xd8
while (ecx != edx)
