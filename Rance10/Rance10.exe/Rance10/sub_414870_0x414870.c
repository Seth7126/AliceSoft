// 函数: sub_414870
// 地址: 0x414870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ffb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
arg1[6] = 0xf
arg1[5] = 0
char* eax_4

if (arg1[6] u< 0x10)
    eax_4 = &arg1[1]
else
    eax_4 = arg1[1]

*eax_4 = 0
sub_403590(&arg1[1], &arg2[1], 0, 0xffffffff)
int32_t var_8_1 = 0
sub_416fb0(&arg1[7], &arg2[7])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
