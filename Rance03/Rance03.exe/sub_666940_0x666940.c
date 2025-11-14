// 函数: sub_666940
// 地址: 0x666940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfdbd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CDPSpriteListWindow::VTable** result = arg1
struct dpparts::CWindow::dpparts::CDPSpriteListWindow::VTable** result_1 = result
int32_t var_1c = arg7
void var_24
sub_684d60(arg1, arg2, arg3, 8, arg4, arg5, arg6, 0, var_24)
int32_t var_4 = 0
*result = &dpparts::CDPSpriteListWindow::`vftable'{for `dpparts::CWindow'}
result[0xb] = 0x18
result[0xc] = 8
result[0xd] = 0xc
result[0x13] = 0xf
result[0x12] = 0
result[0xe].b = 0
sub_402110(&result[0xe], "          No", 0xc)
var_4.b = 1
result[0x19] = 0xf
result[0x18] = 0
result[0x14].b = 0
sub_402110(&result[0x14], " (    X,", 8)
var_4.b = 2
result[0x1f] = 0xf
result[0x1e] = 0
result[0x1a].b = 0
sub_402110(&result[0x1a], "    Y)", 6)
var_4.b = 3
result[0x25] = 0xf
result[0x24] = 0
result[0x20].b = 0
sub_402110(&result[0x20], " [  ", 8)
var_4.b = 4
result[0x2b] = 0xf
result[0x2a] = 0
result[0x26].b = 0
sub_402110(&result[0x26], 0x701acc, 6)
var_4.b = 5
result[0x31] = 0xf
result[0x30] = 0
result[0x2c].b = 0
sub_402110(&result[0x2c], 0x701ac4, 4)
var_4.b = 6
result[0x37] = 0xf
result[0x36] = 0
result[0x32].b = 0
sub_402110(&result[0x32], "          Z", 0xb)
var_4.b = 7
result[0x3d] = 0xf
result[0x3c] = 0
result[0x38].b = 0
sub_402110(&result[0x38], 0x7019e8, 6)
var_4.b = 8
result[0x43] = 0xf
result[0x42] = 0
result[0x3e].b = 0
sub_402110(&result[0x3e], 0x701a04, 5)
var_4.b = 9
result[0x49] = 0xf
result[0x48] = 0
result[0x44].b = 0
sub_402110(&result[0x44], " AMap", 5)
result[0x4a] = result[0x48] + result[0x42] + result[0x3c] + result[0x36] + result[0x30]
    + result[0x2a] + result[0x18] + result[0x24] + result[0x12] + result[0x1e]
result[0x4b].b = 0
result[0x4c] = 0
result[0x4d] = 0
result[0x4e] = &dpparts::CPartsEngineWrapper::`vftable'
result[0x4f] = 0
result[0x50] = 0
result[0x51] = 0
result[0x52].b = 0
result[0x53] = &dpparts::CMouse::`vftable'
__builtin_memset(&result[0x54], 0, 0x15)
result[0x5b] = 0
result[0x5c] = 0
result[0x5d] = 1
result[0x5e] = 0
result[0x5f] = 0
result[0x60].b = 1
result[0x5a] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&result[0x62], 0, 0x14)
result[0x67].b = 1
result[0x61] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&result[0x68], 0, 0x18)
var_4.b = 0x10
sub_670af0(&result[0x6e])
var_4.b = 0x11
sub_671970(&result[0x8e])
result[0xaf] = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
