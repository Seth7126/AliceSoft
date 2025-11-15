// 函数: sub_4f3f10
// 地址: 0x4f3f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736291
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::IMakeGUIComponent::partsengine::CGUIControllerStack::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::IMakeGUIComponent::partsengine::CGUIControllerStack::VTable** var_14_1 = arg1
void* i_1
void* i_2 = i_1
*arg1 = &partsengine::CGUIControllerStack::`vftable'{for `partsengine::IMakeGUIComponent'}
sub_4f1240(&arg1[1], arg2, i_2)
int32_t var_8_1 = 0
__builtin_memset(&arg1[0x16], 0, 0x14)
void* eax_3 = &arg1[0x1b]
*(eax_3 + 0x14) = 0xf
*(eax_3 + 0x10) = 0

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

*eax_3 = 0
var_8_1.b = 2
arg1[0x21] = 0
arg1[0x22] = arg2
arg1[3] = arg1
void** esi = arg1[8]
void* i = *esi
i_1 = i

for (; i != esi; i = i_1)
    *(*(i + 0x14) + 0x20) = arg1
    sub_429080(&i_1)

int32_t var_28 = sub_404080(&arg1[0xc])
arg1[0x16] = sub_4f41d0(arg1, sub_404080(&arg1[0xc]))
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
