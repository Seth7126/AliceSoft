// 函数: sub_610a60
// 地址: 0x610a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cd30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (arg1[0x488] u> &arg1[0x388])
    int32_t eax_4 = *(arg1[0x488] - 4)
    int32_t var_48 = eax_4
    result = sub_6228d0(&arg1[0x52], eax_4)
    arg1[0x48a] = result
    
    if (result != 0)
        result.b = 1
    else
        void* var_44
        sub_403360(&var_44, 0x76b488)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_2c
        int32_t ebx
        ebx.b = sub_612320(arg1, sub_409350(&var_48, &var_44, &var_2c, &var_48))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        void* var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = ebx.b
else
    arg1[0x48a] = 0
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
