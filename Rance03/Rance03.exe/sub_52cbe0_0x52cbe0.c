// 函数: sub_52cbe0
// 地址: 0x52cbe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 8)
void* result = *(arg1 + 4)

if (result != edx)
    void* ecx = result + 0x90
    
    do
        result += 0xac
        float xmm1_1 = *(ecx - 0x10) * arg2
        float xmm2_2 = *(ecx - 0xc) * arg2
        *(ecx - 4) = *(ecx - 0x14) * arg2 f+ *(ecx - 4)
        *ecx = *ecx + xmm1_1
        *(ecx + 4) = *(ecx + 4) + xmm2_2
        ecx += 0xac
    while (result != edx)

return result
