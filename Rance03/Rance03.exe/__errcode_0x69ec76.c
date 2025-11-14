// 函数: __errcode
// 地址: 0x69ec76
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg1 & 0x20) != 0)
    return 5

if ((arg1 & 8) != 0)
    return 1

if ((arg1 & 4) != 0)
    return 2

if ((arg1 & 1) != 0)
    return 3

return (zx.d(arg1) & 2) * 2
