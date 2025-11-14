// 函数: sub_52cac0
// 地址: 0x52cac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 8)
void* result = *(arg1 + 4)

if (result != edx)
    void* ecx = result + 0x70
    
    do
        result += 0xac
        float xmm0_2 = *(ecx + 8) ^ 0x80000000
        float xmm2_2 = *(ecx + 0x24) * xmm0_2
        float xmm0_4 = *ecx + *(ecx + 0x20) * xmm0_2
        *(ecx - 4) = *(ecx + 0x1c) * xmm0_2 f+ *(ecx - 4)
        *ecx = xmm0_4
        *(ecx + 4) = *(ecx + 4) + xmm2_2
        ecx += 0xac
    while (result != edx)

return result
