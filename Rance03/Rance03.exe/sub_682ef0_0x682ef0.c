// 函数: sub_682ef0
// 地址: 0x682ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpparts::CViewWindow::`vftable'{for `dpparts::CWindow'}
HGDIOBJ ho = arg1[0x5a]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x5a] = 0

HGDIOBJ ho_1 = arg1[0x65]

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x65] = 0

HGDIOBJ ho_2 = arg1[0x6a]
arg1[0x69] = &dpparts::CBrush::`vftable'

if (ho_2 != 0)
    DeleteObject(ho_2)
    arg1[0x6a] = 0

HGDIOBJ ho_3 = arg1[0x65]
arg1[0x64] = &dpparts::CBrush::`vftable'

if (ho_3 != 0)
    DeleteObject(ho_3)
    arg1[0x65] = 0

HGDIOBJ ho_4 = arg1[0x5a]
arg1[0x59] = &win32only::CFont::`vftable'

if (ho_4 != 0)
    DeleteObject(ho_4)
    arg1[0x5a] = 0

if (arg1[0x61] u>= 0x10)
    j__free(arg1[0x5c])

arg1[0x61] = 0xf
arg1[0x60] = 0
arg1[0x5c].b = 0
int32_t var_c_7 = arg1[0x54]
arg1[0x4f] = &dpparts::CGuiToolbar::`vftable'
j__free(var_c_7)
arg1[0x54] = 0
int32_t eax = arg1[0x51]

if (eax != 0)
    j__free(eax)
    arg1[0x51] = 0
    arg1[0x52] = 0
    arg1[0x53] = 0

arg1[0x48] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x41] = &dpparts::CGuiScrollBar::`vftable'
arg1[0x3a] = &dpparts::CMouse::`vftable'
arg1[0x33] = &dpparts::CSpriteEngine::`vftable'
int32_t eax_1 = arg1[0x34]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[0x34] = 0
    arg1[0x35] = 0
    arg1[0x36] = 0

arg1[0x27] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0x27])
arg1[0x1b] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0x1b])
sub_67d2b0(&arg1[0x12])
return sub_684ea0(arg1) __tailcall
