// 函数: sub_48e2e0
// 地址: 0x48e2e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb0cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatLayerData::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatLayerData::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatLayerData::`vftable'{for `IInterface'}
arg1[1] = 1
arg1[2] = 0
arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
int32_t var_4 = 0
arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0
__builtin_memset(&arg1[0xf], 0, 0x1c)
var_4.b = 2
arg1[0x14] = sub_4203c0()
var_4.b = 3
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x16] = sub_4203c0()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
