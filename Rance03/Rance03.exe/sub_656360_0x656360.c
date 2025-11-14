// 函数: sub_656360
// 地址: 0x656360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf319
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CDPPartsListWindow::VTable** result = arg1
struct dpparts::CWindow::dpparts::CDPPartsListWindow::VTable** result_1 = result
int32_t var_1c = arg7
void var_24
sub_684d60(arg1, arg2, arg3, 8, arg4, arg5, arg6, 0, var_24)
int32_t var_4 = 0
*result = &dpparts::CDPPartsListWindow::`vftable'{for `dpparts::CWindow'}
result[0xb] = 0x18
result[0xc] = 8
result[0xd] = 0xc
result[0x13] = 0xf
result[0x12] = 0
result[0xe].b = 0
sub_402110(&result[0xe], "         No", 0xb)
var_4.b = 1
result[0x19] = 0xf
result[0x18] = 0
result[0x14].b = 0
sub_402110(&result[0x14], "     ", 9)
var_4.b = 2
result[0x1f] = 0xf
result[0x1e] = 0
result[0x1a].b = 0
sub_402110(&result[0x1a], "   (    X,", 0xa)
var_4.b = 3
result[0x25] = 0xf
result[0x24] = 0
result[0x20].b = 0
sub_402110(&result[0x20], "    Y)", 6)
var_4.b = 4
result[0x2b] = 0xf
result[0x2a] = 0
result[0x26].b = 0
sub_402110(&result[0x26], "   [   ", 0xa)
var_4.b = 5
result[0x31] = 0xf
result[0x30] = 0
result[0x2c].b = 0
sub_402110(&result[0x2c], 0x700e8c, 6)
var_4.b = 6
result[0x37] = 0xf
result[0x36] = 0
result[0x32].b = 0
sub_402110(&result[0x32], "    ", 8)
var_4.b = 7
result[0x3d] = 0xf
result[0x3c] = 0
result[0x38].b = 0
sub_402110(&result[0x38], "      ", 8)
var_4.b = 8
result[0x43] = 0xf
result[0x42] = 0
result[0x3e].b = 0
sub_402110(&result[0x3e], "          Z", 0xb)
var_4.b = 9
result[0x49] = 0xf
result[0x48] = 0
result[0x44].b = 0
sub_402110(&result[0x44], "   ADD[ r, g, b]", 0x10)
var_4.b = 0xa
result[0x4f] = 0xf
result[0x4e] = 0
result[0x4a].b = 0
sub_402110(&result[0x4a], "   MUL[ r, g, b]", 0x10)
var_4.b = 0xb
result[0x55] = 0xf
result[0x54] = 0
result[0x50].b = 0
sub_402110(&result[0x50], 0x700e2c, 6)
var_4.b = 0xc
result[0x5b] = 0xf
result[0x5a] = 0
result[0x56].b = 0
sub_402110(&result[0x56], 0x700e50, 5)
var_4.b = 0xd
result[0x61] = 0xf
result[0x60] = 0
result[0x5c].b = 0
sub_402110(&result[0x5c], 0x700e48, 5)
var_4.b = 0xe
result[0x67] = 0xf
result[0x66] = 0
result[0x62].b = 0
sub_402110(&result[0x62], 0x700d98, 5)
var_4.b = 0xf
result[0x6d] = 0xf
result[0x6c] = 0
result[0x68].b = 0
sub_402110(&result[0x68], 0x700d88, 0xe)
var_4.b = 0x10
result[0x73] = 0xf
result[0x72] = 0
result[0x6e].b = 0
sub_402110(&result[0x6e], 0x700db0, 8)
var_4.b = 0x11
result[0x79] = 0xf
result[0x78] = 0
result[0x74].b = 0
sub_402110(&result[0x74], 0x700da0, 0xc)
var_4.b = 0x12
result[0x7f] = 0xf
result[0x7e] = 0
result[0x7a].b = 0
sub_402110(&result[0x7a], 0x700dc8, 0xc)
var_4.b = 0x13
result[0x85] = 0xf
result[0x84] = 0
result[0x80].b = 0
sub_402110(&result[0x80], 0x700dbc, 0xb)
var_4.b = 0x14
result[0x8b] = 0xf
result[0x8a] = 0
result[0x86].b = 0
sub_402110(&result[0x86], 0x700de8, 0xa)
var_4.b = 0x15
result[0x91] = 0xf
result[0x90] = 0
result[0x8c].b = 0
sub_402110(&result[0x8c], 0x700dd8, 0xc)
var_4.b = 0x16
result[0x97] = 0xf
result[0x96] = 0
result[0x92].b = 0
sub_402110(&result[0x92], " ,     y ]", 0xa)
var_4.b = 0x17
result[0x9d] = 0xf
result[0x9c] = 0
result[0x98].b = 0
sub_402110(&result[0x98], 0x70117c, 0xe)
var_4.b = 0x18
result[0xa3] = 0xf
result[0xa2] = 0
result[0x9e].b = 0
sub_402110(&result[0x9e], " ,       y", 0xa)
var_4.b = 0x19
result[0xa9] = 0xf
result[0xa8] = 0
result[0xa4].b = 0
sub_402110(&result[0xa4], " ,       z ]", 0xc)
var_4.b = 0x1a
result[0xaf] = 0xf
result[0xae] = 0
result[0xaa].b = 0
sub_402110(&result[0xaa], 0x7011d0, 9)
result[0xb0].b = 0
result[0xb1] = 0
result[0xb2] = 0
result[0xb3] = &dpparts::CMouse::`vftable'
__builtin_memset(&result[0xb4], 0, 0x15)
result[0xbb] = 0
result[0xbc] = 0
result[0xbd] = 1
result[0xbe] = 0
result[0xbf] = 0
result[0xc0].b = 1
result[0xba] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&result[0xc2], 0, 0x14)
result[0xc7].b = 1
result[0xc1] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
var_4.b = 0x1e
result[0xc8] = 0
result[0xc9] = 0
result[0xc8] = sub_4203c0()
var_4.b = 0x1f
result[0xca] = 0
result[0xcb] = 0
result[0xca] = sub_4203c0()
__builtin_memset(&result[0xcc], 0, 0x18)
var_4.b = 0x22
sub_670af0(&result[0xd2])
var_4.b = 0x23
sub_671970(&result[0xf2])
result[0x113] = 1
result[0x114] = &dpparts::CListItem::`vftable'
__builtin_memset(&result[0x115], 1, 0x15)
fsbase->NtTib.ExceptionList = ExceptionList
return result
