// 函数: sub_46daa0
// 地址: 0x46daa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
int32_t* ecx = *(arg1 + 0x3c)
*(arg1 + 0x24) = point.x
int32_t y = point.y
*(arg1 + 0x28) = y
*(arg1 + 0x21) = 0

if (ecx == 0)
    *(arg1 + 0x2c) = 0
    return y

int32_t eax_2 = (**ecx)()
*(arg1 + 0x2c) = eax_2
return eax_2
