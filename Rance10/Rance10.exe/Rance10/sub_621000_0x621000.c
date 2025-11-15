// 函数: sub_621000
// 地址: 0x621000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744780
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0x24) != 0)
    int32_t result_1 = *(*(arg1 + 0x20) + (*(arg1 + 0x24) << 2) - 4)
    *(arg1 + 0x24) -= 1
    void var_3c
    void var_20
    int32_t* eax_7 = sub_622260(sub_44a580(arg1 + 4, &var_20), &var_3c, result_1)
    int32_t* edi_1 = *eax_7
    
    if (edi_1 != 0)
        edi_1 = *edi_1
    
    int32_t edx_1 = eax_7[2]
    
    if (*(*(edi_1[1] + (((edi_1[2] - 1) & edx_1 u>> 2) << 2)) + ((edx_1 & 3) << 2)) == 0)
        result = result_1
    else
        char var_2c
        sub_403360(&var_2c, 0x76d67c)
        int32_t var_8_2 = 1
        sub_6c52e0(&var_2c)
        int32_t var_8_3 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        result = sub_621000(eax_2)
else
    int32_t* var_30 = nullptr
    int32_t var_8_1 = 0
    sub_6221d0(arg1 + 4, &var_30)
    int32_t* ecx_1 = var_30
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
    
    result = *(arg1 + 0x14) - 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
