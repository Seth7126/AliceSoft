// 函数: sub_4c9ea0
// 地址: 0x4c9ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void** eax = sub_417ed0(arg1 + 0x18, arg3)
char eax_2

if (eax != *(arg1 + 0x18))
    eax_2 = sub_40c3a0(arg3, &eax[4])

if (eax == *(arg1 + 0x18) || eax_2 != 0)
    arg3 = *(arg1 + 0x18)
else
    arg3 = eax

if (arg3 != *(arg1 + 0x18))
    sub_43f550(arg2, &arg3[0xb])
    return arg2

*arg2 = 0
arg2[1] = 0
arg2[2] = 0
return arg2
