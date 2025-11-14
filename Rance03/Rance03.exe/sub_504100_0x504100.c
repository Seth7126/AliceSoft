// 函数: sub_504100
// 地址: 0x504100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7bab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CHGaugeSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CHGaugeSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CHGaugeSprite::`vftable'{for `partsengine::CSprite'}
arg1[1] = 1
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401ff0(&arg1[2], &data_74f89c, 0, 0xffffffff)
int32_t var_4 = 0
arg1[8] = 0x42c80000
arg1[9] = 0x42c80000
sub_505680(&arg1[0xa])
arg1[0x11] = &partsengine::CRect::`vftable'
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
