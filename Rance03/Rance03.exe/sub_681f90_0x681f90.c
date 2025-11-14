// 函数: sub_681f90
// 地址: 0x681f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpparts::CThumbnailWindow::`vftable'{for `dpparts::CWindow'}
arg1[0x27] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0x27])
arg1[0x1b] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0x1b])
sub_67d2b0(&arg1[0x12])
arg1[0xd] = &dpparts::CSpriteEngine::`vftable'
int32_t eax = arg1[0xe]

if (eax != 0)
    j__free(eax)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

return sub_684ea0(arg1) __tailcall
