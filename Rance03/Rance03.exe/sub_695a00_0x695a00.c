// 函数: sub_695a00
// 地址: 0x695a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc8ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CVolumeView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CVolumeView::VTable** var_10_1 = arg1
*arg1 = &dpsound::CVolumeView::`vftable'
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
arg1[0x18] = 0
arg1[0x19] = 0xffffff
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
