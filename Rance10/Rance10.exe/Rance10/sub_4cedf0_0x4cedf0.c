// 函数: sub_4cedf0
// 地址: 0x4cedf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** eax_2 = *arg1
void** edx = eax_2
void** ecx = eax_2[1]

while (*(ecx + 0xd) == 0)
    if (ecx[4] u>= *arg3)
        edx = ecx
        ecx = *ecx
    else
        ecx = ecx[2]

if (edx != eax_2 && *arg3 u>= edx[4])
    *arg2 = edx
    return arg2

void** ecx_2 = arg2
*ecx_2 = eax_2
return ecx_2
