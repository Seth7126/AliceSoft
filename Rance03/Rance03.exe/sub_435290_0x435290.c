// 函数: sub_435290
// 地址: 0x435290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 4) = *(arg2 + 4)

if (arg1 + 8 != arg2 + 8)
    sub_401ff0(arg1 + 8, arg2 + 8, 0, 0xffffffff)

*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
return arg1
