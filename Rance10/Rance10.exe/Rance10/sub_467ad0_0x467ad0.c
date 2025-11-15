// 函数: sub_467ad0
// 地址: 0x467ad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c9f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_5c = ebx
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_40
sub_471e60(&var_40, *(arg1 + 4))
int32_t var_8_1 = 0
int32_t* var_3c
sub_403490(&var_3c, 0x75ce7e, nullptr)
int32_t* var_24
sub_473920(&var_24)
int32_t var_1c = *var_24
int32_t* eax_7 = &var_3c
int32_t var_28

if (var_28 u>= 0x10)
    eax_7 = var_3c

int32_t var_2c = 0
*eax_7 = 0

if (sub_4720e0(&var_40, arg2) == 0)
    ebx.b = 0
else
    int32_t var_54 = 0
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    var_8_1.b = 1
    var_8_1.b = 0
    ebx.b = sub_4721c0(&var_40, &var_54)
    sub_417070(&var_54)
    
    if (ebx.b == 0)
        ebx.b = 0
    else if (sub_472510(&var_40) == 0)
        ebx.b = 0
    else if (___std_atomic_wait_indirect@24(&var_40) == 0)
        ebx.b = 0
    else if (sub_472740(&var_40, arg4) == 0)
        ebx.b = 0
    else if (sub_465530(arg1, &var_40, arg3) == 0)
        ebx.b = 0
    else
        ebx.b = 1

sub_471f30(&var_40)
char* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
