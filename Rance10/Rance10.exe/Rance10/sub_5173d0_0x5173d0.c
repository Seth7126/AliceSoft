// 函数: sub_5173d0
// 地址: 0x5173d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x44)
int32_t result = *(edi + 0x6c)

if (*(edi + 0x70) != 0 && (*(**(edi + (result << 2) + 0x7c) + 0x20))() == 0)
    if (result == 3 && (*(**(edi + 0x84) + 0x20))() != 0)
        return result - 1
    
    return 1

return result
