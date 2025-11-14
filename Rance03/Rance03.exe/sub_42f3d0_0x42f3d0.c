// 函数: sub_42f3d0
// 地址: 0x42f3d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *arg1
int32_t* ecx = esi
int32_t* eax = esi[1]

while (*(eax + 0xd) == 0)
    if (eax[4] s>= *arg3)
        ecx = eax
        eax = *eax
    else
        eax = eax[2]

int32_t eax_1

if (ecx != esi)
    eax_1 = *arg3
    arg3 = ecx

if (ecx == esi || eax_1 s< ecx[4])
    arg3 = esi

*arg2 = arg3
return arg2
