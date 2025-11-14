// 函数: sub_51dd80
// 地址: 0x51dd80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x40) = *(arg2 + 0x40)

if (arg1 + 0x44 != arg2 + 0x44)
    sub_401ff0(arg1 + 0x44, arg2 + 0x44, 0, 0xffffffff)

return arg1
