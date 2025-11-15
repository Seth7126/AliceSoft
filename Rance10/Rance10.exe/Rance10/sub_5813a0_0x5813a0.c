// 函数: sub_5813a0
// 地址: 0x5813a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d376
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
void** eax_3 = &arg1[1]
*arg1 = 0
eax_3[5] = 0xf
eax_3[4] = 0

if (eax_3[5] u>= 0x10)
    eax_3 = *eax_3

*eax_3 = nullptr
int32_t var_8_1 = 0
sub_6cac10(&arg1[7])
void* var_2c = &arg1[7]
sub_5865e0(&arg1[0x17])
var_8_1.b = 1
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
sub_6cac10(&arg1[0x20])
arg1[0x30] = 0x3f800000
int32_t* var_2c_1 = &data_7fd4d8
arg1[0x31] = 0x3f800000
arg1[0x32] = 0x3f800000
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 0
int32_t var_2c_2 = sub_5869c0(&arg1[0x33], &arg1[0x33])
var_8_1.b = 2
sub_56a100(&arg1[0x36])
var_8_1.b = 3
*(arg1 + 0xe4) = data_7e7128
int32_t var_14 = 1
arg1[0x42] = 0
__builtin_memcpy(&arg1[0x3d], 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
arg1[0x43].w = 1
*(arg1 + 0x10e) = 0
arg1[0x44] = 0
arg1[0x45] = 0
arg1[0x46] = 0
sub_422540(&arg1[0x44], 3, &var_14)
arg1[0x47].b = 1
sub_5d8e90(&arg1[0x48])
__builtin_memset(&arg1[0x5c], 0, 0x39)
arg1[0x6b] = 0
void* eax_4 = &arg1[0x6d]
arg1[0x6c].b = 0
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
void* eax_5 = &arg1[0x73]
*(eax_5 + 0x14) = 0xf
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

*eax_5 = 0
var_8_1.b = 9
arg1[0x79].b = 0
arg1[0x7a] = 0
var_14 = 0xffffffff
arg1[0x7b] = 0
arg1[0x7c] = 0
arg1[0x7d] = 0
sub_422540(&arg1[0x7b], 0x10, &var_14)
arg1[0x7e] = 0x41f00000
arg1[0x7f] = 0
arg1[0x80] = 0
arg1[0x81].b = 0
arg1[0x82] = 0
arg1[0x83] = 0
arg1[0x84] = arg5
int32_t eax_6
eax_6.b = arg4
arg1[0x85] = 0
arg1[0x86] = 0
arg1[0x87].b = 0
arg1[0x88] = 0
arg1[0x89] = 0
arg1[0x8a].b = 0
arg1[0x8b] = 0
arg1[0x8c] = 0
arg1[0x8d] = 0
arg1[0x8e] = 0
arg1[0x90].b = eax_6.b
arg1[0x91] = arg3
arg1[0x92] = arg6
arg1[0x93] = arg2
arg1[0x8f] = 0x3dcccccd
*(arg1 + 0x241) = 0
int32_t* eax_10 = arg1[0x36]
*eax_10 = 0
eax_10[1] = 0
eax_10[2] = 0x3f800000
eax_10[3] = 0
eax_10[4] = 0
eax_10[5] = 0x3f800000
eax_10[6] = 0x3f800000
eax_10[7] = 0x3f800000
*(arg1[0x44] + 8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
