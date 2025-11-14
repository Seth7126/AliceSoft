// 函数: sub_698ea0
// 地址: 0x698ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = data_75dd14
int32_t* edx = esi
int32_t* eax = esi[1]

if (*(eax + 0xd) != 0)
    arg2 = esi
else
    int32_t ecx_2 = *arg2
    
    do
        if (eax[4] u>= ecx_2)
            edx = eax
            eax = *eax
        else
            eax = eax[2]
    while (*(eax + 0xd) == 0)
    
    if (edx == esi)
        arg2 = esi
    else
        arg2 = edx
        
        if (ecx_2 u< edx[4])
            arg2 = esi

*arg1 = arg2
return arg1
