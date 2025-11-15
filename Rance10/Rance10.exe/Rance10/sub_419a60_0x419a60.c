// 函数: sub_419a60
// 地址: 0x419a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7285eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
*arg2 = *arg1
arg2[6] = 0xf
arg2[5] = 0
char* eax_4

if (arg2[6] u< 0x10)
    eax_4 = &arg2[1]
else
    eax_4 = arg2[1]

*eax_4 = 0
sub_403590(&arg2[1], &arg1[1], 0, 0xffffffff)
int32_t var_8_1 = 0
sub_416fb0(&arg2[7], &arg1[7])

switch (*arg1 - 0x12)
    case 0
        *arg2 = 0xa
    case 1
        *arg2 = 0xb
    case 2
        *arg2 = 0xc
    case 3
        *arg2 = 0xd
    case 0x21
        *arg2 = 0x2f
    case 0x31
        *arg2 = 0x3f
    case 0x3e
        *arg2 = 0x4f
    case 0x4b
        *arg2 = 0x5c

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
