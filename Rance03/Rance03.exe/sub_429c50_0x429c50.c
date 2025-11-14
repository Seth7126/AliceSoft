// 函数: sub_429c50
// 地址: 0x429c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b51a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IWindow::dpvariable::CWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpvariable::CWindow::dpvariable::CTabWindow::VTable** result = arg1
struct dpvariable::CWindow::dpvariable::CTabWindow::VTable** result_1 = result
sub_431b70(arg1)
int32_t var_4 = 0
*result = &dpvariable::CTabWindow::`vftable'{for `dpvariable::CWindow'}
result[0x21] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
result[0x22].b = 0
__builtin_memset(&result[0x23], 0, 0x28)
result[0x2d] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
result[0x2e].b = 0
__builtin_memset(&result[0x2f], 0, 0x28)
result[0x3d] = 0
result[0x3e] = 0
result[0x3f] = 0
var_4.b = 3
result[0x42] = &win32only::CFont::`vftable'
result[0x43] = 0
result[0x44] = 0x10
result[0x4a] = 0xf
result[0x49] = 0
result[0x45].b = 0
sub_402110(&result[0x45], 0x703bb8, 0xd)
result[0x4b] = 0x190
result[0x4c].w = 0
var_4.b = 4
result[0x4d] = &win32only::CFont::`vftable'
result[0x4e] = 0
result[0x4f] = 0x10
result[0x55] = 0xf
result[0x54] = 0
result[0x50].b = 0
sub_402110(&result[0x50], 0x703bb8, 0xd)
result[0x56] = 0x190
result[0x57].w = 0
result[0x65] = &win32only::CTimer::`vftable'
result[0x66] = 0
result[0x67] = 0
result[0x58] = 8
result[0x39] = 2
result[0x3a] = 1
result[0x3c] = 2
result[0x3b] = 0x14
result[0x40] = 0xffffffff
result[0x41] = 0xffffffff
uint32_t eax_3 = GetSysColor(COLOR_BTNSHADOW)
result[0x59] = zx.d(eax_3.b)
result[0x5a] = zx.d((eax_3 u>> 8).b)
result[0x5b] = zx.d((eax_3 u>> 0x10).b)
uint32_t eax_6 = GetSysColor(COLOR_BTNFACE)
result[0x5c] = zx.d(eax_6.b)
result[0x5d] = zx.d((eax_6 u>> 8).b)
result[0x5e] = zx.d((eax_6 u>> 0x10).b)
uint32_t eax_9 = GetSysColor(COLOR_3DLIGHT)
result[0x5f] = zx.d(eax_9.b)
result[0x60] = zx.d((eax_9 u>> 8).b)
result[0x61] = zx.d((eax_9 u>> 0x10).b)
uint32_t eax_12 = GetSysColor(COLOR_BTNHIGHLIGHT)
result[0x62] = zx.d(eax_12.b)
result[0x64] = zx.d((eax_12 u>> 0x10).b)
result[0x63] = zx.d((eax_12 u>> 8).b)
result[0x69] = 0
result[0x6a] = 0x14
result[0x6b] = 0xc8
result[0x68] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
