// 函数: sub_42e8b0
// 地址: 0x42e8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* eax_3

if (*arg1 != 0)
    char* eax_4 = arg1
    char i
    
    do
        i = *eax_4
        eax_4 = &eax_4[1]
    while (i != 0)
    eax_3 = eax_4 - &eax_4[1]
else
    eax_3 = nullptr

sub_403490(&var_2c, arg1, eax_3)
int32_t var_8_1 = 0
char var_5c
char* eax_5 = sub_405070(&var_5c, &var_2c)
var_8_1.b = 1
var_8_1.b = 2
char var_44[0x10]
int32_t ebx
ebx.b = sub_5f2400(sub_4176f0(eax_5.b, eax_5, &var_44, ".afa"))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44[0].d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44[0] = 0
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
