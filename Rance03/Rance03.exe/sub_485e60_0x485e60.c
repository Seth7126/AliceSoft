// 函数: sub_485e60
// 地址: 0x485e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba9c7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatData::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatData::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatData::`vftable'{for `IInterface'}
arg1[1] = 1
__builtin_memset(&arg1[2], 0, 0x2c)
arg1[0xd] = 1
arg1[0xe].b = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x10] = sub_42f580()
int32_t var_4 = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x12] = sub_4203c0()
var_4.b = 1
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x14] = sub_42f580()
var_4.b = 2
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x16] = sub_42f580()
var_4.b = 3
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x18] = sub_42f580()
var_4.b = 4
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1a] = sub_42f580()
arg1[0x21] = 0xf
arg1[0x20] = 0
arg1[0x1c].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
