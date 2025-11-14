// 函数: sub_64a8f0
// 地址: 0x64a8f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0x4e51
arg1[1].b = 0x54
*(arg1 + 3) = 0x200
*(arg1 + 7) = 0x4400
*(arg1 + 0xb) = 0
arg1[6].b = arg2.b
*(arg1 + 0xd) = (arg2 s>> 8).b
arg1[7].b = (arg2 s>> 0x10).b
*(arg1 + 0xf) = (arg2 s>> 0x18).b
arg1[8].b = arg3.b
*(arg1 + 0x11) = (arg3 s>> 8).b
arg1[9].b = (arg3 s>> 0x10).b
*(arg1 + 0x13) = (arg3 s>> 0x18).b
arg1[0xa].b = arg4.b
*(arg1 + 0x15) = (arg4 s>> 8).b
arg1[0xb].b = (arg4 s>> 0x10).b
*(arg1 + 0x17) = (arg4 s>> 0x18).b
arg1[0xc].b = arg5.b
*(arg1 + 0x19) = (arg5 s>> 8).b
arg1[0xd].b = (arg5 s>> 0x10).b
*(arg1 + 0x1b) = (arg5 s>> 0x18).b
*(arg1 + 0x1c) = 0x18
*(arg1 + 0x20) = 1
arg1[0x12].b = arg6.b
*(arg1 + 0x25) = (arg6 s>> 8).b
arg1[0x13].b = (arg6 s>> 0x10).b
*(arg1 + 0x27) = (arg6 s>> 0x18).b
*(arg1 + 0x29) = (arg7 s>> 8).b
arg1[0x14].b = arg7.b
char result = (arg7 s>> 0x10).b
arg1[0x15].b = result
*(arg1 + 0x2b) = (arg7 s>> 0x18).b
__builtin_memset(&arg1[0x16], 0, 0x18)
return result
