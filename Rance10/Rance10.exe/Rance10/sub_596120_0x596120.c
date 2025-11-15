// 函数: sub_596120
// 地址: 0x596120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char result = sub_6cad80(arg1 + 0x9c, arg2)

if (result == 0)
    *(arg1 + 0x9c) = *arg2
    *(arg1 + 0xac) = *(arg2 + 0x10)
    *(arg1 + 0xbc) = *(arg2 + 0x20)
    int128_t xmm0_4 = *(arg2 + 0x30)
    *(arg1 + 0x1e8) = 1
    *(arg1 + 0xcc) = xmm0_4

return result
