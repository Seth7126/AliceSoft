// 函数: sub_5f13a0
// 地址: 0x5f13a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbf1e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CTextSpriteCreater::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CTextSpriteCreater::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CTextSpriteCreater::`vftable'
int32_t var_4 = 5
sub_5f14b0(arg1)

if (arg1[0x53] u>= 0x10)
    j__free(arg1[0x4e])

arg1[0x53] = 0xf
arg1[0x52] = 0
arg1[0x4e].b = 0
var_4.b = 3
sub_5efe70(&arg1[0x44])
HGDIOBJ ho = arg1[0x38]
arg1[0x37] = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[0x38] = 0

if (arg1[0x3f] u>= 0x10)
    j__free(arg1[0x3a])

arg1[0x3f] = 0xf
arg1[0x3e] = 0
arg1[0x3a].b = 0
sub_5f0bd0(&arg1[0x25])
sub_5f0bd0(&arg1[0x13])
arg1[3] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
int32_t result = sub_697220(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
