// 函数: sub_687960
// 地址: 0x687960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpsound::CMainWindow::`vftable'{for `dpsound::CWindow'}
uint32_t uIDEvent = arg1[0x36]
arg1[0x35] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[0x37], uIDEvent)
    arg1[0x36] = 0

if (arg1[0x29] u>= 0x10)
    j__free(arg1[0x24])

arg1[0x29] = 0xf
arg1[0x28] = 0
arg1[0x24].b = 0

if (arg1[0x23] u>= 0x10)
    j__free(arg1[0x1e])

arg1[0x23] = 0xf
arg1[0x22] = 0
arg1[0x1e].b = 0

if (arg1[0x1d] u>= 0x10)
    j__free(arg1[0x18])

arg1[0x1d] = 0xf
arg1[0x1c] = 0
arg1[0x18].b = 0

if (arg1[0x17] u>= 0x10)
    j__free(arg1[0x12])

arg1[0x17] = 0xf
arg1[0x16] = 0
arg1[0x12].b = 0

if (arg1[0x11] u>= 0x10)
    j__free(arg1[0xc])

arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0
return sub_695f10(arg1) __tailcall
