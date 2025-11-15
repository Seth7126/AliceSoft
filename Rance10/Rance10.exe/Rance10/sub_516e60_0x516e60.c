// 函数: sub_516e60
// 地址: 0x516e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738910
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
void** ecx = *arg2
arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_4

if (cond:0)
    eax_4 = arg1
else
    eax_4 = *arg1

*eax_4 = 0
sub_403590(arg1, ecx, 0, 0xffffffff)
int32_t var_8_1 = 0
_memset(&arg1[6], 0, 0x74)
arg2 = &arg1[6]
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xb] = 0xf
bool cond:1 = arg1[0xb] u< 0x10
arg1[0xa] = 0
char* eax_5

if (cond:1)
    eax_5 = &arg1[6]
else
    eax_5 = arg1[6]

*eax_5 = 0
var_8_1.b = 1
sub_510430(&arg1[0xc])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
