// 函数: sub_427ba0
// 地址: 0x427ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_427910(arg1)
void* result_1 = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
char eax_3 = sub_67edf0(arg2, &result_1)
char eax_4

if (eax_3 != 0)
    eax_4 = sub_427e50(arg1, &result_1, arg3)

int32_t ebx

if (eax_3 == 0 || eax_4 == 0)
    ebx.b = 0
else
    if (arg1 + 4 != arg2)
        sub_403590(arg1 + 4, arg2, 0, 0xffffffff)
    
    ebx.b = 1

void* result = result_1

if (result != 0)
    sub_403160(result, var_14 - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
