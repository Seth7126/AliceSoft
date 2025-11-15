// 函数: sub_47e590
// 地址: 0x47e590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
int32_t* ecx = *(arg1 + 0x40)
*(arg1 + 0x28) = point.x
int32_t y = point.y
*(arg1 + 0x2c) = y
*(arg1 + 0x25) = 0

if (ecx == 0)
    *(arg1 + 0x30) = 0
    return y

int32_t eax_2 = (**ecx)()
*(arg1 + 0x30) = eax_2
return eax_2
