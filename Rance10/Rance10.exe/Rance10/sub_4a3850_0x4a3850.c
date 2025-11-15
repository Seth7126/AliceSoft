// 函数: sub_4a3850
// 地址: 0x4a3850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = sub_4a3a50()

if (result.b != 0)
    int32_t* var_2c
    sub_4a38e0(arg1, &var_2c)
    int32_t var_8_1 = 0
    int32_t* edx_1 = &var_2c
    int32_t result_1
    
    if (result_1 u>= 0x10)
        edx_1 = var_2c
    
    (*(*(arg1 + 0x2b0) + 4))(edx_1)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
