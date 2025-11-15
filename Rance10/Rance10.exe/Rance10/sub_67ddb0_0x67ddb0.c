// 函数: sub_67ddb0
// 地址: 0x67ddb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &crayfish::CTextView::`vftable'
HGDIOBJ ho = arg1[0xf]

if (ho != 0)
    DeleteObject(ho)
    arg1[0xf] = 0

arg1[1][1].vFunc_0(eax_2)
sub_6cdfa0(&arg1[0xe])
arg1[1] = &win32only::CDIBSurface::`vftable'{for `common::NotifyRefCounter<class ISurface>'}
sub_6ccf90(&arg1[1])

if ((arg2 & 1) != 0)
    int32_t var_24_2 = 0x68
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
