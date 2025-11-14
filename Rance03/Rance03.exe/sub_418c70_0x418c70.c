// 函数: sub_418c70
// 地址: 0x418c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b41ca
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::dpanalysis::CWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CWindow::dpanalysis::CTabWindow::VTable** result = arg1
struct dpanalysis::CWindow::dpanalysis::CTabWindow::VTable** result_1 = result
sub_41c4e0(arg1)
int32_t var_4 = 0
*result = &dpanalysis::CTabWindow::`vftable'{for `dpanalysis::CWindow'}
result[5] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
result[6].b = 0
__builtin_memset(&result[7], 0, 0x28)
result[0x11] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
result[0x12].b = 0
__builtin_memset(&result[0x13], 0, 0x28)
result[0x21] = 0
result[0x22] = 0
result[0x23] = 0
var_4.b = 3
result[0x26] = &win32only::CFont::`vftable'
result[0x27] = 0
result[0x28] = 0x10
result[0x2e] = 0xf
result[0x2d] = 0
result[0x29].b = 0
sub_402110(&result[0x29], 0x703bb8, 0xd)
result[0x2f] = 0x190
result[0x30].w = 0
var_4.b = 4
result[0x31] = &win32only::CFont::`vftable'
result[0x32] = 0
result[0x33] = 0x10
result[0x39] = 0xf
result[0x38] = 0
result[0x34].b = 0
sub_402110(&result[0x34], 0x703bb8, 0xd)
result[0x3a] = 0x190
result[0x3b].w = 0
result[0x49] = &win32only::CTimer::`vftable'
result[0x4a] = 0
result[0x4b] = 0
result[0x3c] = 8
result[0x1d] = 2
result[0x1e] = 1
result[0x20] = 2
result[0x1f] = 0x14
result[0x24] = 0xffffffff
result[0x25] = 0xffffffff
uint32_t eax_3 = GetSysColor(COLOR_BTNSHADOW)
result[0x3d] = zx.d(eax_3.b)
result[0x3e] = zx.d((eax_3 u>> 8).b)
result[0x3f] = zx.d((eax_3 u>> 0x10).b)
uint32_t eax_6 = GetSysColor(COLOR_BTNFACE)
result[0x40] = zx.d(eax_6.b)
result[0x41] = zx.d((eax_6 u>> 8).b)
result[0x42] = zx.d((eax_6 u>> 0x10).b)
uint32_t eax_9 = GetSysColor(COLOR_3DLIGHT)
result[0x43] = zx.d(eax_9.b)
result[0x44] = zx.d((eax_9 u>> 8).b)
result[0x45] = zx.d((eax_9 u>> 0x10).b)
uint32_t eax_12 = GetSysColor(COLOR_BTNHIGHLIGHT)
result[0x46] = zx.d(eax_12.b)
result[0x48] = zx.d((eax_12 u>> 0x10).b)
result[0x47] = zx.d((eax_12 u>> 8).b)
fsbase->NtTib.ExceptionList = ExceptionList
return result
