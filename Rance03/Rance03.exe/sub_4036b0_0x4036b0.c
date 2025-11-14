// 函数: sub_4036b0
// 地址: 0x4036b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2bd9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_41c4e0(arg1)
int32_t var_4 = 0
*arg1 = &dpanalysis::CAppWindow::`vftable'{for `dpanalysis::CWindow'}
arg1[5] = 0
arg1[6] = 0
sub_41c4e0(&arg1[7])
arg1[7] = &dpanalysis::CSplitWndLR::`vftable'{for `dpanalysis::CWindow'}
arg1[0xc] = LoadCursorA(nullptr, 0x7f84)
arg1[0xd].b = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
var_4.b = 1
sub_41c4e0(&arg1[0x12])
arg1[0x12] = &dpanalysis::CSplitWndLR::`vftable'{for `dpanalysis::CWindow'}
arg1[0x17] = LoadCursorA(nullptr, 0x7f84)
arg1[0x18].b = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
var_4.b = 2
sub_418c70(&arg1[0x1d])
var_4.b = 3
sub_41a700(&arg1[0x69])
arg1[0x69] = &dpanalysis::CFuncStackWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
arg1[0x81] = 0
arg1[0x82] = 0
arg1[0x83] = 0
arg1[0x84] = 0
arg1[0x85] = 0xffffffff
arg1[0x86] = 0xffffff
arg1[0x87] = 0xffc0c0
arg1[0x88] = 0
var_4.b = 4
sub_415fa0(&arg1[0x89])
var_4.b = 5
sub_413010(&arg1[0xb8])
arg1[0xd9] = &dpanalysis::CToolBarWnd::`vftable'
__builtin_memset(&arg1[0xda], 0, 0x14)
arg1[0xdf] = &dpanalysis::CStatusWnd::`vftable'
arg1[0xe0] = 0
var_4.b = 8
sub_41c4e0(&arg1[0xe1])
arg1[0xe1] = &dpanalysis::CTreeViewWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[0xe6] = &dpanalysis::CTreeView::`vftable'
arg1[0xe7] = 0
arg1[0xe8] = 0
arg1[0xe9].w = 0
arg1[0xea] = 0
arg1[0xeb] = 0
arg1[0xec] = 0
var_4.b = 9
sub_41c4e0(&arg1[0xed])
arg1[0xed] = &dpanalysis::CTreeViewWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[0xf2] = &dpanalysis::CTreeView::`vftable'
arg1[0xf3] = 0
arg1[0xf4] = 0
arg1[0xf5].w = 0
arg1[0xf6] = 0
arg1[0xf7] = 0
arg1[0xf8] = 0
var_4.b = 0xa
sub_41c4e0(&arg1[0xf9])
arg1[0xf9] = &dpanalysis::CTreeViewWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[0xfe] = &dpanalysis::CTreeView::`vftable'
arg1[0xff] = 0
arg1[0x100] = 0
arg1[0x101].w = 0
arg1[0x102] = 0
arg1[0x103] = 0
arg1[0x104] = 0
var_4.b = 0xb
sub_41ce60(&arg1[0x105])
arg1[0x137] = &dpanalysis::CImageList::`vftable'
arg1[0x138] = 0
arg1[0x139] = 0
arg1[0x13a] = 0
arg1[0x13b] = 0
arg1[0x13c] = &win32only::CTimer::`vftable'
arg1[0x13d] = 0
arg1[0x13e] = 0
arg1[0xa4] = arg2
arg1[0x13f] = 0
arg1[0xa1] = &arg1[0xb8]
arg1[0xa2] = &arg1[0xdf]
arg1[0x136] = &arg1[0x89]
arg1[0xd7] = &arg1[0x89]
arg1[0x88] = &arg1[0x89]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
