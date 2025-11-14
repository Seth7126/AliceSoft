// 函数: sub_509810
// 地址: 0x509810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b93eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CSprite::partsengine::CLoopCGSprite::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CLoopCGSprite::VTable** var_10_1 = arg1
*arg1 = &partsengine::CLoopCGSprite::`vftable'{for `partsengine::CSprite'}
arg1[1] = 1
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_4 = 0
arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
sub_401ff0(&arg1[5], &data_74f8fc, 0, 0xffffffff)
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe].b = 1
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = &partsengine::CRect::`vftable'
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
