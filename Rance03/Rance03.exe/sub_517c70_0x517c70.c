// 函数: sub_517c70
// 地址: 0x517c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c25da
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CTextSprite::`vftable'{for `partsengine::CSprite'}
arg1[1] = 1
arg1[2] = &partsengine::CTextDecoration::`vftable'
sub_4ff2c0(&arg1[3])
arg1[0x10] = 0
arg1[0x11] = 0
int32_t var_4 = 0
arg1[0x12] = &partsengine::CTextDecoration::`vftable'
sub_4ff2c0(&arg1[0x13])
__builtin_memset(&arg1[0x20], 0, 0x14)
arg1[0x25] = &partsengine::CRect::`vftable'
__builtin_memset(&arg1[0x26], 0, 0x1c)
arg1[0x2d] = &partsengine::CRect::`vftable'
__builtin_memset(&arg1[0x2e], 0, 0x11)
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 7
arg1[0x36].b = 1
arg1[0x3c] = 0xf
arg1[0x3b] = 0
arg1[0x37].b = 0
arg1[0x3d].w = 0x100
arg1[0x3e] = &partsengine::CDecoratedText::`vftable'
arg1[0x3f] = &partsengine::CTextDecoration::`vftable'
sub_4ff2c0(&arg1[0x40])
arg1[0x4d] = 0
arg1[0x4e] = 0
arg1[0x54] = 0xf
arg1[0x53] = 0
arg1[0x4f].b = 0
var_4.b = 7
arg1[0x55] = 0
arg1[0x56] = 0
arg1[0x55] = sub_441d20(nullptr, nullptr)
int128_t xmm0 = *(arg1 + 0x58)
int128_t xmm3 = *(arg1 + 0x70)
int32_t xmm1 = arg1[0x1a]
int32_t xmm2 = arg1[0x1b]
arg1[0x14] = arg1[0x14]
arg1[0x15] = 0xa
*(arg1 + 0x58) = xmm0
arg1[0x1a] = xmm1
arg1[0x1b] = xmm2
*(arg1 + 0x70) = xmm3
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
