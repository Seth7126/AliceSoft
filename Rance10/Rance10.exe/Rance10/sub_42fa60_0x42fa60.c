// 函数: sub_42fa60
// 地址: 0x42fa60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2

if (arg1 != 0)
    void* var_2c
    void* ecx
    char* ecx_1 = sub_42f9e0(ecx, &var_2c, result)
    int32_t var_8_1 = 0
    
    if (*(ecx_1 + 0x14) u>= 0x10)
        ecx_1 = *ecx_1
    
    (*(*arg1 + 4))(ecx_1)
    int32_t result_1
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
