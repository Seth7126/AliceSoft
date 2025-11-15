// 函数: sub_4dcc60
// 地址: 0x4dcc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73486b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CFlatProxyData::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CFlatProxyData::VTable** var_14_1 = arg1
*arg1 = &partsengine::CFlatProxyData::`vftable'
arg1[1] = arg2
arg2 = &arg1[2]
arg1[2] = 0
arg1[3] = 0
arg1[2] = sub_4321d0()
int32_t var_8_1 = 0
arg2 = &arg1[4]
arg1[4] = 0
arg1[5] = 0
arg1[4] = sub_4321d0()
arg1[6] = 0x3f800000
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
