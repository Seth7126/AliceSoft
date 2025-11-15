// 函数: sub_4bf470
// 地址: 0x4bf470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_732e80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_98 = arg2
int32_t var_94 = arg3
char* eax_5
eax_5.b = *(arg1 + 4) != 0
int32_t var_c = 0xf
char* var_90 = eax_5
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x76231c, 0xf)
int32_t var_84_1 = 0
var_84_1.b = 1
char var_38
sub_4abfc0(&var_98, sub_409350(&var_90, &var_20, &var_38, &var_90))
int32_t var_24

if (var_24 u>= 0x10)
    sub_403160(var_38.d, var_24 + 1, 1)

int32_t var_84_2 = 0xffffffff
int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38 = 0

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
sub_403490(&var_20, 0x7622f0, 0x29)
int32_t var_84_3 = 2
var_84_3.b = 3
sub_4abfc0(&var_98, sub_422a40(arg1 + 8, &var_20, &var_38, arg1 + 8, *(arg1 + 0xc), *(arg1 + 0x10)))

if (var_24_1 u>= 0x10)
    sub_403160(var_38.d, var_24_1 + 1, 1)

int32_t var_84_4 = 0xffffffff
int32_t var_24_2 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (var_c_1 u>= 0x10)
    sub_403160(var_20.d, var_c_1 + 1, 1)

void* var_50
char* eax_19 = sub_4b6410(&var_50, arg1 + 0x14)
int32_t var_84_5 = 4

if (*(eax_19 + 0x14) u>= 0x10)
    eax_19 = *eax_19

var_90 = eax_19
int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
sub_403490(&var_20, 0x7622e0, 0xd)
var_84_5.b = 5
var_84_5.b = 6
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_2 u>= 0x10)
    sub_403160(var_38.d, var_24_2 + 1, 1)

int32_t var_24_3 = 0xf
int32_t var_28_2 = 0
var_38 = 0

if (var_c_2 u>= 0x10)
    sub_403160(var_20.d, var_c_2 + 1, 1)

int32_t var_84_6 = 0xffffffff
int32_t var_c_3 = 0xf
int32_t var_10_3 = 0
var_20 = 0
int32_t var_3c

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

char* eax_29 = sub_4b6410(&var_50, arg1 + 0x2c)
int32_t var_84_7 = 7

if (*(eax_29 + 0x14) u>= 0x10)
    eax_29 = *eax_29

var_90 = eax_29
int32_t var_c_4 = 0xf
int32_t var_10_4 = 0
var_20 = 0
sub_403490(&var_20, 0x762260, 0x11)
var_84_7.b = 8
var_84_7.b = 9
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_3 u>= 0x10)
    sub_403160(var_38.d, var_24_3 + 1, 1)

int32_t var_24_4 = 0xf
int32_t var_28_3 = 0
var_38 = 0

if (var_c_4 u>= 0x10)
    sub_403160(var_20.d, var_c_4 + 1, 1)

int32_t var_84_8 = 0xffffffff
int32_t var_c_5 = 0xf
int32_t var_10_5 = 0
var_20 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

int32_t var_c_6 = 0xf
int32_t var_10_6 = 0
var_20 = 0
sub_403490(&var_20, 0x762250, 0xe)
int32_t var_84_9 = 0xa
sub_4abfc0(&var_98, &var_20)
int32_t var_84_10 = 0xffffffff

if (var_c_6 u>= 0x10)
    sub_403160(var_20.d, var_c_6 + 1, 1)

char* eax_41 = sub_4b6410(&var_50, arg1 + 0x48)
int32_t var_84_11 = 0xb

if (*(eax_41 + 0x14) u>= 0x10)
    eax_41 = *eax_41

var_90 = eax_41
int32_t var_c_7 = 0xf
int32_t var_10_7 = 0
var_20 = 0
sub_403490(&var_20, 0x762240, 0xf)
var_84_11.b = 0xc
var_84_11.b = 0xd
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_4 u>= 0x10)
    sub_403160(var_38.d, var_24_4 + 1, 1)

int32_t var_24_5 = 0xf
int32_t var_28_4 = 0
var_38 = 0

if (var_c_7 u>= 0x10)
    sub_403160(var_20.d, var_c_7 + 1, 1)

int32_t var_84_12 = 0xffffffff
int32_t var_c_8 = 0xf
int32_t var_10_8 = 0
var_20 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

char* eax_51 = sub_4b6410(&var_50, arg1 + 0x60)
int32_t var_84_13 = 0xe

if (*(eax_51 + 0x14) u>= 0x10)
    eax_51 = *eax_51

var_90 = eax_51
int32_t var_c_9 = 0xf
int32_t var_10_9 = 0
var_20 = 0
sub_403490(&var_20, 0x76222c, 0x13)
var_84_13.b = 0xf
var_84_13.b = 0x10
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_5 u>= 0x10)
    sub_403160(var_38.d, var_24_5 + 1, 1)

int32_t var_24_6 = 0xf
int32_t var_28_5 = 0
var_38 = 0

if (var_c_9 u>= 0x10)
    sub_403160(var_20.d, var_c_9 + 1, 1)

int32_t var_84_14 = 0xffffffff
int32_t var_c_10 = 0xf
int32_t var_10_10 = 0
var_20 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

int32_t var_c_11 = 0xf
int32_t var_10_11 = 0
var_20 = 0
sub_403490(&var_20, 0x7622c4, 0x19)
int32_t var_84_15 = 0x11
var_84_15.b = 0x12
sub_4abfc0(&var_98, sub_409350(arg1 + 0x78, &var_20, &var_38, arg1 + 0x78))

if (var_24_6 u>= 0x10)
    sub_403160(var_38.d, var_24_6 + 1, 1)

int32_t var_84_16 = 0xffffffff
int32_t var_24_7 = 0xf
int32_t var_28_6 = 0
var_38 = 0

if (var_c_11 u>= 0x10)
    sub_403160(var_20.d, var_c_11 + 1, 1)

int32_t var_c_12 = 0xf
int32_t var_10_12 = 0
var_20 = 0
sub_403490(&var_20, 0x7622ac, 0x15)
int32_t var_84_17 = 0x13
var_84_17.b = 0x14
sub_4abfc0(&var_98, sub_409350(arg1 + 0x7c, &var_20, &var_38, arg1 + 0x7c))

if (var_24_7 u>= 0x10)
    sub_403160(var_38.d, var_24_7 + 1, 1)

int32_t var_84_18 = 0xffffffff
int32_t var_24_8 = 0xf
int32_t var_28_7 = 0
var_38 = 0

if (var_c_12 u>= 0x10)
    sub_403160(var_20.d, var_c_12 + 1, 1)

int32_t var_c_13 = 0xf
int32_t var_10_13 = 0
var_20 = 0
sub_403490(&var_20, 0x76228c, 0x1d)
int32_t var_84_19 = 0x15
var_84_19.b = 0x16
sub_4abfc0(&var_98, sub_409350(arg1 + 0x80, &var_20, &var_38, arg1 + 0x80))

if (var_24_8 u>= 0x10)
    sub_403160(var_38.d, var_24_8 + 1, 1)

int32_t var_84_20 = 0xffffffff
int32_t var_24_9 = 0xf
int32_t var_28_8 = 0
var_38 = 0

if (var_c_13 u>= 0x10)
    sub_403160(var_20.d, var_c_13 + 1, 1)

int32_t var_c_14 = 0xf
int32_t var_10_14 = 0
var_20 = 0
sub_403490(&var_20, 0x762274, 0x15)
int32_t var_84_21 = 0x17
var_84_21.b = 0x18
sub_4abfc0(&var_98, 
    sub_422a40(arg1 + 0x84, &var_20, &var_38, arg1 + 0x84, *(arg1 + 0x88), *(arg1 + 0x8c)))

if (var_24_9 u>= 0x10)
    sub_403160(var_38.d, var_24_9 + 1, 1)

int32_t var_84_22 = 0xffffffff
int32_t var_24_10 = 0xf
int32_t var_28_9 = 0
var_38 = 0

if (var_c_14 u>= 0x10)
    sub_403160(var_20.d, var_c_14 + 1, 1)

char* eax_85 = sub_4b6410(&var_50, arg1 + 0x94)
int32_t var_84_23 = 0x19

if (*(eax_85 + 0x14) u>= 0x10)
    eax_85 = *eax_85

var_90 = eax_85
int32_t var_c_15 = 0xf
int32_t var_10_15 = 0
var_20 = 0
sub_403490(&var_20, 0x76240c, 0xf)
var_84_23.b = 0x1a
var_84_23.b = 0x1b
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_10 u>= 0x10)
    sub_403160(var_38.d, var_24_10 + 1, 1)

int32_t var_24_11 = 0xf
int32_t var_28_10 = 0
var_38 = 0

if (var_c_15 u>= 0x10)
    sub_403160(var_20.d, var_c_15 + 1, 1)

int32_t var_84_24 = 0xffffffff
int32_t var_c_16 = 0xf
int32_t var_10_16 = 0
var_20 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

var_90 = *(arg1 + 0xb4)
int32_t var_c_17 = 0xf
int32_t var_10_17 = 0
var_20 = 0
sub_403490(&var_20, 0x7623e8, 0x21)
int32_t var_84_25 = 0x1c
var_84_25.b = 0x1d
sub_4abfc0(&var_98, 
    sub_4b0f20(&var_90, &var_20, &var_38, &var_90, *(arg1 + 0xb8), *(arg1 + 0xc0), *(arg1 + 0xc4)))

if (var_24_11 u>= 0x10)
    sub_403160(var_38.d, var_24_11 + 1, 1)

int32_t var_84_26 = 0xffffffff
int32_t var_24_12 = 0xf
int32_t var_28_11 = 0
var_38 = 0

if (var_c_17 u>= 0x10)
    sub_403160(var_20.d, var_c_17 + 1, 1)

int32_t var_c_18 = 0xf
int32_t var_10_18 = 0
var_20 = 0
sub_403490(&var_20, 0x7623d4, 0x11)
int32_t var_84_27 = 0x1e
var_84_27.b = 0x1f
sub_4abfc0(&var_98, sub_4c1270(arg1 + 0xc8, &var_20, &var_38, arg1 + 0xc8))

if (var_24_12 u>= 0x10)
    sub_403160(var_38.d, var_24_12 + 1, 1)

int32_t var_84_28 = 0xffffffff
int32_t var_24_13 = 0xf
int32_t var_28_12 = 0
var_38 = 0

if (var_c_18 u>= 0x10)
    sub_403160(var_20.d, var_c_18 + 1, 1)

var_90 = *(arg1 + 0xd0)
int32_t var_c_19 = 0xf
int32_t var_10_19 = 0
var_20 = 0
sub_403490(&var_20, 0x7623c0, 0x13)
int32_t var_84_29 = 0x20
var_84_29.b = 0x21
sub_4abfc0(&var_98, sub_409350(&var_90, &var_20, &var_38, &var_90))

if (var_24_13 u>= 0x10)
    sub_403160(var_38.d, var_24_13 + 1, 1)

int32_t var_84_30 = 0xffffffff
int32_t var_24_14 = 0xf
int32_t var_28_13 = 0
var_38 = 0

if (var_c_19 u>= 0x10)
    sub_403160(var_20.d, var_c_19 + 1, 1)

var_90 = *(arg1 + 0xd4)
int32_t var_c_20 = 0xf
int32_t var_10_20 = 0
var_20 = 0
sub_403490(&var_20, 0x762460, 0x13)
int32_t var_84_31 = 0x22
var_84_31.b = 0x23
sub_4abfc0(&var_98, sub_409350(&var_90, &var_20, &var_38, &var_90))

if (var_24_14 u>= 0x10)
    sub_403160(var_38.d, var_24_14 + 1, 1)

int32_t var_84_32 = 0xffffffff
int32_t var_24_15 = 0xf
int32_t var_28_14 = 0
var_38 = 0

if (var_c_20 u>= 0x10)
    sub_403160(var_20.d, var_c_20 + 1, 1)

var_90 = *(arg1 + 0xd8)
int32_t var_c_21 = 0xf
int32_t var_10_21 = 0
var_20 = 0
sub_403490(&var_20, 0x762444, 0x19)
int32_t var_84_33 = 0x24
var_84_33.b = 0x25
sub_4abfc0(&var_98, sub_422a40(&var_90, &var_20, &var_38, &var_90, *(arg1 + 0xdc), *(arg1 + 0xe0)))

if (var_24_15 u>= 0x10)
    sub_403160(var_38.d, var_24_15 + 1, 1)

int32_t var_84_34 = 0xffffffff
int32_t var_24_16 = 0xf
int32_t var_28_15 = 0
var_38 = 0

if (var_c_21 u>= 0x10)
    sub_403160(var_20.d, var_c_21 + 1, 1)

var_90 = *(arg1 + 0xe8)
int32_t var_c_22 = 0xf
int32_t var_10_22 = 0
var_20 = 0
sub_403490(&var_20, 0x762430, 0x11)
int32_t var_84_35 = 0x26
var_84_35.b = 0x27
sub_4abfc0(&var_98, sub_417920(&var_90, &var_20, &var_38, &var_90))

if (var_24_16 u>= 0x10)
    sub_403160(var_38.d, var_24_16 + 1, 1)

int32_t var_84_36 = 0xffffffff
int32_t var_24_17 = 0xf
int32_t var_28_16 = 0
var_38 = 0

if (var_c_22 u>= 0x10)
    sub_403160(var_20.d, var_c_22 + 1, 1)

var_90 = *(arg1 + 0xec)
int32_t var_24_18 = 0xf
int32_t var_28_17 = 0
var_38 = 0
sub_403490(&var_38, 0x76241c, 0x13)
int32_t var_84_37 = 0x28
var_84_37.b = 0x29
sub_4abfc0(&var_98, sub_417920(&var_90, &var_38, &var_20, &var_90))

if (var_c_22 u>= 0x10)
    sub_403160(var_20.d, var_c_22 + 1, 1)

int32_t var_c_23 = 0xf
sub_403730(&var_20, 0)
int32_t var_84_38 = 0xffffffff
sub_403320(&var_38)
var_90 = *(arg1 + 0xf0)
sub_403360(&var_50, 0x762354)
int32_t var_84_39 = 0x2a
var_84_39.b = 0x2b
sub_4abfc0(&var_98, sub_422a40(&var_90, &var_50, &var_38, &var_90, *(arg1 + 0xf4), *(arg1 + 0xf8)))
sub_403320(&var_38)
int32_t var_84_40 = 0xffffffff
sub_403320(&var_50)
sub_403360(&var_50, 0x762348)
int32_t var_84_41 = 0x2c
var_84_41.b = 0x2d
sub_4abfc0(&var_98, sub_409350(arg1 + 0x100, &var_50, &var_38, arg1 + 0x100))
sub_403320(&var_38)
int32_t var_84_42 = 0xffffffff
sub_403320(&var_50)
sub_403360(&var_50, 0x762338)
int32_t var_84_43 = 0x2e
var_84_43.b = 0x2f
sub_4abfc0(&var_98, sub_409350(arg1 + 0x104, &var_50, &var_38, arg1 + 0x104))
sub_403320(&var_38)
int32_t var_84_44 = 0xffffffff
sub_403320(&var_50)
sub_403360(&var_50, 0x76232c)
int32_t var_84_45 = 0x30
var_84_45.b = 0x31
sub_4abfc0(&var_98, sub_409350(arg1 + 0x108, &var_50, &var_38, arg1 + 0x108))
sub_403320(&var_38)
int32_t var_84_46 = 0xffffffff
sub_403320(&var_50)
char* eax_147
eax_147.b = *(arg1 + 0x10c) != 0
var_90 = eax_147
sub_403360(&var_50, 0x7623b0)
int32_t var_84_47 = 0x32
var_84_47.b = 0x33
sub_4abfc0(&var_98, sub_409350(&var_90, &var_50, &var_38, &var_90))
sub_403320(&var_38)
int32_t var_84_48 = 0xffffffff
sub_403320(&var_50)
void var_68
sub_403360(&var_68, 0x76239c)
int32_t var_84_49 = 0x34
var_84_49.b = 0x35
sub_4abfc0(&var_98, sub_409350(arg1 + 0x110, &var_68, &var_80, arg1 + 0x110))
sub_403320(&var_80)
sub_403320(&var_68)
char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
