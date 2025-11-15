// 函数: sub_583a20
// 地址: 0x583a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result

if (*(arg1 + 0x14) != 0)
    int32_t var_8_1 = 0
    void* var_2c
    int32_t ebx
    ebx.b = sub_5d0440(*(arg1 + 0x24c), sub_5ccb40(arg2, arg1 + 4, &var_2c, arg2)).b
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
