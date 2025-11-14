// 函数: sub_670af0
// 地址: 0x670af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cff86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CListHeader::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CListHeader::VTable** var_10_1 = arg1
*arg1 = &dpparts::CListHeader::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_4 = 0
arg1[4] = 0xffffff
arg1[5] = 0xffffff
arg1[6] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
arg1[7].b = 0
__builtin_memset(&arg1[8], 0, 0x30)
var_4.b = 1
arg1[0x14] = &win32only::CFont::`vftable'
arg1[0x15] = 0
arg1[0x16] = 0x10
arg1[0x1c] = 0xf
arg1[0x1b] = 0
arg1[0x17].b = 0
sub_402110(&arg1[0x17], 0x703bb8, 0xd)
arg1[0x1d] = 0x190
arg1[0x1e].w = 0
arg1[0x1f] = 0
sub_697f40(&arg1[0x14])
arg1[5] = 0xffffff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
