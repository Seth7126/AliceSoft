// 函数: sub_49c540
// 地址: 0x49c540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbb0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUICheckBoxView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUICheckBoxView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUICheckBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUICheckBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUICheckBoxView::`vftable'{for `partsengine::IUpdateEvent'}
int32_t var_4 = 0
sub_485650(&arg1[0x9c])
arg1[0x9b] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x9a] = &partsengine::CSpriteEngineWrapper::`vftable'
sub_499f80(&arg1[0x26])
sub_47e7a0(&arg1[0xe])
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
int32_t result = sub_485650(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
