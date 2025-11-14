// 函数: sub_4c4be0
// 地址: 0x4c4be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUIMultiTextBoxView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUIMultiTextBoxView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIMultiTextBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIMultiTextBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIMultiTextBoxView::`vftable'{for `partsengine::IUpdateEvent'}
int32_t var_4 = 4
arg1[0x84] = &partsengine::CInputStringWrapper::`vftable'
arg1[0x83] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x82] = &partsengine::CSpriteEngineWrapper::`vftable'
sub_4c1d00(&arg1[0x40])

if (arg1[0x3f] u>= 0x10)
    j__free(arg1[0x3a])

arg1[0x3f] = 0xf
arg1[0x3e] = 0
arg1[0x3a].b = 0

if (arg1[0x39] u>= 0x10)
    j__free(arg1[0x34])

arg1[0x39] = 0xf
arg1[0x38] = 0
arg1[0x34].b = 0

if (arg1[0x33] u>= 0x10)
    j__free(arg1[0x2e])

arg1[0x33] = 0xf
arg1[0x32] = 0
arg1[0x2e].b = 0
var_4.b = 0
sub_47e7a0(&arg1[0xd])
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
int32_t result = sub_485650(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
