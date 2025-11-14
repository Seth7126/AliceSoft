// 函数: sub_52ca20
// 地址: 0x52ca20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 8)
void* result = *(arg1 + 4)

if (result != edx)
    void* ecx_1 = result + 0x74
    
    do
        result += 0xac
        *(ecx_1 - 8) = 0
        *(ecx_1 - 4) = 0
        ecx_1 += 0xac
        *(ecx_1 - 0xac) = 0
    while (result != edx)

return result
