// 函数: sub_523c00
// 地址: 0x523c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_7394a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_98 = arg2
int32_t var_94 = arg3
char* eax_5
eax_5.b = *(arg1 + 0x10) != 0
int32_t var_c = 0xf
char* var_90 = eax_5
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x766cf4, 0xf)
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

char* eax_13 = sub_4b6410(&var_80, arg1 + 0x7c)
int32_t var_84_3 = 2

if (*(eax_13 + 0x14) u>= 0x10)
    eax_13 = *eax_13

var_90 = eax_13
int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
sub_403490(&var_20, 0x766c90, 0x11)
var_84_3.b = 3
var_84_3.b = 4
sub_4abfc0(&var_98, sub_409240(&var_90, &var_20, &var_38, &var_90))

if (var_24_1 u>= 0x10)
    sub_403160(var_38.d, var_24_1 + 1, 1)

int32_t var_24_2 = 0xf
int32_t var_28_1 = 0
var_38 = 0

if (var_c_1 u>= 0x10)
    sub_403160(var_20.d, var_c_1 + 1, 1)

int32_t var_84_4 = 0xffffffff
int32_t var_c_2 = 0xf
int32_t var_10_2 = 0
var_20 = 0
int32_t var_6c

if (var_6c u>= 0x10)
    sub_403160(var_80, var_6c + 1, 1)

int32_t var_c_3 = 0xf
int32_t var_10_3 = 0
var_20 = 0
sub_403490(&var_20, 0x766ca4, 0x11)
int32_t var_84_5 = 5
var_84_5.b = 6
sub_4abfc0(&var_98, sub_409350(arg1 + 0x98, &var_20, &var_38, arg1 + 0x98))

if (var_24_2 u>= 0x10)
    sub_403160(var_38.d, var_24_2 + 1, 1)

int32_t var_84_6 = 0xffffffff
int32_t var_24_3 = 0xf
int32_t var_28_2 = 0
var_38 = 0

if (var_c_3 u>= 0x10)
    sub_403160(var_20.d, var_c_3 + 1, 1)

int32_t var_c_4 = 0xf
int32_t var_10_4 = 0
var_20 = 0
sub_403490(&var_20, 0x766c64, 0x15)
int32_t var_84_7 = 7
var_84_7.b = 8
sub_4abfc0(&var_98, sub_409350(arg1 + 0x9c, &var_20, &var_38, arg1 + 0x9c))

if (var_24_3 u>= 0x10)
    sub_403160(var_38.d, var_24_3 + 1, 1)

int32_t var_84_8 = 0xffffffff
int32_t var_24_4 = 0xf
int32_t var_28_3 = 0
var_38 = 0

if (var_c_4 u>= 0x10)
    sub_403160(var_20.d, var_c_4 + 1, 1)

int32_t var_c_5 = 0xf
int32_t var_10_5 = 0
var_20 = 0
sub_403490(&var_20, 0x766c7c, 0x11)
int32_t var_84_9 = 9
var_84_9.b = 0xa
sub_4abfc0(&var_98, 
    sub_422a40(arg1 + 0xa0, &var_20, &var_38, arg1 + 0xa0, *(arg1 + 0xa4), *(arg1 + 0xa8)))

if (var_24_4 u>= 0x10)
    sub_403160(var_38.d, var_24_4 + 1, 1)

int32_t var_84_10 = 0xffffffff
int32_t var_24_5 = 0xf
int32_t var_28_4 = 0
var_38 = 0

if (var_c_5 u>= 0x10)
    sub_403160(var_20.d, var_c_5 + 1, 1)

void* ecx_15 = *(arg1 + 0x94)
bool eax_40

if (ecx_15 != 0)
    eax_40 = sub_436410(ecx_15)

int32_t var_9c

if (ecx_15 == 0 || eax_40 != 0)
    var_9c = 0xffffffff
else
    var_9c = sub_435fc0(*(arg1 + 0x94))

int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
sub_403490(&var_50, 0x766dc0, 0xd)
int32_t var_84_11 = 0xb
var_84_11.b = 0xc
char var_68
sub_4abfc0(&var_98, sub_409350(&var_9c, &var_50, &var_68, &var_9c))
int32_t var_54

if (var_54 u>= 0x10)
    sub_403160(var_68.d, var_54 + 1, 1)

int32_t var_54_1 = 0xf
int32_t var_58 = 0
var_68 = 0

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
