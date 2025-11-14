// 函数: sub_47daa0
// 地址: 0x47daa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba23b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::C3DLayerSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::C3DLayerSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::C3DLayerSprite::`vftable'{for `partsengine::CSprite'}
int32_t var_4 = 0
sub_47ddc0(arg1)
int32_t var_4_1 = 0xffffffff
sub_505790(&arg1[2])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
