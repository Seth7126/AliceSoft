// 函数: sub_4aa520
// 地址: 0x4aa520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7317c9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionProcess::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CConstructionProcess::VTable** var_14_1 = arg1
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
arg1[0x16] = *(arg2 + 0x58)
arg1[0x17] = *(arg2 + 0x5c)
arg1[0x18] = &textsurface::CTextSurfaceProperty::`vftable'
arg1[0x19] = *(arg2 + 0x64)
arg1[0x1a] = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg1[0x1f] = *(arg2 + 0x7c)
arg1[0x20] = *(arg2 + 0x80)
*(arg1 + 0x84) = *(arg2 + 0x84)
int32_t var_8_1 = 0
arg1[0x2a] = 0xf
arg1[0x29] = 0
char* eax_30

if (arg1[0x2a] u< 0x10)
    eax_30 = &arg1[0x25]
else
    eax_30 = arg1[0x25]

*eax_30 = 0
sub_403590(&arg1[0x25], arg2 + 0x94, 0, 0xffffffff)
var_8_1.b = 1
arg1[0x30] = 0xf
arg1[0x2f] = 0
arg1[0x2b].b = 0
sub_403590(&arg1[0x2b], arg2 + 0xac, 0, 0xffffffff)
arg1[0x31].b = *(arg2 + 0xc4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
