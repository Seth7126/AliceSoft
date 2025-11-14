// 函数: sub_48cd10
// 地址: 0x48cd10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_48cd70(arg1)
void** eax = sub_417ed0(arg1 + 0xc, arg2)
char eax_2

if (eax != *(arg1 + 0xc))
    eax_2 = sub_40c3a0(arg2, &eax[4])

if (eax == *(arg1 + 0xc) || eax_2 != 0)
    arg2 = *(arg1 + 0xc)
else
    arg2 = eax

if (arg2 == *(arg1 + 0xc))
    return 0

(**arg2[0xa])()
return arg2[0xa]
