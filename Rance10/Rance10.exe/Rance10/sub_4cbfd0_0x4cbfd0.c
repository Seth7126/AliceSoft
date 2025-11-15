// 函数: sub_4cbfd0
// 地址: 0x4cbfd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733aa2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** var_14 = arg1
arg1[1] = 1
*arg1 = &partsengine::CFlatData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
__builtin_memset(&arg1[2], 0, 0x2d)
arg1[0xe] = 0
void* var_18 = &arg1[0xf]
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0xf] = sub_4cf430()
int32_t var_8_1 = 0
void* var_18_1 = &arg1[0x11]
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x11] = sub_4321d0()
var_8_1.b = 1
void* var_18_2 = &arg1[0x13]
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x13] = sub_42e780()
var_8_1.b = 2
void* var_18_3 = &arg1[0x15]
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x15] = sub_4321d0()
var_8_1.b = 3
void* var_18_4 = &arg1[0x17]
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x17] = sub_4321d0()
var_8_1.b = 4
void* var_18_5 = &arg1[0x19]
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x19] = sub_4321d0()
var_8_1.b = 5
void* var_18_6 = &arg1[0x1b]
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1b] = sub_4321d0()
arg1[0x22] = 0xf
arg1[0x21] = 0
arg1[0x1d].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
