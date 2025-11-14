// 函数: sub_566540
// 地址: 0x566540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5d88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CEmitter::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CEmitter::VTable** var_10_1 = arg1
*arg1 = &sealengine::CEmitter::`vftable'
arg1[1] = *(arg2 + 4)
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401ff0(&arg1[2], arg2 + 8, 0, 0xffffffff)
int32_t var_4 = 0
arg1[8] = *(arg2 + 0x20)
arg1[9] = *(arg2 + 0x24)
arg1[0xa] = *(arg2 + 0x28)
arg1[0xb] = *(arg2 + 0x2c)
arg1[0xc] = *(arg2 + 0x30)
arg1[0xd] = &sealengine::CParamWithRandRange::`vftable'
arg1[0xe] = *(arg2 + 0x38)
arg1[0xf] = *(arg2 + 0x3c)
arg1[0x10] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x11] = *(arg2 + 0x44)
arg1[0x12] = *(arg2 + 0x48)
arg1[0x13] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x14] = *(arg2 + 0x50)
arg1[0x15] = *(arg2 + 0x54)
arg1[0x16] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x17] = *(arg2 + 0x5c)
arg1[0x18] = *(arg2 + 0x60)
arg1[0x19] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x1a] = *(arg2 + 0x68)
arg1[0x1b] = *(arg2 + 0x6c)
arg1[0x1c] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x1d] = *(arg2 + 0x74)
arg1[0x1e] = *(arg2 + 0x78)
arg1[0x1f] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x20] = *(arg2 + 0x80)
arg1[0x21] = *(arg2 + 0x84)
arg1[0x22] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x23] = *(arg2 + 0x8c)
arg1[0x24] = *(arg2 + 0x90)
arg1[0x25] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x26] = *(arg2 + 0x98)
arg1[0x27] = *(arg2 + 0x9c)
var_4.b = 9
arg1[0x28] = *(arg2 + 0xa0)
*(arg1 + 0xa4) = *(arg2 + 0xa4)
arg1[0x2b] = *(arg2 + 0xac)
arg1[0x2c] = *(arg2 + 0xb0)
arg1[0x2d] = *(arg2 + 0xb4)
arg1[0x33] = 0xf
arg1[0x32] = 0
arg1[0x2e].b = 0
sub_401ff0(&arg1[0x2e], arg2 + 0xb8, 0, 0xffffffff)
arg1[0x34] = *(arg2 + 0xd0)
arg1[0x35] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x36] = *(arg2 + 0xd8)
arg1[0x37] = *(arg2 + 0xdc)
arg1[0x38] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x39] = *(arg2 + 0xe4)
arg1[0x3a] = *(arg2 + 0xe8)
arg1[0x3b] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x3c] = *(arg2 + 0xf0)
arg1[0x3d] = *(arg2 + 0xf4)
arg1[0x3e] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x3f] = *(arg2 + 0xfc)
arg1[0x40] = *(arg2 + 0x100)
arg1[0x41].b = *(arg2 + 0x104)
arg1[0x42] = *(arg2 + 0x108)
arg1[0x43] = *(arg2 + 0x10c)
arg1[0x44] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x45] = *(arg2 + 0x114)
arg1[0x46] = *(arg2 + 0x118)
arg1[0x47] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x48] = *(arg2 + 0x120)
arg1[0x49] = *(arg2 + 0x124)
arg1[0x4a] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x4b] = *(arg2 + 0x12c)
arg1[0x4c] = *(arg2 + 0x130)
arg1[0x4d] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x4e] = *(arg2 + 0x138)
arg1[0x4f] = *(arg2 + 0x13c)
arg1[0x50] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x51] = *(arg2 + 0x144)
arg1[0x52] = *(arg2 + 0x148)
arg1[0x53] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x54] = *(arg2 + 0x150)
arg1[0x55] = *(arg2 + 0x154)
arg1[0x56] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x57] = *(arg2 + 0x15c)
arg1[0x58] = *(arg2 + 0x160)
arg1[0x59] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x5a] = *(arg2 + 0x168)
arg1[0x5b] = *(arg2 + 0x16c)
var_4.b = 0x16
arg1[0x5c] = *(arg2 + 0x170)
sub_43f550(&arg1[0x5d], arg2 + 0x174)
var_4.b = 0x17
arg1[0x60] = *(arg2 + 0x180)
arg1[0x66] = 0xf
arg1[0x65] = 0
arg1[0x61].b = 0
sub_401ff0(&arg1[0x61], arg2 + 0x184, 0, 0xffffffff)
var_4.b = 0x18
sub_566b00(&arg1[0x67], arg2 + 0x19c)
var_4.b = 0x19
sub_566bd0(&arg1[0x6a], arg2 + 0x1a8)
var_4.b = 0x1a
sub_566bd0(&arg1[0x6d], arg2 + 0x1b4)
var_4.b = 0x1b
sub_566bd0(&arg1[0x70], arg2 + 0x1c0)
var_4.b = 0x1c
sub_566ca0(&arg1[0x73], arg2 + 0x1cc)
var_4.b = 0x1d
sub_566d00(&arg1[0x76], arg2 + 0x1d8)
var_4.b = 0x1e
sub_566d60(&arg1[0x79], arg2 + 0x1e4)
var_4.b = 0x1f
sub_566db0(&arg1[0x7c], arg2 + 0x1f0)
var_4.b = 0x20
arg1[0x7f].b = *(arg2 + 0x1fc)
arg1[0x80] = *(arg2 + 0x200)
arg1[0x81].b = *(arg2 + 0x204)
*(arg1 + 0x205) = *(arg2 + 0x205)
*(arg1 + 0x206) = *(arg2 + 0x206)
sub_453d80(&arg1[0x82], arg2 + 0x208)
var_4.b = 0x21
arg1[0x85] = *(arg2 + 0x214)
sub_453d80(&arg1[0x86], arg2 + 0x218)
var_4.b = 0x22
sub_453d80(&arg1[0x89], arg2 + 0x224)
var_4.b = 0x23
sub_453d80(&arg1[0x8c], arg2 + 0x230)
var_4.b = 0x24
sub_453d80(&arg1[0x8f], arg2 + 0x23c)
var_4.b = 0x25
sub_453d80(&arg1[0x92], arg2 + 0x248)
var_4.b = 0x26
sub_453d80(&arg1[0x95], arg2 + 0x254)
var_4.b = 0x27
sub_453d80(&arg1[0x98], arg2 + 0x260)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
