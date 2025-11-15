// 函数: sub_5c0630
// 地址: 0x5c0630
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
int32_t ecx_1 = sub_5b5890(&result[7], arg4)
int32_t var_20_1 = 8
__builtin_memset(&result[0xa], 0, 0x1c)
void* eax_4
eax_4.b = sub_42cb30(arg2, "(sprite)", ecx_1) != 0xffffffff
result[0x11].b = eax_4.b
result[0x12] = 0
result[0x13] = 0
result[0x14] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
