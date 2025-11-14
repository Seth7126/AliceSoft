// 函数: sub_4d4d10
// 地址: 0x4d4d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf5a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUIRadioButtonBoxView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUIRadioButtonBoxView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIRadioButtonBoxView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIRadioButtonBoxView::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xb] = &partsengine::CGUIRadioButtonBoxView::`vftable'{for `partsengine::IUpdateEvent'}
int32_t var_4 = 1
sub_4d5260(arg1)
arg1[0xd] = &partsengine::CGUIRadioButtonBoxModel::`vftable'
int32_t eax_3 = arg1[0xe]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
int32_t result = sub_485650(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
