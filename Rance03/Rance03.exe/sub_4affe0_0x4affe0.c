// 函数: sub_4affe0
// 地址: 0x4affe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd26d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIListBoxModel::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIListBoxModel::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIListBoxModel::`vftable'
int32_t var_4 = 4
arg1[0x31] = 0
arg1[0x30] = 0xffffffff
arg1[0x1f] = 0
sub_402110(&arg1[0x19], &(*U",\n\n}")[3]:3, nullptr)
arg1[0x18] = 0
arg1[0x17] = 0
arg1[0x16] = 0x96
arg1[0x15] = 0x10
arg1[0x14] = 0xc8
int32_t* result = arg1[0x2d]

if (result != 0)
    sub_4107c0(result, arg1[0x2e])
    result = j__free(arg1[0x2d])
    arg1[0x2d] = 0
    arg1[0x2e] = 0
    arg1[0x2f] = 0

arg1[0x20] = &partsengine::CCharSpriteProperty::`vftable'

if (arg1[0x1e] u>= 0x10)
    result = j__free(arg1[0x19])

arg1[0x1e] = 0xf
arg1[0x1d] = 0
arg1[0x19].b = 0
arg1[7] = &partsengine::CCharSpriteProperty::`vftable'

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
