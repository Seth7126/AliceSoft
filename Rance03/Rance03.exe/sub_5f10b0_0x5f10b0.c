// 函数: sub_5f10b0
// 地址: 0x5f10b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbeab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CTextSpriteCacheProperty::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CTextSpriteCacheProperty::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CTextSpriteCacheProperty::`vftable'
arg1[1] = &chipmunk::CTextSpriteProperty::`vftable'
arg1[2] = *(arg2 + 4)
arg1[3] = *(arg2 + 8)
arg1[4] = *(arg2 + 0xc)
arg1[5] = *(arg2 + 0x10)
arg1[6] = *(arg2 + 0x14)
arg1[7] = *(arg2 + 0x18)
int32_t var_4 = 0
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
sub_401ff0(&arg1[8], arg3, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
