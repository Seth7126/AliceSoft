// 函数: sub_50c420
// 地址: 0x50c420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c198e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CNumeralSprite::`vftable'{for `partsengine::CSprite'}
arg1[1] = 0xa
arg1[2] = 0xb
arg1[3] = 1
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
sub_401ff0(&arg1[4], &data_74f92c, 0, 0xffffffff)
int32_t var_4 = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
void (__fastcall* var_28)(int32_t* arg1) = sub_401fb0
var_4.b = 1
sub_69b2ba(&arg1[0xe], 0x18, 0xc, sub_402650)
void (__fastcall* var_28_1)(int32_t* arg1) = sub_401fb0
var_4.b = 2
sub_69b2ba(&arg1[0x56], 0x18, 0xc, sub_402650)
sub_4ff2c0(&arg1[0x9e])
arg1[0xab].b = 0
arg1[0xac] = 0
arg1[0xad].b = 0
arg1[0xae] = 0
arg1[0xaf] = 0
arg1[0xb0].b = 1
arg1[0xb1] = &partsengine::CLLSpriteList::`vftable'
__builtin_memset(&arg1[0xb2], 0, 0x14)
arg1[0xb7] = &partsengine::CRect::`vftable'
arg1[0xb8] = 0
arg1[0xb9] = 0
arg1[0xba] = 0
arg1[0xbb] = 0
var_4.b = 6
arg1[0xbc].b = 1
sub_402110(&arg1[0xe], 0x6e2594, 1)
sub_402110(&arg1[0x56], 0x6e25c8, 2)
sub_402110(&arg1[0x14], 0x6e25cc, 1)
sub_402110(&arg1[0x5c], 0x6e25d0, 2)
sub_402110(&arg1[0x1a], 0x6e25d4, 1)
sub_402110(&arg1[0x62], 0x6e25b8, 2)
sub_402110(&arg1[0x20], 0x6e25bc, 1)
sub_402110(&arg1[0x68], 0x6e25c0, 2)
sub_402110(&arg1[0x26], 0x6e25c4, 1)
sub_402110(&arg1[0x6e], 0x6e25a8, 2)
sub_402110(&arg1[0x2c], 0x6e25ac, 1)
sub_402110(&arg1[0x74], 0x6e25b0, 2)
sub_402110(&arg1[0x32], 0x6e25b4, 1)
sub_402110(&arg1[0x7a], 0x6e2598, 2)
sub_402110(&arg1[0x38], 0x6e259c, 1)
sub_402110(&arg1[0x80], 0x6e25a0, 2)
sub_402110(&arg1[0x3e], 0x6e25a4, 1)
sub_402110(&arg1[0x86], 0x6e266c, 2)
sub_402110(&arg1[0x44], 0x6e2670, 1)
sub_402110(&arg1[0x8c], 0x6e2674, 2)
sub_402110(&arg1[0x4a], 0x6e2678, 1)
sub_402110(&arg1[0x92], 0x6e2650, 2)
sub_402110(&arg1[0x50], 0x6e2654, 1)
sub_402110(&arg1[0x98], 0x6e2658, 2)
sub_42f470(&arg1[0xb], 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
