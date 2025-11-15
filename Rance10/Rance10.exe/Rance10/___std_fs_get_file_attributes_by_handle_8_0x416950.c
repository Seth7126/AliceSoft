// 函数: ___std_fs_get_file_attributes_by_handle@8
// 地址: 0x416950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7282d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (sub_4199e0(arg1 + 4).b == 0)
    result.b = 0
else if (*(arg3 + 4) != 0x23)
    void var_64
    int32_t* eax_4 = sub_419a60(arg3 + 4, &var_64)
    int32_t var_8_1 = 0
    void var_3c
    int32_t* eax_5 = sub_419a60(arg1 + 4, &var_3c)
    var_8_1.b = 1
    int32_t* eax_6 = eax_4
    bool var_65_1
    
    if (*eax_5 == *eax_6)
        if (sub_4090e0(&eax_5[1], &eax_6[1]) == 0)
            var_65_1 = sub_41a630(&eax_5[7], &eax_4[7]) == 0
        else
            var_65_1 = true
    else
        var_65_1 = true
    
    sub_40ae10(&var_3c)
    sub_40ae10(&var_64)
    
    if (var_65_1 != 0)
        result.b = 0
    else if (*(arg1 + 0x78) == 0)
        result.b = *(arg3 + 0x78) == 0
        *arg2 = result.b
        result.b = 1
    else if (*(arg3 + 0x78) == 0)
        result.b = 0
    else
        char eax_10 = sub_416930(arg1)
        char eax_11
        
        if (eax_10 == 0)
            eax_11 = sub_416930(arg3)
        
        if (eax_10 == 0 && eax_11 == 0)
            result.b = *(arg1 + 0x44) == *(arg3 + 0x44)
        else if (*(arg1 + 0x44) != *(arg3 + 0x44) || *(arg1 + 0x48) != *(arg3 + 0x48))
            result = nullptr
        else
            result = 1
        
        *arg2 = result.b
        result.b = 1
else
    result.b = *(arg1 + 0x78) == 0
    *arg2 = result.b
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
