// 函数: sub_5fee90
// 地址: 0x5fee90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_34
int32_t eax_1 = __security_cookie ^ &var_34
void* ebx = arg2
void* var_28 = ebx
char* result

if (sub_62ab60(ebx, 5).b != 0 && sub_62ab60(ebx, *(arg1 + 0x1c)).b != 0
        && sub_62ab60(ebx, *(arg1 + 0x2c)).b != 0 && sub_62ab60(ebx, *(arg1 + 0x30)).b != 0)
    int32_t eax_3 = (*(*(arg1 + 0x20) + 0x10))()
    
    if (sub_62ab60(ebx, eax_3).b != 0)
        int32_t edi_1 = 0
        char* var_2c_1 = **(arg1 + 0x24) + 0x44
        
        if (eax_3 s> 0)
            int32_t* ecx_8 = nullptr
            var_34 = nullptr
            
            do
                int32_t eax_6
                
                if (*(arg1 + 0x14) != 0)
                    eax_6 = *(arg1 + 0x10)
                else
                    eax_6 = 0
                
                if (sub_62ab60(ebx, *(ecx_8 + eax_6)).b == 0)
                    goto label_5feebd
                
                void* eax_8 = sub_609d60(var_2c_1, sub_5ff860(arg1, edi_1))
                
                if (eax_8 != 0)
                    void** ecx_16 = eax_8 + 4
                    void* eax_12 = ecx_16[4]
                    
                    if (*(eax_8 + 0x18) u>= 0x10)
                        ecx_16 = *ecx_16
                    
                    if (sub_62ab00(ebx, ecx_16, eax_12 + 1).b == 0)
                        goto label_5feebd
                else
                    char* var_24
                    sub_403360(&var_24, 0x75d5b3)
                    char* ecx_13 = &var_24
                    int32_t var_10
                    
                    if (var_10 u>= 0x10)
                        ecx_13 = var_24
                    
                    void* var_14
                    ebx.b = sub_62ab00(ebx, ecx_13, var_14 + 1) == 0
                    sub_403320(&var_24)
                    
                    if (ebx.b != 0)
                        goto label_5feebd
                    
                    ebx = var_28
                
                if (sub_62ab60(ebx, sub_5ff890(arg1, edi_1)).b == 0)
                    goto label_5feebd
                
                edi_1 += 1
                ecx_8 = &var_34[3]
                var_34 = ecx_8
            while (edi_1 s< eax_3)
        
        result.b = 1
        @__security_check_cookie@4(eax_1 ^ &var_34)
        return result

label_5feebd:
result.b = 0
@__security_check_cookie@4(eax_1 ^ &var_34)
return result
