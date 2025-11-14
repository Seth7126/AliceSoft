// 函数: sub_503da0
// 地址: 0x503da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c133b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CDecoratedText::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CDecoratedText::VTable** var_10_1 = arg1
*arg1 = &partsengine::CDecoratedText::`vftable'
arg1[1] = &partsengine::CTextDecoration::`vftable'
arg1[2] = &partsengine::CCharSpriteProperty::`vftable'
arg1[3] = *(arg2 + 8)
arg1[4] = *(arg2 + 0xc)
*(arg1 + 0x14) = *(arg2 + 0x10)
arg1[9] = *(arg2 + 0x20)
arg1[0xa] = *(arg2 + 0x24)
*(arg1 + 0x2c) = *(arg2 + 0x28)
arg1[0xf] = *(arg2 + 0x38)
arg1[0x10] = *(arg2 + 0x3c)
int32_t var_4 = 0
arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
sub_401ff0(&arg1[0x11], arg3, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
