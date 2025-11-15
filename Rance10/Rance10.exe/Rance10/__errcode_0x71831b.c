// 函数: __errcode
// 地址: 0x71831b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((arg1 & 0x20) != 0)
    return 5

if ((arg1 & 8) != 0)
    return 1

if ((arg1 & 4) != 0)
    return 2

if ((arg1 & 1) != 0)
    return 3

return (zx.d(arg1) & 2) * 2
