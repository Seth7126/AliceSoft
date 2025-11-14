// 函数: sub_58a120
// 地址: 0x58a120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c79b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CReignView::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CReignView::VTable** var_10_1 = arg1
*arg1 = &sealengine::CReignView::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = &sealengine::CRenderer::`vftable'
sub_58c7e0(&arg1[4])
arg1[0x45] = &sealengine::CRenderConfig::`vftable'
arg1[0x46] = 0
arg1[0x47] = 0
arg1[0x48] = 0
int32_t var_4 = 0
arg1[0x49] = 1
arg1[0x4a] = 0
arg1[0x4b].b = 0
arg1[0x4c] = &sealengine::CInstanceViewList::`vftable'
arg1[0x4d] = 0
arg1[0x4e] = 0
arg1[0x4f] = 0
arg1[0x50] = arg2
arg1[0x51].b = 1
arg1[0x52] = 0
arg1[0x53] = 0
arg1[0x54].b = 0
arg1[0x55] = 0xffffffff
sub_59b310(&arg1[0x56])
arg1[0x90] = &sealengine::CSphereVolumeList::`vftable'
__builtin_memset(&arg1[0x91], 0, 0x24)
EnumC13Lines::EnumC13Lines(&arg1[0x9a])
EnumC13Lines::EnumC13Lines(&arg1[0xaa])
arg1[0xba] = 0
arg1[0xbb] = &sealengine::CRenderTarget::`vftable'
arg1[0xbc] = 0
arg1[0xbd] = 0
arg1[0xbe] = 0
arg1[0xbf].b = 0
arg1[0xc0] = 0
arg1[0xc1].b = 0
sub_533fb0(&arg1[0xc2])
arg1[0xec].b = 0
arg1[0xed] = &sealengine::CRenderTarget::`vftable'
arg1[0xee] = 0
arg1[0xef] = 0
arg1[0xf0] = 0
arg1[0xf1].b = 0
arg1[0xf2] = 0
arg1[0xf3].b = 0
arg1[0xf4].b = 0
sub_59bd70(&arg1[0xf5])
sub_528440(&arg1[0x126])
arg1[0x13e] = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
arg1[0x13f] = 0
arg1[0x140] = 0
arg1[0x141].w = 0x101
var_4.b = 9
arg1[0x142] = arg2
arg1[0x143].w = 1
arg1[0x144] = 0
arg1[0x145] = 0
sub_59c630(&arg1[0x146])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
