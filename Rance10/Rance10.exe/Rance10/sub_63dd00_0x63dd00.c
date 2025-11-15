// 函数: sub_63dd00
// 地址: 0x63dd00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &textsurface::CDashTextSurfaceCreater::`vftable'
sub_63dd80(arg1)
sub_63fc80(&arg1[0x26])
sub_63fc80(&arg1[0x14])
arg1[3] = &win32only::CDIBSurface::`vftable'{for `common::NotifyRefCounter<class ISurface>'}
sub_6ccf90(&arg1[3])

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0xe0
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
