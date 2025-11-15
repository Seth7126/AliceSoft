// 函数: sub_600f40
// 地址: 0x600f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_24
int32_t eax_1 = __security_cookie ^ &var_24

if (sub_62ab60(arg2, 1) != 0 && sub_62ab60(arg2, *(arg1 + 0x1c)) != 0)
    void* ecx_2 = *(arg1 + 0x24)
    
    if (ecx_2 == 0)
        sub_403360(&var_24, 0x75d5e2)
        char* ecx_8 = &var_24
        int32_t var_10
        
        if (var_10 u>= 0x10)
            ecx_8 = var_24
        
        void* var_14
        int32_t ebx
        ebx.b = sub_62ab00(arg2, ecx_8, var_14 + 1) == 0
        sub_403320(&var_24)
        
        if (ebx.b == 0)
        label_600ff1:
            
            if (sub_62ab60(arg2, *(arg1 + 0x28)) != 0 && sub_62ab60(arg2, *(arg1 + 0x2c)) != 0)
                char eax_2 = sub_62ab60(arg2, *(arg1 + 0x14))
                
                if (eax_2 != 0)
                    void* ecx_14 = *(arg1 + 0x14)
                    
                    if (ecx_14 != 0)
                        eax_2 = sub_62ab00(arg2, *(arg1 + 0x10), ecx_14)
                    
                    if (ecx_14 == 0 || eax_2 != 0)
                        @__security_check_cookie@4(eax_1 ^ &var_24)
                        return 1
    else
        void* ecx_3 = ecx_2 + 4
        
        if (*(ecx_3 + 0x14) u>= 0x10)
            ecx_3 = *ecx_3
        
        if (sub_62ab00(arg2, ecx_3, *(ecx_2 + 0x14) + 1) != 0)
            goto label_600ff1

@__security_check_cookie@4(eax_1 ^ &var_24)
return 0
