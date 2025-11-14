// 函数: sub_4cfb00
// 地址: 0x4cfb00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = sub_417ed0(arg1 + 4, arg2)
void** eax_2

if (eax != *(arg1 + 4))
    eax_2 = sub_40c3a0(arg2, &eax[4])

if (eax == *(arg1 + 4) || eax_2.b != 0)
    arg2 = *(arg1 + 4)
else
    arg2 = eax

void** esi_1 = arg2

if (esi_1 == *(arg1 + 4))
    eax_2.b = 0
    return eax_2

sub_4c9bb0(&esi_1[0xa], arg3, arg4)
sub_4d0220(arg1 + 4, &arg2, esi_1)
int32_t* eax_3
eax_3.b = 1
return eax_3
