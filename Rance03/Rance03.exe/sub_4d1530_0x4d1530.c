// 函数: sub_4d1530
// 地址: 0x4d1530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbb0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIView::partsengine::CGUIPartsView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIView::partsengine::CGUIPartsView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIPartsView::`vftable'{for `partsengine::CGUIView'}
arg1[1] = &partsengine::CGUIPartsView::`vftable'{for `partsengine::CEventObserverBase'}
int32_t var_4 = 0
int32_t* ecx = arg1[0xe]

if (ecx != 0)
    (**ecx)(1)

(*(arg1[0xd]->__offset(0x0).d + 4))(eax_2)
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
sub_485650(&arg1[2])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
