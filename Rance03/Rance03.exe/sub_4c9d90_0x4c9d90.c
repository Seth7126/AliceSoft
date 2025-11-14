// 函数: sub_4c9d90
// 地址: 0x4c9d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = sub_417ed0(arg1 + 0x10, arg2)
char eax_2

if (eax != *(arg1 + 0x10))
    eax_2 = sub_40c3a0(arg2, &eax[4])

if (eax == *(arg1 + 0x10) || eax_2 != 0)
    arg2 = *(arg1 + 0x10)
else
    arg2 = eax

void** result = arg2

if (result == *(arg1 + 0x10))
    return result

return sub_417fb0(arg1 + 0x10, &arg2, result)
