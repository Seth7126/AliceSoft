// 函数: sub_4d1810
// 地址: 0x4d1810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(arg1 + 0x34)
int32_t result = *(edi + 0x18)

if (*(edi + 0x1c) != 0 && (*(**(*(edi + 0x28) + (result << 2)) + 0x3c))() == 0)
    if (result == 3 && (*(**(*(edi + 0x28) + 8) + 0x3c))() != 0)
        return result - 1
    
    return 1

return result
