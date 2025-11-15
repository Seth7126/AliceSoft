// 函数: sub_4dbf70
// 地址: 0x4dbf70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0x60)
void* ecx = *(result + 0x68)
*(result + 0x138) = 1

if (ecx == 0)
    return result

return sub_4da910(ecx, *(ecx + 0xc), *(ecx + 0x10))
