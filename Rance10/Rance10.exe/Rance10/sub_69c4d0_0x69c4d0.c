// 函数: sub_69c4d0
// 地址: 0x69c4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748950
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_1c = 0
int32_t var_8_1 = 0
void var_2c
int32_t* eax_3 = sub_697c40(&var_2c, __return_addr)
var_8_1.b = 1
char arg_20 = 1
int32_t arg_24 = *eax_3
void arg_28
sub_4274a0(&arg_28, &eax_3[1])
var_8_1.b = 0
void* var_28
int32_t var_20

if (var_28 != 0)
    sub_403160(var_28, (var_20 - var_28) s>> 2, 4)
void arg_8
void* var_3c_1 = &arg_8
int32_t var_40_2 = arg4
sub_69c760(arg3)
sub_698c50(&arg_8)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
