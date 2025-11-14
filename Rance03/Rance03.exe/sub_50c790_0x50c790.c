// 函数: sub_50c790
// 地址: 0x50c790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1a02
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CNumeralSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 4
arg1[0xb7] = &partsengine::CRect::`vftable'
sub_509640(&arg1[0xb1])
arg1[0x9e] = &partsengine::CCharSpriteProperty::`vftable'
var_4.b = 2
`eh vector vbase constructor iterator'(&arg1[0x56], 0x18, 0xc, sub_401fb0)
var_4.b = 1
`eh vector vbase constructor iterator'(&arg1[0xe], 0x18, 0xc, sub_401fb0)
int32_t result = arg1[0xb]

if (result != 0)
    result = j__free(result)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

if (arg1[9] u>= 0x10)
    result = j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
