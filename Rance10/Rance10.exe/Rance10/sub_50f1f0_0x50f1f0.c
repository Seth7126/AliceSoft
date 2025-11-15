// 函数: sub_50f1f0
// 地址: 0x50f1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737dce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xbc) != 0xffffffff)
    int32_t eax_4 = sub_50e5e0(arg1 + 0xcc)
    int32_t var_48
    int32_t* ecx = &var_48
    bool cond:1_1 = eax_4 s>= *(arg1 + 0xbc)
    int32_t* eax_5 = &var_48
    var_48 = eax_4
    
    if (cond:1_1)
        ecx = arg1 + 0xbc
    
    if (*(arg1 + 0xbc) s>= eax_4)
        eax_5 = arg1 + 0xbc
    
    int32_t var_58_2 = *eax_5
    int32_t var_5c_1 = *ecx
    char var_2c
    sub_50dff0(arg1, &var_2c)
    int32_t var_8_1 = 0
    char var_44
    int32_t* eax_6 = sub_50f010(&var_44, &var_2c)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1
    
    if (&var_2c != eax_6)
        if (result_1 u>= 0x10)
            sub_403160(var_2c.d, result_1 + 1, 1)
        
        result_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_4056a0(&var_2c, eax_6)
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    void* ecx_3 = data_7fcb50
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_6ccc30(ecx_3, &var_2c)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
