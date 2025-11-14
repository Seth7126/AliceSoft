// 函数: sub_4c1d00
// 地址: 0x4c1d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be2ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CGUIMultiTextBoxModel::`vftable'
int32_t var_4 = 5
arg1[0x3f] = 0
arg1[0x3e] = 0
sub_402110(&arg1[0x38], 0x6da3cf, nullptr)
sub_402110(&arg1[0x32], 0x6da3c3, nullptr)
sub_402110(&arg1[0x2c], 0x6da3cd, nullptr)
sub_402110(&arg1[0x26], 0x6da3db, nullptr)
int128_t xmm0 = data_709310
arg1[0x25] = 0
arg1[0x24] = 0
*(arg1 + 0x18) = xmm0
arg1[0x17] = 0x7d0
sub_402110(&arg1[0x11], 0x6da4a6, nullptr)
struct partsengine::CCharSpriteProperty::VTable* var_40
struct partsengine::CCharSpriteProperty::VTable** eax_3 = sub_4ff2c0(&var_40)
arg1[4] = eax_3[1]
arg1[5] = eax_3[2]
*(arg1 + 0x18) = *(eax_3 + 0xc)
arg1[0xa] = eax_3[7]
arg1[0xb] = eax_3[8]
void* eax_7 = &arg1[0x38]
*(arg1 + 0x30) = *(eax_3 + 0x24)
arg1[2] = 0x1e
arg1[1] = 0xc8

if (*(eax_7 + 0x14) u>= 0x10)
    j__free(*eax_7)
    eax_7 = &arg1[0x38]

*(eax_7 + 0x14) = 0xf
*(eax_7 + 0x10) = 0
*eax_7 = 0

if (arg1[0x37] u>= 0x10)
    j__free(arg1[0x32])

arg1[0x37] = 0xf
arg1[0x36] = 0
arg1[0x32].b = 0

if (arg1[0x31] u>= 0x10)
    j__free(arg1[0x2c])

arg1[0x31] = 0xf
arg1[0x30] = 0
arg1[0x2c].b = 0

if (arg1[0x2b] u>= 0x10)
    j__free(arg1[0x26])

arg1[0x2b] = 0xf
arg1[0x2a] = 0
arg1[0x26].b = 0

if (arg1[0x16] u>= 0x10)
    j__free(arg1[0x11])

arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
arg1[3] = &partsengine::CCharSpriteProperty::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
