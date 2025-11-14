// 函数: sub_429fb0
// 地址: 0x429fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpvariable::CTabWindow::`vftable'{for `dpvariable::CWindow'}
uint32_t uIDEvent = arg1[0x66]
arg1[0x65] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[0x67], uIDEvent)
    arg1[0x66] = 0

HGDIOBJ ho = arg1[0x4e]
arg1[0x4d] = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[0x4e] = 0

if (arg1[0x55] u>= 0x10)
    j__free(arg1[0x50])

arg1[0x55] = 0xf
arg1[0x54] = 0
arg1[0x50].b = 0
HGDIOBJ ho_1 = arg1[0x43]
arg1[0x42] = &win32only::CFont::`vftable'

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x43] = 0

if (arg1[0x4a] u>= 0x10)
    j__free(arg1[0x45])

arg1[0x4a] = 0xf
arg1[0x49] = 0
arg1[0x45].b = 0
void* ecx = arg1[0x3d]

if (ecx != 0)
    struct dpvariable::CWindow::dpvariable::CTabWindow::VTable** var_c_6 = arg1
    void* var_10_2 = ecx
    sub_41a5c0(ecx, arg1[0x3e])
    j__free(arg1[0x3d])
    arg1[0x3d] = 0
    arg1[0x3e] = 0
    arg1[0x3f] = 0

arg1[0x2d] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0x2d])
arg1[0x21] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0x21])
return sub_431cd0(arg1) __tailcall
