// 函数: sub_4350a0
// 地址: 0x4350a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x94) == 0)
    return 0

void** ecx = *(arg1 + 0x90)
void** edx = arg2
void** eax_1 = ecx[1]

while (*(eax_1 + 0xd) == 0)
    if (eax_1[4] u>= edx)
        ecx = eax_1
        eax_1 = *eax_1
    else
        eax_1 = eax_1[2]

void** eax_2 = *(arg1 + 0x90)
arg2 = ecx

if (ecx == eax_2)
    arg2 = eax_2
    sub_429da0(&arg2)
    return arg2[5]

if (ecx == *eax_2 || ecx[4] == edx)
    return ecx[5]

sub_429da0(&arg2)
return arg2[5]
