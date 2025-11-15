// 函数: sub_56b980
// 地址: 0x56b980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
void* result = *arg1

if (result != edx)
    void* ecx = result + 0xa0
    
    do
        float xmm1_1 = *(ecx + 0x14)
        result += 0xd8
        float xmm2_2 = xmm1_1 * 0f
        float xmm0_2 = xmm2_2 f+ *(ecx - 8)
        float xmm2_3 = xmm2_2 f+ *ecx
        *(ecx - 4) = xmm1_1 * -9.80000019f f+ *(ecx - 4)
        *(ecx - 8) = xmm0_2
        *ecx = xmm2_3
        ecx += 0xd8
    while (result != edx)

return result
