// 函数: sub_600d90
// 地址: 0x600d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0x24)

if (result == 0)
    result.b = 0
    return result

if (*(arg1 + 0x14) == 0)
    return sub_600b40(0, result + 0x60, 0, *(arg1 + 0x20))

int32_t eax_1 = *(arg1 + 0x10)
return sub_600b40(eax_1, result + 0x60, eax_1, *(arg1 + 0x20))
