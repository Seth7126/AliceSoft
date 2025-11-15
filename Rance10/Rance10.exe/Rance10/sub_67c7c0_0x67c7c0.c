// 函数: sub_67c7c0
// 地址: 0x67c7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7467dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_14 = arg1
*arg1 = &crayfish::CLogViewerWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &win32only::CMenu::`vftable'
arg1[2] = 0
arg1[3].b = 1
int32_t var_8_1 = 0
void* var_18 = &arg1[4]
arg1[4] = &win32only::CWindow::`vftable'
int32_t* eax_3 = sub_6e810c(0x88)
int32_t* var_18_1 = eax_3
arg1[5] = sub_6cec70(eax_3)
arg1[6] = &crayfish::CWindowHScroll::`vftable'
arg1[7] = 0
arg1[8] = 0
arg1[9] = &crayfish::CWindowVScroll::`vftable'
arg1[0xa] = 0
arg1[0xb] = 0
var_8_1.b = 3
sub_67dd00(&arg1[0xc])
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x2d] = 0xf
arg1[0x2c] = 0
arg1[0x28].b = 0
arg1[0x33] = 0xf
arg1[0x32] = 0
arg1[0x2e].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
