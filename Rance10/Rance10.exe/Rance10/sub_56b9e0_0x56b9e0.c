// 函数: sub_56b9e0
// 地址: 0x56b9e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
void* result = *arg1

if (result != edx)
    void* ecx = result + 0x9c
    
    do
        result += 0xd8
        float xmm3_2 = *(ecx + 8) ^ 0x80000000
        float xmm1_2 = *(ecx + 0x20) * xmm3_2
        float xmm3_3 = xmm3_2 f* *(ecx + 0x24)
        *(ecx - 4) = *(ecx - 4) + *(ecx + 0x1c) * xmm3_2
        *ecx = *ecx + xmm1_2
        *(ecx + 4) = *(ecx + 4) + xmm3_3
        ecx += 0xd8
    while (result != edx)

return result
