// 函数: sub_42b5c0
// 地址: 0x42b5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b51f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IWindow::dpvariable::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IWindow::dpvariable::CWindow::VTable** var_10_1 = arg1
sub_431b70(arg1)
int32_t var_4 = 0
*arg1 = &dpvariable::CTextChildWnd::`vftable'{for `dpvariable::CWindow'}
arg1[0x21] = &win32only::CFont::`vftable'
arg1[0x22] = 0
arg1[0x23] = 0x10
arg1[0x29] = 0xf
arg1[0x28] = 0
arg1[0x24].b = 0
sub_402110(&arg1[0x24], 0x703bb8, 0xd)
arg1[0x2a] = 0x190
arg1[0x2b].w = 0
__builtin_memset(&arg1[0x2c], 0, 0x18)
arg1[0x32] = 0x10
arg1[0x33] = 4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
