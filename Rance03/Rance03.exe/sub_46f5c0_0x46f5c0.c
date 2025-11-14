// 函数: sub_46f5c0
// 地址: 0x46f5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 0x1c) = 0xf
*(arg1 + 0x18) = 0
arg1[8] = 0
sub_401ff0(&arg1[8], &arg2[8], 0, 0xffffffff)
*(arg1 + 0x20) = *(arg2 + 0x20)
arg1[0x24] = arg2[0x24]
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x30) = *(arg2 + 0x30)
return arg1
