// 函数: sub_416d30
// 地址: 0x416d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728340
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax_7
int32_t ecx
eax_7, ecx = sub_417300(arg1, (arg2[1] - *arg2) s/ 0x7c)

if (eax_7.b != 0)
    int32_t var_8_1 = 0
    int32_t var_30_1 = ecx
    int32_t var_34_1 = 0
    int32_t var_38_1 = ecx
    arg1[1] = PSGSI1::Close(eax_7, arg2[1], *arg2, *arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
