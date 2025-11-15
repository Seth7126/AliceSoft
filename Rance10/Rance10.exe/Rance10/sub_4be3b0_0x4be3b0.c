// 函数: sub_4be3b0
// 地址: 0x4be3b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732c70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* var_1c = arg1
int32_t* result
int32_t ecx
result, ecx = sub_4272a0(arg1, (arg3 - arg2) s/ 0x18)

if (result.b != 0)
    int32_t var_34_1 = ecx
    int32_t var_8_1 = 0
    int32_t var_38_1 = 0.d
    int32_t var_3c_1 = ecx
    result = sub_433e80(result, arg3, arg2, *arg1)
    arg1[1] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
