// 函数: sub_671ac0
// 地址: 0x671ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0101
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CListToView::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CListToView::VTable** var_10_1 = arg1
*arg1 = &dpparts::CListToView::`vftable'
int32_t var_4 = 2
arg1[1][1].vFunc_0(eax_2)
HGDIOBJ ho = arg1[0xe]

if (ho != 0)
    DeleteObject(ho)
    arg1[0xe] = 0

int32_t eax_4 = arg1[0x1c]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x1c] = 0
    arg1[0x1d] = 0
    arg1[0x1e] = 0

HGDIOBJ ho_1 = arg1[0xe]
arg1[0xd] = &win32only::CFont::`vftable'

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0xe] = 0

if (arg1[0x15] u>= 0x10)
    j__free(arg1[0x10])

arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0
arg1[1] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
int32_t result = sub_697220(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
