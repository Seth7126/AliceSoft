// 函数: ?tzset_from_environment_nolock@@YAXPAD@Z
// 地址: 0x715f3e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = sub_715b7d()
int32_t* var_8 = nullptr
int32_t* ebx = eax
int32_t var_10 = 0
int32_t* var_1c = &var_8
int32_t* var_c = ebx
int32_t __saved_esi
int32_t* esp = &__saved_esi

if (__get_daylight(var_1c) == 0)
    var_1c = &var_10
    esp = &__saved_esi
    
    if (__get_fmode(var_1c) == 0)
        char* edx_1 = data_7fca08
        char* esi_1 = arg1
        int32_t result
        
        if (edx_1 != 0)
            char* ecx_2 = edx_1
            char* eax_3 = esi_1
            
            while (true)
                ebx.b = *eax_3
                char temp0_1 = *ecx_2
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        result = 0
                        break
                    
                    ebx.b = eax_3[1]
                    char temp1_1 = ecx_2[1]
                    c_1 = ebx.b u< temp1_1
                    
                    if (ebx.b == temp1_1)
                        eax_3 = &eax_3[2]
                        ecx_2 = &ecx_2[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        result = 0
                        break
                
                result = sbb.d(eax_3, eax_3, c_1) | 1
                break
            
            if (result == 0)
                return result
            
            ebx = var_c
        
        var_1c = edx_1
        __free_base(var_1c)
        char* ecx_3 = esi_1
        char i
        
        do
            i = *ecx_3
            ecx_3 = &ecx_3[1]
        while (i != 0)
        var_1c = ecx_3 - &ecx_3[1] + 1
        data_7fca08 = __malloc_base(var_1c)
        result = __free_base(0)
        char* edx_3 = data_7fca08
        
        if (edx_3 == 0)
            return result
        
        char* ecx_6 = esi_1
        int32_t* edi
        var_1c = edi
        
        do
            result.b = *ecx_6
            ecx_6 = &ecx_6[1]
        while (result.b != 0)
        
        esp = &var_1c
        
        if (_strcpy_s(edx_3, ecx_6 - &ecx_6[1] + 1, esi_1) == 0)
            int32_t edi_2 = 3
            int32_t var_20_2 = 3
            char* var_24_2 = esi_1
            int32_t var_28_2 = 0x40
            int32_t var_2c_1 = *ebx
            int32_t eax_9
            int32_t* ecx_8
            int32_t edx_4
            eax_9, ecx_8, edx_4 = sub_717fd4()
            esp = &var_1c
            
            if (eax_9 == 0)
                while (*esi_1 != 0)
                    esi_1 = &esi_1[1]
                    int32_t temp2_1 = edi_2
                    edi_2 -= 1
                    
                    if (temp2_1 == 1)
                        break
                
                ebx.b = *esi_1 == 0x2d
                
                if (ebx.b != 0)
                    esi_1 = &esi_1[1]
                
                var_1c = esi_1
                uint32_t eax_10
                int32_t edx_5
                eax_10, edx_5 = sub_714932(eax_9, edx_4, ecx_8, var_1c)
                int32_t* ecx_9 = eax_10 * 0xe10
                var_8 = ecx_9
                
                while (true)
                    eax_10.b = *esi_1
                    
                    if (eax_10.b != 0x2b)
                        if (eax_10.b s< 0x30)
                            break
                        
                        if (eax_10.b s> 0x39)
                            break
                    
                    esi_1 = &esi_1[1]
                
                if (*esi_1 == 0x3a)
                    esi_1 = &esi_1[1]
                    var_1c = esi_1
                    uint32_t eax_11
                    int32_t edx_6
                    eax_11, edx_6 = sub_714932(eax_10, edx_5, ecx_9, var_1c)
                    ecx_9 = &var_8[eax_11 * 0xf]
                    var_8 = ecx_9
                    int32_t eax_12
                    
                    while (true)
                        eax_12.b = *esi_1
                        
                        if (eax_12.b s< 0x30)
                            break
                        
                        if (eax_12.b s> 0x39)
                            break
                        
                        esi_1 = &esi_1[1]
                    
                    if (*esi_1 == 0x3a)
                        esi_1 = &esi_1[1]
                        var_1c = esi_1
                        uint32_t eax_13 = sub_714932(eax_12, edx_6, ecx_9, var_1c)
                        ecx_9 = var_8 + eax_13
                        var_8 = ecx_9
                        
                        while (true)
                            eax_13.b = *esi_1
                            
                            if (eax_13.b s< 0x30)
                                break
                            
                            if (eax_13.b s> 0x39)
                                break
                            
                            esi_1 = &esi_1[1]
                
                if (ebx.b != 0)
                    var_8 = neg.d(ecx_9)
                
                int32_t eax_14
                eax_14.b = *esi_1 != 0
                var_10 = eax_14
                
                if (eax_14 == 0)
                    *var_c[1] = 0
                label_7160f4:
                    data_7fc9f8 = var_8
                    int32_t esi_3 = var_10
                    result = sub_715b6b()
                    data_7fc9fc = esi_3
                    return result
                
                var_1c = 3
                char* var_20_3 = esi_1
                int32_t var_24_3 = 0x40
                int32_t var_28_3 = var_c[1]
                esp = &__saved_esi
                
                if (sub_717fd4() == 0)
                    goto label_7160f4

*(esp - 4) = 0
*(esp - 8) = 0
*(esp - 0xc) = 0
*(esp - 0x10) = 0
*(esp - 0x14) = 0
__invoke_watson()
noreturn
