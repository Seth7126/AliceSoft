// 函数: sub_40c5c0
// 地址: 0x40c5c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_2c
sub_40cf70(*(arg1 + 0x10), &var_2c, arg2)
int32_t var_8_1 = 0
void* eax_3 = *(arg1 + 0x10)
int32_t* eax_4 = *(eax_3 + 0x30)
int32_t ecx_2 = *(eax_3 + 0x34)
void* ebx

if (eax_4 == ecx_2)
label_40c644:
    int32_t var_4c
    
    if ((*(**(eax_3 + 4) + 4))(arg2, arg3, &var_4c) != 0)
        void* var_44
        sub_403360(&var_44, 0x75cceb)
        int32_t var_60_4 = 0
        var_8_1.b = 1
        sub_409f40(eax_3 + 0x2c, arg2, &var_2c, arg3, var_4c.b, 1, &var_44)
        var_8_1.b = 0
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        sub_408280(*(arg1 + 0x10) + 0x3c, &var_2c, arg3)
        ebx.b = 1
    else
        ebx.b = 0
else
    while (true)
        void* edx_1 = *eax_4
        
        if (*(edx_1 + 4) == arg2 && *(edx_1 + 0x20) == arg3)
            sub_40a0b0(eax_3 + 0x2c, arg2, arg3)
            sub_4083c0(*(arg1 + 0x10) + 0x3c, &var_2c, arg3)
            break
        
        eax_4 = &eax_4[1]
        
        if (eax_4 == ecx_2)
            goto label_40c644
    
    ebx.b = 1

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
