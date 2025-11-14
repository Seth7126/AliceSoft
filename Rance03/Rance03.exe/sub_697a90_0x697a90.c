// 函数: sub_697a90
// 地址: 0x697a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
*(arg1 + 4) = 0
arg1[8] = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = &win32only::CDisplayModeDD::`vftable'
int32_t* eax = sub_69adc6(0x14)

if (eax == 0)
    *(arg1 + 0x14) = 0
    return arg1

*eax = 0
eax[1] = 0
eax[2] = 0
eax[3] = 0
eax[4].w = 0x100
*(arg1 + 0x14) = eax
return arg1
