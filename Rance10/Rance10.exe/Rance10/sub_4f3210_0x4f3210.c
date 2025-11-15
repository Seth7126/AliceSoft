// 函数: sub_4f3210
// 地址: 0x4f3210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b290
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "[Asra] ", 0x19)
    int32_t var_8_1 = 0
    char* ecx_2 = *(arg1 + 4) + 0x224
    void* eax_3
    eax_3.b = *(data_7fcba4 + 0x1f4)
    
    if (eax_3.b == 0)
        sub_403490(ecx_2, 0x75d236, nullptr)
    else if (ecx_2 != &var_2c)
        sub_403590(ecx_2, &var_2c, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    result = result_2
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

if (*(arg1 + 0xc) != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, "[Asra] ", 0x17)
    int32_t var_8_3 = 1
    char* ecx_5 = *(arg1 + 0xc) + 0x224
    
    if (*(data_7fcba4 + 0x1f4) == 0)
        sub_403490(ecx_5, 0x75d236, nullptr)
    else if (ecx_5 != &var_44)
        sub_403590(ecx_5, &var_44, 0, 0xffffffff)
    
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
