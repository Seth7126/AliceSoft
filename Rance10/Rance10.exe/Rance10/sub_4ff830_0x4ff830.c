// 函数: sub_4ff830
// 地址: 0x4ff830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736c83
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_3

if (cond:0)
    eax_3 = arg1
else
    eax_3 = *arg1

*eax_3 = 0
sub_403490(arg1, 0x75d20f, nullptr)
int32_t var_8_1 = 0
sub_6437f0(&arg1[6])
var_8_1.b = 1
__builtin_memcpy(&arg1[0x13], 
    "\xc8\x00\x00\x00\x10\x00\x00\x00\x96\x00\x00\x00\x08\x00\x00\x00\x02\x00\x00\x00", 0x14)
arg1[0x1d] = 0xf
arg1[0x1c] = 0
arg1[0x18].b = 0
sub_403490(&arg1[0x18], 0x75d20e, nullptr)
arg1[0x1e] = 0
sub_6437f0(&arg1[0x1f])
int128_t xmm0 = data_79a8b0
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
arg1[0x2f] = 0xffffffff
arg1[0x30] = 0
arg1[0x31].b = 1
*(arg1 + 0x88) = xmm0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
