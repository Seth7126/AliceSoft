// 函数: sub_609a20
// 地址: 0x609a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742ba3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct memory::CFastMemory::VTable** var_18 = arg1
*arg1 = &memory::CFastMemory::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_8_1 = 0
*(arg1 + 0x10) = 0
arg1[6] = 0
__builtin_memset(&arg1[4], 0, 0x84)
*(arg1 + 0x1c) = zx.o(0)
*(arg1 + 0x2c) = 0
*(arg1 + 0x70) = 0
arg1[0x1e] = 0
var_8_1.b = 0xa
int32_t* var_28 = &arg1[0x25]
void* var_14 = &arg1[0x25]
var_14 = nullptr
sub_60c470(&arg1[0x25], &var_14)
var_8_1.b = 0xb
int32_t* var_28_1 = &arg1[0x2d]
var_14 = &arg1[0x2d]
var_14 = nullptr
sub_60c470(&arg1[0x2d], &var_14)
var_8_1.b = 0xc
int32_t* var_28_2 = &arg1[0x35]
var_14 = &arg1[0x35]
var_14 = nullptr
sub_60c470(&arg1[0x35], &var_14)
var_8_1.b = 0xd
var_14 = &arg1[0x3d]
arg1[0x3d] = 0
arg1[0x3e] = 0
arg1[0x3d] = sub_42e780()
arg1[0x3f] = 0xffffffff
arg1[0x40] = 0x64
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
