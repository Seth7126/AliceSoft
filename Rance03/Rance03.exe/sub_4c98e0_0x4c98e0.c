// 函数: sub_4c98e0
// 地址: 0x4c98e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = sub_417ed0(arg1 + 8, arg2)
char eax_2

if (eax != *(arg1 + 8))
    eax_2 = sub_40c3a0(arg2, &eax[4])

if (eax == *(arg1 + 8) || eax_2 != 0)
    arg2 = *(arg1 + 8)
else
    arg2 = eax

if (arg2 != *(arg1 + 8))
    return arg2[0xa]

return 0
