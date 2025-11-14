// 函数: sub_600290
// 地址: 0x600290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc73c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_10_1 = arg1
*arg1 = &crayfish::CLogViewerWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &win32only::CMenu::`vftable'
arg1[2] = 0
arg1[3].b = 1
int32_t var_4 = 0
arg1[4] = &win32only::CWindow::`vftable'
int32_t* eax_3 = sub_69adc6(0x88)
int32_t* eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_698990(eax_3)

arg1[5] = eax_4
arg1[6] = &crayfish::CWindowHScroll::`vftable'
arg1[7] = 0
arg1[8] = 0
arg1[9] = &crayfish::CWindowVScroll::`vftable'
arg1[0xa] = 0
arg1[0xb] = 0
var_4.b = 3
sub_6019e0(&arg1[0xc])
arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x2c] = 0xf
arg1[0x2b] = 0
arg1[0x27].b = 0
arg1[0x32] = 0xf
arg1[0x31] = 0
arg1[0x2d].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
