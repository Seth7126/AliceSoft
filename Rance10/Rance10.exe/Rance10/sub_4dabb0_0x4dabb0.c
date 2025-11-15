// 函数: sub_4dabb0
// 地址: 0x4dabb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731dd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
void* ecx
int32_t result = sub_4dad80(ecx, &var_1c, arg1)
void* ecx_1 = var_1c

if (ecx_1 != 0)
    result = sub_403160(ecx_1, (var_14 - ecx_1) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
