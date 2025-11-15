// 函数: sub_5dfa60
// 地址: 0x5dfa60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741741
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_5dfdf0(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    void* eax_3 = arg1
    arg1 = &result[4]
    int32_t* ecx_1 = *eax_3
    result[4] = *ecx_1
    sub_4275f0(&result[5], &ecx_1[1])
    result[8] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
