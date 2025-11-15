// 函数: sub_5f3d60
// 地址: 0x5f3d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741c81
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = (*(**arg1 + 0x20))(arg2)
int32_t eax_5 = (*(**arg1 + 0x24))(arg2)
int32_t eax_6 = (*(**arg1 + 0x20))(arg3)
int32_t eax_7 = (*(**arg1 + 0x24))(arg3)
int32_t var_64 = 0xa
int32_t var_60 = eax_4
int32_t var_50 = 0xa
int32_t var_4c = eax_5
int32_t var_3c = 0xa
int32_t var_38 = eax_6
int32_t var_28 = 0xa
int32_t var_24 = eax_7
int32_t var_8_1 = 0
int32_t var_7c
sub_603780(arg1[1], &var_7c, &var_64, &var_14)
var_8_1.b = 1
int32_t ebx
ebx.b = sub_602ea0()
var_8_1.b = 2

if (sub_602c60(&var_7c) != 0)
    void* ecx_9 = data_7fcbb4
    int32_t var_74
    
    if (ecx_9 != 0)
        sub_621db0(ecx_9, var_74)

var_7c = 0xffffffff
int32_t var_8_2 = 0xffffffff
`eh vector vbase constructor iterator'(&var_64, 0x14, 4, sub_601b50)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
