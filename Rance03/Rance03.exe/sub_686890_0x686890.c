// 函数: sub_686890
// 地址: 0x686890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cffd1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CListHeader::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CListHeader::VTable** var_10_1 = arg1
*arg1 = &dpsound::CListHeader::`vftable'
int32_t var_4 = 2
arg1[6][1].vFunc_0(eax_2)
HGDIOBJ ho = arg1[0x15]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x15] = 0

HGDIOBJ ho_1 = arg1[0x15]
arg1[0x14] = &win32only::CFont::`vftable'

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x15] = 0

if (arg1[0x1c] u>= 0x10)
    j__free(arg1[0x17])

arg1[0x1c] = 0xf
arg1[0x1b] = 0
arg1[0x17].b = 0
arg1[6] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[6])
int32_t var_4_1 = 0xffffffff
int32_t result = sub_544550(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
