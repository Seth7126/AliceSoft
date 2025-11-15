// 函数: sub_469b40
// 地址: 0x469b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cdc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_60 = arg1
int32_t var_64 = 0
void* var_5c
char* eax_3 = sub_469e80(&var_5c, arg2 + 0x5c)
int32_t var_8_1 = 0
char var_44[0x10]
char* eax_4 = sub_469c50(&var_44, arg2 + 0x60)
var_8_1.b = 1
char var_2c[0x10]
char* eax_5 = sub_4177a0(eax_4, eax_4, &var_2c, eax_3)
var_8_1.b = 2
sub_4176f0(eax_5.b, eax_5, arg1, "\r\n")
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c[0].d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c[0] = 0
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44[0].d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44[0] = 0
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
