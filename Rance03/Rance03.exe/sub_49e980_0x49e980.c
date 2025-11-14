// 函数: sub_49e980
// 地址: 0x49e980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc12a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIComboBoxModel::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIComboBoxModel::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIComboBoxModel::`vftable'
int32_t var_4 = 4
arg1[0x31] = 0
sub_402110(&arg1[0x1e], 0x6da23a, nullptr)
int32_t* result = sub_402110(&arg1[0x18], 0x6da243, nullptr)
arg1[0x17] = 0
arg1[0x16] = 0
arg1[0x15] = 0x10
arg1[0x14] = 0xc8
arg1[0x24] = &partsengine::CCharSpriteProperty::`vftable'

if (arg1[0x23] u>= 0x10)
    result = j__free(arg1[0x1e])

arg1[0x23] = 0xf
arg1[0x22] = 0
arg1[0x1e].b = 0

if (arg1[0x1d] u>= 0x10)
    result = j__free(arg1[0x18])

arg1[0x1d] = 0xf
arg1[0x1c] = 0
arg1[0x18].b = 0
arg1[7] = &partsengine::CCharSpriteProperty::`vftable'

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
