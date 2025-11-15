// 函数: sub_5f5840
// 地址: 0x5f5840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741f11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = (*(**arg1 + 0x20))(arg2)
int32_t var_34 = 0xa
int32_t var_30 = eax_4
int32_t var_8_1 = 0
int32_t var_20
sub_603780(arg1[1], &var_20, &var_34, &var_20)
var_8_1.b = 1
int32_t result = sub_602ff0()
var_8_1.b = 2

if (sub_602c60(&var_20) != 0)
    void* ecx_4 = data_7fcbb4
    int32_t var_18
    
    if (ecx_4 != 0)
        sub_621db0(ecx_4, var_18)

var_20 = 0xffffffff
int32_t var_8_2 = 0xffffffff
`eh vector vbase constructor iterator'(&var_34, 0x14, 1, sub_601b50)
fsbase->NtTib.ExceptionList = ExceptionList
return result
