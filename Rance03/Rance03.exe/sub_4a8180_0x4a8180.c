// 函数: sub_4a8180
// 地址: 0x4a8180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcbc1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::IMakeGUIComponent::partsengine::CGUIControllerStack::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::IMakeGUIComponent::partsengine::CGUIControllerStack::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIControllerStack::`vftable'{for `partsengine::IMakeGUIComponent'}
int32_t var_4 = 2
sub_4a8230(arg1)

if (arg1[0x1b] u>= 0x10)
    j__free(arg1[0x16])

arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0
int32_t eax_3 = arg1[0x12]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x12] = 0
    arg1[0x13] = 0
    arg1[0x14] = 0

int32_t var_4_1 = 0xffffffff
int32_t result = sub_4a5110(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
