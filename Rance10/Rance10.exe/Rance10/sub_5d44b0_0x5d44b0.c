// 函数: sub_5d44b0
// 地址: 0x5d44b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74122b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::NotifyRefCounter<class ISurface>::sealengine::CResourceSurface::VTable** var_14 =
    arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::NotifyRefCounter<class ISurface>::sealengine::CResourceSurface::VTable** var_14_1 =
    arg1
arg1[1] = 1
*arg1 = &sealengine::CResourceSurface::`vftable'{for `common::NotifyRefCounter<class ISurface>'}
arg1[2] = 0
arg1[3] = 0
sub_568810(&arg1[2], arg2)
int32_t var_8_1 = 0
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
sub_403590(&arg1[4], arg3, 0, 0xffffffff)
arg1[0xa] = arg4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
