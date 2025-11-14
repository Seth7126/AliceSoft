// 函数: sub_47e6a0
// 地址: 0x47e6a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b79fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEventObserver::partsengine::CEventObserverBase::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
arg1[1] = &partsengine::CEventSubject::`vftable'
struct partsengine::CEventSubject::VTable** var_10_1 = &arg1[1]
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_4 = 0
arg1[5] = 0
sub_42f420(&arg1[6], 0x19)
arg1[9].b = 0
arg1[5] = &arg1[1]
*arg1 = &partsengine::CComponentSet::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0xffffffff
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x12] = arg2
arg1[0x13] = arg3
arg1[0x14] = arg4
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
