// 函数: sub_4f60d0
// 地址: 0x4f60d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7364b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_7fcba4
void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_4f4560(ecx + 0x124, &var_20, arg2)
char* result = sub_4f5e00(&var_20, arg1)
void* ecx_2 = var_20

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (var_18 - ecx_2) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
