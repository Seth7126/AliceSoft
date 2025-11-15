// 函数: sub_4072d0
// 地址: 0x4072d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 0x68) == 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    void* ebx_1
    
    if (sub_40f310(arg1 + 0x60, &var_2c, arg2) != 0)
        int32_t eax_3 = *(arg1 + 0x2c)
        
        if (eax_3 == 1)
            ebx_1.b = sub_40f3d0(arg1 + 0x60, arg2)
        else if (eax_3 == 2)
            if (sub_4076d0(&var_2c, arg1 + 0x48) == 0)
                if (arg1 + 0x48 != &var_2c)
                    sub_403590(arg1 + 0x48, &var_2c, 0, 0xffffffff)
                
                ebx_1.b = 1
            else
                ebx_1.b = 0
        else
            ebx_1.b = 1
    else
        ebx_1.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = ebx_1.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
