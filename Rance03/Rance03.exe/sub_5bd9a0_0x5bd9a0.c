// 函数: sub_5bd9a0
// 地址: 0x5bd9a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = sub_417ed0(arg1 + 0xd4, arg2)
char eax_2

if (eax != *(arg1 + 0xd4))
    eax_2 = sub_40c3a0(arg2, &eax[4])

if (eax == *(arg1 + 0xd4) || eax_2 != 0)
    arg2 = *(arg1 + 0xd4)
else
    arg2 = eax

if (arg2 != *(arg1 + 0xd4))
    return arg2[0xa]

return 0xffffffff
