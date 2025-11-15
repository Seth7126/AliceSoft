// 函数: sub_60e9f0
// 地址: 0x60e9f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743203
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
result[4] = 0
result[5] = 0
result[5] = 0xf
bool cond:0 = result[5] u< 0x10
result[4] = 0
char* result_2

if (cond:0)
    result_2 = result
else
    result_2 = *result

void** esi = arg2
*result_2 = 0
sub_403590(arg1, esi, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_60ebd0(&result[6], &esi[6])
var_8_1.b = 1
result[9] = esi[9]
result[0xa] = esi[0xa]
arg2 = &result[0xb]
sub_60ecf0(&result[0xb], &esi[0xb])
fsbase->NtTib.ExceptionList = ExceptionList
return result
