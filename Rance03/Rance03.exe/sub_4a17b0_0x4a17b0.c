// 函数: sub_4a17b0
// 地址: 0x4a17b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc50c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::VTable** var_14 = arg1
*arg1 = &IInterface::`vftable'
arg1[1] = &partsengine::CEventObserverBase::`vftable'{for `IEventObserver'}
arg1[2] = &partsengine::CEventSubject::`vftable'
void* var_10 = &arg1[2]
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int32_t var_4 = 0
arg1[6] = 0
sub_42f420(&arg1[7], 0x19)
arg1[0xa].b = 0
arg1[6] = &arg1[2]
int32_t var_4_1 = 1
arg1[0xb] = arg2
*arg1 = &partsengine::CGUIComponent::`vftable'{for `IInterface'}
arg1[1] = &partsengine::CGUIComponent::`vftable'{for `partsengine::CEventObserverBase'}
arg1[0xc] = 0x64
arg1[0xd] = 1
arg1[0xe].b = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12].b = 0
arg1[0x13] = &partsengine::CGUIComponentTreeUnit::`vftable'
arg1[0x14] = 0
arg1[0x15] = arg3
arg1[0x16] = &arg1[0x1b]
var_4_1.b = 2
arg1[0x18] = arg3
arg1[0x19] = arg5
arg1[0x17] = 0
arg1[0x1a] = arg4
sub_4b6600(&arg1[0x1b])
var_4_1.b = 3
arg1[0x127].b = 0
arg1[0x128] = 0
arg1[0x129] = 0
arg1[0x12a] = 0
arg1[0x12b] = 0
arg1[0x14] = arg1
arg1[6] = &arg1[2]
sub_4a4020(arg1)
struct partsengine::CZSortData::VTable** eax_8 = sub_69adc6(0x14)

if (eax_8 == 0)
    arg1[0x12b] = 0
else
    *eax_8 = &partsengine::CZSortData::`vftable'
    eax_8[1] = 0
    eax_8[2] = 0
    eax_8[3] = 0
    eax_8[4] = arg1
    arg1[0x12b] = eax_8

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
