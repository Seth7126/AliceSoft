// 函数: sub_425a70
// 地址: 0x425a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4dd2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IWindow::dpvariable::CWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpvariable::CWindow::dpvariable::CApp::VTable** result = arg1
struct dpvariable::CWindow::dpvariable::CApp::VTable** result_1 = result
sub_431b70(arg1)
int32_t var_4 = 0
result[0x21] = &IJaffaDebugPlugin::`vftable'{for `IInterface'}
*result = &dpvariable::CApp::`vftable'{for `dpvariable::CWindow'}
result[0x21] = &dpvariable::CApp::`vftable'{for `IJaffaDebugPlugin'}
result[0x22] = 1
result[0x23] = 0
result[0x29] = 0xf
result[0x28] = 0
result[0x24].b = 0
var_4.b = 1
sub_429570(&result[0x2a])
var_4.b = 2
sub_429c50(&result[0x51])
var_4.b = 3
sub_430be0(&result[0xbd])
result[0xbd] = &dpvariable::CRootVarWnd::`vftable'{for `dpvariable::CVarWnd'}
result[0xfb] = 0
var_4.b = 4
sub_430be0(&result[0xfc])
result[0xfc] = &dpvariable::CGlobalVarWnd::`vftable'{for `dpvariable::CVarWnd'}
result[0x13a] = 0
result[0x13b].b = 1
var_4.b = 5
sub_430be0(&result[0x13c])
result[0x13c] = &dpvariable::CCurrentFuncVarWnd::`vftable'{for `dpvariable::CVarWnd'}
result[0x17a] = 0
result[0x17b] = 0
result[0x17c] = 0
var_4.b = 6
sub_430be0(&result[0x17d])
result[0x17d] = &dpvariable::CFuncStackVarWnd::`vftable'{for `dpvariable::CVarWnd'}
result[0x1bb] = 0
var_4.b = 7
sub_422790(&result[0x1bc])
var_4.b = 8
sub_428710(&result[0x205])
var_4.b = 9
result[0x213] = 0
result[0x214] = 0
sub_431b70(&result[0x215])
result[0x215] = &dpvariable::CCheckBoxWindow::`vftable'{for `dpvariable::CWindow'}
result[0x236] = 0
result[0x237] = 0
result[0x238] = 0
result[0x239] = 0
sub_429920(&result[0x23a])
var_4.b = 0xb
sub_42c570(&result[0x251])
result[0x26d] = &win32only::CTimer::`vftable'
result[0x26e] = 0
result[0x26f] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
