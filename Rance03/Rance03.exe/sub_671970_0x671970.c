// 函数: sub_671970
// 地址: 0x671970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d00bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CListToView::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CListToView::VTable** var_10_1 = arg1
*arg1 = &dpparts::CListToView::`vftable'
arg1[1] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
arg1[2].b = 0
__builtin_memset(&arg1[3], 0, 0x28)
int32_t var_4 = 0
arg1[0xd] = &win32only::CFont::`vftable'
arg1[0xe] = 0
arg1[0xf] = 0x10
arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0
sub_402110(&arg1[0x10], 0x703bb8, 0xd)
arg1[0x16] = 0x190
arg1[0x17].w = 0
__builtin_memset(&arg1[0x18], 0, 0x1c)
arg1[0x1f] = 0xc8c8ff
arg1[0x20] = 0xe6e6ff
sub_697f40(&arg1[0xd])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
