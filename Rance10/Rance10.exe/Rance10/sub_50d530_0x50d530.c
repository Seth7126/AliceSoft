// 函数: sub_50d530
// 地址: 0x50d530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = *(arg1 + 0x154)

if (result.b == 0)
    char var_2c
    sub_522cb0(&var_2c)
    int32_t var_8_1 = 0
    int32_t var_1c
    
    if (var_1c != 0)
        sub_50e1e0(arg1, &var_2c)
    
    int32_t var_8_2 = 0xffffffff
    struct _EXCEPTION_REGISTRATION_RECORD** result_1
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)
    
    int32_t var_18 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0

void* esi_1 = data_7fcb68

if (*(esi_1 + 4) != 0)
    result = (*(**(esi_1 + 4) + 0x28))(eax_2)
else
    int32_t* ecx_2 = data_7fcb88
    
    if (ecx_2 != 0)
        result = (**ecx_2)(0x75ff30)
        *(esi_1 + 4) = result
        
        if (result != 0)
            result = (*(**(esi_1 + 4) + 0x28))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
