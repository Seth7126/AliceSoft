// 函数: sub_5ef6d0
// 地址: 0x5ef6d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_566690(data_7fd4cc, arg3, arg2)

if (result == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void* var_1c
sub_5ef5c0(&var_1c, arg4)
int32_t var_8_1 = 0
char eax_3 = sub_59f780(result, &var_1c)
void* edx_1 = var_1c
int32_t ebx
ebx.b = eax_3 != 0
int32_t var_14

if (edx_1 != 0)
    sub_403160(edx_1, (var_14 - edx_1) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
