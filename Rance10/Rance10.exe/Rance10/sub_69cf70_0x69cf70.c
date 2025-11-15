// 函数: sub_69cf70
// 地址: 0x69cf70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748a5c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_14_1 = *(arg1 + 4) + 0xc8
var_8_1.b = 1

if (arg2 == 0)
    sub_6d090a()
    noreturn

int32_t __saved_ebp
int32_t ebx
ebx.b = (*(*arg2 + 8))(__security_cookie ^ &__saved_ebp)
var_8_1.b = 2
int32_t var_8_2 = 3
void arg_4

if (arg2 != 0)
    (*(*arg2 + 0x10))(arg2 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
