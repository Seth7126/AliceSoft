// 函数: sub_4b2930
// 地址: 0x4b2930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd5f4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUIListBoxView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUIListBoxView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIListBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIListBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIListBoxView::`vftable'{for `partsengine::IUpdateEvent'}
int32_t var_4 = 2
arg1[0x60] = &partsengine::CSpriteEngineWrapper::`vftable'
arg1[0x5f] = &partsengine::CIbisInputWrapper::`vftable'
sub_4affe0(&arg1[0x2b])
int32_t eax_3 = arg1[0x28]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x28] = 0
    arg1[0x29] = 0
    arg1[0x2a] = 0

var_4.b = 0
sub_47e7a0(&arg1[0xf])
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
int32_t result = sub_485650(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
