// 函数: sub_5f11b0
// 地址: 0x5f11b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbc44
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CTextSpriteCreater::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CTextSpriteCreater::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CTextSpriteCreater::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
arg1[4].b = 0
__builtin_memset(&arg1[5], 0, 0x30)
int32_t var_4 = 0
arg1[0x11] = 4
arg1[0x12] = 4
sub_5f0b30(&arg1[0x13])
sub_5f0b30(&arg1[0x25])
var_4.b = 2
arg1[0x37] = &win32only::CFont::`vftable'
arg1[0x38] = 0
arg1[0x39] = 0x10
arg1[0x3f] = 0xf
arg1[0x3e] = 0
arg1[0x3a].b = 0
sub_402110(&arg1[0x3a], 0x703bb8, 0xd)
arg1[0x40] = 0x190
arg1[0x41].w = 0
arg1[0x42] = 0xffffffff
arg1[0x43] = 0
arg1[0x44] = &chipmunk::CExternalFontPack::`vftable'
arg1[0x45] = &filesystem::CFile::`vftable'
arg1[0x46] = 0xffffffff
__builtin_memset(&arg1[0x47], 0, 0x14)
arg1[0x4c] = &chipmunk::CZlibDecompressor::`vftable'
arg1[0x4d] = 0
arg1[0x53] = 0xf
arg1[0x52] = 0
arg1[0x4e].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
