// 函数: sub_41a700
// 地址: 0x41a700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4318
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::dpanalysis::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::dpanalysis::CWindow::VTable** var_10_1 = arg1
sub_41c4e0(arg1)
int32_t var_4 = 0
*arg1 = &dpanalysis::CTextChildWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[5] = &win32only::CFont::`vftable'
arg1[6] = 0
arg1[7] = 0x10
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
sub_402110(&arg1[8], 0x703bb8, 0xd)
arg1[0xe] = 0x190
arg1[0xf].w = 0
__builtin_memset(&arg1[0x10], 0, 0x14)
arg1[0x15] = 0x10
arg1[0x16] = 1
arg1[0x17] = 4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
