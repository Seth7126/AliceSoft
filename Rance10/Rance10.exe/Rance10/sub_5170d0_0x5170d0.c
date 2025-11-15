// 函数: sub_5170d0
// 地址: 0x5170d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1[0x12]
*arg1 = &partsengine::CGUIPartsView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUIPartsView::`vftable'{for `partsengine::IEventObserver'}

if (edi != 0)
    sub_517180(edi)
    int32_t var_20_1 = 0x224
    operator new(edi)

(*(arg1[0x11]->vFunc_0 + 4))(eax_2)
arg1[3] = &partsengine::CEventSubject::`vftable'
int32_t result = arg1[4]
arg1[5] = result
void* ecx_2 = arg1[4]

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (arg1[6] - ecx_2) s>> 2, 4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
