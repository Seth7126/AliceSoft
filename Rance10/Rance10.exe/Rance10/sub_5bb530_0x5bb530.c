// 函数: sub_5bb530
// 地址: 0x5bb530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f988
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t edi_2 = (*(arg1 + 0x58) - *(arg1 + 0x54)) s/ 0x3c

if (edi_2 s<= 0)
label_5bb61b:
    int32_t* var_54 = nullptr
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int32_t var_8_2 = 1
    sub_5bb790(arg1, &var_54)
    int32_t ecx_7 = var_50_1
    int32_t* edx_6 = var_54
    
    if (edx_6 != ecx_7)
        int32_t* esi
        
        if ((ecx_7 - edx_6) s>> 2 u> 1)
            esi = edx_6
        
        if ((ecx_7 - edx_6) s>> 2 u<= 1 || edx_6 == ecx_7)
        label_5bb730:
            result = *edx_6
        else
            while (true)
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                var_8_2.b = 2
                int32_t edi_4 = *esi
                
                if (edi_4 s< 0)
                    var_8_2.b = 1
                else if (edi_4 s>= (*(arg1 + 0x58) - *(arg1 + 0x54)) s/ 0x3c)
                    ecx_7 = var_50_1
                    var_8_2.b = 1
                else
                    void** eax_23 = *(arg1 + 0x54) + edi_4 * 0x3c
                    char* ecx_15 = &var_44
                    
                    if (&var_44 != eax_23)
                        ecx_15 = sub_403590(ecx_15, eax_23, 0, 0xffffffff)
                    
                    int32_t var_68_4 = 4
                    
                    if (sub_42cb30(&var_44, "Root", ecx_15) != 0xffffffff)
                        result = *esi
                        
                        if (var_30_1 u>= 0x10)
                            sub_403160(var_44.d, var_30_1 + 1, 1)
                        
                        edx_6 = var_54
                        break
                    
                    var_8_2.b = 1
                    
                    if (var_30_1 u>= 0x10)
                        sub_403160(var_44.d, var_30_1 + 1, 1)
                    
                    ecx_7 = var_50_1
                
                esi = &esi[1]
                
                if (esi == ecx_7)
                    edx_6 = var_54
                    goto label_5bb730
    else
        result = 0
    
    if (edx_6 != 0)
        sub_403160(edx_6, (var_4c_1 - edx_6) s>> 2, 4)
else
    int32_t eax_4 = edi_2
    int32_t edi_3 = 0
    char var_2c
    int32_t var_18_1
    
    while (true)
        var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_8_1 = 0
        
        if (result s>= 0)
            if (result s< (*(arg1 + 0x58) - *(arg1 + 0x54)) s/ 0x3c)
                char* ecx_4 = &var_2c
                void** eax_10 = *(arg1 + 0x54) + edi_3
                
                if (&var_2c != eax_10)
                    ecx_4 = sub_403590(ecx_4, eax_10, 0, 0xffffffff)
                
                int32_t var_68_1 = 6
                
                if (sub_42cb30(&var_2c, "(Root)", ecx_4) != 0xffffffff)
                    break
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            eax_4 = edi_2
        
        result += 1
        edi_3 += 0x3c
        
        if (result s>= eax_4)
            goto label_5bb61b
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
