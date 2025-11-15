// 函数: sub_415b90
// 地址: 0x415b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_WPBDI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_dc = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
int32_t eax_3 = *arg1

if (eax_3 u<= 3)
    void* const var_f0_1
    
    switch (eax_3)
        case 0
            var_f0_1 = &data_75ce18
        case 1
            var_f0_1 = &data_75ce20
        case 2
            var_f0_1 = "const"
        case 3
            var_f0_1 = &data_75ce30
    
    sub_403450(var_f0_1)

char var_d4
char* eax_4 = sub_415e60(arg1, &var_d4, 1, 0)
var_8_1.b = 1
char var_bc
char* eax_5 = sub_419be0(&arg1[1], &var_bc)
var_8_1.b = 2
char var_a4
int32_t* eax_6 = sub_4175e0(eax_5, &var_2c, &var_a4, U" ?")
var_8_1.b = 3
char var_8c[0x10]
char* eax_7 = sub_4177a0(eax_6, eax_6, &var_8c, eax_5)
var_8_1.b = 4
var_8_1.b = 5
char var_74[0x10]
char var_5c
char* eax_11 =
    sub_417750(&arg1[0xb], sub_4176f0(eax_7.b, eax_7, &var_74,   ?"), &var_5c, &arg1[0xb])
var_8_1.b = 6
char var_44[0x10]
char* eax_12 = sub_4176f0(eax_11.b, eax_11, &var_44, " = ")
var_8_1.b = 7
sub_4177a0(eax_12, eax_12, arg2, eax_4)
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
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0
int32_t var_78

if (var_78 u>= 0x10)
    sub_403160(var_8c[0].d, var_78 + 1, 1)

int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c[0] = 0
int32_t var_90

if (var_90 u>= 0x10)
    sub_403160(var_a4.d, var_90 + 1, 1)

int32_t var_90_1 = 0xf
int32_t var_94 = 0
var_a4 = 0
int32_t var_a8

if (var_a8 u>= 0x10)
    sub_403160(var_bc.d, var_a8 + 1, 1)

int32_t var_a8_1 = 0xf
int32_t var_ac = 0
var_bc = 0
int32_t var_c0

if (var_c0 u>= 0x10)
    sub_403160(var_d4.d, var_c0 + 1, 1)

int32_t var_c0_1 = 0xf
int32_t var_c4 = 0
var_d4 = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
