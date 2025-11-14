// 函数: sub_425ce0
// 地址: 0x425ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpvariable::CApp::`vftable'{for `dpvariable::CWindow'}
arg1[0x21] = &dpvariable::CApp::`vftable'{for `IJaffaDebugPlugin'}
uint32_t uIDEvent = arg1[0x26e]
arg1[0x26d] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[0x26f], uIDEvent)
    arg1[0x26e] = 0

sub_42c700(&arg1[0x251])
sub_4299a0(&arg1[0x23a])
int32_t eax = arg1[0x237]

if (eax != 0)
    j__free(eax)
    arg1[0x237] = 0
    arg1[0x238] = 0
    arg1[0x239] = 0

sub_431cd0(&arg1[0x215])
arg1[0x205] = &dpvariable::CIncSearchWnd::`vftable'
HGDIOBJ ho = arg1[0x208]
arg1[0x207] = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[0x208] = 0

if (arg1[0x20f] u>= 0x10)
    j__free(arg1[0x20a])

arg1[0x20f] = 0xf
arg1[0x20e] = 0
arg1[0x20a].b = 0
sub_422830(&arg1[0x1bc])
arg1[0x17d] = &dpvariable::CVarWnd::`vftable'{for `dpvariable::CTextChildWnd'}
sub_42b6e0(&arg1[0x17d])
arg1[0x13c] = &dpvariable::CVarWnd::`vftable'{for `dpvariable::CTextChildWnd'}
sub_42b6e0(&arg1[0x13c])
arg1[0xfc] = &dpvariable::CVarWnd::`vftable'{for `dpvariable::CTextChildWnd'}
sub_42b6e0(&arg1[0xfc])
arg1[0xbd] = &dpvariable::CVarWnd::`vftable'{for `dpvariable::CTextChildWnd'}
sub_42b6e0(&arg1[0xbd])
sub_429fb0(&arg1[0x51])
arg1[0x2a] = &dpvariable::CSplitWndLR::`vftable'{for `dpvariable::CWindow'}
sub_431cd0(&arg1[0x2a])

if (arg1[0x29] u>= 0x10)
    j__free(arg1[0x24])

arg1[0x29] = 0xf
arg1[0x28] = 0
arg1[0x24].b = 0
return sub_431cd0(arg1) __tailcall
