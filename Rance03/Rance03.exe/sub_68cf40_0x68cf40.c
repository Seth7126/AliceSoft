// 函数: sub_68cf40
// 地址: 0x68cf40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 8) = *(arg2 + 8)

if (arg1 + 0xc != arg2 + 0xc)
    sub_401ff0(arg1 + 0xc, arg2 + 0xc, 0, 0xffffffff)

*(arg1 + 0x24) = *(arg2 + 0x24)
sub_4a6db0(arg1 + 0x28, arg2 + 0x28)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x40) = *(arg2 + 0x40)
return arg1
