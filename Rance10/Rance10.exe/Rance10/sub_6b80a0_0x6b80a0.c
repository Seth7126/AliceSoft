// 函数: sub_6b80a0
// 地址: 0x6b80a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(arg1 + 4) & 0x80000000) != 0)
    return 0xffffffff

__builtin_memset(arg1 + 8, 0, 0x14)
return 0
