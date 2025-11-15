// 函数: sub_693b90
// 地址: 0x693b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_692530(arg1)
void* result_1 = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
void* result
int32_t ebx

if (sub_6cf8e0(&result_1, 0x84, arg2, 0x76f6d0, &result_1) == 0)
    result = result_1
    ebx.b = 0
else
    result = result_1
    
    if (result == var_18)
        ebx.b = 0
    else if (sub_681ed0(arg1 + 8, &result_1) == 0)
        result = result_1
        ebx.b = 0
    else
        *(arg1 + 4) = arg3
        
        if (sub_694140(arg1, arg3) == 0)
            result = result_1
            ebx.b = 0
        else
            result = result_1
            ebx.b = 1

if (result != 0)
    sub_403160(result, var_14 - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
