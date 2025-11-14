// 函数: sub_4e4060
// 地址: 0x4e4060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0456
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CMovieSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CMovieSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CMovieSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 1
sub_4e4b30(arg1)

if (arg1[0x10] u>= 0x10)
    j__free(arg1[0xb])

arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0
int32_t var_4_1 = 0xffffffff
sub_505790(&arg1[4])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
