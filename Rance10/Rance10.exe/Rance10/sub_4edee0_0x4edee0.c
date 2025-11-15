// 函数: sub_4edee0
// 地址: 0x4edee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xfc) != arg2 || *(arg1 + 0x100) != arg3 || *(arg1 + 0x104) != arg4
        || *(arg1 + 0x108) != arg5)
    *(arg1 + 0xf8) = 1
    *(arg1 + 0xfc) = arg2
    *(arg1 + 0x100) = arg3
    *(arg1 + 0x104) = arg4
    *(arg1 + 0x108) = arg5

return arg5
