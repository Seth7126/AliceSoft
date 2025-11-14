// 函数: sub_456050
// 地址: 0x456050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = sub_456210(arg1 + 0x24, arg2)
void** ebx = *(arg1 + 0x24)
char eax_2

if (eax != ebx)
    eax_2 = sub_4560c0(arg2, &eax[4])
    arg2 = eax

if (eax == ebx || eax_2 != 0)
    arg2 = ebx

if (arg2 != ebx)
    return arg2[8]

return 0
