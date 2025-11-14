// 函数: sub_498000
// 地址: 0x498000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbb0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUIButtonView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUIButtonView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIButtonView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIButtonView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIButtonView::`vftable'{for `partsengine::IUpdateEvent'}
int32_t var_4 = 0
arg1[0x82] = &partsengine::CSpriteEngineWrapper::`vftable'
sub_495f30(&arg1[0x23])
sub_47e7a0(&arg1[0xd])
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
sub_485650(&arg1[2])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
