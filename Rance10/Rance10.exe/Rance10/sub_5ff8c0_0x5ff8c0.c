// 函数: sub_5ff8c0
// 地址: 0x5ff8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi

if (*(arg1 + 0x14) != 0)
    esi = *(arg1 + 0x10)
else
    esi = 0

int32_t edx = arg2 * 3
*(esi + (edx << 2)) = arg3
int32_t esi_1

if (*(arg1 + 0x14) != 0)
    esi_1 = *(arg1 + 0x10)
else
    esi_1 = 0

*(esi_1 + (edx << 2) + 4) = arg4

if (*(arg1 + 0x14) != 0)
    *(*(arg1 + 0x10) + (edx << 2) + 8) = arg5
    return arg5

*((edx << 2) + 8) = arg5
return arg5
