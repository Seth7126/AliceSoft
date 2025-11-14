// 函数: sub_52ca60
// 地址: 0x52ca60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 8)
void* result = *(arg1 + 4)

if (result != edx)
    void* ecx = result + 0x74
    
    do
        float xmm1_1 = *(ecx + 0x14)
        result += 0xac
        float xmm2_2 = xmm1_1 * 0f
        float xmm2_3 = xmm2_2 f+ *ecx
        float xmm1_3 = xmm1_1 * -9.80000019f f+ *(ecx - 4)
        *(ecx - 8) = *(ecx - 8) + xmm2_2
        *ecx = xmm2_3
        *(ecx - 4) = xmm1_3
        ecx += 0xac
    while (result != edx)

return result
