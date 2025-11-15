// 函数: sub_45e520
// 地址: 0x45e520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg3 = 0x4e51
arg3[1].b = 0x54
*(arg3 + 3) = 0x200
*(arg3 + 7) = 0x4400
*(arg3 + 0xb) = 0
*(arg3 + 0xf) = 0
*(arg3 + 0x13) = 0
*(arg3 + 0x15) = (arg2 s>> 8).b
arg3[0xa].b = arg2.b
arg3[0xb].b = (arg2 s>> 0x10).b
*(arg3 + 0x17) = (arg2 s>> 0x18).b
*(arg3 + 0x19) = (arg4 s>> 8).b
arg3[0xc].b = arg4.b
arg3[0xd].b = (arg4 s>> 0x10).b
*(arg3 + 0x1b) = (arg4 s>> 0x18).b
*(arg3 + 0x1c) = 0x18
*(arg3 + 0x20) = 1
arg3[0x12].b = arg5.b
*(arg3 + 0x25) = (arg5 s>> 8).b
arg3[0x13].b = (arg5 s>> 0x10).b
*(arg3 + 0x27) = (arg5 s>> 0x18).b
*(arg3 + 0x29) = (arg6 s>> 8).b
arg3[0x14].b = arg6.b
char result = (arg6 s>> 0x10).b
arg3[0x15].b = result
*(arg3 + 0x2b) = (arg6 s>> 0x18).b
__builtin_memset(&arg3[0x16], 0, 0x18)
return result
