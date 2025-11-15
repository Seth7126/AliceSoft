// 函数: sub_557ed0
// 地址: 0x557ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73af10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_7c = arg2
int32_t var_78 = arg3
int32_t eax_5
eax_5.b = *(arg1 + 0x44) != 0
int32_t var_18 = 0xf
int32_t var_80 = eax_5
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x767604, 0xf)
int32_t var_8_1 = 0
var_8_1.b = 1
char var_44
sub_4abfc0(&var_7c, sub_409350(&var_80, &var_2c, &var_44, &var_80))
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_8_2 = 0xffffffff
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x767614, 0xf)
int32_t var_8_3 = 2
*(arg1 + 0xc)
var_8_3.b = 3
sub_4abfc0(&var_7c, sub_507e90(arg1 + 8, &var_2c, &var_44, arg1 + 8))

if (var_30_1 u>= 0x10)
    sub_403160(var_44.d, var_30_1 + 1, 1)

int32_t var_8_4 = 0xffffffff
int32_t var_30_2 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x767624, 0xf)
int32_t var_8_5 = 4
*(arg1 + 0x14)
var_8_5.b = 5
sub_4abfc0(&var_7c, sub_507e90(arg1 + 0x10, &var_2c, &var_44, arg1 + 0x10))

if (var_30_2 u>= 0x10)
    sub_403160(var_44.d, var_30_2 + 1, 1)

int32_t var_8_6 = 0xffffffff
int32_t var_30_3 = 0xf
int32_t var_34_2 = 0
var_44 = 0

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_403490(&var_2c, 0x767634, 0xf)
int32_t var_8_7 = 6
*(arg1 + 0x1c)
var_8_7.b = 7
sub_4abfc0(&var_7c, sub_507e90(arg1 + 0x18, &var_2c, &var_44, arg1 + 0x18))

if (var_30_3 u>= 0x10)
    sub_403160(var_44.d, var_30_3 + 1, 1)

int32_t var_8_8 = 0xffffffff
int32_t var_30_4 = 0xf
int32_t var_34_3 = 0
var_44 = 0

if (var_18_3 u>= 0x10)
    sub_403160(var_2c.d, var_18_3 + 1, 1)

int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x767644, 0xf)
int32_t var_8_9 = 8
*(arg1 + 0x24)
var_8_9.b = 9
sub_4abfc0(&var_7c, sub_507e90(arg1 + 0x20, &var_2c, &var_44, arg1 + 0x20))

if (var_30_4 u>= 0x10)
    sub_403160(var_44.d, var_30_4 + 1, 1)

int32_t var_8_10 = 0xffffffff
int32_t var_30_5 = 0xf
int32_t var_34_4 = 0
var_44 = 0

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_84 = *(arg1 + 0x30)
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x767654, 0x25)
int32_t var_8_11 = 0xa
var_8_11.b = 0xb
char var_74
sub_4abfc0(&var_7c, 
    sub_4b0f20(&var_84, &var_5c, &var_74, &var_84, *(arg1 + 0x34), *(arg1 + 0x3c), *(arg1 + 0x40)))
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
