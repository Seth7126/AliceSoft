// 函数: sub_4d0ae0
// 地址: 0x4d0ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733e8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatEmitterData::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatEmitterData::VTable** 
    var_14_1 = arg1
arg1[1] = 1
*arg1 = &partsengine::CFlatEmitterData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
arg1[7] = 0xf
arg1[6] = 0
char* eax_3

if (arg1[7] u< 0x10)
    eax_3 = &arg1[2]
else
    eax_3 = arg1[2]

*eax_3 = 0
sub_403490(&arg1[2], 0x75d04a, nullptr)
int32_t var_8_1 = 0
arg1[8] = 5
__builtin_memset(&arg1[9], 0, 0x49)
__builtin_memset(&arg1[0x1c], 0, 0x18)
arg1[0x22] = 2
arg1[0x23] = 2
__builtin_memset(&arg1[0x24], 0, 0x35)
__builtin_memset(&arg1[0x32], 0, 0x11)
__builtin_memset(&arg1[0x37], 0, 0x31)
__builtin_memset(&arg1[0x44], 0, 0x28)
arg1[0x53] = 0xf
arg1[0x52] = 0
arg1[0x4e].b = 0
sub_403490(&arg1[0x4e], 0x75d043, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
