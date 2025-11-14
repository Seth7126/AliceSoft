// 函数: sub_687780
// 地址: 0x687780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d11e4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CWindow::dpsound::CMainWindow::VTable** result = arg1
struct dpsound::CWindow::dpsound::CMainWindow::VTable** result_1 = result
int32_t var_1c = 0
void var_24
sub_695db0(arg1, arg2, arg3, 0, arg4, arg5, arg6, 0x87, var_24)
int32_t var_4 = 0
*result = &dpsound::CMainWindow::`vftable'{for `dpsound::CWindow'}
result[0xb] = 0x21
result[0x11] = 0xf
result[0x10] = 0
result[0xc].b = 0
sub_402110(&result[0xc], "Software\AliceSoft\DPSound", 0x1a)
var_4.b = 1
result[0x17] = 0xf
result[0x16] = 0
result[0x12].b = 0
sub_402110(&result[0x12], "CMainWindowWindowPosX", 0x15)
var_4.b = 2
result[0x1d] = 0xf
result[0x1c] = 0
result[0x18].b = 0
sub_402110(&result[0x18], "CMainWindowWindowPosY", 0x15)
var_4.b = 3
result[0x23] = 0xf
result[0x22] = 0
result[0x1e].b = 0
sub_402110(&result[0x1e], "CMainWindowWindowWidth", 0x16)
var_4.b = 4
result[0x29] = 0xf
result[0x28] = 0
result[0x24].b = 0
sub_402110(&result[0x24], "CMainWindowWindowHeight", 0x17)
__builtin_memcpy(&result[0x2a], 
    "\x01\x00\x00\x00\x02\x00\x00\x00\x08\x00\x00\x00\xd2\xd2\xd2\x00\x90\x01\x00\x00\xf2\x00\x00\x00\x"
"14\x00\x00\x00\x32\x00\x00\x00", 
    0x20)
result[0x32] = 0
result[0x33] = 0
result[0x34] = 0
result[0x35] = &win32only::CTimer::`vftable'
result[0x36] = 0
result[0x37] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
