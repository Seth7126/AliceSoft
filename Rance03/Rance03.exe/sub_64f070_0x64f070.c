// 函数: sub_64f070
// 地址: 0x64f070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cec0a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::dplogviewer::CTabWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::dplogviewer::CTabWindow::VTable** var_10_1 = arg1
*arg1 = &dplogviewer::CTabWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &win32only::CWindow::`vftable'
int32_t* eax_3 = sub_69adc6(0x88)
int32_t* eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_698990(eax_3)

arg1[2] = eax_4
int32_t var_4 = 0
arg1[3] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
arg1[4].b = 0
__builtin_memset(&arg1[5], 0, 0x28)
arg1[0xf] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
arg1[0x10].b = 0
__builtin_memset(&arg1[0x11], 0, 0x28)
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 0
var_4.b = 3
arg1[0x24] = &win32only::CFont::`vftable'
arg1[0x25] = 0
arg1[0x26] = 0x10
arg1[0x2c] = 0xf
arg1[0x2b] = 0
arg1[0x27].b = 0
sub_402110(&arg1[0x27], 0x703bb8, 0xd)
arg1[0x2d] = 0x190
arg1[0x2e].w = 0
var_4.b = 4
arg1[0x2f] = &win32only::CFont::`vftable'
arg1[0x30] = 0
arg1[0x31] = 0x10
arg1[0x37] = 0xf
arg1[0x36] = 0
arg1[0x32].b = 0
sub_402110(&arg1[0x32], 0x703bb8, 0xd)
arg1[0x38] = 0x190
arg1[0x39].w = 0
arg1[0x47] = &win32only::CTimer::`vftable'
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x3a] = 8
arg1[0x1b] = 2
arg1[0x1c] = 1
arg1[0x1e] = 2
arg1[0x1d] = 0x14
arg1[0x22] = 0xffffffff
arg1[0x23] = 0xffffffff
uint32_t eax_5 = GetSysColor(COLOR_BTNSHADOW)
arg1[0x3b] = zx.d(eax_5.b)
arg1[0x3c] = zx.d((eax_5 u>> 8).b)
arg1[0x3d] = zx.d((eax_5 u>> 0x10).b)
uint32_t eax_8 = GetSysColor(COLOR_BTNFACE)
arg1[0x3e] = zx.d(eax_8.b)
arg1[0x3f] = zx.d((eax_8 u>> 8).b)
arg1[0x40] = zx.d((eax_8 u>> 0x10).b)
uint32_t eax_11 = GetSysColor(COLOR_3DLIGHT)
arg1[0x41] = zx.d(eax_11.b)
arg1[0x42] = zx.d((eax_11 u>> 8).b)
arg1[0x43] = zx.d((eax_11 u>> 0x10).b)
uint32_t eax_14 = GetSysColor(COLOR_BTNHIGHLIGHT)
arg1[0x44] = zx.d(eax_14.b)
arg1[0x46] = zx.d((eax_14 u>> 0x10).b)
arg1[0x45] = zx.d((eax_14 u>> 8).b)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
