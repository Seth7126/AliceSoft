// 函数: sub_4815b0
// 地址: 0x4815b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba639
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionProcess::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CConstructionProcess::VTable** var_10_1 = arg1
*arg1 = &partsengine::CConstructionProcess::`vftable'
arg1[1] = *(arg2 + 4)
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
arg1[4] = *(arg2 + 0x10)
arg1[5] = *(arg2 + 0x14)
arg1[6] = *(arg2 + 0x18)
arg1[7] = *(arg2 + 0x1c)
arg1[8] = *(arg2 + 0x20)
arg1[9] = *(arg2 + 0x24)
arg1[0xa] = *(arg2 + 0x28)
arg1[0xb] = *(arg2 + 0x2c)
arg1[0xc] = *(arg2 + 0x30)
arg1[0xd] = *(arg2 + 0x34)
arg1[0xe] = *(arg2 + 0x38)
arg1[0xf] = *(arg2 + 0x3c)
arg1[0x10] = *(arg2 + 0x40)
arg1[0x11] = *(arg2 + 0x44)
arg1[0x12] = *(arg2 + 0x48)
arg1[0x13] = *(arg2 + 0x4c)
arg1[0x14] = *(arg2 + 0x50)
arg1[0x15] = *(arg2 + 0x54)
arg1[0x16] = &partsengine::CCharSpriteProperty::`vftable'
arg1[0x17] = *(arg2 + 0x5c)
arg1[0x18] = *(arg2 + 0x60)
*(arg1 + 0x64) = *(arg2 + 0x64)
arg1[0x1d] = *(arg2 + 0x74)
arg1[0x1e] = *(arg2 + 0x78)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
int32_t var_4 = 0
arg1[0x28] = 0xf
arg1[0x27] = 0
arg1[0x23].b = 0
sub_401ff0(&arg1[0x23], arg2 + 0x8c, 0, 0xffffffff)
var_4.b = 1
arg1[0x2e] = 0xf
arg1[0x2d] = 0
arg1[0x29].b = 0
sub_401ff0(&arg1[0x29], arg2 + 0xa4, 0, 0xffffffff)
arg1[0x2f].b = *(arg2 + 0xbc)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
