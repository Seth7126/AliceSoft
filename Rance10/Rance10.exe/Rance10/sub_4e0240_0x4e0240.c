// 函数: sub_4e0240
// 地址: 0x4e0240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_734d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_98 = arg2
int32_t var_94 = arg3
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x764920, 0x11)
int32_t var_84_1 = 0
var_84_1.b = 1
char var_38
sub_4abfc0(&var_98, sub_417810(arg1 + 4, &var_20, &var_38, arg1 + 4, *(arg1 + 8)))
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
char* eax_11
eax_11.b = *(arg1 + 0xc) != 0
int32_t var_10_1 = 0
char* var_90 = eax_11
var_20 = 0
sub_403490(&var_20, 0x7648b4, 9)
int32_t var_84_3 = 2
var_84_3.b = 3
sub_4abfc0(&var_98, sub_409350(&var_90, &var_20, &var_38, &var_90))

if (var_24_1 u>= 0x10)
    sub_403160(var_38.d, var_24_1 + 1, 1)

int32_t var_84_4 = 0xffffffff
int32_t var_24_2 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (var_c_1 u>= 0x10)
    sub_403160(var_20.d, var_c_1 + 1, 1)

int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
sub_403490(&var_20, 0x7648c0, 0x19)
int32_t var_84_5 = 4
var_84_5.b = 5
sub_4abfc0(&var_98, 
    sub_422a40(arg1 + 0x10, &var_20, &var_38, arg1 + 0x10, *(arg1 + 0x14), *(arg1 + 0x18)))

if (var_24_2 u>= 0x10)
    sub_403160(var_38.d, var_24_2 + 1, 1)

int32_t var_84_6 = 0xffffffff
int32_t var_24_3 = 0xf
int32_t var_28_2 = 0
var_38 = 0

if (var_c_2 u>= 0x10)
    sub_403160(var_20.d, var_c_2 + 1, 1)

var_90 = *(arg1 + 0x20)
int32_t var_c_3 = 0xf
int32_t var_10_3 = 0
var_20 = 0
sub_403490(&var_20, 0x7648dc, 0x13)
int32_t var_84_7 = 6
var_84_7.b = 7
sub_4abfc0(&var_98, sub_409350(&var_90, &var_20, &var_38, &var_90))

if (var_24_3 u>= 0x10)
    sub_403160(var_38.d, var_24_3 + 1, 1)

int32_t var_84_8 = 0xffffffff
int32_t var_24_4 = 0xf
int32_t var_28_3 = 0
var_38 = 0

if (var_c_3 u>= 0x10)
    sub_403160(var_20.d, var_c_3 + 1, 1)

var_90 = *(arg1 + 0x24)
int32_t var_c_4 = 0xf
int32_t var_10_4 = 0
var_20 = 0
sub_403490(&var_20, 0x7648f0, 0x13)
int32_t var_84_9 = 8
var_84_9.b = 9
sub_4abfc0(&var_98, sub_409350(&var_90, &var_20, &var_38, &var_90))

if (var_24_4 u>= 0x10)
    sub_403160(var_38.d, var_24_4 + 1, 1)

int32_t var_84_10 = 0xffffffff
int32_t var_24_5 = 0xf
int32_t var_28_4 = 0
var_38 = 0

if (var_c_4 u>= 0x10)
    sub_403160(var_20.d, var_c_4 + 1, 1)

var_90 = *(arg1 + 0x28)
int32_t var_c_5 = 0xf
int32_t var_10_5 = 0
var_20 = 0
sub_403490(&var_20, 0x764850, 0x19)
int32_t var_84_11 = 0xa
var_84_11.b = 0xb
sub_4abfc0(&var_98, sub_422a40(&var_90, &var_20, &var_38, &var_90, *(arg1 + 0x2c), *(arg1 + 0x30)))

if (var_24_5 u>= 0x10)
    sub_403160(var_38.d, var_24_5 + 1, 1)

int32_t var_84_12 = 0xffffffff
int32_t var_24_6 = 0xf
int32_t var_28_5 = 0
var_38 = 0

if (var_c_5 u>= 0x10)
    sub_403160(var_20.d, var_c_5 + 1, 1)

var_90 = *(arg1 + 0x38)
int32_t var_c_6 = 0xf
int32_t var_10_6 = 0
var_20 = 0
sub_403490(&var_20, 0x76486c, 0x11)
int32_t var_84_13 = 0xc
var_84_13.b = 0xd
sub_4abfc0(&var_98, sub_417920(&var_90, &var_20, &var_38, &var_90))

if (var_24_6 u>= 0x10)
    sub_403160(var_38.d, var_24_6 + 1, 1)

int32_t var_84_14 = 0xffffffff
int32_t var_24_7 = 0xf
int32_t var_28_6 = 0
var_38 = 0

if (var_c_6 u>= 0x10)
    sub_403160(var_20.d, var_c_6 + 1, 1)

var_90 = *(arg1 + 0x3c)
int32_t var_c_7 = 0xf
int32_t var_10_7 = 0
var_20 = 0
sub_403490(&var_20, 0x764880, 0x13)
int32_t var_84_15 = 0xe
var_84_15.b = 0xf
sub_4abfc0(&var_98, sub_417920(&var_90, &var_20, &var_38, &var_90))

if (var_24_7 u>= 0x10)
    sub_403160(var_38.d, var_24_7 + 1, 1)

int32_t var_84_16 = 0xffffffff
int32_t var_24_8 = 0xf
int32_t var_28_7 = 0
var_38 = 0

if (var_c_7 u>= 0x10)
    sub_403160(var_20.d, var_c_7 + 1, 1)

var_90 = *(arg1 + 0x40)
int32_t var_c_8 = 0xf
int32_t var_10_8 = 0
var_20 = 0
sub_403490(&var_20, 0x764894, 0x1f)
int32_t var_84_17 = 0x10
var_84_17.b = 0x11
sub_4abfc0(&var_98, sub_422a40(&var_90, &var_20, &var_38, &var_90, *(arg1 + 0x44), *(arg1 + 0x48)))

if (var_24_8 u>= 0x10)
    sub_403160(var_38.d, var_24_8 + 1, 1)

int32_t var_84_18 = 0xffffffff
int32_t var_24_9 = 0xf
int32_t var_28_8 = 0
var_38 = 0

if (var_c_8 u>= 0x10)
    sub_403160(var_20.d, var_c_8 + 1, 1)

void* var_50
char* eax_65 = sub_4b6410(&var_50, arg1 + 0x50)
int32_t var_84_19 = 0x12

if (*(eax_65 + 0x14) u>= 0x10)
    eax_65 = *eax_65

var_90 = eax_65
int32_t var_c_9 = 0xf
int32_t var_10_9 = 0
var_20 = 0
sub_403490(&var_20, 0x764808, 0xd)
var_84_19.b = 0x13
var_84_19.b = 0x14
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_9 u>= 0x10)
    sub_403160(var_38.d, var_24_9 + 1, 1)

int32_t var_24_10 = 0xf
int32_t var_28_9 = 0
var_38 = 0

if (var_c_9 u>= 0x10)
    sub_403160(var_20.d, var_c_9 + 1, 1)

int32_t var_84_20 = 0xffffffff
int32_t var_c_10 = 0xf
int32_t var_10_10 = 0
var_20 = 0
int32_t var_3c

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

char* eax_75 = sub_4b6410(&var_50, arg1 + 0xc8)
int32_t var_84_21 = 0x15

if (*(eax_75 + 0x14) u>= 0x10)
    eax_75 = *eax_75

var_90 = eax_75
int32_t var_c_11 = 0xf
int32_t var_10_11 = 0
var_20 = 0
sub_403490(&var_20, 0x764818, 0x11)
var_84_21.b = 0x16
var_84_21.b = 0x17
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_10 u>= 0x10)
    sub_403160(var_38.d, var_24_10 + 1, 1)

int32_t var_24_11 = 0xf
int32_t var_28_10 = 0
var_38 = 0

if (var_c_11 u>= 0x10)
    sub_403160(var_20.d, var_c_11 + 1, 1)

int32_t var_84_22 = 0xffffffff
int32_t var_c_12 = 0xf
int32_t var_10_12 = 0
var_20 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

char* eax_85 = sub_4b6410(&var_50, arg1 + 0x140)
int32_t var_84_23 = 0x18

if (*(eax_85 + 0x14) u>= 0x10)
    eax_85 = *eax_85

var_90 = eax_85
int32_t var_c_13 = 0xf
int32_t var_10_13 = 0
var_20 = 0
sub_403490(&var_20, 0x76482c, 0xf)
var_84_23.b = 0x19
var_84_23.b = 0x1a
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_11 u>= 0x10)
    sub_403160(var_38.d, var_24_11 + 1, 1)

int32_t var_24_12 = 0xf
int32_t var_28_11 = 0
var_38 = 0

if (var_c_13 u>= 0x10)
    sub_403160(var_20.d, var_c_13 + 1, 1)

int32_t var_84_24 = 0xffffffff
int32_t var_c_14 = 0xf
int32_t var_10_14 = 0
var_20 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

int32_t var_c_15 = 0xf
int32_t var_10_15 = 0
var_20 = 0
sub_403490(&var_20, 0x76483c, 0x11)
int32_t var_84_25 = 0x1b
var_84_25.b = 0x1c
sub_4abfc0(&var_98, sub_4c1270(arg1 + 0x158, &var_20, &var_38, arg1 + 0x158))

if (var_24_12 u>= 0x10)
    sub_403160(var_38.d, var_24_12 + 1, 1)

int32_t var_84_26 = 0xffffffff
int32_t var_24_13 = 0xf
int32_t var_28_12 = 0
var_38 = 0

if (var_c_15 u>= 0x10)
    sub_403160(var_20.d, var_c_15 + 1, 1)

int32_t var_c_16 = 0xf
int32_t var_10_16 = 0
var_20 = 0
sub_403490(&var_20, 0x7649b0, 0xd)
int32_t var_84_27 = 0x1d
var_84_27.b = 0x1e
sub_4abfc0(&var_98, sub_409350(arg1 + 0x15c, &var_20, &var_38, arg1 + 0x15c))

if (var_24_13 u>= 0x10)
    sub_403160(var_38.d, var_24_13 + 1, 1)

int32_t var_84_28 = 0xffffffff
int32_t var_24_14 = 0xf
int32_t var_28_13 = 0
var_38 = 0

if (var_c_16 u>= 0x10)
    sub_403160(var_20.d, var_c_16 + 1, 1)

int32_t var_54 = 0xf
int32_t var_58 = 0
char var_68 = 0
sub_403490(&var_68, 0x7649c0, 0xb)
int32_t var_84_29 = 0x1f
var_84_29.b = 0x20
sub_4abfc0(&var_98, sub_409350(arg1 + 0x160, &var_68, &var_80, arg1 + 0x160))
int32_t var_6c

if (var_6c u>= 0x10)
    sub_403160(var_80.d, var_6c + 1, 1)

int32_t var_6c_1 = 0xf
int32_t var_70 = 0
var_80 = 0

if (var_54 u>= 0x10)
    sub_403160(var_68.d, var_54 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
