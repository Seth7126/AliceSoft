// 函数: sub_5ac3e0
// 地址: 0x5ac3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f12b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
sub_578410(&arg1[1])
int32_t var_8_1 = 0
arg1[0xd4].b = 0
arg1[0xd5] = 0
arg1[0xd6] = 0
*(arg1 + 0x35c) = data_7fd4d8.q
arg1[0xd9] = data_7fd4e0
*(arg1 + 0x368) = data_7fd4d8.q
arg1[0xdc] = data_7fd4e0
arg1[0xdd] = 0x1010101
arg1[0xde] = 0
arg1[0xdf] = 0
arg1[0xe0] = 0
*(arg1 + 0x384) = data_7fd4d8.q
arg1[0xe3] = data_7fd4e0
*(arg1 + 0x390) = data_7fd4d8.q
arg1[0xe6] = data_7fd4e0
arg1[0xe7] = 0
arg1[0xe8] = 0
arg1[0xe9] = 0
arg1[0xea] = 0
*(arg1 + 0x3ac) = data_7fd4d8.q
arg1[0xed] = data_7fd4e0
*(arg1 + 0x3b8) = data_7fd4d8.q
arg1[0xf0] = data_7fd4e0
__builtin_memset(&arg1[0xf1], 0, 0x2c)
arg1[0xfc].w = 0x101
*(arg1 + 0x3f2) = 1
arg1[0xfd] = 0
arg1[0xfe] = 0
arg1[0xff] = 0xffffffff
arg1[0x100] = 0xffffffff
*(arg1 + 0x404) = data_7fd4d8.q
arg1[0x103] = data_7fd4e0
arg1[0x104].b = 0
sub_6cac10(&arg1[0x105])
__builtin_memset(&arg1[0x115], 0, 0x18)
arg1[0x11b] = 0x3f800000
arg1[0x11c] = 0
arg1[0x11d] = 0
arg1[0x11e] = 0
arg1[0x11f] = 0
sub_596f00(&arg1[0x120])
arg1[0x141] = 0
arg1[0x142] = 0
sub_5d8e90(&arg1[0x143])
__builtin_memset(&arg1[0x157], 0, 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
