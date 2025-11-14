// 函数: sub_63e620
// 地址: 0x63e620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t ecx
int32_t edx
char* result = sub_69cb1c(eax, edx, ecx, 1, 0xc88)
void* eax_2 = *(arg1 + 0x1c)
_memset(result, 0, 0xc88)
void* eax_3 = sub_638110(arg2, 1)

if (eax_3 s>= 0)
    if (eax_3 == 0)
        *result = 1
    label_63e6aa:
        void* eax_7 = sub_638110(arg2, 1)
        
        if (eax_7 s>= 0)
            if (eax_7 == 0)
            label_63e774:
                
                if (sub_638110(arg2, 2) == 0)
                    int32_t esi_2
                    
                    if (*result s> 1)
                        esi_2 = 0
                    
                    if (*result s<= 1 || *(arg1 + 4) s<= 0)
                    label_63e7bb:
                        int32_t ebx_2 = 0
                        
                        if (*result s<= 0)
                            return result
                        
                        void** esi_3 = &result[0x444]
                        
                        while (true)
                            sub_638110(arg2, 8)
                            void* eax_18 = sub_638110(arg2, 8)
                            esi_3[-0x10] = eax_18
                            
                            if (eax_18 s>= *(eax_2 + 0x10))
                                break
                            
                            if (eax_18 s< 0)
                                break
                            
                            void* eax_19 = sub_638110(arg2, 8)
                            *esi_3 = eax_19
                            
                            if (eax_19 s>= *(eax_2 + 0x14))
                                break
                            
                            if (eax_19 s< 0)
                                break
                            
                            ebx_2 += 1
                            esi_3 = &esi_3[1]
                            
                            if (ebx_2 s>= *result)
                                return result
                    else
                        void* ebx_1 = &result[4]
                        
                        while (true)
                            void* eax_16 = sub_638110(arg2, 4)
                            *ebx_1 = eax_16
                            
                            if (eax_16 s>= *result)
                                break
                            
                            if (eax_16 s< 0)
                                break
                            
                            esi_2 += 1
                            ebx_1 += 4
                            
                            if (esi_2 s>= *(arg1 + 4))
                                goto label_63e7bb
            else
                void* eax_9 = sub_638110(arg2, 8) + 1
                *(result + 0x484) = eax_9
                
                if (eax_9 s> 0)
                    int32_t var_8_1 = 0
                    void* var_c_1 = &result[0x888]
                    
                    while (true)
                        int32_t eax_11 = *(arg1 + 4)
                        int32_t edx_1 = 0
                        
                        if (eax_11 != 0)
                            uint32_t i = eax_11 - 1
                            
                            if (eax_11 != 1)
                                do
                                    edx_1 += 1
                                    i u>>= 1
                                while (i != 0)
                        
                        void* eax_12 = sub_638110(arg2, edx_1)
                        int32_t edx_2 = 0
                        *(var_c_1 - 0x400) = eax_12
                        int32_t ecx_6 = *(arg1 + 4)
                        
                        if (ecx_6 != 0)
                            uint32_t i_1 = ecx_6 - 1
                            
                            if (ecx_6 != 1)
                                do
                                    edx_2 += 1
                                    i_1 u>>= 1
                                while (i_1 != 0)
                        
                        void* eax_14 = sub_638110(arg2, edx_2)
                        *var_c_1 = eax_14
                        
                        if (eax_12 s< 0)
                            break
                        
                        if (eax_14 s< 0)
                            break
                        
                        if (eax_12 == eax_14)
                            break
                        
                        int32_t ecx_8 = *(arg1 + 4)
                        
                        if (eax_12 s>= ecx_8)
                            break
                        
                        if (eax_14 s>= ecx_8)
                            break
                        
                        int32_t ecx_10 = var_8_1 + 1
                        var_c_1 += 4
                        var_8_1 = ecx_10
                        
                        if (ecx_10 s>= *(result + 0x484))
                            goto label_63e774
    else
        void* eax_5 = sub_638110(arg2, 4) + 1
        *result = eax_5
        
        if (eax_5 s> 0)
            goto label_63e6aa

if (result != 0)
    _memset(result, 0, 0xc88)
    _free(result)

return 0
