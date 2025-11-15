// 函数: sub_502390
// 地址: 0x502390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (arg1[1].b != 0)
    result = *arg1

if (arg1[1].b == 0 || arg2 == *(result + 0xac))
    if (*(arg1 + 5) != 0)
        result = *arg1
    
    if (*(arg1 + 5) == 0 || arg2 == *(result + 0xb0))
        *(arg2 + 0x13c) = *(*(*arg1 + 0x18c) + 0x13c)
        *(arg2 + 0x1a9) = *(*(*arg1 + 0x18c) + 0x1a9)
        result = *(*(*arg1 + 0x18c) + 0x1ac)
        *(arg2 + 0x1ac) = result

return result
