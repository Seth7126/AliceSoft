// 函数: sub_46d8e0
// 地址: 0x46d8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_34 = arg1
int32_t var_50 = 1
int32_t var_38 = 0
char var_30 = 0x22
void* eax_3 = sub_42cb30(arg2, &var_30, arg1)

if (eax_3 != 0xffffffff)
    char* i
    
    if (arg2[5] u< 0x10)
        i = arg2
    else
        i = *arg2
    
    void* ebx_2 = arg2[4] + i
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    
    for (; i != ebx_2; i = &i[1])
        if (*i != 0x22)
            sub_407430(&var_2c, i, 1)
            
            if (*i == 0x5c)
                i = &i[1]
                
                if (i != ebx_2)
                    sub_407430(&var_2c, i, 1)
    
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_4056a0(arg1, &var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
else
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_403590(arg1, arg2, 0, eax_3)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
