// 函数: sub_640360
// 地址: 0x640360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &textsurface::CTextSurfaceCreater::`vftable'
HGDIOBJ ho = arg1[0x39]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x39] = 0

arg1[0x43] = 0xffffffff
arg1[0x44] = 0
arg1[0x35] = arg1[0x34]
arg1[0x37] = 0
arg1[0x2a] = arg1[0x29]
__builtin_memset(&arg1[0x2c], 0, 0x1c)
arg1[0x23] = arg1[0x22]
arg1[0x25] = 0
arg1[0x18] = arg1[0x17]
__builtin_memset(&arg1[0x1a], 0, 0x1c)
arg1[3][1].vFunc_0(eax_2)
int32_t* ecx_2 = arg1[2]
arg1[0x10] = 0
arg1[0x11] = 0

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    arg1[2] = 0

int32_t* ecx_3 = arg1[1]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    arg1[1] = 0

int32_t eax_10 = arg1[0x55]
void* edi = &arg1[0x50]

if (eax_10 u>= 0x10)
    sub_403160(*edi, eax_10 + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
sub_63f030(&arg1[0x45])
sub_6cdfa0(&arg1[0x38])
sub_63fc80(&arg1[0x26])
sub_63fc80(&arg1[0x14])
arg1[3] = &win32only::CDIBSurface::`vftable'{for `common::NotifyRefCounter<class ISurface>'}
int32_t result = sub_6ccf90(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
