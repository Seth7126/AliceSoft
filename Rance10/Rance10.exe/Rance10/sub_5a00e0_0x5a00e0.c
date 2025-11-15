// 函数: sub_5a00e0
// 地址: 0x5a00e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731a90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x10) != 0xffffffff)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    sub_5a2a20(sub_403490(&var_2c, 0x769340, 0x12), &var_2c, arg2, *(arg1 + 0x10))
    int32_t var_8_2 = 0xffffffff
    result = result_2
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

if (*(arg1 + 0x14) != 0xffffffff)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_8_3 = 1
    sub_5a2a20(sub_403490(&var_44, 0x76932c, 0x12), &var_44, arg2, *(arg1 + 0x14))
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
