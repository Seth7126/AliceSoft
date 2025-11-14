// 函数: sub_51bd90
// 地址: 0x51bd90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c29d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t xmm0 = *(arg1 + 0x18)
int32_t ebx = *(arg1 + 0x14)
struct partsengine::CCharSpriteProperty::VTable* const var_40 =
    &partsengine::CCharSpriteProperty::`vftable'
int32_t var_38 = ebx
int128_t var_34 = xmm0
int32_t xmm0_1 = *(arg1 + 0x28)
int32_t var_24 = xmm0_1
int32_t xmm0_2 = *(arg1 + 0x2c)
int32_t var_20 = xmm0_2
int128_t xmm0_3 = *(arg1 + 0x30)
int128_t var_1c = xmm0_3
int32_t var_4 = 0
int32_t var_3c = arg2
char result = sub_4ff3f0(arg1 + 0xc, &var_40)

if (result == 0)
    *(arg1 + 0x10) = arg2
    *(arg1 + 0x14) = ebx
    *(arg1 + 0x18) = xmm0
    *(arg1 + 0x28) = xmm0_1
    *(arg1 + 0x2c) = xmm0_2
    *(arg1 + 0x30) = xmm0_3
    result = sub_519640(arg1)
    *(arg1 + 0xd8) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
