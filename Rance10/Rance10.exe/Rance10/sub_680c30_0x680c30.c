// 函数: sub_680c30
// 地址: 0x680c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c416
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = (arg2 - arg1) s/ 0x18

if (result s>= 2)
    int32_t result_1 = 0xf
    int32_t var_20_1 = 0
    char var_30[0x10]
    var_30[0] = 0
    int32_t ecx_3 = sub_4056a0(&var_30, arg2 - 0x18)
    
    if (arg2 - 0x18 != arg1)
        int32_t eax_6 = *(arg2 - 4)
        
        if (eax_6 u>= 0x10)
            sub_403160(*(arg2 - 0x18), eax_6 + 1, 1)
        
        *(arg2 - 4) = 0xf
        bool cond:0_1 = *(arg2 - 4) u< 0x10
        *(arg2 - 8) = 0
        int32_t* eax_8
        
        if (cond:0_1)
            eax_8 = arg2 - 0x18
        else
            eax_8 = *(arg2 - 0x18)
        
        *eax_8 = 0
        ecx_3 = sub_4056a0(arg2 - 0x18, arg1)
    
    int32_t var_44_3 = ecx_3
    int32_t eax_12 = (arg2 - 0x18 - arg1) s/ 0x18
    sub_680ad0(eax_12, 0, arg1, eax_12, &var_30)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_30[0].d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
