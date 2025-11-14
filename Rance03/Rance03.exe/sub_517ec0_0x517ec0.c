// 函数: sub_517ec0
// 地址: 0x517ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CTextSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CTextSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 8
sub_518020(arg1)
sub_51c520(arg1)
sub_441ce0(&arg1[0x55])
arg1[0x3e] = &partsengine::CDecoratedText::`vftable'

if (arg1[0x54] u>= 0x10)
    j__free(arg1[0x4f])

arg1[0x54] = 0xf
arg1[0x53] = 0
arg1[0x4f].b = 0
arg1[0x3f] = &partsengine::CTextDecoration::`vftable'
arg1[0x40] = &partsengine::CCharSpriteProperty::`vftable'

if (arg1[0x3c] u>= 0x10)
    j__free(arg1[0x37])

arg1[0x3c] = 0xf
arg1[0x3b] = 0
arg1[0x37].b = 0
arg1[0x2d] = &partsengine::CRect::`vftable'
int32_t eax_3 = arg1[0x2a]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x2a] = 0
    arg1[0x2b] = 0
    arg1[0x2c] = 0

arg1[0x25] = &partsengine::CRect::`vftable'
var_4.b = 1
int32_t result = sub_517a50(&arg1[0x22])
arg1[0x12] = &partsengine::CTextDecoration::`vftable'
arg1[0x13] = &partsengine::CCharSpriteProperty::`vftable'
arg1[2] = &partsengine::CTextDecoration::`vftable'
arg1[3] = &partsengine::CCharSpriteProperty::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
