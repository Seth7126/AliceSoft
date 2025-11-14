// 函数: sub_47f790
// 地址: 0x47f790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x1c) = arg2
*(arg1 + 0x20) = arg3
*(arg1 + 4) = 7

if (arg1 + 0x8c != arg4)
    sub_401ff0(arg1 + 0x8c, arg4, 0, 0xffffffff)

*(arg1 + 0x5c) = *(arg5 + 4)
*(arg1 + 0x60) = *(arg5 + 8)
*(arg1 + 0x64) = *(arg5 + 0xc)
*(arg1 + 0x74) = *(arg5 + 0x1c)
*(arg1 + 0x78) = *(arg5 + 0x20)
*(arg1 + 0x7c) = *(arg5 + 0x24)
*(arg1 + 0x50) = arg6
*(arg1 + 0x54) = arg7
return arg7
