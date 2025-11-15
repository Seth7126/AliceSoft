// 函数: sub_4f6530
// 地址: 0x4f6530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7364e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_7fcba4
void* result_1 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
int32_t ebx

if (sub_51b250(ecx + 0xf4, arg1, &result_1) != 0)
    ebx.b = sub_4f5e00(&result_1, arg2)
else
    ebx.b = 0

void* result = result_1

if (result != 0)
    sub_403160(result, (var_18 - result) s>> 2, 4)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
