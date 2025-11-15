// 函数: sub_5fecf0
// 地址: 0x5fecf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg2 + 0x14)
uint32_t result

if (*(arg2 + 0xc) s< &ecx[1])
    result.b = 0
else
    int32_t eax_3
    
    if (*(arg2 + 0xc) != 0)
        eax_3 = *(arg2 + 8)
    else
        eax_3 = 0
    
    *(arg1 + 0x1c) = *(ecx + eax_3)
    *(arg2 + 0x14) += 4
    int32_t* ecx_1 = *(arg2 + 0x14)
    
    if (*(arg2 + 0xc) s< &ecx_1[1])
        result.b = 0
    else
        int32_t eax_5
        
        if (*(arg2 + 0xc) != 0)
            eax_5 = *(arg2 + 8)
        else
            eax_5 = 0
        
        *(arg1 + 0x2c) = *(ecx_1 + eax_5)
        *(arg2 + 0x14) += 4
        int32_t var_30
        
        if (sub_622c00(arg2, arg1 + 0x30).b == 0)
            result.b = 0
        else if (sub_622c00(arg2, &var_30).b == 0)
            result.b = 0
        else
            int32_t eax_8 = var_30
            *(arg1 + 0x14) = 0
            
            if (sub_405df0(arg1 + 0xc, eax_8 * 0xc).b == 0)
                result.b = 0
            else
                int32_t edi_1 = 0
                uint32_t var_38_1 = **(arg1 + 0x24) + 0x44
                
                if (var_30 s<= 0)
                label_5fee62:
                    result.b = 1
                else
                    while (true)
                        int32_t var_18_1 = 0xf
                        int32_t var_1c_1 = 0
                        char var_2c = 0
                        int32_t var_8_1 = 0
                        int32_t var_40
                        int32_t var_3c
                        
                        if (sub_622c00(arg2, &var_40) != 0 && sub_622cd0(arg2, &var_2c) != 0
                                && sub_622c00(arg2, &var_3c) != 0)
                            int32_t eax_17
                            int32_t var_34
                            
                            if (var_1c_1 == 0)
                                eax_17 = 0
                                var_34 = 0
                            else if (sub_609df0(var_38_1, &var_2c, &var_34) == 0)
                                eax_17 = 0
                                var_34 = 0
                            else
                                eax_17 = var_34
                            sub_5ff8c0(arg1, edi_1, var_40, eax_17, var_3c)
                            int32_t var_8_2 = 0xffffffff
                            sub_403320(&var_2c)
                            edi_1 += 1
                            
                            if (edi_1 s>= var_30)
                                goto label_5fee62
                            
                            continue
                        
                        sub_403320(&var_2c)
                        break
                    
                    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
