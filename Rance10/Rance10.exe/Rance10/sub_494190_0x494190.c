// 函数: sub_494190
// 地址: 0x494190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** eax_1 = *data_7fcb84
void** edx = eax_1
void** ecx = eax_1[1]

while (*(ecx + 0xd) == 0)
    if (ecx[4] s>= *arg2)
        edx = ecx
        ecx = *ecx
    else
        ecx = ecx[2]

if (edx != eax_1 && *arg2 s>= edx[4])
    *arg1 = edx
    return arg1

void** ecx_2 = arg1
*ecx_2 = eax_1
return ecx_2
