// 函数: sub_5b48c0
// 地址: 0x5b48c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f3b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* result
int32_t ecx
result, ecx = sub_56e3a0(arg2)
int32_t var_8_1 = 0
int32_t var_34_1 = ecx
int32_t var_38 = 0.d
int32_t var_3c = ecx
sub_5b5400(result, arg1[1], *arg1, result)
int32_t edx_1 = arg1[1]
void* ecx_2 = *arg1

if (ecx_2 != 0)
    int32_t var_34_2 = arg2
    void* var_38_1 = ecx_2
    sub_5b5350(ecx_2, edx_1)
    void* ecx_3 = *arg1
    sub_403160(ecx_3, (arg1[2] - ecx_3) s>> 6, 0x40)

arg1[2] = &result[arg2 * 0x10]
arg1[1] = ((edx_1 - ecx_2) & 0xffffffc0) + result
*arg1 = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
