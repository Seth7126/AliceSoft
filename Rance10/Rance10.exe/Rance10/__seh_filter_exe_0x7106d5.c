// 函数: __seh_filter_exe
// 地址: 0x7106d5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_10 = esi
int32_t* esp = &var_10
int32_t* result = ___acrt_getptd_noexit()

if (result != 0)
    int32_t* edx_1 = *result
    int32_t* ecx_1 = edx_1
    int32_t ebx
    int32_t var_14 = ebx
    int32_t edi
    int32_t var_18 = edi
    int32_t* esp_1 = &var_18
    
    if (edx_1 == &edx_1[0x24])
    label_710716:
        ecx_1 = nullptr
    else
        while (*ecx_1 != arg1)
            ecx_1 = &ecx_1[3]
            
            if (ecx_1 == &edx_1[0x24])
                goto label_710716
    
    int32_t edi_2
    
    if (ecx_1 != 0)
        edi_2 = ecx_1[2]
    
    if (ecx_1 == 0 || edi_2 == 0)
        result = nullptr
    else if (edi_2 != 5)
        if (edi_2 != 1)
            int32_t eax_3 = result[1]
            result[1] = arg2
            
            if (ecx_1[1] != 8)
                int32_t var_1c_2 = ecx_1[1]
                ecx_1[2] = 0
                edi_2(var_1c_2)
            else
                void* i = &edx_1[9]
                
                for (void* edx_2 = i + 0x6c; i != edx_2; i += 0xc)
                    *(i + 8) = 0
                
                int32_t ebx_1 = result[2]
                int32_t temp0_1 = *ecx_1
                
                if (temp0_1 u> 0xc0000091)
                    if (*ecx_1 == 0xc0000092)
                        result[2] = 0x8a
                    else if (*ecx_1 == 0xc0000093)
                        result[2] = 0x85
                    else if (*ecx_1 == 0xc00002b4)
                        result[2] = 0x8e
                    else if (*ecx_1 == 0xc00002b5)
                        result[2] = 0x8d
                else if (temp0_1 == 0xc0000091)
                    result[2] = 0x84
                else if (*ecx_1 == 0xc000008d)
                    result[2] = 0x82
                else if (*ecx_1 == 0xc000008e)
                    result[2] = 0x83
                else if (*ecx_1 == 0xc000008f)
                    result[2] = 0x86
                else if (*ecx_1 == 0xc0000090)
                    result[2] = 0x81
                
                int32_t var_1c_1 = result[2]
                edi_2(8)
                result[2] = ebx_1
            
            esp_1 = &var_14
            result[1] = eax_3
        
        result = 0xffffffff
    else
        ecx_1[2] = 0
        result = 1
    
    *esp_1
    esp_1[1]
    esp = &esp_1[2]

*esp
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
