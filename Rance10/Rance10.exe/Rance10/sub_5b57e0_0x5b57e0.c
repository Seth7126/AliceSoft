// 函数: sub_5b57e0
// 地址: 0x5b57e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d9c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
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
result[6].b = arg3
sub_5b5890(&result[7], arg4)
result[0xa] = 0
result[0xb] = 0
result[0xc] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
