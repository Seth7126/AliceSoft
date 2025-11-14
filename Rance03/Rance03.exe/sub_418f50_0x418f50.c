// 函数: sub_418f50
// 地址: 0x418f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CTabWindow::`vftable'{for `dpanalysis::CWindow'}
uint32_t uIDEvent = arg1[0x4a]
arg1[0x49] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[0x4b], uIDEvent)
    arg1[0x4a] = 0

HGDIOBJ ho = arg1[0x32]
arg1[0x31] = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[0x32] = 0

if (arg1[0x39] u>= 0x10)
    j__free(arg1[0x34])

arg1[0x39] = 0xf
arg1[0x38] = 0
arg1[0x34].b = 0
HGDIOBJ ho_1 = arg1[0x27]
arg1[0x26] = &win32only::CFont::`vftable'

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x27] = 0

if (arg1[0x2e] u>= 0x10)
    j__free(arg1[0x29])

arg1[0x2e] = 0xf
arg1[0x2d] = 0
arg1[0x29].b = 0
void* ecx = arg1[0x21]

if (ecx != 0)
    struct dpanalysis::CWindow::dpanalysis::CTabWindow::VTable** var_c_6 = arg1
    void* var_10_2 = ecx
    sub_41a5c0(ecx, arg1[0x22])
    j__free(arg1[0x21])
    arg1[0x21] = 0
    arg1[0x22] = 0
    arg1[0x23] = 0

arg1[0x11] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0x11])
arg1[5] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[5])
return sub_41c560(arg1) __tailcall
