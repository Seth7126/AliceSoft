// 函数: sub_49d100
// 地址: 0x49d100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = *(arg1 + 0x18) u< 0x10
*(arg1 + 0x14) = 0

if (cond:0)
    *(arg1 + 4) = 0
    return 

**(arg1 + 4) = 0
