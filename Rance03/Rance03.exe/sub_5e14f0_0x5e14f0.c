// 函数: sub_5e14f0
// 地址: 0x5e14f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys40::CFullScreenMenu::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &win32only::CWindow::`vftable'
int32_t* eax = sub_69adc6(0x88)
int32_t* eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = sub_698990(eax)

arg1[2] = eax_1
arg1[3] = &win32only::CTimer::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[0xa].b = 1
arg1[6] = 0
arg1[7].b = 0
arg1[8] = 0x12c
arg1[9] = 0x96
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
return arg1
