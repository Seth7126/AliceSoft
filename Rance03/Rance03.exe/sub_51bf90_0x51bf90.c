// 函数: sub_51bf90
// 地址: 0x51bf90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c29d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm0 = *(arg1 + 0x28)
int32_t ebx = *(arg1 + 0x10)
int32_t ebp = *(arg1 + 0x14)
int32_t var_24 = xmm0
int32_t xmm0_1 = *(arg1 + 0x2c)
int32_t var_20 = xmm0_1
int128_t xmm0_2 = *(arg1 + 0x30)
struct partsengine::CCharSpriteProperty::VTable* const var_40 =
    &partsengine::CCharSpriteProperty::`vftable'
int32_t var_3c = ebx
int32_t var_38 = ebp
int128_t var_1c = xmm0_2
int32_t ecx = 0
int32_t var_4 = 0

if (arg2 s> 0)
    ecx = arg2

int32_t var_54 = 0xff

if (ecx s> 0xff)
    ecx = 0xff

int32_t ecx_1 = 0

if (arg3 s> 0)
    ecx_1 = arg3

if (ecx_1 s> 0xff)
    ecx_1 = 0xff

int32_t var_5c = ecx_1
int32_t ecx_2 = 0

if (arg4 s> 0)
    ecx_2 = arg4

if (ecx_2 s> 0xff)
    ecx_2 = 0xff

int32_t var_58 = ecx_2
int128_t var_34 = ecx.o
char result = sub_4ff3f0(arg1 + 0xc, &var_40)

if (result == 0)
    *(arg1 + 0x10) = ebx
    *(arg1 + 0x14) = ebp
    *(arg1 + 0x18) = ecx.o
    *(arg1 + 0x28) = xmm0
    *(arg1 + 0x2c) = xmm0_1
    *(arg1 + 0x30) = xmm0_2
    result = sub_519640(arg1)
    *(arg1 + 0xd8) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
