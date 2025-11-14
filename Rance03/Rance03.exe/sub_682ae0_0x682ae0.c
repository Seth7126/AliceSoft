// 函数: sub_682ae0
// 地址: 0x682ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0ec2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CViewWindow::VTable** result = arg1
struct dpparts::CWindow::dpparts::CViewWindow::VTable** result_1 = result
int32_t var_1c = arg7
void var_24
sub_684d60(arg1, arg2, arg3, 8, arg4, arg5, arg6, 0, var_24)
int32_t var_4 = 0
*result = &dpparts::CViewWindow::`vftable'{for `dpparts::CWindow'}
result[0xb] = 0x1c
result[0xc] = 0x10
result[0xd] = 0x22
result[0xe].b = 0
result[0xf] = 0
result[0x10] = 0x3f800000
result[0x11].b = 0
result[0x12] = &dpparts::CPixelController::`vftable'
__builtin_memset(&result[0x13], 0, 0x1d)
result[0x14] = result[0x13]
result[0x1b] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
result[0x1c].b = 0
__builtin_memset(&result[0x1d], 0, 0x28)
result[0x27] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
result[0x28].b = 0
__builtin_memset(&result[0x29], 0, 0x28)
result[0x33] = &dpparts::CSpriteEngine::`vftable'
result[0x34] = 0
result[0x35] = 0
result[0x36] = 0
result[0x37].b = 0
result[0x38] = 0
result[0x39] = 0
result[0x3a] = &dpparts::CMouse::`vftable'
__builtin_memset(&result[0x3b], 0, 0x15)
result[0x42] = 0
result[0x43] = 0
result[0x44] = 1
result[0x45] = 0
result[0x46] = 0
result[0x47].b = 1
result[0x41] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&result[0x49], 0, 0x14)
result[0x4e].b = 1
result[0x48] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
result[0x4f] = &dpparts::CGuiToolbar::`vftable'
__builtin_memset(&result[0x50], 0, 0x15)
result[0x56] = 0
result[0x57] = 0
result[0x58] = 0
var_4.b = 8
result[0x59] = &win32only::CFont::`vftable'
result[0x5a] = 0
result[0x5b] = 0x10
result[0x61] = 0xf
result[0x60] = 0
result[0x5c].b = 0
sub_402110(&result[0x5c], 0x703bb8, 0xd)
result[0x62] = 0x190
result[0x63].w = 0
result[0x64] = &dpparts::CBrush::`vftable'
result[0x65] = 0
result[0x66] = 0
result[0x67] = 0
result[0x68] = 0
result[0x69] = &dpparts::CBrush::`vftable'
result[0x6a] = 0
result[0x6b] = 0
result[0x6c] = 0
result[0x6d] = 0
result[0x6e] = 0xff00ff
fsbase->NtTib.ExceptionList = ExceptionList
return result
