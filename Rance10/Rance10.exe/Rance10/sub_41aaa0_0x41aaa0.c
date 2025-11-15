// 函数: sub_41aaa0
// 地址: 0x41aaa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728810
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(arg1 + 4)
int32_t var_50 = 0

if (edx == 0x2f || edx == 0x30 || edx == 0x33)
    void* eax_10 = "true"
    
    if (*(arg1 + 0x4c) == 0)
        eax_10 = "false"
    
    sub_403360(arg2, eax_10)
else
    char eax_3
    
    if (edx != 0xa && edx != 2 && edx != 0x12 && edx != 0x5c && edx != 0x5b && edx != 0x5d)
        eax_3 = sub_41a7b0(arg1)
    
    if (edx == 0xa || edx == 2 || edx == 0x12 || edx == 0x5c || edx == 0x5b || edx == 0x5d
            || eax_3 != 0)
        int32_t var_4c = *(arg1 + 0x4c)
        void* var_2c
        sub_403360(&var_2c, "%d")
        int32_t var_8_2 = 0
        sub_409350(&var_4c, &var_2c, arg2, &var_4c)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
    else if (edx == 0xb || edx == 3 || edx == 0x13)
        int32_t var_48 = *(arg1 + 0x50)
        void var_44
        sub_403360(&var_44, "%f")
        int32_t var_8_1 = 1
        sub_417920(&var_48, &var_44, arg2, &var_48)
        sub_403320(&var_44)
    else if (edx == 0xc || edx == 4 || edx == 0x14)
        sub_4033b0(arg2, arg1 + 0x54)
    else
        sub_403360(arg2, &data_75ccef)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
