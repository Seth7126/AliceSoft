// 函数: sub_547070
// 地址: 0x547070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_73a148
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_9c = arg2
int32_t var_98 = arg3
char* eax_6 = sub_4b6410(&var_80, arg1 + 8)
int32_t var_84_1 = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

char* var_90 = eax_6
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
sub_403490(&var_20, 0x766ec0, 0xd)
var_84_1.b = 1
var_84_1.b = 2
char var_50
sub_4abfc0(&var_9c, sub_409240(&var_90, &var_20, &var_50, &var_90))
int32_t var_3c

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t var_3c_1 = 0xf
int32_t var_40 = 0
var_50 = 0

if (var_c u>= 0x10)
    sub_403160(var_20.d, var_c + 1, 1)

int32_t var_84_2 = 0xffffffff
int32_t var_c_1 = 0xf
int32_t var_10_1 = 0
var_20 = 0
int32_t var_6c

if (var_6c u>= 0x10)
    sub_403160(var_80, var_6c + 1, 1)

int32_t var_94 = *(arg1 + 0x3c)
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_403490(&var_38, 0x766e98, 0x25)
int32_t var_84_3 = 3
var_84_3.b = 4
char var_68
sub_4abfc0(&var_9c, 
    sub_4b0f20(&var_94, &var_38, &var_68, &var_94, *(arg1 + 0x40), *(arg1 + 0x48), *(arg1 + 0x4c)))
int32_t var_54

if (var_54 u>= 0x10)
    sub_403160(var_68.d, var_54 + 1, 1)

int32_t var_54_1 = 0xf
int32_t var_58 = 0
var_68 = 0

if (var_24 u>= 0x10)
    sub_403160(var_38.d, var_24 + 1, 1)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
