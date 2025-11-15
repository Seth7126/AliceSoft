// 函数: sub_452510
// 地址: 0x452510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0

if (arg2 == 0)
    *arg3
    void* var_44
    char* eax_10 = sub_603290(&var_44)
    sub_6ccc30(data_7fcb50, eax_10)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    *arg1 = 0
else if (arg2 == 1)
    void* var_2c
    char* eax_6 = sub_452650(&var_2c)
    int32_t var_8_1 = 0
    void* ecx_3 = data_7fcbb0
    *arg1 = 0xc
    arg1[2] = 0xffffffff
    
    if (ecx_3 != 0)
        char* var_54_1 = eax_6
        arg1[2] = sub_621930(ecx_3)
    
    if (arg1[2] s< 0)
        *arg1 = 0xffffffff
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
else
    sub_602420(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
