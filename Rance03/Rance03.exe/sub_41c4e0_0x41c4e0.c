// 函数: sub_41c4e0
// 地址: 0x41c4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &win32only::CWindow::`vftable'
int32_t* eax = sub_69adc6(0x88)
int32_t* eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = sub_698990(eax)

arg1[2] = eax_1
arg1[3] = 0
arg1[4] = 0
eax_1[0x19] = 0
arg1[2]->vFunc_26 = 0xcf0000
return arg1
