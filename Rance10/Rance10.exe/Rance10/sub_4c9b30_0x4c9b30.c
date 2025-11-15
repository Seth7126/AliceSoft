// 函数: sub_4c9b30
// 地址: 0x4c9b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733990
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*arg1 == 0)
    result.b = 0
else
    int32_t edx_1 = *(arg2 + 0x28)
    int32_t ebx_1 = *(arg2 + 0x24)
    int32_t eax_3 = *(arg2 + 0x1c)
    int32_t edi_1 = *(arg2 + 0x20)
    int32_t edx_2 = *(arg2 + 0x34)
    int32_t edx_3 = *(arg2 + 0x38)
    int32_t edx_4 = *(arg2 + 0x3c)
    int32_t ecx_1 = *(arg2 + 0x40)
    int32_t var_a0_1 = edx_4
    int32_t var_a4_1 = edx_3
    int32_t var_a8_1 = edx_2
    int32_t var_ac_1 = edx_1
    int32_t var_b0_1 = ebx_1
    int32_t var_b4_1 = edi_1
    int32_t var_b8_1 = eax_3
    int32_t var_8c = eax_3
    
    if (sub_54fec0(arg1).b != 0)
        int32_t ecx_6 = *arg1
        
        if (ecx_6 == 0)
            result.b = 1
        else
            int32_t* ecx_7 = *(ecx_6 + 0x118)
            
            if (ecx_7 == 0)
                result.b = 1
            else if ((*(*ecx_7 + 0x28))(eax_2).b == 0)
                result.b = 1
            else
                int32_t var_a0_3 = ecx_1
                int32_t var_a4_5 = edx_1
                int32_t var_a8_5 = ebx_1
                int32_t var_ac_3 = edi_1
                int32_t var_b0_3 = var_8c
                
                if (sub_5501c0(arg1).b != 0)
                    result.b = 1
                else
                    void var_5c
                    sub_403360(&var_5c, 0x764078)
                    int32_t var_8_2 = 2
                    var_8_2.b = 3
                    void var_74
                    sub_45aae0(sub_4cb560(&var_8c, &var_5c, &var_74, &var_8c, edi_1, ebx_1, edx_1, 
                        edx_2, edx_3, edx_4, ecx_1))
                    sub_403320(&var_74)
                    sub_403320(&var_5c)
                    result.b = 0
    else
        void* var_44
        sub_403360(&var_44, 0x7640e8)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_2c
        sub_45aae0(sub_4cb560(&var_8c, &var_44, &var_2c, &var_8c, edi_1, ebx_1, edx_1, edx_2, 
            edx_3, edx_4, ecx_1))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
