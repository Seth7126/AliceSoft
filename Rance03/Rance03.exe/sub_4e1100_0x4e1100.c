// 函数: sub_4e1100
// 地址: 0x4e1100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbb0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUIScrollbarView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUIScrollbarView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIScrollbarView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIScrollbarView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIScrollbarView::`vftable'{for `partsengine::IUpdateEvent'}
int32_t var_4 = 0
arg1[0xae] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xa8] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0xa2] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x9c] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x96] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x90] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x8a] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x84] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x83] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x82] = &partsengine::CSpriteEngineWrapper::`vftable'
sub_4aa710(&arg1[0x2d])
sub_47e7a0(&arg1[0xe])
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
int32_t result = sub_485650(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
