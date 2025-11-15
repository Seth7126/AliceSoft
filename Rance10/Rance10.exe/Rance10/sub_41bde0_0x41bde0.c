// 函数: sub_41bde0
// 地址: 0x41bde0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728a03
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

*result_2 = 0
sub_403590(arg1, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
result[0xb] = 0xf
result[0xa] = 0
char* eax_3

if (result[0xb] u< 0x10)
    eax_3 = &result[6]
else
    eax_3 = result[6]

*eax_3 = 0
sub_403590(&result[6], &arg2[6], 0, 0xffffffff)
var_8_1.b = 1
result[0x11] = 0xf
result[0x10] = 0
result[0xc].b = 0
sub_403590(&result[0xc], &arg2[0xc], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return result
