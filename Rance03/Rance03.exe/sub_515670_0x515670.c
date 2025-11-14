// 函数: sub_515670
// 地址: 0x515670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2442
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CTextLineSprite::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CTextLineSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CTextLineSprite::`vftable'
int32_t var_4 = 8
sub_4b51e0(&arg1[0x2c])
sub_4b51e0(&arg1[0x2f])
sub_4b51e0(&arg1[0x35])
sub_516200(arg1)
int32_t eax_3 = arg1[0x35]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x35] = 0
    arg1[0x36] = 0
    arg1[0x37] = 0

var_4.b = 6
sub_517a50(&arg1[0x32])
int32_t eax_4 = arg1[0x2f]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x2f] = 0
    arg1[0x30] = 0
    arg1[0x31] = 0

int32_t eax_5 = arg1[0x2c]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x2c] = 0
    arg1[0x2d] = 0
    arg1[0x2e] = 0

int32_t result = arg1[0x29]

if (result != 0)
    result = j__free(result)
    arg1[0x29] = 0
    arg1[0x2a] = 0
    arg1[0x2b] = 0

arg1[0x1c] = &partsengine::CCharSpriteProperty::`vftable'
arg1[0xf] = &partsengine::CCharSpriteProperty::`vftable'

if (arg1[0xc] u>= 0x10)
    result = j__free(arg1[7])

arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
