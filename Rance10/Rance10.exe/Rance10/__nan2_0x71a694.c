// 函数: __nan2
// 地址: 0x71a694
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 - 0x9e) = arg2
long double x87_r0 = *(arg1 - 0x9e)

if ((*(arg1 - 0x97) & 0x40) != 0)
    long double x87_r0_1 = arg3
    arg3 = x87_r0
    *(arg1 - 0x9e) = x87_r0_1
    x87_r0 = *(arg1 - 0x9e)

if ((*(arg1 - 0x97) & 0x40) == 0 || (*(arg1 - 0x97) & 0x40) == 0)
    *(arg1 - 0x90) = 1
else
    *(arg1 - 0x90) = 0

return arg3 + x87_r0
