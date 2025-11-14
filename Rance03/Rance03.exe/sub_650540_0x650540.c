// 函数: sub_650540
// 地址: 0x650540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cec46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::dplogviewer::CTextChildWnd::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::dplogviewer::CTextChildWnd::VTable** var_10_1 = arg1
*arg1 = &dplogviewer::CTextChildWnd::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &win32only::CWindow::`vftable'
int32_t* eax_3 = sub_69adc6(0x88)
int32_t* eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_698990(eax_3)

arg1[2] = eax_4
int32_t var_4 = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0xe
arg1[6] = 4
arg1[7] = 2
arg1[8] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
arg1[9].b = 0
__builtin_memset(&arg1[0xa], 0, 0x28)
var_4.b = 1
sub_64b7b0(&arg1[0x14])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
