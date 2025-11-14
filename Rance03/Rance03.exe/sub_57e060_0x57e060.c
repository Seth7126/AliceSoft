// 函数: sub_57e060
// 地址: 0x57e060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c6e68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t edi_2 = (*(arg1 + 0x44) - *(arg1 + 0x40)) s/ 0x3c

if (edi_2 s<= 0)
label_57e15e:
    int32_t* var_5c = nullptr
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    int32_t var_c_2 = 1
    sub_57e2d0(arg1, &var_5c)
    int32_t* eax_14 = var_5c
    
    if (eax_14 != var_58_1)
        int32_t ebx_3 = (var_58_1 - eax_14) s>> 2
        int32_t esi
        
        if (ebx_3 u> 1)
            esi = 0
        
        if (ebx_3 u<= 1 || ebx_3 s<= 0)
        label_57e277:
            result = *eax_14
        else
            while (true)
                int32_t var_20_1 = 0xf
                int32_t var_24_1 = 0
                char var_34 = 0
                var_c_2.b = 2
                int32_t edi_4 = eax_14[esi]
                int32_t edx_8
                
                if (edi_4 s>= 0)
                    int32_t ecx_8 = *(arg1 + 0x44) - *(arg1 + 0x40)
                    int32_t eax_16
                    int32_t edx_6
                    edx_6:eax_16 = muls.dp.d(0x88888889, ecx_8)
                    edx_8 = (edx_6 + ecx_8) s>> 5
                
                if (edi_4 s< 0 || edi_4 s>= (edx_8 u>> 0x1f) + edx_8)
                    var_c_2.b = 1
                else
                    void** eax_22 = *(arg1 + 0x40) + edi_4 * 0x3c
                    char* ecx_12 = &var_34
                    
                    if (&var_34 != eax_22)
                        ecx_12 = sub_401ff0(ecx_12, eax_22, 0, 0xffffffff)
                    
                    int32_t var_78_5 = 4
                    
                    if (sub_4294e0(&var_34, "Root", ecx_12) != 0xffffffff)
                        eax_14 = var_5c
                        result = eax_14[esi]
                        
                        if (var_20_1 u>= 0x10)
                            j__free(var_34.d)
                            eax_14 = var_5c
                        
                        break
                    
                    var_c_2.b = 1
                    
                    if (var_20_1 u>= 0x10)
                        j__free(var_34.d)
                
                eax_14 = var_5c
                esi += 1
                
                if (esi s>= ebx_3)
                    goto label_57e277
    else
        result = 0
    
    if (eax_14 != 0)
        j__free(eax_14)
else
    int32_t eax_6 = edi_2
    int32_t edi_3 = 0
    char var_4c
    int32_t var_38_1
    
    while (true)
        var_38_1 = 0xf
        int32_t var_3c_1 = 0
        var_4c = 0
        int32_t var_c_1 = 0
        
        if (result s>= 0)
            if (result s< (*(arg1 + 0x44) - *(arg1 + 0x40)) s/ 0x3c)
                char* ecx_4 = &var_4c
                void** eax_12 = *(arg1 + 0x40) + edi_3
                
                if (&var_4c != eax_12)
                    ecx_4 = sub_401ff0(ecx_4, eax_12, 0, 0xffffffff)
                
                int32_t var_78_1 = 6
                
                if (sub_4294e0(&var_4c, "(Root)", ecx_4) != 0xffffffff)
                    break
                
                if (var_38_1 u>= 0x10)
                    j__free(var_4c.d)
            
            eax_6 = edi_2
        
        result += 1
        edi_3 += 0x3c
        
        if (result s>= eax_6)
            goto label_57e15e
    
    if (var_38_1 u>= 0x10)
        j__free(var_4c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
