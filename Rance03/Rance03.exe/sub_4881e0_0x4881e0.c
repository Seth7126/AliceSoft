// 函数: sub_4881e0
// 地址: 0x4881e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7bab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatEmitterData::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatEmitterData::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatEmitterData::`vftable'{for `IInterface'}
arg1[1] = 1
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_402110(&arg1[2], 0x6da1d3, nullptr)
int32_t var_4 = 0
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
sub_402110(&arg1[0x4e], 0x6da1d6, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
