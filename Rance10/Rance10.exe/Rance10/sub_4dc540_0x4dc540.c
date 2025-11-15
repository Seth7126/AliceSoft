// 函数: sub_4dc540
// 地址: 0x4dc540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_7347d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_98 = arg2
int32_t var_94 = arg3
char* eax_4 = sub_4b6410(&var_80, arg1 + 8)
int32_t var_84_1 = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

char* var_90 = eax_4
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x7646d8, 0x11)
var_84_1.b = 1
var_84_1.b = 2
char var_38
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))
int32_t var_24

if (var_24 u>= 0x10)
    sub_403160(var_38.d, var_24 + 1, 1)

int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38 = 0

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t var_84_2 = 0xffffffff
int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
int32_t var_6c

if (var_6c u>= 0x10)
    sub_403160(var_80, var_6c + 1, 1)

var_90 = *(arg1 + 0x2c)
int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
sub_403490(&var_20, 0x7646ec, 0x25)
int32_t var_84_3 = 3
var_84_3.b = 4
sub_4abfc0(&var_98, 
    sub_4b0f20(&var_90, &var_20, &var_38, &var_90, *(arg1 + 0x30), *(arg1 + 0x38), *(arg1 + 0x3c)))

if (var_24_1 u>= 0x10)
    sub_403160(var_38.d, var_24_1 + 1, 1)

int32_t var_84_4 = 0xffffffff
int32_t var_24_2 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (var_c_2 u>= 0x10)
    sub_403160(var_20.d, var_c_2 + 1, 1)

int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
sub_403490(&var_50, 0x764464, 0x13)
int32_t var_84_5 = 5
var_84_5.b = 6
char var_68
sub_4abfc0(&var_98, sub_409350(arg1 + 0x84, &var_50, &var_68, arg1 + 0x84))
int32_t var_54

if (var_54 u>= 0x10)
    sub_403160(var_68.d, var_54 + 1, 1)

int32_t var_84_6 = 0xffffffff
int32_t var_54_1 = 0xf
int32_t var_58 = 0
var_68 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t var_3c_1 = 0xf
int32_t var_40_1 = 0
var_50 = 0
sub_4ddd90(arg1 + 0x40, arg2, arg3)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
