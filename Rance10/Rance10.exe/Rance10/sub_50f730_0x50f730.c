// 函数: sub_50f730
// 地址: 0x50f730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
int32_t ebx = arg2[4]

if (ebx != 0)
    int32_t* var_2c
    sub_405480(arg2, &var_2c, 0, 1)
    int32_t var_8_1 = 0
    sub_403750(arg2, 0, 1)
    int32_t* eax_3 = &var_2c
    int32_t var_18
    
    if (var_18 u>= 0x10)
        eax_3 = var_2c
    
    eax_3.b = *eax_3
    
    if (eax_3.b u< 0x81 || eax_3.b u> 0x9f)
        eax_3.b += 0x20
        
        if (eax_3.b u> 0xf)
            goto label_50f811
        
        goto label_50f7bc
    
label_50f7bc:
    
    if (ebx s>= 2)
        var_8_1.b = 1
        void var_44
        sub_4055a0(&var_2c, sub_405480(arg2, &var_44, 0, 1), 0, 0xffffffff)
        var_8_1.b = 0
        sub_403320(&var_44)
        sub_403750(arg2, 0, 1)
    label_50f811:
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        sub_4056a0(arg1, &var_2c)
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
    else
        sub_403360(arg1, 0x75d2b9)
        sub_403320(&var_2c)
else
    sub_403360(arg1, 0x75d2a7)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
