// 函数: sub_4ed250
// 地址: 0x4ed250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_735ac2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** var_24 =
    arg1
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** var_24_1 =
    arg1
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
*arg1 = &partsengine::CGUIComponent::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
arg1[2] = &partsengine::CGUIComponent::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
int32_t var_14_1 = 0
arg1[0x10] = arg2
arg1[0x11] = 0x64
arg1[0x12].b = 0
arg1[0x13] = 0x3f800000
arg1[0x14] = 0x3f800000
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18].b = 0
arg1[0x19] = &partsengine::CGUIComponentTreeUnit::`vftable'
arg1[0x1a] = 0
arg1[0x1b] = arg3
arg1[0x1c] = &arg1[0x21]
var_14_1.b = 1
arg1[0x1e] = arg3
arg1[0x1f] = arg5
arg1[0x1d] = 0
arg1[0x20] = arg4
sub_503c20(&arg1[0x21])
var_14_1.b = 2
arg1[0x90].b = 0
__builtin_memset(&arg1[0x91], 0, 0x18)
arg1[0x97].b = 1
sub_5269a0(&arg1[0x98])
var_14_1.b = 3
arg1[0xc8] = 0
arg1[0xc9] = 0
arg1[0x1a] = arg1
sub_4efcc0(arg1)
struct partsengine::CZSortData::VTable** eax_8 = sub_6e810c(0x14)
struct partsengine::CZSortData::VTable** var_24_2 = eax_8
*eax_8 = &partsengine::CZSortData::`vftable'
eax_8[1] = 0
eax_8[2] = 0
eax_8[3] = 0
eax_8[4] = arg1
arg1[0x96] = eax_8
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
