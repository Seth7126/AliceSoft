// 函数: sub_4a0260
// 地址: 0x4a0260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc386
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUIComboBoxView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUIComboBoxView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIComboBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIComboBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIComboBoxView::`vftable'{for `partsengine::IUpdateEvent'}
int32_t var_4 = 1
arg1[0x67] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x61] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x5b] = &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
arg1[0x5a] = &partsengine::CSpriteEngineWrapper::`vftable'
arg1[0x59] = &partsengine::CIbisInputWrapper::`vftable'
sub_49e980(&arg1[0x25])
var_4.b = 0
sub_47e7a0(&arg1[0xd])
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
int32_t result = sub_485650(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
