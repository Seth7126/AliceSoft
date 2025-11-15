// 函数: sub_691ac0
// 地址: 0x691ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "ps_bicubic.fx", 0xd)
int32_t var_8_1 = 0
void** var_4c
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_2 = 0xffffffff
var_4c[0xa] = 1

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, "ps_ssao.fx", 0xa)
int32_t var_8_3 = 1
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_4 = 0xffffffff
var_4c[0xa] = 2

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, "ps_dof.fx", 9)
int32_t var_8_5 = 2
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_6 = 0xffffffff
var_4c[0xa] = 3

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff3.fx", 0xf)
int32_t var_8_7 = 3
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_8 = 0xffffffff
var_4c[0xa] = 4

if (var_18_3 u>= 0x10)
    sub_403160(var_2c.d, var_18_3 + 1, 1)

int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff3w.fx", 0x10)
int32_t var_8_9 = 4
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_10 = 0xffffffff
var_4c[0xa] = 5

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff5.fx", 0xf)
int32_t var_8_11 = 5
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_12 = 0xffffffff
var_4c[0xa] = 6

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

int32_t var_18_6 = 0xf
int32_t var_1c_6 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff5g.fx", 0x10)
int32_t var_8_13 = 6
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_14 = 0xffffffff
var_4c[0xa] = 7

if (var_18_6 u>= 0x10)
    sub_403160(var_2c.d, var_18_6 + 1, 1)

int32_t var_18_7 = 0xf
int32_t var_1c_7 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff5w.fx", 0x10)
int32_t var_8_15 = 7
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_16 = 0xffffffff
var_4c[0xa] = 8

if (var_18_7 u>= 0x10)
    sub_403160(var_2c.d, var_18_7 + 1, 1)

int32_t var_18_8 = 0xf
int32_t var_1c_8 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff7.fx", 0xf)
int32_t var_8_17 = 8
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_18 = 0xffffffff
var_4c[0xa] = 9

if (var_18_8 u>= 0x10)
    sub_403160(var_2c.d, var_18_8 + 1, 1)

int32_t var_18_9 = 0xf
int32_t var_1c_9 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff9.fx", 0xf)
int32_t var_8_19 = 9
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_20 = 0xffffffff
var_4c[0xa] = 0xa

if (var_18_9 u>= 0x10)
    sub_403160(var_2c.d, var_18_9 + 1, 1)

int32_t var_18_10 = 0xf
int32_t var_1c_10 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff11.fx", 0x10)
int32_t var_8_21 = 0xa
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_22 = 0xffffffff
var_4c[0xa] = 0xb

if (var_18_10 u>= 0x10)
    sub_403160(var_2c.d, var_18_10 + 1, 1)

int32_t var_18_11 = 0xf
int32_t var_1c_11 = 0
var_2c = 0
sub_403490(&var_2c, "ps_shadeoff11w.fx", 0x11)
int32_t var_8_23 = 0xb
sub_4de760(arg1, &var_4c, &var_2c)
int32_t var_8_24 = 0xffffffff
var_4c[0xa] = 0xc

if (var_18_11 u>= 0x10)
    sub_403160(var_2c.d, var_18_11 + 1, 1)

int32_t result_1 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, "ps_shadeoff15w.fx", 0x11)
int32_t var_8_25 = 0xc
sub_4de760(arg1, &var_4c, &var_44)
var_4c[0xa] = 0xd
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
