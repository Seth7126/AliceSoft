// 函数: sub_4dd5a0
// 地址: 0x4dd5a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbb0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUITextBoxView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUITextBoxView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUITextBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUITextBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUITextBoxView::`vftable'{for `partsengine::IUpdateEvent'}
int32_t var_4 = 0
arg1[0x6e] = &partsengine::CInputStringWrapper::`vftable'
arg1[0x6d] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x6c] = &partsengine::CSpriteEngineWrapper::`vftable'
sub_4daea0(&arg1[0x3d])

if (arg1[0x3b] u>= 0x10)
    j__free(arg1[0x36])

arg1[0x3b] = 0xf
arg1[0x3a] = 0
arg1[0x36].b = 0

if (arg1[0x35] u>= 0x10)
    j__free(arg1[0x30])

arg1[0x35] = 0xf
arg1[0x34] = 0
arg1[0x30].b = 0

if (arg1[0x2f] u>= 0x10)
    j__free(arg1[0x2a])

arg1[0x2f] = 0xf
arg1[0x2e] = 0
arg1[0x2a].b = 0
sub_47e7a0(&arg1[0xd])
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
int32_t result = sub_485650(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
