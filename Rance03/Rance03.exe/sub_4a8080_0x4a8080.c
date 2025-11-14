// 函数: sub_4a8080
// 地址: 0x4a8080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcb81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::IMakeGUIComponent::partsengine::CGUIControllerStack::VTable** var_10 = arg1
*arg1 = &partsengine::CGUIControllerStack::`vftable'{for `partsengine::IMakeGUIComponent'}
int32_t ecx_1 = sub_4a5020(&arg1[1], arg2, arg3)
int32_t var_4 = 0
__builtin_memset(&arg1[0x11], 0, 0x15)
arg1[0x1b] = 0xf
arg1[0x1a] = 0
var_4.b = 2
struct partsengine::IMakeGUIComponent::partsengine::CGUIControllerStack::VTable** var_28_1 = arg1
arg1[0x1c] = 0
arg1[0x1d] = arg2
arg1[3] = arg1
sub_4a6280(&arg1[1], ecx_1)
int32_t eax_3 = sub_4e7cb0(&arg1[0xa])
arg1[0x11] = sub_4a8310(arg1, sub_4e7cb0(&arg1[0xa]), eax_3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
