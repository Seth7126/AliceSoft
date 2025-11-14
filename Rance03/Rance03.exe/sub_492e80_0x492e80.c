// 函数: sub_492e80
// 地址: 0x492e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb516
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CFlatProxyData::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CFlatProxyData::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatProxyData::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_402110(&arg1[1], 0x6da22a, nullptr)
int32_t var_4 = 0
arg1[7] = arg2
arg1[8] = 0
arg1[9] = 0
arg1[8] = sub_42f580()
var_4.b = 1
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xa] = sub_42f580()
arg1[0xc] = 0x3f800000
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
