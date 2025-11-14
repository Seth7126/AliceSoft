// 函数: sub_51c0d0
// 地址: 0x51c0d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2a08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t xmm1 = *(arg1 + 0x18)
int32_t ebx = *(arg1 + 0x10)
int32_t ebp = *(arg1 + 0x14)
struct partsengine::CCharSpriteProperty::VTable* const var_40 =
    &partsengine::CCharSpriteProperty::`vftable'
int128_t var_34 = xmm1
int32_t var_3c = ebx
int32_t xmm1_1 = *(arg1 + 0x2c)
int32_t var_20 = xmm1_1
int128_t xmm1_2 = *(arg1 + 0x30)
int32_t var_38 = ebp
int128_t var_1c = xmm1_2
int32_t var_4 = 0
int32_t var_24 = arg2
char result = sub_4ff3f0(arg1 + 0xc, &var_40)

if (result == 0)
    *(arg1 + 0x10) = ebx
    *(arg1 + 0x14) = ebp
    *(arg1 + 0x18) = xmm1
    *(arg1 + 0x28) = arg2
    *(arg1 + 0x2c) = xmm1_1
    *(arg1 + 0x30) = xmm1_2
    result = sub_519640(arg1)
    *(arg1 + 0xd8) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
