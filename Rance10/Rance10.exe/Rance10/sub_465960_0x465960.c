// 函数: sub_465960
// 地址: 0x465960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
label_4659e1:
    char* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t* eax_7 = sub_403490(&var_2c, 0x75e770, 0x1b)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    void* var_44
    sub_4055a0(*(arg1 + 4), sub_4175e0(eax_7, &var_2c, &var_44, U"\n"), 0, 0xffffffff)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, &var_18_1[1], 1)
    
    result.b = 0
else
    void* eax_5 = **(arg2 + 0x24)
    *(arg2 + 0x24) = eax_5
    
    if (*(arg2 + 0x20) == 0 || eax_5 == *(arg2 + 0x1c) || eax_5 == 0xfffffff8)
        goto label_4659e1
    
    if (*(eax_5 + 0x38) != 0xa)
        char* var_50_2 = arg3
        result = sub_467c00(arg1, arg3, arg2)
    else
        result = sub_467160(arg1, arg3, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
